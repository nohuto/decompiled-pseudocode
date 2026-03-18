/*
 * XREFs of ?bPrepareDCForXfer@XFERDCOBJ@@SGHPAUHDC__@@K@Z @ 0x1FD069
 * Callers:
 *     _NtGdiMakeObjectXferable@8 @ 0x1FD8D1 (_NtGdiMakeObjectXferable@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __fastcall XFERDCOBJ::bPrepareDCForXfer(HDC a1, int a2)
{
  int v2; // esi
  _DWORD v5[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = 0;
  memset(v5, 0, sizeof(v5));
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    if ( a2 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v2 = 1;
      *(_DWORD *)(v5[0] + 1844) = a2;
    }
    if ( v5[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return v2;
}
