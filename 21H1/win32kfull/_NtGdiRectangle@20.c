/*
 * XREFs of _NtGdiRectangle@20 @ 0xBB870
 * Callers:
 *     _NtGdiRoundRect@28 @ 0x200D84 (_NtGdiRoundRect@28.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     _GreRectangle@20 @ 0xBB904 (_GreRectangle@20.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ @ 0xBC054 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QBEHXZ @ 0x1FDC85 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QBEHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ @ 0x1FDC9E (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ @ 0x1FDD88 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ @ 0x1FDE41 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ.c)
 */

int __stdcall NtGdiRectangle(HDC a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // edi
  DWMSCREENREADMODIFYWRITEASSIST *v8; // ecx
  int v9; // eax
  _DWORD v10[3]; // [esp+8h] [ebp-48h] BYREF
  _BYTE v11[20]; // [esp+14h] [ebp-3Ch] BYREF
  _DWORD *v12; // [esp+28h] [ebp-28h]

  v5 = 0;
  memset(v10, 0, sizeof(v10));
  XDCOBJ::vLock((XDCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v12 = v10;
    if ( DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v11) )
    {
      if ( !DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v11) )
      {
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates(v8);
        if ( GreRectangle(a1, a3, a4, a5) )
          v5 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v11);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v11);
      }
    }
  }
  v6 = GreRectangle(a1, a3, a4, a5);
  if ( v5 )
  {
    v9 = UserReferenceDwmApiPort();
    DwmSyncFlushAndWaitForBatch(v9);
  }
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v6;
}
