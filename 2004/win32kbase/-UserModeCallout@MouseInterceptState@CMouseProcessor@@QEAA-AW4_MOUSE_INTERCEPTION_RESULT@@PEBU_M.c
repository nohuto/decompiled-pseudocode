/*
 * XREFs of ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01BE904
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01BB85C (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C01BD270 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01A00F0 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::UserModeCallout(__int64 a1, __int128 *a2, int *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  unsigned int v11; // ebx
  __int64 *v13[4]; // [rsp+20h] [rbp-89h] BYREF
  _DWORD v14[2]; // [rsp+40h] [rbp-69h] BYREF
  __int128 v15; // [rsp+48h] [rbp-61h]
  __int128 v16; // [rsp+58h] [rbp-51h]
  __int128 v17; // [rsp+68h] [rbp-41h]
  __int128 v18; // [rsp+78h] [rbp-31h]
  __int64 v19; // [rsp+88h] [rbp-21h]
  _BYTE v20[80]; // [rsp+90h] [rbp-19h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v13, "MouseInterceptionCallout", 0LL);
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  memset(v20, 0, sizeof(v20));
  v6 = *a2;
  v14[0] = 0;
  v7 = a2[1];
  v13[3] = 0LL;
  v14[1] = 1;
  v15 = v6;
  v8 = a2[2];
  v16 = v7;
  v9 = 0LL;
  v17 = v8;
  v10 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  if ( gpInputExtensibilityCallout )
  {
    InputExtensibilityCallout::CallUserModeLockFree(
      gpInputExtensibilityCallout,
      (struct _CLIENT_DEVICE_NOTIFICATION *)v14);
    v10 = v19;
    v9 = v18;
  }
  *(_OWORD *)a3 = v9;
  *((_QWORD *)a3 + 2) = v10;
  v11 = *a3;
  RIMLockExclusive(a1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v13);
  return v11;
}
