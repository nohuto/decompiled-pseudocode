/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1C004C590
 * Callers:
 *     RIMCreateHidDesc @ 0x1C009F54C (RIMCreateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C016B64C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016FACC (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C0185D78 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     RIMSearchHidTLCInfo @ 0x1C004C66C (RIMSearchHidTLCInfo.c)
 *     RIMIsLegacyDevice @ 0x1C004C6D8 (RIMIsLegacyDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00A3C0C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00A413C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAllocateAndLinkHidTLCInfo(unsigned __int16 a1, unsigned __int16 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  char v13; // [rsp+50h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13, (struct RIMLOCK *)&gTLCInfoLock);
  v5 = 0LL;
  if ( (unsigned int)RIMIsLegacyDevice(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  if ( RIMSearchHidTLCInfo(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  v7 = Win32AllocPoolZInit(0x30uLL);
  v9 = v7;
  if ( v7 )
  {
    *(_WORD *)(v7 + 16) = a1;
    *(_WORD *)(v7 + 18) = a2;
    v10 = RawInputManagerObject::gHidRequestTable;
    if ( *(_UNKNOWN **)(RawInputManagerObject::gHidRequestTable + 8LL) != &RawInputManagerObject::gHidRequestTable )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = &RawInputManagerObject::gHidRequestTable;
    *(_QWORD *)v9 = v10;
    *(_QWORD *)(v10 + 8) = v9;
    v11 = qword_1C0256380;
    RawInputManagerObject::gHidRequestTable = v9;
    while ( (__int64 *)v11 != &qword_1C0256380 )
    {
      if ( *(_WORD *)(v11 + 16) == a1 )
      {
        *(_DWORD *)(v9 + 32) = *(_DWORD *)(v11 + 20);
        break;
      }
      v11 = *(_QWORD *)v11;
    }
    v5 = v9;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 10, (__int64)&WPP_a0b5b16cda2033ba1f9b108e5e9119e6_Traceguids);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13);
  return v5;
}
