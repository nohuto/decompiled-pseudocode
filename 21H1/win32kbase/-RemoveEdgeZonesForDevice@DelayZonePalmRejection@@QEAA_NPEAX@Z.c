/*
 * XREFs of ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01B074C
 * Callers:
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x1C01B0AE0 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01B0648 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 */

char __fastcall DelayZonePalmRejection::RemoveEdgeZonesForDevice(DelayZonePalmRejection *this, void *a2)
{
  int v4; // edx
  struct CPalmRejectZoneInfo *v5; // rbx
  struct CPalmRejectZoneInfo *v6; // rax
  _BYTE v8[40]; // [rsp+30h] [rbp-48h] BYREF
  CInpLockGuard *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  struct CPalmRejectZoneInfo *v11; // [rsp+80h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v8,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v5 = (struct CPalmRejectZoneInfo *)*((_QWORD *)this + 9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v4,
      8,
      29,
      (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
      a2);
  }
  while ( v5 != (DelayZonePalmRejection *)((char *)this + 72) )
  {
    v6 = v5;
    v11 = v5;
    v5 = *(struct CPalmRejectZoneInfo **)v5;
    if ( *((void **)v6 + 12) == a2 )
      DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v11);
  }
  if ( !v10 )
    CInpLockGuard::UnLock((PERESOURCE *)v9, (struct CRefUnRefPointerMsgId *)v8);
  return 1;
}
