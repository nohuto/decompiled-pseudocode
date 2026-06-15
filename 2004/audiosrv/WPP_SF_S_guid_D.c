/*
 * XREFs of WPP_SF_S_guid_D @ 0x180100B00
 * Callers:
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x180035E50 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S_guid_D(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_107eeefd23a13a1e42820564321ad14e_Traceguids, 36LL, a4);
}
