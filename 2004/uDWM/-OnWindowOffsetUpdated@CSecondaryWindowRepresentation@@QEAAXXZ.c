/*
 * XREFs of ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18003E7D8
 * Callers:
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180014ACC (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180022400 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180027698 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027A04 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x180028310 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 *     ?GetOffsetToOwner@CWindowData@@QEAA?AUtagPOINT@@XZ @ 0x18003E87C (-GetOffsetToOwner@CWindowData@@QEAA-AUtagPOINT@@XZ.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnWindowOffsetUpdated(CSecondaryWindowRepresentation *this)
{
  __int64 i; // rdi
  const struct tagPOINT *v3; // rax
  __int64 v4; // rcx
  const struct tagPOINT *OffsetToOwner; // rax
  struct tagPOINT *v6; // r9

  if ( *((_QWORD *)this + 4) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 38); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * i);
      if ( *(_QWORD *)(v4 + 48) )
      {
        OffsetToOwner = (const struct tagPOINT *)CWindowData::GetOffsetToOwner(*(CWindowData **)(v4 + 32));
        CVisual::SetOffset(v6, OffsetToOwner);
      }
    }
    if ( *((_QWORD *)this + 6) )
    {
      v3 = (const struct tagPOINT *)CWindowData::GetOffsetToOwner(*((CWindowData **)this + 4));
      CVisual::SetOffset(*((struct tagPOINT **)this + 6), v3);
      if ( *(_DWORD *)(*((_QWORD *)this + 6) + 80LL) )
        CSecondaryWindowRepresentation::SetDirtyFlags(this, 8);
    }
  }
}
