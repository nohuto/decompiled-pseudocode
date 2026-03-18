/*
 * XREFs of RIMFreeHidTLCInfo @ 0x1C00BE500
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C00C2D7C (RIMFreeSpecificDevWorker.c)
 *     rimObsStartStopDeviceRead @ 0x1C017DC48 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0022E44 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0023390 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreeHidTLCInfo(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  _QWORD *v7; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8, (struct _KTHREAD **)&gTLCInfoLock);
  if ( *(_DWORD *)(a1 + 20) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  if ( *(_DWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  if ( *(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  if ( *(_DWORD *)(a1 + 36) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  if ( *(_DWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  v6 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v7 = *(_QWORD **)(a1 + 8), *v7 != a1) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( !*(_DWORD *)(a1 + 44) )
    Win32FreePool(a1);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8);
}
