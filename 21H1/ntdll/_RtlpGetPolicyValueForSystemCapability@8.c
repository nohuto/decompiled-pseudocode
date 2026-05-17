/*
 * XREFs of _RtlpGetPolicyValueForSystemCapability@8 @ 0x4B2EF60F
 * Callers:
 *     _RtlpCapabilityCheckSystemCapability@12 @ 0x4B2EF5A6 (_RtlpCapabilityCheckSystemCapability@12.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _NtQueryLicenseValue@20 @ 0x4B2F3EB0 (_NtQueryLicenseValue@20.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     RtlUnicodeStringInitWorker @ 0x4B32C921 (RtlUnicodeStringInitWorker.c)
 */

int __fastcall RtlpGetPolicyValueForSystemCapability(const void **a1, UNICODE_STRING *a2)
{
  size_t v2; // ebx
  wchar_t *StringRoutine; // eax
  wchar_t *v5; // esi
  int appended; // esi
  size_t v8; // ebx
  void *v9; // eax
  int v10; // [esp-8h] [ebp-30h]
  size_t v11; // [esp-4h] [ebp-2Ch]
  int v12; // [esp-4h] [ebp-2Ch]
  UNICODE_STRING UnicodeString; // [esp+Ch] [ebp-1Ch] BYREF
  const void **v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-Ch] BYREF
  size_t v17; // [esp+20h] [ebp-8h] BYREF
  size_t Size; // [esp+24h] [ebp-4h]

  v14 = a1;
  v2 = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0;
  v17 = 0;
  v16 = 0;
  if ( !a1 || !a2 )
  {
    appended = -1073741811;
LABEL_7:
    if ( appended >= 0 )
      goto LABEL_12;
    goto LABEL_8;
  }
  v15 = (unsigned __int16)(*(_WORD *)a1 + 56);
  Size = (unsigned __int16)v15;
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v15);
  v5 = StringRoutine;
  if ( !StringRoutine )
  {
    appended = -1073741801;
    goto LABEL_8;
  }
  memset(StringRoutine, 0, Size);
  UnicodeString.MaximumLength = v15;
  UnicodeString.Buffer = v5;
  appended = RtlAppendUnicodeStringToString(&UnicodeString.Length, (const void **)&dword_4B2811E0);
  if ( appended < 0 )
    goto LABEL_8;
  appended = RtlAppendUnicodeStringToString(&UnicodeString.Length, v14);
  if ( appended < 0 )
    goto LABEL_8;
  appended = NtQueryLicenseValue(&UnicodeString, &v16, 0, 0, &v17);
  if ( appended != -1073741789 )
    goto LABEL_7;
  v8 = v17;
  Size = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v17);
  appended = NtQueryLicenseValue(&UnicodeString, &v16, Size, v8, &v17);
  if ( appended < 0 )
    goto LABEL_20;
  if ( v16 != 1 || !v8 || (v8 & 1) != 0 )
  {
    appended = -1073741823;
    goto LABEL_20;
  }
  v9 = (void *)NtdllpAllocateStringRoutine(v8);
  if ( !v9 )
  {
    appended = -1073741801;
LABEL_20:
    v2 = Size;
    goto LABEL_8;
  }
  v11 = v8;
  v2 = Size;
  memcpy(v9, (const void *)Size, v11);
  appended = RtlUnicodeStringInitWorker(v10, v12);
  if ( appended < 0 )
  {
LABEL_8:
    if ( a2 )
      RtlFreeAnsiString(a2);
    goto LABEL_10;
  }
  appended = 0;
LABEL_10:
  if ( v2 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v2);
LABEL_12:
  RtlFreeAnsiString(&UnicodeString);
  return appended;
}
