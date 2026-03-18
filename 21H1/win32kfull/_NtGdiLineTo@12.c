/*
 * XREFs of _NtGdiLineTo@12 @ 0xBBAF6
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?GreLineTo@@YGHPAUHDC__@@HH@Z @ 0xBBB84 (-GreLineTo@@YGHPAUHDC__@@HH@Z.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ @ 0xBC054 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QBEHXZ @ 0x1FDC85 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QBEHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ @ 0x1FDC9E (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ @ 0x1FDD88 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ @ 0x1FDE41 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ.c)
 */

int __stdcall NtGdiLineTo(HDC a1, int a2, HDC a3)
{
  int v3; // esi
  int v4; // edi
  DWMSCREENREADMODIFYWRITEASSIST *v6; // ecx
  int v7; // eax
  int v8; // [esp+0h] [ebp-50h]
  int v9; // [esp+4h] [ebp-4Ch]
  _DWORD v10[3]; // [esp+8h] [ebp-48h] BYREF
  _BYTE v11[20]; // [esp+14h] [ebp-3Ch] BYREF
  _DWORD *v12; // [esp+28h] [ebp-28h]

  v3 = 0;
  memset(v10, 0, sizeof(v10));
  XDCOBJ::vLock((XDCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v12 = v10;
    if ( DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v11) )
    {
      if ( !DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v11) )
      {
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates(v6);
        if ( GreLineTo(a3, v8, v9) )
          v3 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v11);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v11);
      }
    }
  }
  v4 = GreLineTo(a3, v8, v9);
  if ( v3 )
  {
    v7 = UserReferenceDwmApiPort();
    DwmSyncFlushAndWaitForBatch(v7);
  }
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v4;
}
