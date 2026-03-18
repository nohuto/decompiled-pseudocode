/*
 * XREFs of RIMSearchHidTLCInfo @ 0x1C00719B4
 * Callers:
 *     RIMCreateHidDesc @ 0x1C006E4C4 (RIMCreateHidDesc.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00718D8 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162D9C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016721C (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C017DC48 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0022E44 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0023390 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     RIMIsLegacyDevice @ 0x1C0071A20 (RIMIsLegacyDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 *__fastcall RIMSearchHidTLCInfo(__int16 a1, __int16 a2)
{
  __int64 *i; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // [rsp+40h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v10,
    (struct _KTHREAD **)&gTLCInfoLock);
  for ( i = (__int64 *)RawInputManagerObject::gHidRequestTable;
        i != (__int64 *)&RawInputManagerObject::gHidRequestTable;
        i = (__int64 *)*i )
  {
    if ( (unsigned int)RIMIsLegacyDevice(*((unsigned __int16 *)i + 8), *((unsigned __int16 *)i + 9)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
    if ( *((_WORD *)i + 8) == a1 && *((_WORD *)i + 9) == a2 )
      goto LABEL_4;
  }
  i = 0LL;
LABEL_4:
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v10);
  return i;
}
