/*
 * XREFs of ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C003B570
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0039F7C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C003B470 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0048DF4 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB1E8 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0025880 (_MonitorFromPoint.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0026584 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     zzzUpdateCursorImage @ 0x1C0087670 (zzzUpdateCursorImage.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0102ADC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCursorSizes::UpdateGlobalCursorSize(CCursorSizes *this, const struct tagPOINT *a2, char a3)
{
  CPushLock *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  unsigned __int16 v10; // cx
  unsigned __int64 v11; // rax
  int v12; // esi
  int v13; // edi
  int v14; // [rsp+40h] [rbp+18h] BYREF

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
    if ( (unsigned int)PtInRect((char *)this + 8, *a2) )
    {
      CPushLock::ReleaseLock(v5);
      return;
    }
    CPushLock::ReleaseLock(v5);
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  v8 = MonitorFromPoint((__int64)*a2, 1LL, 0x12u);
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
    v10 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 68LL);
    if ( v10 >= 0x90u )
    {
      if ( v10 >= 0xC0u )
      {
        if ( v10 >= 0x120u )
          v11 = (-(__int64)(v10 < 0x180u) & 0xFFFFFFFFFFFFFFF8uLL) + 60;
        else
          v11 = 44LL;
      }
      else
      {
        v11 = 36LL;
      }
    }
    else
    {
      v11 = 28LL;
    }
    v12 = *(_DWORD *)((char *)this + v11);
    v13 = *(_DWORD *)this;
    *(_DWORD *)this = v12;
    CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
    if ( v12 != v13 )
      zzzUpdateCursorImage();
  }
  if ( !v14 )
    UserSessionSwitchLeaveCrit(v7, v6, v9);
}
