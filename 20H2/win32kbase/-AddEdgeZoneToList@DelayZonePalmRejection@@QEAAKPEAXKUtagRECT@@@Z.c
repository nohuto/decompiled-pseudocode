/*
 * XREFs of ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C01A74FC
 * Callers:
 *     AddEdgePalmRejectionZone @ 0x1C01A8910 (AddEdgePalmRejectionZone.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013958C (WPP_RECORDER_SF_Dd.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddEdgeZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        int a3,
        struct tagRECT *a4)
{
  char *v8; // rax
  char *v9; // r10
  unsigned int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  _BYTE v17[40]; // [rsp+40h] [rbp-48h] BYREF
  CInpLockGuard *v18; // [rsp+68h] [rbp-20h]
  int v19; // [rsp+70h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v17,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v8 = (char *)Win32AllocPoolZInit(0x68uLL, 0x7A647355u);
  v9 = v8;
  if ( v8 )
  {
    *((_QWORD *)v8 + 9) = 0LL;
    *((_QWORD *)v8 + 10) = 0LL;
    *(struct tagRECT *)(v8 + 24) = *a4;
    *(_OWORD *)(v8 + 40) = 0LL;
    CurrentThread = KeGetCurrentThread();
    *((_DWORD *)v9 + 16) = 0;
    *((_QWORD *)v9 + 2) = CurrentThread;
    v10 = *((_DWORD *)this + 22);
    v12 = v10 + 1;
    if ( v10 == -1 )
      v12 = 1;
    *((_DWORD *)this + 22) = v12;
    v13 = (_QWORD *)((char *)this + 72);
    *((_DWORD *)v9 + 22) = 0;
    *((_DWORD *)v9 + 14) = v10;
    *((_DWORD *)v9 + 23) = a3;
    *((_QWORD *)v9 + 12) = a2;
    v9[60] = 1;
    v14 = *((_QWORD *)this + 9);
    if ( *(DelayZonePalmRejection **)(v14 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
      __fastfail(3u);
    *((_QWORD *)v9 + 1) = v13;
    *(_QWORD *)v9 = v14;
    *(_QWORD *)(v14 + 8) = v9;
    *v13 = v9;
    v15 = *((_DWORD *)this + 23) + 1;
    *((_DWORD *)this + 23) = v15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dd(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        8u,
        0x1Au,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
        v10,
        v15);
  }
  else
  {
    v10 = 0;
  }
  if ( !v19 )
    CInpLockGuard::UnLock((PERESOURCE *)v18, (struct CRefUnRefPointerMsgId *)v17);
  return v10;
}
