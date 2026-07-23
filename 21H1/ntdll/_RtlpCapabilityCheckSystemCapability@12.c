/*
 * XREFs of _RtlpCapabilityCheckSystemCapability@12 @ 0x4B2EF5A6
 * Callers:
 *     _RtlCapabilityCheck@12 @ 0x4B2EF210 (_RtlCapabilityCheck@12.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlpGetPolicyValueForSystemCapability@8 @ 0x4B2EF60F (_RtlpGetPolicyValueForSystemCapability@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpIsAppContainer@8 @ 0x4B3490A6 (_RtlpIsAppContainer@8.c)
 */

NTSTATUS __fastcall RtlpCapabilityCheckSystemCapability(HANDLE TokenHandle, int a2, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  NTSTATUS IsAppContainer; // esi
  _UNICODE_STRING UnicodeString; // [esp+10h] [ebp-2Ch] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [esp+18h] [ebp-24h] BYREF
  char v9; // [esp+22h] [ebp-1Ah]
  BOOLEAN IsMember; // [esp+23h] [ebp-19h] BYREF
  _BYTE Sid[8]; // [esp+24h] [ebp-18h] BYREF
  int v12; // [esp+2Ch] [ebp-10h]
  int v13; // [esp+30h] [ebp-Ch]

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  IsMember = 0;
  v9 = 0;
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
      if ( RtlCompareUnicodeString(&UnicodeString, (PUNICODE_STRING)&stru_4B281C18, 0) )
      {
        if ( RtlCompareUnicodeString(&UnicodeString, (PUNICODE_STRING)&stru_4B281C10, 0) )
        {
          IsAppContainer = -1073741823;
          goto LABEL_3;
        }
        RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
        v12 = 4;
      }
      else
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        v12 = 32;
        v13 = 583;
      }
      IsAppContainer = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &IsMember);
      if ( IsAppContainer >= 0 )
      {
        if ( IsMember )
        {
          IsAppContainer = RtlpIsAppContainer(TokenHandle);
          if ( IsAppContainer >= 0 )
          {
            if ( v9 )
              *a3 = 1;
          }
        }
      }
    }
  }
LABEL_3:
  RtlFreeAnsiString(&UnicodeString);
  return IsAppContainer;
}
