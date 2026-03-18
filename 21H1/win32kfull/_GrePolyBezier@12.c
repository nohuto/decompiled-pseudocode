/*
 * XREFs of _GrePolyBezier@12 @ 0x1FFD2A
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ @ 0xBC054 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QBEHXZ @ 0x1FDC85 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QBEHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ @ 0x1FDC9E (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ @ 0x1FDD88 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ @ 0x1FDE41 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ.c)
 *     ?GrePolyBezierInternal@@YGHPAUHDC__@@PAUtagPOINT@@K@Z @ 0x1FF302 (-GrePolyBezierInternal@@YGHPAUHDC__@@PAUtagPOINT@@K@Z.c)
 */

int __stdcall GrePolyBezier(HDC a1, struct _POINTL *a2, HDC a3)
{
  int v3; // esi
  DWMSCREENREADMODIFYWRITEASSIST *v4; // ecx
  int v5; // edi
  int v6; // eax
  struct tagPOINT *v8; // [esp+0h] [ebp-58h]
  unsigned int v9; // [esp+4h] [ebp-54h]
  _DWORD v10[3]; // [esp+10h] [ebp-48h] BYREF
  _BYTE v11[20]; // [esp+1Ch] [ebp-3Ch] BYREF
  _DWORD *v12; // [esp+30h] [ebp-28h]

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
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates(v4);
        if ( GrePolyBezierInternal(a2, a1, a3, v8, v9) )
          v3 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v11);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v11);
      }
    }
  }
  v5 = GrePolyBezierInternal(a2, a1, a3, v8, v9);
  if ( v3 )
  {
    v6 = UserReferenceDwmApiPort();
    DwmSyncFlushAndWaitForBatch(v6);
  }
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v5;
}
