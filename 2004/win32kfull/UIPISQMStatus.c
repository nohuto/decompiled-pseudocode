/*
 * XREFs of UIPISQMStatus @ 0x1C012AC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UIPISQMStatus()
{
  FastGetProfileDword(0LL, 50LL, L"EnableMessageSQM", 0LL, &gfWinMsgSQMIsOptedIn);
  if ( gfWinMsgSQMIsOptedIn )
    gfWinMsgSQMIsOptedIn = WinSqmIsOptedIn();
  return WinSqmSetDWORD(gSqmSession, 5715LL);
}
