/*
 * XREFs of _NtGdiInvertRgn@8 @ 0x1FEC75
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ @ 0xBC054 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A (-NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QBEHXZ @ 0x1FDC85 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QBEHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ @ 0x1FDC9E (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ @ 0x1FDD88 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ @ 0x1FDE41 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ.c)
 */

int __stdcall NtGdiInvertRgn(HDC a1, HRGN a2)
{
  int v2; // esi
  DWMSCREENREADMODIFYWRITEASSIST *v3; // ecx
  int v4; // edi
  int v5; // eax
  _DWORD v7[3]; // [esp+10h] [ebp-48h] BYREF
  _BYTE v8[20]; // [esp+1Ch] [ebp-3Ch] BYREF
  _DWORD *v9; // [esp+30h] [ebp-28h]

  v2 = 0;
  memset(v7, 0, sizeof(v7));
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v9 = v7;
    if ( DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v8) )
    {
      if ( !DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v8) )
      {
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates(v3);
        if ( NtGdiInvertRgnInternal(a1, a2) )
          v2 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v8);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v8);
      }
    }
  }
  v4 = NtGdiInvertRgnInternal(a1, a2);
  if ( v2 )
  {
    v5 = UserReferenceDwmApiPort();
    DwmSyncFlushAndWaitForBatch(v5);
  }
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return v4;
}
