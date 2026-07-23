/*
 * XREFs of _RtlpGetAssemblyStorageMapRootLocation@12 @ 0x4B33E112
 * Callers:
 *     _RtlpAssemblyStorageMapResolutionDefaultCallback@12 @ 0x4B2E2BE0 (_RtlpAssemblyStorageMapResolutionDefaultCallback@12.c)
 * Callees:
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

NTSTATUS __fastcall RtlpGetAssemblyStorageMapRootLocation(void *a1, int a2, int a3)
{
  NTSTATUS v3; // esi
  unsigned int v4; // ecx
  PVOID StringRoutine; // eax
  size_t v7; // [esp-4h] [ebp-258h]
  int v8; // [esp-4h] [ebp-258h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-248h] BYREF
  ULONG ResultLength; // [esp+24h] [ebp-230h] BYREF
  HANDLE KeyHandle; // [esp+28h] [ebp-22Ch] BYREF
  int v12; // [esp+2Ch] [ebp-228h] BYREF
  _BYTE KeyValueInformation[4]; // [esp+30h] [ebp-224h] BYREF
  int v14; // [esp+34h] [ebp-220h]
  unsigned int Size; // [esp+38h] [ebp-21Ch]
  size_t Size_4; // [esp+3Ch] [ebp-218h] BYREF

  v12 = a2;
  KeyHandle = 0;
  ResultLength = 0;
  if ( !a1 || !a2 || !a3 )
  {
    v3 = -1073741811;
    goto LABEL_22;
  }
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v3 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( v3 < 0 )
  {
    DbgPrintEx(51, 0, (int)"SXS: Unable to open storage root subkey %wZ; Status = 0x%08lx\n", (int)&v12);
    goto LABEL_22;
  }
  v3 = ZwQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&stru_4B281BD8,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x218u,
         &ResultLength);
  if ( v3 < 0 )
  {
    DbgPrintEx(51, 0, (int)"SXS: Unabel to query location from storage root subkey %wZ; Status = 0x%08lx\n", (int)&v12);
    goto LABEL_22;
  }
  if ( v14 != 1 )
  {
    DbgPrintEx(51, 0, (int)"SXS: Assembly storage root location value type is not REG_SZ\n", SHIDWORD(v7));
LABEL_11:
    v3 = -1073741766;
    goto LABEL_22;
  }
  v4 = Size;
  if ( (Size & 1) != 0 )
  {
    DbgPrintEx(51, 0, (int)"SXS: Assembly storage root location value has non-even size\n", SHIDWORD(v7));
    goto LABEL_11;
  }
  if ( Size > *(unsigned __int16 *)(a3 + 2) )
  {
    if ( Size > 0xFFFE )
    {
      DbgPrintEx(
        51,
        0,
        (int)"SXS: Assembly storage root location for %wZ does not fit in a UNICODE STRING\n",
        (int)&v12);
      v3 = -1073741562;
      goto LABEL_22;
    }
    v8 = (unsigned __int16)Size;
    *(_WORD *)(a3 + 2) = Size;
    StringRoutine = NtdllpAllocateStringRoutine(v8);
    *(_DWORD *)(a3 + 4) = StringRoutine;
    if ( !StringRoutine )
    {
      v3 = -1073741801;
      goto LABEL_22;
    }
    v4 = Size;
  }
  LODWORD(v7) = v4;
  memcpy(*(void **)(a3 + 4), &Size_4, v7);
  *(_WORD *)a3 = Size;
  v3 = 0;
LABEL_22:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v3;
}
