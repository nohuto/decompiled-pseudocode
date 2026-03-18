/*
 * XREFs of ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C002EA6C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0051710 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BBA70 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C000C1E0 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C000C308 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C002DB04 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0033D74 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     IsMiPActive @ 0x1C00A21C8 (IsMiPActive.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C00B57A0 (RIMGetVirtualDesktopPhysicalSize.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ConvertPointCoordinates @ 0x1C01AE1A0 (ConvertPointCoordinates.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x1C01B92EC (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01B9C98 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01BC3C8 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_RO.c)
 *     ApiSetEditionGetInputTransform @ 0x1C01C5D88 (ApiSetEditionGetInputTransform.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01CA590 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD v44[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v45; // [rsp+58h] [rbp-B0h]
  __int128 v46; // [rsp+68h] [rbp-A0h]
  _BYTE v47[40]; // [rsp+78h] [rbp-90h] BYREF
  CInpLockGuard *v48; // [rsp+A0h] [rbp-68h]
  int v49; // [rsp+A8h] [rbp-60h]
  _BYTE v50[24]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v51[38]; // [rsp+C8h] [rbp-40h] BYREF

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
  memset(v51, 0, sizeof(v51));
  v14 = *((_QWORD *)a3 + 1);
  v51[0] = *(_QWORD *)(v14 + 8);
  if ( *(_QWORD *)(v14 + 80) )
  {
    v51[4] = *(_QWORD *)(v14 + 80);
  }
  else
  {
    v14 = *((_QWORD *)a3 + 1);
    v51[4] = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  }
  PerformanceCounter = *(LARGE_INTEGER *)(v14 + 88);
  if ( !PerformanceCounter.QuadPart )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = *((_QWORD *)a3 + 1);
  }
  v51[5] = PerformanceCounter.QuadPart;
  LOWORD(v51[1]) = *(_WORD *)(v14 + 24);
  WORD1(v51[1]) = *(_WORD *)(v14 + 36);
  LODWORD(v51[2]) = *(_DWORD *)(v14 + 32);
  HIDWORD(v51[3]) = *(_DWORD *)(v14 + 40);
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD *))(*(_QWORD *)a3 + 8LL))(a3, &v51[1]);
  v51[7] = *a5;
  v16 = v51[7];
  v46 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v45 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize(v50);
  ConvertPointCoordinates(v16);
  v17 = a2[1];
  v18 = a8 | 1;
  v19 = *a2;
  LODWORD(v51[23]) = a6;
  LODWORD(v51[24]) = a7;
  *(_OWORD *)&v51[9] = v19;
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
  *(_OWORD *)&v51[11] = v17;
  if ( (BYTE1(gafAsyncKeyState) & 4) == 0 )
    v23 = v22;
  v24 = a2[3];
  v25 = v23 | 0x40;
  *(_OWORD *)&v51[13] = v20;
  if ( (BYTE1(gafAsyncKeyState) & 0x10) == 0 )
    v25 = v23;
  v26 = a2[4];
  *(_OWORD *)&v51[15] = v24;
  v51[25] = v25;
  v27 = v51[35];
  v51[20] = *((_QWORD *)a2 + 11);
  v51[19] = 0LL;
  *(_OWORD *)&v51[17] = v26;
  *(_OWORD *)&v51[21] = a2[6];
  if ( (BYTE4(gafAsyncKeyState) & 4) != 0 )
  {
    v27 = LODWORD(v51[35]) | 8;
    LODWORD(v51[35]) |= 8u;
  }
  if ( (BYTE4(gafAsyncKeyState) & 1) != 0 )
    LODWORD(v51[35]) = v27 | 4;
  v28 = *((_DWORD *)a3 + 4);
  if ( v28 != 1 )
    goto LABEL_27;
  if ( *(_DWORD *)(*((_QWORD *)a3 + 1) + 148LL) == 1 )
  {
    LODWORD(v51[34]) |= 1u;
LABEL_27:
    if ( v28 == 3 )
    {
      v29 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
      CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
        (CInpLockGuardExclusiveIfNeeded *)v47,
        (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
        0LL);
      v30 = (*(_DWORD *)v29)++;
      if ( v30 == -1 )
      {
        *(_DWORD *)v29 = 1;
        ApiSetResetLastSeenFrameId();
      }
      if ( !v49 )
        CInpLockGuard::UnLock(v48, (struct CRefUnRefPointerMsgId *)v47);
      HIDWORD(v51[34]) = v30;
      v11 = a1;
    }
  }
  ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)a2);
  if ( ThreadInfo )
    HIDWORD(v51[23]) = IsMiPActive(ThreadInfo, 0LL);
  ApiSetEditionGetInputTransform(a2, &v51[26]);
  if ( v8 != 2 )
    goto LABEL_42;
  if ( !v12 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
  if ( CMouseProcessor::BufferedMouseInputList::AddInputToList(
         (CMouseProcessor::BufferedMouseInputList *)(v11 + 3840),
         a3,
         (struct CInputDest *)a2,
         a4,
         &v51[6]) )
  {
LABEL_42:
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v44);
    InputConfig::Mouse::RegionFromPoint(*a5, (struct CLockedInputSpaceRegion *)v44);
    if ( v44[0] )
      *(_OWORD *)((char *)&v51[35] + 4) = *(_OWORD *)v44[0];
    ExReleaseResourceLite(*(PERESOURCE *)v44[1]);
    KeLeaveCriticalRegion();
    InputExtensibilityCallout::CoreMsgSendMessage(v37, 16);
    InputTraceLogging::Mouse::SendToUserMode(v51, v8);
    if ( v8 == 2 && *(_DWORD *)a2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
    return v12 ^ 1u;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v36) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v36,
        6,
        52,
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    InputTraceLogging::Mouse::DropInput(*(_QWORD *)(*((_QWORD *)a3 + 1) + 88LL), 21LL);
    return 2LL;
  }
}
