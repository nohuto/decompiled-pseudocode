/*
 * XREFs of RIMSearchHidTLCInfo @ 0x1C0063D88
 * Callers:
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0062084 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMCreateHidDesc @ 0x1C00ABE60 (RIMCreateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01652FC (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016977C (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C0180078 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     RIMIsLegacyDevice @ 0x1C0062054 (RIMIsLegacyDevice.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0064258 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006429C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 *__fastcall RIMSearchHidTLCInfo(__int16 a1, __int16 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *i; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // [rsp+40h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v10, (struct RIMLOCK *)&gTLCInfoLock);
  for ( i = (__int64 *)RawInputManagerObject::gHidRequestTable;
        i != (__int64 *)&RawInputManagerObject::gHidRequestTable;
        i = (__int64 *)*i )
  {
    if ( (unsigned int)RIMIsLegacyDevice(*((unsigned __int16 *)i + 8), *((unsigned __int16 *)i + 9), v4, v5) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v4, v5);
    if ( *((_WORD *)i + 8) == a1 && *((_WORD *)i + 9) == a2 )
      goto LABEL_4;
  }
  i = 0LL;
LABEL_4:
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v10);
  return i;
}
