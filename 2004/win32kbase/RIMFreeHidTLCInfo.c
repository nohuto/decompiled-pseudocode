/*
 * XREFs of RIMFreeHidTLCInfo @ 0x1C0062160
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0063E6C (RIMFreeSpecificDevWorker.c)
 *     rimObsStartStopDeviceRead @ 0x1C0180078 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0064258 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006429C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreeHidTLCInfo(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rax
  __int64 **v7; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8, (struct RIMLOCK *)&gTLCInfoLock);
  if ( *((_DWORD *)a1 + 5) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  if ( *((_DWORD *)a1 + 6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  if ( *((_DWORD *)a1 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  if ( *((_DWORD *)a1 + 9) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  if ( *((_DWORD *)a1 + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  v6 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v7 = (__int64 **)a1[1], *v7 != a1) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  if ( !*((_DWORD *)a1 + 11) )
    Win32FreePool(a1);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8);
}
