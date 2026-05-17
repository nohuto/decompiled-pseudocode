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

int __fastcall RtlpGetAssemblyStorageMapRootLocation(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int ValueKey; // eax
  size_t v6; // ecx
  int StringRoutine; // eax
  int v9; // [esp-4h] [ebp-258h]
  _DWORD v10[6]; // [esp+Ch] [ebp-248h] BYREF
  int v11; // [esp+24h] [ebp-230h] BYREF
  HANDLE Handle; // [esp+28h] [ebp-22Ch] BYREF
  int v13; // [esp+2Ch] [ebp-228h] BYREF
  _BYTE v14[4]; // [esp+30h] [ebp-224h] BYREF
  int v15; // [esp+34h] [ebp-220h]
  size_t Size; // [esp+38h] [ebp-21Ch]
  _BYTE Src[528]; // [esp+3Ch] [ebp-218h] BYREF

  v13 = a2;
  Handle = 0;
  v11 = 0;
  if ( !a1 || !a2 || !a3 )
  {
    v4 = -1073741811;
    goto LABEL_22;
  }
  v10[0] = 24;
  v10[2] = &v13;
  v10[1] = a1;
  v10[3] = 64;
  v10[4] = 0;
  v10[5] = 0;
  v3 = ZwOpenKey((int)&Handle, 1, (int)v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    DbgPrintEx(51, 0, "SXS: Unable to open storage root subkey %wZ; Status = 0x%08lx\n", &v13, v3);
    goto LABEL_22;
  }
  ValueKey = ZwQueryValueKey((int)Handle, (int)&dword_4B281BD8, 2, (int)v14, 536, (int)&v11);
  v4 = ValueKey;
  if ( ValueKey < 0 )
  {
    DbgPrintEx(51, 0, "SXS: Unabel to query location from storage root subkey %wZ; Status = 0x%08lx\n", &v13, ValueKey);
    goto LABEL_22;
  }
  if ( v15 != 1 )
  {
    DbgPrintEx(51, 0, "SXS: Assembly storage root location value type is not REG_SZ\n");
LABEL_11:
    v4 = -1073741766;
    goto LABEL_22;
  }
  v6 = Size;
  if ( (Size & 1) != 0 )
  {
    DbgPrintEx(51, 0, "SXS: Assembly storage root location value has non-even size\n");
    goto LABEL_11;
  }
  if ( Size > *(unsigned __int16 *)(a3 + 2) )
  {
    if ( Size > 0xFFFE )
    {
      DbgPrintEx(51, 0, "SXS: Assembly storage root location for %wZ does not fit in a UNICODE STRING\n", &v13);
      v4 = -1073741562;
      goto LABEL_22;
    }
    v9 = (unsigned __int16)Size;
    *(_WORD *)(a3 + 2) = Size;
    StringRoutine = NtdllpAllocateStringRoutine(v9);
    *(_DWORD *)(a3 + 4) = StringRoutine;
    if ( !StringRoutine )
    {
      v4 = -1073741801;
      goto LABEL_22;
    }
    v6 = Size;
  }
  memcpy(*(void **)(a3 + 4), Src, v6);
  *(_WORD *)a3 = Size;
  v4 = 0;
LABEL_22:
  if ( Handle )
    NtClose(Handle);
  return v4;
}
