/*
 * XREFs of ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C0069ADC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0066094 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C3B64 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     IsMiPActive @ 0x1C0031048 (IsMiPActive.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C0047C60 (RIMGetVirtualDesktopPhysicalSize.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C0063F80 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0065904 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C00A6138 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ConvertPointCoordinates @ 0x1C01B6280 (ConvertPointCoordinates.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x1C01C13BC (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01C1D68 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01C44BC (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_RO.c)
 *     ApiSetEditionGetInputTransform @ 0x1C01CE088 (ApiSetEditionGetInputTransform.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01D2890 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ForwardInputToISM(
        __int64 a1,
        __int128 *a2,
        const struct CMouseProcessor::CMouseEvent *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4,
        struct tagPOINT *a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // r14d
  __int64 v11; // r13
  unsigned __int8 v12; // r15
  __int64 v14; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  int v16; // ebx
  __int128 v17; // xmm1
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int128 v26; // xmm0
  int v27; // eax
  int v28; // ecx
  struct A0xad387374::CFrameIdGenerator *v29; // rbx
  int v30; // r13d
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _QWORD v38[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+58h] [rbp-B0h]
  __int128 v40; // [rsp+68h] [rbp-A0h]
  _BYTE v41[40]; // [rsp+78h] [rbp-90h] BYREF
  CInpLockGuard *v42; // [rsp+A0h] [rbp-68h]
  int v43; // [rsp+A8h] [rbp-60h]
  _BYTE v44[24]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v45[38]; // [rsp+C8h] [rbp-40h] BYREF

  v8 = *((_DWORD *)a2 + 1);
  v11 = a1;
  if ( v8 - 2 <= 1 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( v8 != 1 )
      return 1LL;
  }
  memset(v45, 0, sizeof(v45));
  v14 = *((_QWORD *)a3 + 1);
  v45[0] = *(_QWORD *)(v14 + 8);
  if ( *(_QWORD *)(v14 + 80) )
  {
    v45[4] = *(_QWORD *)(v14 + 80);
  }
  else
  {
    v14 = *((_QWORD *)a3 + 1);
    v45[4] = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  }
  PerformanceCounter = *(LARGE_INTEGER *)(v14 + 88);
  if ( !PerformanceCounter.QuadPart )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = *((_QWORD *)a3 + 1);
  }
  v45[5] = PerformanceCounter.QuadPart;
  LOWORD(v45[1]) = *(_WORD *)(v14 + 24);
  WORD1(v45[1]) = *(_WORD *)(v14 + 36);
  LODWORD(v45[2]) = *(_DWORD *)(v14 + 32);
  HIDWORD(v45[3]) = *(_DWORD *)(v14 + 40);
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD *))(*(_QWORD *)a3 + 8LL))(a3, &v45[1]);
  v45[7] = *a5;
  v16 = v45[7];
  v40 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v39 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize((__int64)v44);
  ConvertPointCoordinates(v16);
  v17 = a2[1];
  v18 = a8 | 1;
  v19 = *a2;
  LODWORD(v45[23]) = a6;
  LODWORD(v45[24]) = a7;
  *(_OWORD *)&v45[9] = v19;
  if ( (gafAsyncKeyState & 4) == 0 )
    v18 = a8;
  v20 = a2[2];
  v21 = v18 | 2;
  if ( (gafAsyncKeyState & 0x10) == 0 )
    v21 = v18;
  v22 = v21 | 0x10;
  if ( (BYTE1(gafAsyncKeyState) & 1) == 0 )
    v22 = v21;
  v23 = v22 | 0x20;
  *(_OWORD *)&v45[11] = v17;
  if ( (BYTE1(gafAsyncKeyState) & 4) == 0 )
    v23 = v22;
  v24 = a2[3];
  v25 = v23 | 0x40;
  *(_OWORD *)&v45[13] = v20;
  if ( (BYTE1(gafAsyncKeyState) & 0x10) == 0 )
    v25 = v23;
  v26 = a2[4];
  *(_OWORD *)&v45[15] = v24;
  v45[25] = v25;
  v27 = v45[35];
  v45[20] = *((_QWORD *)a2 + 11);
  v45[19] = 0LL;
  *(_OWORD *)&v45[17] = v26;
  *(_OWORD *)&v45[21] = a2[6];
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0 )
  {
    v27 = LODWORD(v45[35]) | 8;
    LODWORD(v45[35]) |= 8u;
  }
  if ( (BYTE4(gafAsyncKeyState) & 1) != 0 )
    LODWORD(v45[35]) = v27 | 4;
  v28 = *((_DWORD *)a3 + 4);
  if ( v28 != 1 )
    goto LABEL_27;
  if ( *(_DWORD *)(*((_QWORD *)a3 + 1) + 148LL) == 1 )
  {
    LODWORD(v45[34]) |= 1u;
LABEL_27:
    if ( v28 == 3 )
    {
      v29 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
      CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
        (CInpLockGuardExclusiveIfNeeded *)v41,
        (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
        0LL);
      v30 = (*(_DWORD *)v29)++;
      if ( v30 == -1 )
      {
        *(_DWORD *)v29 = 1;
        ApiSetResetLastSeenFrameId();
      }
      if ( !v43 )
        CInpLockGuard::UnLock(v42, (struct CRefUnRefPointerMsgId *)v41);
      HIDWORD(v45[34]) = v30;
      v11 = a1;
    }
  }
  ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)a2);
  if ( ThreadInfo )
    HIDWORD(v45[23]) = IsMiPActive((__int64)ThreadInfo, 0LL);
  ApiSetEditionGetInputTransform(a2, &v45[26]);
  if ( v8 != 2 )
    goto LABEL_42;
  if ( !v12 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
  if ( CMouseProcessor::BufferedMouseInputList::AddInputToList(
         (CMouseProcessor::BufferedMouseInputList *)(v11 + 3912),
         a3,
         (struct CInputDest *)a2,
         a4,
         &v45[6]) )
  {
LABEL_42:
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v38);
    InputConfig::Mouse::RegionFromPoint(*a5, (struct CLockedInputSpaceRegion *)v38);
    if ( v38[0] )
      *(_OWORD *)((char *)&v45[35] + 4) = *(_OWORD *)v38[0];
    ExReleaseResourceLite(*(PERESOURCE *)v38[1]);
    KeLeaveCriticalRegion();
    InputExtensibilityCallout::CoreMsgSendMessage(v34, 16);
    InputTraceLogging::Mouse::SendToUserMode(v45, v8);
    if ( v8 == 2 && *(_DWORD *)a2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
    return v12 ^ 1u;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v33) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v33,
        6,
        52,
        (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
    }
    InputTraceLogging::Mouse::DropInput(*(_QWORD *)(*((_QWORD *)a3 + 1) + 88LL), 21LL);
    return 2LL;
  }
}
