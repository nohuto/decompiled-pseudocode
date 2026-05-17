/*
 * XREFs of _RtlpHpApplySegmentHeapConfigurations@0 @ 0x4B358394
 * Callers:
 *     _RtlSetLowFragHeapGlobalFlags@8 @ 0x4B35708B (_RtlSetLowFragHeapGlobalFlags@8.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __stdcall RtlpHpApplySegmentHeapConfigurations()
{
  NTSTATUS result; // eax
  _BYTE v1[4]; // [esp+0h] [ebp-38h] BYREF
  _DWORD v2[6]; // [esp+4h] [ebp-34h] BYREF
  HANDLE Handle; // [esp+1Ch] [ebp-1Ch] BYREF
  _BYTE v4[8]; // [esp+20h] [ebp-18h] BYREF
  int v5; // [esp+28h] [ebp-10h]
  int v6; // [esp+2Ch] [ebp-Ch]

  v2[0] = 24;
  Handle = 0;
  v2[1] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[3] = 64;
  v2[2] = &dword_4B281C30;
  result = ZwOpenKey((int)&Handle, 1, (int)v2);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey((int)Handle, (int)&dword_4B281C20, 2, (int)v4, 20, (int)v1);
    if ( result >= 0 && v5 == 4 )
    {
      if ( v6 )
        RtlpLowFragHeapGlobalFlags |= 0x10u;
      else
        RtlpLowFragHeapGlobalFlags |= 8u;
    }
  }
  if ( Handle )
    return NtClose(Handle);
  return result;
}
