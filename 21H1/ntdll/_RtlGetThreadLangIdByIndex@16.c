/*
 * XREFs of _RtlGetThreadLangIdByIndex@16 @ 0x4B352870
 * Callers:
 *     <none>
 * Callees:
 *     _GetLCIDFromLangListNodeWithLICCheck@20 @ 0x4B2BA710 (_GetLCIDFromLangListNodeWithLICCheck@20.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __stdcall RtlGetThreadLangIdByIndex(int a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  _DWORD *PreferredLanguages; // edx
  unsigned int v6; // [esp+14h] [ebp-28h]
  int LCIDFromLangListNodeWithLICCheck; // [esp+18h] [ebp-24h]
  unsigned __int16 v8[3]; // [esp+1Ch] [ebp-20h] BYREF
  bool v9; // [esp+23h] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  LCIDFromLangListNodeWithLICCheck = 0;
  v9 = 0;
  v8[0] = 0;
  v6 = 0;
  if ( a1 || !a3 )
    return -1073741811;
  ms_exc.registration.TryLevel = 0;
  PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
  if ( PreferredLanguages )
  {
    if ( PreferredLanguages[4] )
    {
      v6 = *((unsigned __int16 *)PreferredLanguages + 2);
      if ( a2 < v6 )
        LCIDFromLangListNodeWithLICCheck = GetLCIDFromLangListNodeWithLICCheck(0, (int)PreferredLanguages, a2, v8, &v9);
    }
  }
  *a3 = v8[0];
  if ( a4 )
    *a4 = v6;
  ms_exc.registration.TryLevel = -2;
  if ( !LCIDFromLangListNodeWithLICCheck && !v8[0] )
    return -1073741275;
  return LCIDFromLangListNodeWithLICCheck;
}
