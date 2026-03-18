/*
 * XREFs of ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01A8568
 * Callers:
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C0008E90 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C01A843C (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01A866C (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 */

char __fastcall DelayZonePalmRejection::RemoveDelayZoneFromListInternal(
        DelayZonePalmRejection *this,
        struct CPalmRejectZoneInfo **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rdx
  int v7; // edx
  int v8; // eax
  char v9; // bl
  _BYTE v11[40]; // [rsp+30h] [rbp-48h] BYREF
  CInpLockGuard *v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v11,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  if ( a2 && (v4 = (__int64)*a2) != 0 )
  {
    if ( *(_QWORD *)(v4 + 72) )
    {
      ObfDereferenceObject(*(PVOID *)(v4 + 72));
      v4 = (__int64)*a2;
    }
    if ( *(_QWORD *)(v4 + 80) )
    {
      ObfDereferenceObject(*(PVOID *)(v4 + 80));
      v4 = (__int64)*a2;
    }
    v5 = *(_QWORD *)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *(_QWORD **)(v4 + 8), *v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    Win32FreePool(v4);
    v8 = *((_DWORD *)this + 23) - 1;
    *((_DWORD *)this + 23) = v8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        8,
        27,
        (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
        v8);
    }
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  if ( !v13 )
    CInpLockGuard::UnLock((PERESOURCE *)v12, (struct CRefUnRefPointerMsgId *)v11);
  return v9;
}
