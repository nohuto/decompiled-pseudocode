/*
 * XREFs of RIMSearchHidTLCInfo @ 0x1C004C66C
 * Callers:
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C004C590 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMCreateHidDesc @ 0x1C009F54C (RIMCreateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C016B64C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016FACC (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C0185D78 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     RIMIsLegacyDevice @ 0x1C004C6D8 (RIMIsLegacyDevice.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00A3C0C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00A413C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 *__fastcall RIMSearchHidTLCInfo(__int16 a1, __int16 a2)
{
  __int64 *i; // rbx
  __int64 v6; // rcx
  char v7; // [rsp+40h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v7, (struct RIMLOCK *)&gTLCInfoLock);
  for ( i = (__int64 *)RawInputManagerObject::gHidRequestTable;
        i != (__int64 *)&RawInputManagerObject::gHidRequestTable;
        i = (__int64 *)*i )
  {
    if ( (unsigned int)RIMIsLegacyDevice(*((unsigned __int16 *)i + 8), *((unsigned __int16 *)i + 9)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
    if ( *((_WORD *)i + 8) == a1 && *((_WORD *)i + 9) == a2 )
      goto LABEL_4;
  }
  i = 0LL;
LABEL_4:
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v7);
  return i;
}
