/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1C00718D8
 * Callers:
 *     RIMCreateHidDesc @ 0x1C006E4C4 (RIMCreateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162D9C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016721C (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C017DC48 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0022E44 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0023390 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     RIMSearchHidTLCInfo @ 0x1C00719B4 (RIMSearchHidTLCInfo.c)
 *     RIMIsLegacyDevice @ 0x1C0071A20 (RIMIsLegacyDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_WORD *__fastcall RIMAllocateAndLinkHidTLCInfo(unsigned __int16 a1, unsigned __int16 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _WORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _WORD *v13; // rax
  int v14; // edx
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  char v19; // [rsp+50h] [rbp+18h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v19,
    (struct _KTHREAD **)&gTLCInfoLock);
  v8 = 0LL;
  if ( (unsigned int)RIMIsLegacyDevice(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  if ( RIMSearchHidTLCInfo(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  v13 = Win32AllocPoolZInit(0x30uLL, 0x70707352u);
  v15 = v13;
  if ( v13 )
  {
    v13[8] = a1;
    v13[9] = a2;
    v16 = RawInputManagerObject::gHidRequestTable;
    if ( *(_UNKNOWN **)(RawInputManagerObject::gHidRequestTable + 8LL) != &RawInputManagerObject::gHidRequestTable )
      __fastfail(3u);
    *((_QWORD *)v15 + 1) = &RawInputManagerObject::gHidRequestTable;
    *(_QWORD *)v15 = v16;
    *(_QWORD *)(v16 + 8) = v15;
    v17 = qword_1C024E3F0;
    RawInputManagerObject::gHidRequestTable = v15;
    while ( (__int64 *)v17 != &qword_1C024E3F0 )
    {
      if ( *(_WORD *)(v17 + 16) == a1 )
      {
        *((_DWORD *)v15 + 8) = *(_DWORD *)(v17 + 20);
        break;
      }
      v17 = *(_QWORD *)v17;
    }
    v8 = v15;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 10, (__int64)&WPP_a0b5b16cda2033ba1f9b108e5e9119e6_Traceguids);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v19);
  return v8;
}
