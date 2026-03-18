/*
 * XREFs of ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01BC58C
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01B94EC (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C01BAF00 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C019DD50 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::UserModeCallout(__int64 a1, __int128 *a2, int *a3, __int64 a4)
{
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  unsigned int v12; // ebx
  __int64 *v14[4]; // [rsp+20h] [rbp-89h] BYREF
  _DWORD v15[2]; // [rsp+40h] [rbp-69h] BYREF
  __int128 v16; // [rsp+48h] [rbp-61h]
  __int128 v17; // [rsp+58h] [rbp-51h]
  __int128 v18; // [rsp+68h] [rbp-41h]
  __int128 v19; // [rsp+78h] [rbp-31h]
  __int64 v20; // [rsp+88h] [rbp-21h]
  _BYTE v21[80]; // [rsp+90h] [rbp-19h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v14, "MouseInterceptionCallout", 0LL, a4);
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  memset(v21, 0, sizeof(v21));
  v7 = *a2;
  v15[0] = 0;
  v8 = a2[1];
  v14[3] = 0LL;
  v15[1] = 1;
  v16 = v7;
  v9 = a2[2];
  v17 = v8;
  v10 = 0LL;
  v18 = v9;
  v11 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  if ( gpInputExtensibilityCallout )
  {
    InputExtensibilityCallout::CallUserModeLockFree(
      gpInputExtensibilityCallout,
      (struct _CLIENT_DEVICE_NOTIFICATION *)v15);
    v11 = v20;
    v10 = v19;
  }
  *(_OWORD *)a3 = v10;
  *((_QWORD *)a3 + 2) = v11;
  v12 = *a3;
  RIMLockExclusive(a1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v14);
  return v12;
}
