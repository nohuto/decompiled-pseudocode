/*
 * XREFs of RIMFreeHidTLCInfo @ 0x1C0056E40
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0059C4C (RIMFreeSpecificDevWorker.c)
 *     rimObsStartStopDeviceRead @ 0x1C0185D78 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00A3C0C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00A413C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreeHidTLCInfo(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  __int64 **v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v5, (struct RIMLOCK *)&gTLCInfoLock);
  if ( *((_DWORD *)a1 + 5) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  if ( *((_DWORD *)a1 + 6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  if ( *((_DWORD *)a1 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  if ( *((_DWORD *)a1 + 9) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  if ( *((_DWORD *)a1 + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  v3 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v4 = (__int64 **)a1[1], *v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (__int64)v4;
  if ( !*((_DWORD *)a1 + 11) )
    Win32FreePool(a1);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v5);
}
