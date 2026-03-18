/*
 * XREFs of _NtUserfnNCDESTROY@28 @ 0x3C762
 * Callers:
 *     _NtUserMessageCall@28 @ 0x3C668 (_NtUserMessageCall@28.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 * Callees:
 *     <none>
 */

int __stdcall NtUserfnNCDESTROY(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  return ((int (__stdcall *)(int, int, int, int, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, a4, a5);
}
