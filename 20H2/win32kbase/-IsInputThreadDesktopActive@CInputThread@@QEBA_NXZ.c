/*
 * XREFs of ?IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ @ 0x1C00A8588
 * Callers:
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C00AF7D8 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01B5834 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 * Callees:
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C00A8610 (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 */

bool __fastcall CInputThread::IsInputThreadDesktopActive(CInputThread *this)
{
  CInputThread *v1; // rbx
  bool v2; // di

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v2 = 0;
  if ( !CInputThread::InputThreadState::IsEmpty((CInputThread *)((char *)v1 + 16)) )
    v2 = *(_QWORD *)(*((_QWORD *)v1 + 3) + 456LL) == (_QWORD)grpdeskRitInput;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
