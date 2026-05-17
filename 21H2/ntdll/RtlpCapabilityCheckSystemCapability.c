/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x18007A3A0
 * Callers:
 *     RtlCapabilityCheck @ 0x18003FC90 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlCheckTokenMembershipEx @ 0x180036520 (RtlCheckTokenMembershipEx.c)
 *     RtlInitializeSid @ 0x180040070 (RtlInitializeSid.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18007A428 (RtlpGetPolicyValueForSystemCapability.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     RtlpIsAppContainer @ 0x1800E8AF4 (RtlpIsAppContainer.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(void *a1, __int64 a2, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  int IsAppContainer; // ebx
  char v8; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v9[3]; // [rsp+21h] [rbp-3Fh] BYREF
  int v10; // [rsp+24h] [rbp-3Ch] BYREF
  __int16 v11; // [rsp+28h] [rbp-38h]
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-20h] BYREF
  int v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+4Ch] [rbp-14h]

  v10 = 0;
  v11 = 1280;
  v8 = 0;
  v9[0] = 0;
  UnicodeString = 0LL;
  PolicyValueForSystemCapability = RtlpGetPolicyValueForSystemCapability(a2, &UnicodeString);
  IsAppContainer = PolicyValueForSystemCapability;
  if ( PolicyValueForSystemCapability == -1073741772 )
  {
    IsAppContainer = 0;
  }
  else
  {
    *a3 = 0;
    if ( PolicyValueForSystemCapability >= 0 )
    {
      if ( (unsigned int)RtlCompareUnicodeString(&UnicodeString.Length, word_18011E5C8, 0) )
      {
        if ( (unsigned int)RtlCompareUnicodeString(&UnicodeString.Length, word_18011E5B8, 0) )
        {
          IsAppContainer = -1073741823;
          goto LABEL_3;
        }
        RtlInitializeSid((__int64)v13, (__int64)&v10, 1u);
        v14 = 4;
      }
      else
      {
        RtlInitializeSid((__int64)v13, (__int64)&v10, 2u);
        v14 = 32;
        v15 = 583;
      }
      IsAppContainer = RtlCheckTokenMembershipEx(a1, v13, 2, &v8);
      if ( IsAppContainer >= 0 )
      {
        if ( v8 )
        {
          IsAppContainer = RtlpIsAppContainer(a1, v9);
          if ( IsAppContainer >= 0 )
          {
            if ( v9[0] )
              *a3 = 1;
          }
        }
      }
    }
  }
LABEL_3:
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)IsAppContainer;
}
