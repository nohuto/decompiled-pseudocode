/*
 * XREFs of ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01B0648
 * Callers:
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C006ED98 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C01B051C (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01B074C (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 */

char __fastcall DelayZonePalmRejection::RemoveDelayZoneFromListInternal(
        DelayZonePalmRejection *this,
        struct CPalmRejectZoneInfo **a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  int v8; // edx
  int v9; // eax
  char v10; // bl
  _BYTE v12[40]; // [rsp+30h] [rbp-48h] BYREF
  CInpLockGuard *v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v12,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  if ( a2 && (v5 = (__int64)*a2) != 0 )
  {
    if ( *(_QWORD *)(v5 + 72) )
    {
      ObfDereferenceObject(*(PVOID *)(v5 + 72));
      v5 = (__int64)*a2;
    }
    if ( *(_QWORD *)(v5 + 80) )
    {
      ObfDereferenceObject(*(PVOID *)(v5 + 80));
      v5 = (__int64)*a2;
    }
    v6 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)(v5 + 8), *v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    Win32FreePool(v5, (__int64)v7, v4);
    v9 = *((_DWORD *)this + 23) - 1;
    *((_DWORD *)this + 23) = v9;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v8,
        8,
        27,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
        v9);
    }
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( !v14 )
    CInpLockGuard::UnLock((PERESOURCE *)v13, (struct CRefUnRefPointerMsgId *)v12);
  return v10;
}
