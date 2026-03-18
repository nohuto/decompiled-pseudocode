/*
 * XREFs of ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00359EC
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0035550 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01BB53C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C000BC6C (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C000BEE8 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0035B88 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0036088 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z @ 0x1C0036AB8 (-CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C00A7534 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MouseP.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C00BF0E0 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 */

struct tagPOINT __fastcall CMouseProcessor::ProcessMouseInputData(
        CMouseProcessor *this,
        struct tagPOINT *a2,
        struct tagPOINT a3,
        struct _MousePacketPerf *a4,
        struct _MOUSE_INPUT_DATA *a5,
        const struct tagUIPI_INFO_INT *a6,
        struct tagUIPI_INFO_INT *a7)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct _MOUSE_INPUT_DATA *v12; // r15
  struct tagPOINT v14; // r8
  __m128i *UnionRect; // rax
  char v16; // r11
  __int64 v17; // r10
  __m128i v18; // xmm0
  unsigned int v19; // r9d
  struct tagRECT v20; // [rsp+30h] [rbp-10h] BYREF
  struct tagPOINT v21; // [rsp+80h] [rbp+40h] BYREF
  char v22; // [rsp+98h] [rbp+58h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v22,
    "ProcessMouseInputData",
    0LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = a5;
  v21 = (struct tagPOINT)a4;
  *(LARGE_INTEGER *)&a5->UnitId = PerformanceCounter;
  a5 = (struct _MOUSE_INPUT_DATA *)*((_QWORD *)this + 430);
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a3,
                          8LL)
    || (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a3,
                          0x8000LL) )
  {
    CMouseProcessor::QueueMouseEvent(
      this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      (const struct _SUBPIXELS *)&a5,
      a7,
      0LL);
  }
  else
  {
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                            a3,
                            4LL) )
    {
      v21 = *(struct tagPOINT *)(*(_QWORD *)&a3 + 12LL);
      a5 = 0LL;
      UnionRect = (__m128i *)InputConfig::Mouse::GetUnionRect(&v20);
      v16 = gptInd;
      v14 = v21;
      v17 = 3LL * (unsigned int)gptInd;
      v18 = _mm_srli_si128(*UnionRect, 8);
      v19 = LOWORD(v21.y) | (unsigned int)((v18.m128i_i32[1] - HIDWORD(UnionRect->m128i_i64[0]) - 1) << 16);
      *((_DWORD *)&gaptMouse + 2 * v17) = LOWORD(v21.x) | ((unsigned __int16)(v18.m128i_i16[0]
                                                                            - UnionRect->m128i_i64[0]
                                                                            - 1) << 16);
      *((_DWORD *)&gaptMouse + 2 * v17 + 1) = v19;
      *((_DWORD *)&gaptMouse + 2 * v17 + 2) = *(_DWORD *)(*(_QWORD *)&a3 + 48LL);
      *((_QWORD *)&gaptMouse + v17 + 2) = *(unsigned int *)(*(_QWORD *)&a3 + 20LL);
      gptInd = (v16 + 1) & 0x3F;
    }
    else
    {
      CMouseProcessor::GetMouseCoord(
        this,
        *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
        &v21,
        (struct _SUBPIXELS *)&a5);
      v14 = v21;
    }
    if ( a6
      && !*(_WORD *)(*(_QWORD *)&a3 + 4LL)
      && !*((_WORD *)a6 + 2)
      && ((*((_BYTE *)a6 + 2) ^ *(_BYTE *)(*(_QWORD *)&a3 + 2LL)) & 1) == 0 )
    {
      InputTraceLogging::Mouse::CoalesceInput(*(_QWORD *)(*(_QWORD *)&a3 + 56LL));
      goto LABEL_4;
    }
    CMouseProcessor::CommitMousePosAndMoveCursor(
      this,
      *(struct CMouseProcessor::MouseInputDataEx **)&a3,
      v14,
      (struct _MousePacketPerf *)v12);
    CMouseProcessor::QueueMouseEvent(
      this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      (const struct _SUBPIXELS *)&a5,
      a7,
      &v21);
    v21 = gptCursorAsync;
  }
  *(LARGE_INTEGER *)&v12->RawButtons = KeQueryPerformanceCounter(0LL);
  RIMLockExclusive((char *)this + 3416);
  MousePerfSummary::CollectMousePacketPerfTelemetry(
    (CMouseProcessor *)((char *)this + 2800),
    (const struct _MousePacketPerf *)v12);
  *((_QWORD *)this + 428) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 3416, 0LL);
  KeLeaveCriticalRegion();
LABEL_4:
  *a2 = v21;
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v22);
  return (struct tagPOINT)a2;
}
