/*
 * XREFs of _RtlpCheckMuiMultiStringSafe@8 @ 0x4B3534AE
 * Callers:
 *     _RtlSetThreadPreferredUILanguages@12 @ 0x4B2D64B0 (_RtlSetThreadPreferredUILanguages@12.c)
 *     _RtlGetUILanguageInfo@20 @ 0x4B352940 (_RtlGetUILanguageInfo@20.c)
 *     _RtlSetProcessPreferredUILanguages@12 @ 0x4B352E10 (_RtlSetProcessPreferredUILanguages@12.c)
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 * Callees:
 *     _RtlStringCchLengthW@12 @ 0x4B2D415E (_RtlStringCchLengthW@12.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __fastcall RtlpCheckMuiMultiStringSafe(_WORD *a1, int a2)
{
  int v4; // ecx
  int v6; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v4 = 0;
  if ( a1 && !*a1 )
    ++a1;
  ms_exc.registration.TryLevel = 0;
  while ( a1 )
  {
    if ( !*a1 )
      break;
    v4 = RtlStringCchLengthW((int)a1, a2 + 1, &v6);
    if ( v4 < 0 )
      break;
    a1 += v6 + 1;
  }
  return v4;
}
