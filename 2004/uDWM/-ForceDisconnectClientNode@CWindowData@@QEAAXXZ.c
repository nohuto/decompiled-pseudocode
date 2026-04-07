/*
 * XREFs of ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18000F3D4
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000F420 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18000BA40 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CWindowData::ForceDisconnectClientNode(CWindowData *this)
{
  struct CVisual **v2; // rcx
  CBaseObject *v3; // rcx

  v2 = (struct CVisual **)*((_QWORD *)this + 48);
  if ( v2 )
    CTopLevelWindow::ForceDisconnectClientArea(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 16);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 16) = 0LL;
  }
}
