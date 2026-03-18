/*
 * XREFs of ?UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z @ 0x7B9CE
 * Callers:
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?RefreshSizes@CCursorSizes@@QAEXXZ @ 0xA27AC (-RefreshSizes@CCursorSizes@@QAEXXZ.c)
 *     ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598 (-xxxMoveEventAbsolute@@YG-AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU.c)
 *     ?RenderCursor@@YGXABUtagPOINTERCURSORDATA@@@Z @ 0x148A86 (-RenderCursor@@YGXABUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     __MonitorFromPoint@16 @ 0x25420 (__MonitorFromPoint@16.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?AcquireLockExclusive@CPushLock@@QAEJXZ @ 0x98B28 (-AcquireLockExclusive@CPushLock@@QAEJXZ.c)
 *     ?AcquireLockShared@CPushLock@@QBEJXZ @ 0x98B6C (-AcquireLockShared@CPushLock@@QBEJXZ.c)
 *     ?ReleaseLock@CPushLock@@QBEXXZ @ 0x9ACAE (-ReleaseLock@CPushLock@@QBEXXZ.c)
 *     _GetCursorSizesIndexFromDpi@4 @ 0xA296A (_GetCursorSizesIndexFromDpi@4.c)
 */

void __thiscall CCursorSizes::UpdateGlobalCursorSize(CCursorSizes *this, const struct tagPOINT *a2, bool a3)
{
  CPushLock *v4; // esi
  int v5; // edi
  _DWORD *v6; // esi
  int CursorSizesIndexFromDpi; // eax
  int v8; // esi
  int v9; // edi
  int v10; // [esp+14h] [ebp-4h] BYREF

  v4 = (CCursorSizes *)((char *)this + 64);
  if ( !a3 )
  {
    CPushLock::AcquireLockShared((CCursorSizes *)((char *)this + 64));
    if ( PtInRect((_DWORD *)this + 2, a2->x, a2->y) )
    {
      CPushLock::ReleaseLock(v4);
      return;
    }
    CPushLock::ReleaseLock(v4);
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v10);
  v5 = _MonitorFromPoint(a2->x, a2->y, 1u, 18);
  if ( v5 )
  {
    CPushLock::AcquireLockExclusive(v4);
    v6 = (_DWORD *)(*(_DWORD *)(v5 + 20) + 16);
    *((_DWORD *)this + 2) = *v6++;
    *((_DWORD *)this + 3) = *v6++;
    *((_DWORD *)this + 4) = *v6;
    *((_DWORD *)this + 5) = v6[1];
    CursorSizesIndexFromDpi = GetCursorSizesIndexFromDpi(*(unsigned __int16 *)(*(_DWORD *)(v5 + 20) + 56));
    v8 = *(_DWORD *)this;
    v9 = *((_DWORD *)this + 2 * CursorSizesIndexFromDpi + 7);
    *(_DWORD *)this = v9;
    CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
    if ( v9 != v8 )
      zzzUpdateCursorImage();
  }
  if ( !v10 )
    UserSessionSwitchLeaveCrit();
}
