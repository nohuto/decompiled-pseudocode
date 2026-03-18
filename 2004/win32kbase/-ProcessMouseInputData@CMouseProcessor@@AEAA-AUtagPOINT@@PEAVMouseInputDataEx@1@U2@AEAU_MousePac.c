/*
 * XREFs of ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0071500
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0070254 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01BD8AC (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00100E4 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C0010360 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C0046244 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MouseP.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C005EDB0 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     ?CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z @ 0x1C00706F0 (-CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C007169C (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0071B9C (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 */

struct tagPOINT __fastcall CMouseProcessor::ProcessMouseInputData(
        LARGE_INTEGER *this,
        struct tagPOINT *a2,
        struct tagPOINT a3,
        struct _MousePacketPerf *a4,
        struct _MOUSE_INPUT_DATA *QuadPart,
        const struct tagUIPI_INFO_INT *a6,
        struct tagUIPI_INFO_INT *a7)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct _MOUSE_INPUT_DATA *v12; // r15
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  __m128i *UnionRect; // rax
  char v18; // r11
  __int64 v19; // r10
  __m128i v20; // xmm0
  struct tagRECT v21; // [rsp+30h] [rbp-10h] BYREF
  struct tagPOINT v22; // [rsp+80h] [rbp+40h] BYREF
  __int64 *v23; // [rsp+98h] [rbp+58h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v23, "ProcessMouseInputData", 0LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = QuadPart;
  v22 = (struct tagPOINT)a4;
  *(LARGE_INTEGER *)&QuadPart->UnitId = PerformanceCounter;
  QuadPart = (struct _MOUSE_INPUT_DATA *)this[430].QuadPart;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a3,
                          8LL)
    || (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a3,
                          0x8000LL) )
  {
    CMouseProcessor::QueueMouseEvent(
      (CMouseProcessor *)this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      (const struct _SUBPIXELS *)&QuadPart,
      a7,
      0LL);
  }
  else
  {
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                            a3,
                            4LL) )
    {
      v22 = *(struct tagPOINT *)(*(_QWORD *)&a3 + 12LL);
      QuadPart = 0LL;
      UnionRect = (__m128i *)InputConfig::Mouse::GetUnionRect(&v21);
      v18 = gptInd;
      v16 = (__int64)v22;
      v19 = 3LL * (unsigned int)gptInd;
      v20 = _mm_srli_si128(*UnionRect, 8);
      v14 = HIDWORD(UnionRect->m128i_i64[0]);
      v15 = LOWORD(v22.y) | (unsigned int)((v20.m128i_i32[1] - (_DWORD)v14 - 1) << 16);
      *((_DWORD *)&gaptMouse + 2 * v19) = LOWORD(v22.x) | ((unsigned __int16)(v20.m128i_i16[0]
                                                                            - UnionRect->m128i_i64[0]
                                                                            - 1) << 16);
      *((_DWORD *)&gaptMouse + 2 * v19 + 1) = v15;
      *((_DWORD *)&gaptMouse + 2 * v19 + 2) = *(_DWORD *)(*(_QWORD *)&a3 + 48LL);
      *((_QWORD *)&gaptMouse + v19 + 2) = *(unsigned int *)(*(_QWORD *)&a3 + 20LL);
      gptInd = (v18 + 1) & 0x3F;
    }
    else
    {
      CMouseProcessor::GetMouseCoord(
        (CMouseProcessor *)this,
        *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
        &v22,
        (struct _SUBPIXELS *)&QuadPart);
      v16 = (__int64)v22;
    }
    if ( a6
      && !*(_WORD *)(*(_QWORD *)&a3 + 4LL)
      && !*((_WORD *)a6 + 2)
      && ((*((_BYTE *)a6 + 2) ^ *(_BYTE *)(*(_QWORD *)&a3 + 2LL)) & 1) == 0 )
    {
      InputTraceLogging::Mouse::CoalesceInput(*(_QWORD *)(*(_QWORD *)&a3 + 56LL), v14, v16, v15);
      goto LABEL_4;
    }
    CMouseProcessor::CommitMousePosAndMoveCursor(
      (CMouseProcessor *)this,
      *(struct CMouseProcessor::MouseInputDataEx **)&a3,
      (struct tagPOINT)v16,
      (struct _MousePacketPerf *)v12);
    CMouseProcessor::QueueMouseEvent(
      (CMouseProcessor *)this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      (const struct _SUBPIXELS *)&QuadPart,
      a7,
      &v22);
    v22 = gptCursorAsync;
  }
  *(LARGE_INTEGER *)&v12->RawButtons = KeQueryPerformanceCounter(0LL);
  RIMLockExclusive((__int64)&this[427]);
  MousePerfSummary::CollectMousePacketPerfTelemetry(this + 350, (const struct _MousePacketPerf *)v12);
  this[428].QuadPart = 0LL;
  ExReleasePushLockExclusiveEx(&this[427], 0LL);
  KeLeaveCriticalRegion();
LABEL_4:
  *a2 = v22;
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v23);
  return (struct tagPOINT)a2;
}
