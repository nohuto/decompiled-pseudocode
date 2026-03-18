/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1C0062084
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00ABE60 (RIMCreateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01652FC (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016977C (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C0180078 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     RIMIsLegacyDevice @ 0x1C0062054 (RIMIsLegacyDevice.c)
 *     RIMSearchHidTLCInfo @ 0x1C0063D88 (RIMSearchHidTLCInfo.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0064258 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006429C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_WORD *__fastcall RIMAllocateAndLinkHidTLCInfo(unsigned __int16 a1, unsigned __int16 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _WORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _WORD *v15; // rax
  int v16; // edx
  _WORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  char v21; // [rsp+50h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v21, (struct RIMLOCK *)&gTLCInfoLock);
  v10 = 0LL;
  if ( (unsigned int)RIMIsLegacyDevice(a1, a2, v4, v5) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  if ( RIMSearchHidTLCInfo(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
  v15 = Win32AllocPoolZInit(0x30uLL, 1886417746LL);
  v17 = v15;
  if ( v15 )
  {
    v15[8] = a1;
    v15[9] = a2;
    v18 = RawInputManagerObject::gHidRequestTable;
    if ( *(_UNKNOWN **)(RawInputManagerObject::gHidRequestTable + 8LL) != &RawInputManagerObject::gHidRequestTable )
      __fastfail(3u);
    *((_QWORD *)v17 + 1) = &RawInputManagerObject::gHidRequestTable;
    *(_QWORD *)v17 = v18;
    *(_QWORD *)(v18 + 8) = v17;
    v19 = qword_1C02503E0;
    RawInputManagerObject::gHidRequestTable = v17;
    while ( (__int64 *)v19 != &qword_1C02503E0 )
    {
      if ( *(_WORD *)(v19 + 16) == a1 )
      {
        *((_DWORD *)v17 + 8) = *(_DWORD *)(v19 + 20);
        break;
      }
      v19 = *(_QWORD *)v19;
    }
    v10 = v17;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 10, (__int64)&WPP_a0b5b16cda2033ba1f9b108e5e9119e6_Traceguids);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v21);
  return v10;
}
