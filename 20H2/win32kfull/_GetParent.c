/*
 * XREFs of _GetParent @ 0x1C00E5E64
 * Callers:
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0005074 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     NtUserGetAncestor @ 0x1C00E5D40 (NtUserGetAncestor.c)
 *     _GetAncestor @ 0x1C011BE54 (_GetAncestor.c)
 *     xxxHelpLoop @ 0x1C024FBFC (xxxHelpLoop.c)
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
