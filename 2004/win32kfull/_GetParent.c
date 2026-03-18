/*
 * XREFs of _GetParent @ 0x1C00E9C04
 * Callers:
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C00051D4 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     NtUserGetAncestor @ 0x1C00E9AE0 (NtUserGetAncestor.c)
 *     _GetAncestor @ 0x1C011B464 (_GetAncestor.c)
 *     xxxHelpLoop @ 0x1C025120C (xxxHelpLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetParent(_QWORD *a1)
{
  char v1; // dl

  v1 = *(_BYTE *)(a1[5] + 31LL) & 0xC0;
  if ( !v1 )
    return 0LL;
  if ( v1 == 64 )
    return a1[13];
  return a1[15];
}
