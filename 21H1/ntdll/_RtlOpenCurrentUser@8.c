/*
 * XREFs of _RtlOpenCurrentUser@8 @ 0x4B2AD730
 * Callers:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFormatCurrentUserKeyPath@4 @ 0x4B2D3860 (_RtlFormatCurrentUserKeyPath@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __stdcall RtlOpenCurrentUser(int a1, int a2)
{
  int v2; // esi
  int v4; // [esp+10h] [ebp-20h] BYREF
  int v5; // [esp+14h] [ebp-1Ch]
  UNICODE_STRING *p_UnicodeString; // [esp+18h] [ebp-18h]
  int v7; // [esp+1Ch] [ebp-14h]
  int v8; // [esp+20h] [ebp-10h]
  int v9; // [esp+24h] [ebp-Ch]
  UNICODE_STRING UnicodeString; // [esp+28h] [ebp-8h] BYREF

  v2 = RtlFormatCurrentUserKeyPath(&UnicodeString);
  if ( v2 >= 0 )
  {
    v4 = 24;
    p_UnicodeString = &UnicodeString;
    v5 = 0;
    v7 = 1600;
    v8 = 0;
    v9 = 0;
    v2 = ZwOpenKey(a2, a1, &v4);
    RtlFreeAnsiString(&UnicodeString);
  }
  if ( v2 == -1073741772 )
  {
    RtlInitUnicodeString(&UnicodeString, L"\\Registry\\User\\.Default");
    v4 = 24;
    p_UnicodeString = &UnicodeString;
    v5 = 0;
    v7 = 1600;
    v8 = 0;
    v9 = 0;
    return ZwOpenKey(a2, a1, &v4);
  }
  return v2;
}
