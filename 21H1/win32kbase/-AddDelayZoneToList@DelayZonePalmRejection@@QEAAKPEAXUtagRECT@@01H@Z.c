/*
 * XREFs of ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01AF368
 * Callers:
 *     AddPalmRejectionDelayZone @ 0x1C01B0A44 (AddPalmRejectionDelayZone.c)
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C001B7B0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C014157C (WPP_RECORDER_SF_Dd.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C01BFE10 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddDelayZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        struct tagRECT *a3,
        void *a4,
        struct tagRECT *a5,
        int a6)
{
  __int64 v10; // r8
  struct CompositionInputObject *v11; // rsi
  struct CompositionInputObject *v12; // r14
  unsigned int v13; // r15d
  int v14; // eax
  int v15; // edx
  char *v16; // rbx
  __int64 v17; // r8
  struct tagRECT *v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  struct tagRECT v28; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v29[40]; // [rsp+50h] [rbp-29h] BYREF
  CInpLockGuard *v30; // [rsp+78h] [rbp-1h]
  int v31; // [rsp+80h] [rbp+7h]
  struct CompositionInputObject *v32; // [rsp+D0h] [rbp+57h] BYREF
  struct CompositionInputObject *v33; // [rsp+D8h] [rbp+5Fh] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v29,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v32 = 0LL;
  v33 = 0LL;
  if ( a2 )
  {
    LOBYTE(v10) = 1;
    v14 = CompositionInputObject::ResolveHandle(a2, 1LL, v10, &v32);
    if ( v14 < 0 )
      goto LABEL_9;
    v12 = v32;
  }
  if ( a4 )
  {
    LOBYTE(v10) = 1;
    v14 = CompositionInputObject::ResolveHandle(a4, 1LL, v10, &v33);
    if ( v14 < 0 )
      goto LABEL_9;
    v11 = v33;
  }
  v16 = (char *)Win32AllocPoolZInit(0x68uLL, 0x7A647355u);
  if ( !v16 )
  {
    v14 = -1073741801;
LABEL_9:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v15,
        8,
        25,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
        v14);
    }
    goto LABEL_26;
  }
  if ( v12 )
    ObReferenceObjectByPointer(v12, 3u, ExCompositionObjectType, 0);
  if ( v11 )
    ObReferenceObjectByPointer(v11, 3u, ExCompositionObjectType, 0);
  v18 = a5;
  *(struct tagRECT *)(v16 + 24) = *a3;
  *((_QWORD *)v16 + 9) = v12;
  *(struct tagRECT *)(v16 + 40) = *v18;
  *((_QWORD *)v16 + 10) = v11;
  *((_QWORD *)v16 + 2) = KeGetCurrentThread();
  if ( a6 )
    v19 = *(_DWORD *)(*((_QWORD *)gptiCurrent + 52) + 56LL);
  else
    v19 = 0;
  *((_DWORD *)v16 + 16) = v19;
  v13 = *((_DWORD *)this + 22);
  v20 = v13 + 1;
  if ( v13 == -1 )
    v20 = 1;
  *((_DWORD *)this + 22) = v20;
  *((_DWORD *)v16 + 14) = v13;
  *((_DWORD *)v16 + 23) = 3;
  v21 = *((_DWORD *)this + 26);
  *((_QWORD *)v16 + 12) = 0LL;
  *((_DWORD *)v16 + 22) = v21;
  v22 = (_QWORD *)((char *)this + 72);
  v16[60] = 0;
  v23 = *((_QWORD *)this + 9);
  if ( *(DelayZonePalmRejection **)(v23 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
    __fastfail(3u);
  *((_QWORD *)v16 + 1) = v22;
  *(_QWORD *)v16 = v23;
  *(_QWORD *)(v23 + 8) = v16;
  *v22 = v16;
  v24 = *((_DWORD *)this + 23) + 1;
  *((_DWORD *)this + 23) = v24;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dd(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      8u,
      0x18u,
      (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
      v13,
      v24);
  v25 = *((_QWORD *)this + 20);
  if ( v25 )
  {
    v26 = *((unsigned int *)this + 1);
    v28 = *a3;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v25, v26, v17, 3LL, &v28);
  }
LABEL_26:
  if ( !v31 )
    CInpLockGuard::UnLock((PERESOURCE *)v30, (struct CRefUnRefPointerMsgId *)v29);
  return v13;
}
