/*
 * XREFs of ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00C0A48
 * Callers:
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0027F24 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C002DCDC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00C0948 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DA528 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C003C200 (_MonitorFromPoint.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003E8B4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     zzzUpdateCursorImage @ 0x1C00CD0D0 (zzzUpdateCursorImage.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C010347C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCursorSizes::UpdateGlobalCursorSize(CCursorSizes *this, const struct tagPOINT *a2, char a3)
{
  CPushLock *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int16 v9; // cx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
  {
    v5 = (CCursorSizes *)((char *)this + 64);
    if ( (**((unsigned __int8 (__fastcall ***)(char *))this + 8))((char *)this + 64) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v5 + 8, 0LL);
      if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v5)(v5) )
        CPushLock::ReleaseLock(v5);
    }
    if ( PtInRect((_DWORD *)this + 2, (unsigned __int64)*a2) )
    {
      CPushLock::ReleaseLock(v5);
      return;
    }
    CPushLock::ReleaseLock(v5);
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v15);
  v8 = MonitorFromPoint((__int64)*a2, 1LL, 18LL, v6);
  if ( v8 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(char *))this + 8))((char *)this + 64) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
      *((_QWORD *)this + 10) = KeGetCurrentThread();
      if ( !(**((unsigned __int8 (__fastcall ***)(char *))this + 8))((char *)this + 64) )
        CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
    }
    *(_OWORD *)((char *)this + 8) = *(_OWORD *)(*(_QWORD *)(v8 + 40) + 28LL);
    v9 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 68LL);
    if ( v9 >= 0x90u )
    {
      if ( v9 >= 0xC0u )
      {
        if ( v9 >= 0x120u )
          v10 = (-(__int64)(v9 < 0x180u) & 0xFFFFFFFFFFFFFFF8uLL) + 60;
        else
          v10 = 44LL;
      }
      else
      {
        v10 = 36LL;
      }
    }
    else
    {
      v10 = 28LL;
    }
    v11 = *(_DWORD *)((char *)this + v10);
    v12 = *(_DWORD *)this;
    *(_DWORD *)this = v11;
    CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
    if ( v11 != v12 )
      zzzUpdateCursorImage(v7, v13, v14);
  }
  if ( !v15 )
    UserSessionSwitchLeaveCrit(v7);
}
