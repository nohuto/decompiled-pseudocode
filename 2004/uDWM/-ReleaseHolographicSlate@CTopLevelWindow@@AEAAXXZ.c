/*
 * XREFs of ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18001A0D4
 * Callers:
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18000BA40 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180017538 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180018950 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026264 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 */

void __fastcall CTopLevelWindow::ReleaseHolographicSlate(CTopLevelWindow *this)
{
  CBaseObject *v2; // rcx
  struct CVisual *v3; // rdx
  VisualCollection *v4; // rcx
  CBaseObject *v5; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 99);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    v3 = (struct CVisual *)*((_QWORD *)this + 60);
    v4 = (VisualCollection *)(*((_QWORD *)this + 100) + 32LL);
    *((_QWORD *)this + 99) = 0LL;
    VisualCollection::InsertRelative(v4, v3, 0LL, 1u, 1);
    v5 = (CBaseObject *)*((_QWORD *)this + 100);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *((_QWORD *)this + 100) = 0LL;
    }
  }
}
