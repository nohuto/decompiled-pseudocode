/*
 * XREFs of WPP_SF_Sl @ 0x1800BF604
 * Callers:
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x1800BEA30 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x1800BEE98 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Sl(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
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
  return EtwTraceMessage(a1, 43LL, &WPP_a111594f2af03e3a71e6f1c2b278efda_Traceguids, a2, a4);
}
