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

int __fastcall RtlpCapabilityCheckSystemCapability(void *a1, int a2, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  int IsAppContainer; // esi
  UNICODE_STRING UnicodeString; // [esp+10h] [ebp-2Ch] BYREF
  int v8; // [esp+18h] [ebp-24h] BYREF
  __int16 v9; // [esp+1Ch] [ebp-20h]
  char v10; // [esp+22h] [ebp-1Ah] BYREF
  char Src; // [esp+23h] [ebp-19h] BYREF
  unsigned __int8 Src_1[8]; // [esp+24h] [ebp-18h] BYREF
  int v13; // [esp+2Ch] [ebp-10h]
  int v14; // [esp+30h] [ebp-Ch]

  v9 = 1280;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0;
  v8 = 0;
  Src = 0;
  v10 = 0;
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
      if ( RtlCompareUnicodeString(&UnicodeString.Length, (unsigned __int16 *)&dword_4B281C18, 0) )
      {
        if ( RtlCompareUnicodeString(&UnicodeString.Length, (unsigned __int16 *)&dword_4B281C10, 0) )
        {
          IsAppContainer = -1073741823;
          goto LABEL_3;
        }
        RtlInitializeSid((int)Src_1, (int)&v8, 1u);
        v13 = 4;
      }
      else
      {
        RtlInitializeSid((int)Src_1, (int)&v8, 2u);
        v13 = 32;
        v14 = 583;
      }
      IsAppContainer = RtlCheckTokenMembershipEx(a1, Src_1, 2, &Src);
      if ( IsAppContainer >= 0 )
      {
        if ( Src )
        {
          IsAppContainer = RtlpIsAppContainer(a1, &v10);
          if ( IsAppContainer >= 0 )
          {
            if ( v10 )
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
