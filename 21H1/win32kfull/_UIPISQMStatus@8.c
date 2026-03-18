/*
 * XREFs of _UIPISQMStatus@8 @ 0xEC344
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall UIPISQMStatus(int a1, int a2)
{
  FastGetProfileDword(0, 50, L"EnableMessageSQM", 0, &gfWinMsgSQMIsOptedIn);
  if ( gfWinMsgSQMIsOptedIn )
    gfWinMsgSQMIsOptedIn = WinSqmIsOptedIn();
  return WinSqmSetDWORD(_gSqmSession, 5715, (a2 != 0 ? 2 : 0) | (a1 != 0));
}
