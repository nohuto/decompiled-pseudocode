/*
 * XREFs of ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180012FE4
 * Callers:
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180007CD0 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000ECD0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180012524 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180012FE4 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180013120 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001472C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x180035290 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003F480 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180012FE4 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x1800130DC (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180016260 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CWindowData::ClearSnapshot(CWindowData *this, bool a2, __int64 a3, bool a4)
{
  CBaseObject *v7; // rcx
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 i; // rdi
  CWindowData *v12; // rcx

  if ( *((int *)this + 28) >= 8 && *((int *)this + 28) <= 11 || CWindowData::IsShellManaged(this) )
  {
    v8 = *((_BYTE *)this + 612);
    if ( (v8 & 2) != 0 && a4 )
    {
      v9 = 0LL;
      for ( *((_BYTE *)this + 612) = v8 | 0x20; (unsigned int)v9 < *((_DWORD *)this + 142); *(_BYTE *)(v10 + 612) |= 0x20u )
      {
        v10 = *(_QWORD *)(*((_QWORD *)this + 68) + 8 * v9);
        v9 = (unsigned int)(v9 + 1);
      }
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 52);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 52) = 0LL;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 142); i = (unsigned int)(i + 1) )
    {
      v12 = *(CWindowData **)(*((_QWORD *)this + 68) + 8 * i);
      if ( (*((_DWORD *)v12 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v12, a2, 0, a4);
    }
    if ( a2 )
      CWindowData::NotifyRepresentationChanged(this);
  }
}
