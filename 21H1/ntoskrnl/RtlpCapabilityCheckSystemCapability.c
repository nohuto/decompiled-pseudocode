/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x14090F5DC
 * Callers:
 *     RtlCapabilityCheck @ 0x14090ECC0 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x14035C130 (RtlCheckTokenMembershipEx.c)
 *     RtlSubAuthoritySid @ 0x14035C480 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeString @ 0x14061BCF0 (RtlCompareUnicodeString.c)
 *     RtlInitializeSid @ 0x14067E0B0 (RtlInitializeSid.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x14090FCC4 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpIsAppContainer @ 0x140910598 (RtlpIsAppContainer.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(HANDLE TokenHandle, PCUNICODE_STRING Source, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  NTSTATUS IsAppContainer; // ebx
  BOOLEAN IsMember; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v9[3]; // [rsp+21h] [rbp-3Fh] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+24h] [rbp-3Ch] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-30h] BYREF
  _BYTE Sid[16]; // [rsp+40h] [rbp-20h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  IsMember = 0;
  v9[0] = 0;
  String1 = 0LL;
  PolicyValueForSystemCapability = RtlpGetPolicyValueForSystemCapability(Source, &String1);
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
      if ( RtlCompareUnicodeString(&String1, &stru_140009658, 0) )
      {
        if ( RtlCompareUnicodeString(&String1, &stru_140009638, 0) )
        {
          IsAppContainer = -1073741823;
          goto LABEL_14;
        }
        RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
        *RtlSubAuthoritySid(Sid, 0) = 4;
      }
      else
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        *RtlSubAuthoritySid(Sid, 0) = 32;
        *RtlSubAuthoritySid(Sid, 1u) = 583;
      }
      IsAppContainer = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &IsMember);
      if ( IsAppContainer >= 0 )
      {
        if ( IsMember )
        {
          IsAppContainer = RtlpIsAppContainer(TokenHandle, v9);
          if ( IsAppContainer >= 0 )
          {
            if ( v9[0] )
              *a3 = 1;
          }
        }
      }
    }
  }
LABEL_14:
  RtlFreeAnsiString(&String1);
  return (unsigned int)IsAppContainer;
}
