/*
 * XREFs of _RtlpLookupCurDirSetting@12 @ 0x4B2EA935
 * Callers:
 *     _RtlpComputeSearchPath@8 @ 0x4B2ABB20 (_RtlpComputeSearchPath@8.c)
 *     _RtlpComputeDllPath@8 @ 0x4B2B2DF2 (_RtlpComputeDllPath@8.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

signed __int32 __fastcall RtlpLookupCurDirSetting(int a1, signed __int32 a2, volatile signed __int32 *a3)
{
  HANDLE v5; // esi
  signed __int32 v6; // edx
  signed __int32 result; // eax
  int v8; // [esp+10h] [ebp-1Ch] BYREF
  HANDLE Handle; // [esp+14h] [ebp-18h] BYREF
  _BYTE v10[12]; // [esp+18h] [ebp-14h] BYREF
  unsigned int v11; // [esp+24h] [ebp-8h]

  if ( !LdrpIsSecureProcess )
  {
    v5 = (HANDLE)dword_4B3A67D0;
    Handle = (HANDLE)dword_4B3A67D0;
    if ( !dword_4B3A67D0 )
    {
      if ( (int)ZwOpenKey(&Handle, 1, dword_4B28141C) < 0 )
      {
LABEL_7:
        v6 = a2;
        goto LABEL_8;
      }
      v5 = (HANDLE)_InterlockedCompareExchange(&dword_4B3A67D0, (signed __int32)Handle, 0);
      if ( v5 )
      {
        NtClose(Handle);
        Handle = v5;
      }
      else
      {
        v5 = Handle;
      }
    }
    if ( (int)ZwQueryValueKey(v5, a1, 2, v10, 16, &v8) >= 0 && v8 == 16 )
    {
      v6 = v11;
      if ( v11 < 2 )
        goto LABEL_8;
    }
    goto LABEL_7;
  }
  v6 = 1;
LABEL_8:
  result = _InterlockedCompareExchange(a3, v6, 0);
  if ( !result )
    return v6;
  return result;
}
