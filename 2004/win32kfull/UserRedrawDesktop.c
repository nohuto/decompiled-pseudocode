/*
 * XREFs of UserRedrawDesktop @ 0x1C023F348
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0276F2C (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0026584 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C00717E0 (xxxInternalInvalidate.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 UserRedrawDesktop()
{
  struct tagWND *v0; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v9[2] = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v10);
  v0 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v9;
  v9[1] = v0;
  HMLockObject(v0);
  xxxInternalInvalidate(v0, (HRGN)1, 0x485u);
  result = ThreadUnlock1(v3, v2, v4);
  if ( !v10 )
    return UserSessionSwitchLeaveCrit(v7, v6, v8);
  return result;
}
