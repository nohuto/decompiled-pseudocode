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

int __fastcall RtlpLookupCurDirSetting(PUNICODE_STRING ValueName, signed __int32 a2, volatile signed __int32 *a3)
{
  HANDLE v5; // esi
  signed __int32 v6; // edx
  int result; // eax
  ULONG ResultLength; // [esp+10h] [ebp-1Ch] BYREF
  HANDLE KeyHandle; // [esp+14h] [ebp-18h] BYREF
  _BYTE KeyValueInformation[12]; // [esp+18h] [ebp-14h] BYREF
  unsigned int v11; // [esp+24h] [ebp-8h]

  if ( !LdrpIsSecureProcess )
  {
    v5 = ::KeyHandle;
    KeyHandle = ::KeyHandle;
    if ( !::KeyHandle )
    {
      if ( ZwOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_4B28141C) < 0 )
      {
LABEL_7:
        v6 = a2;
        goto LABEL_8;
      }
      v5 = (HANDLE)_InterlockedCompareExchange((volatile signed __int32 *)&::KeyHandle, (signed __int32)KeyHandle, 0);
      if ( v5 )
      {
        NtClose(KeyHandle);
        KeyHandle = v5;
      }
      else
      {
        v5 = KeyHandle;
      }
    }
    if ( ZwQueryValueKey(v5, ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0
      && ResultLength == 16 )
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
