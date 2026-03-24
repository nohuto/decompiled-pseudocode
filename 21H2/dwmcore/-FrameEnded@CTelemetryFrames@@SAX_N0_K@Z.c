/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180071888
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18006DBD0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180028740 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B23CC (McGenEventWrite_EventWriteTransfer.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x1800C74A8 (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?UpdateSnapshot@_unnamed_type__etwEndFrameSnapshot_@?A0xd209ef2d@@QEAAXXZ @ 0x1801528B0 (-UpdateSnapshot@_unnamed_type__etwEndFrameSnapshot_@-A0xd209ef2d@@QEAAXXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180152A88 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180152AF8 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer @ 0x180152B78 (McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer.c)
 */

void __fastcall CTelemetryFrames::FrameEnded(char a1, char a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  HANDLE CurrentThread; // rax
  BOOL v7; // eax
  LARGE_INTEGER v8; // rcx
  int v9; // r8d
  void *v10; // rdx
  int v11; // ecx
  unsigned __int64 CycleTime; // [rsp+80h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+88h] [rbp-30h] BYREF

  v3 = 0LL;
  if ( a2 )
    dword_1803472B0 |= 0x80u;
  byte_180347410 = dword_180347338 != `anonymous namespace'::_frameStartSnaphot;
  if ( a1 )
  {
    ++dword_1803472BC;
    v5 = ::CycleTime;
    CycleTime = 0LL;
    if ( qword_180347128 )
    {
      CurrentThread = GetCurrentThread();
      v7 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v3 = CycleTime;
      if ( v7 )
        qword_1803472D8 += CycleTime - qword_180347128;
    }
    v8 = g_qpcFrequency;
    *((_QWORD *)&xmmword_180347400 + 1) = a3;
    qword_180347310 = v3 - v5;
    dword_180345A90 = 3;
    v9 = dword_1803472D4;
    if ( 1000000 * ((unsigned __int64)(a3 - qword_180347118) / g_qpcFrequency.QuadPart)
       + 1000000 * ((unsigned __int64)(a3 - qword_180347118) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart > (unsigned int)dword_1803472D4 )
      v9 = 1000000 * ((unsigned __int64)(a3 - qword_180347118) / g_qpcFrequency.QuadPart)
         + 1000000 * ((unsigned __int64)(a3 - qword_180347118) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    dword_1803472D4 = v9;
  }
  else
  {
    if ( dword_180347338 == `anonymous namespace'::_frameStartSnaphot
      && dword_180347340 == dword_180347630
      && dword_18034733C == dword_18034762C
      && dword_180347344 == dword_180347634 )
    {
      ++dword_1803472C4;
      v10 = &unk_1803472E8;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_UNPRESENTED_FRAME,
          a3,
          1LL,
          v13);
      ++dword_1803472C0;
      v10 = &unk_1803472E0;
    }
    anonymous_namespace_::MeasureCyclesDelta(&qword_180347128, v10);
    if ( byte_180347124 )
    {
      ++dword_180347354;
      if ( dword_180345A90 )
        --dword_180345A90;
      else
        ++dword_1803472AC;
    }
    QueryPerformanceCounter((LARGE_INTEGER *)&CycleTime);
    v8 = g_qpcFrequency;
    *((_QWORD *)&xmmword_180347400 + 1) = CycleTime;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer(
      dword_180347380 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 3),
      dword_180347398 - xmmword_180347180,
      dword_1803473B4 - `anonymous namespace'::_etwEndFrameSnapshot,
      dword_1803473B8 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 1),
      dword_1803473BC - *(&`anonymous namespace'::_etwEndFrameSnapshot + 8),
      dword_180347380 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 12),
      dword_180347398 - xmmword_180347180,
      dword_18034738C - BYTE4(xmmword_180347180),
      dword_180347268 - BYTE8(xmmword_180347180),
      dword_18034726C - BYTE12(xmmword_180347180),
      dword_180347270 - xmmword_180347190,
      dword_180347274 - BYTE4(xmmword_180347190),
      dword_180347278 - BYTE8(xmmword_180347190),
      dword_18034727C - BYTE12(xmmword_180347190),
      dword_180347280 - xmmword_1803471A0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &ENDFRAME_PRIMITIVE_GROUP_STATS,
        (unsigned int)(dword_18034736C - DWORD1(xmmword_1803471A0)),
        (unsigned int)(dword_180347370 - DWORD2(xmmword_1803471A0)));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qqq_EventWriteTransfer(
          v11,
          (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
          dword_180347374 - HIDWORD(xmmword_1803471A0),
          dword_180347378 - xmmword_1803471B0,
          dword_18034737C - BYTE4(xmmword_1803471B0));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0qq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
            (unsigned int)(dword_180347390 - DWORD2(xmmword_1803471B0)),
            (unsigned int)(dword_180347394 - HIDWORD(xmmword_1803471B0)));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0qq_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
              (unsigned int)(dword_18034739C - qword_1803471C0),
              (unsigned int)(dword_1803473A0 - HIDWORD(qword_1803471C0)));
        }
      }
    }
    `anonymous namespace'::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot((_anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_ *)&`anonymous namespace'::_etwEndFrameSnapshot);
    v8 = g_qpcFrequency;
  }
  if ( 1000 * ((unsigned __int64)(qword_180347118 - xmmword_180347400) / v8.QuadPart)
     + 1000 * ((unsigned __int64)(qword_180347118 - xmmword_180347400) % v8.QuadPart) / v8.QuadPart >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
}
