/*
 * XREFs of ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C01AA7BC
 * Callers:
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C0132160 (NtUserDestroyPalmRejectionDelayZone.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1334 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01AA8E8 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C01BA0B0 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

bool __fastcall DelayZonePalmRejection::RemoveDelayZoneFromList(DelayZonePalmRejection *this, int a2)
{
  int v4; // edx
  char *v5; // r8
  char *v6; // rax
  char *v7; // rbx
  __int128 v8; // xmm6
  bool v9; // bl
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v15[40]; // [rsp+40h] [rbp-58h] BYREF
  CInpLockGuard *v16; // [rsp+68h] [rbp-30h]
  int v17; // [rsp+70h] [rbp-28h]
  struct CPalmRejectZoneInfo *v18; // [rsp+A0h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v15,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v5 = (char *)this + 72;
  v6 = (char *)*((_QWORD *)this + 9);
  if ( v6 == (char *)this + 72 )
    goto LABEL_12;
  do
  {
    v7 = v6;
    if ( *((_DWORD *)v6 + 14) == a2 )
      break;
    v6 = *(char **)v6;
  }
  while ( v6 != v5 );
  if ( v6 == v5
    || (v18 = (struct CPalmRejectZoneInfo *)v7) == 0LL
    || *((struct _KTHREAD **)v7 + 2) != KeGetCurrentThread() )
  {
LABEL_12:
    v9 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v4,
        8,
        28,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids);
    }
    v8 = *(_OWORD *)(v7 + 24);
    v9 = DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v18);
    if ( v9 )
    {
      v11 = *((_QWORD *)this + 20);
      if ( v11 )
      {
        v12 = *((unsigned int *)this + 1);
        v14 = v8;
        DelayZoneTelemetry::UpdateDelayZoneStateInfo(v11, v12, v10, 4LL, &v14);
      }
    }
  }
  if ( !v17 )
    CInpLockGuard::UnLock((PERESOURCE *)v16, (struct CRefUnRefPointerMsgId *)v15);
  return v9;
}
