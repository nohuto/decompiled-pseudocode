/*
 * XREFs of ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180029BB0
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800299D0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003C5D0 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::OnGDISurfaceChange(CWindowList *this, struct CWindowData *a2)
{
  CVisual *v2; // rax

  v2 = (CVisual *)*((_QWORD *)a2 + 48);
  if ( v2 )
  {
    if ( (*((_BYTE *)a2 + 609) & 0x20) != 0 )
      CVisual::SetDirtyFlags(v2, 0x2000000);
    else
      *((_DWORD *)v2 + 20) &= ~0x2000000u;
  }
}
