/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x18005DB78
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180059EC0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180028710 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x1800C37CC (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D600C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?UpdateSnapshot@_unnamed_type__etwEndFrameSnapshot_@?A0xd209ef2d@@QEAAXXZ @ 0x1801540E0 (-UpdateSnapshot@_unnamed_type__etwEndFrameSnapshot_@-A0xd209ef2d@@QEAAXXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801542B8 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180154328 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer @ 0x1801543A8 (McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer.c)
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
    dword_180345290 |= 0x80u;
  byte_1803453F0 = dword_180345318 != `anonymous namespace'::_frameStartSnaphot;
  if ( a1 )
  {
    ++dword_18034529C;
    v5 = ::CycleTime;
    CycleTime = 0LL;
    if ( qword_180345118 )
    {
      CurrentThread = GetCurrentThread();
      v7 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v3 = CycleTime;
      if ( v7 )
        qword_1803452B8 += CycleTime - qword_180345118;
    }
    v8 = g_qpcFrequency;
    *((_QWORD *)&xmmword_1803453E0 + 1) = a3;
    qword_1803452F0 = v3 - v5;
    dword_180343A90 = 3;
    v9 = dword_1803452B4;
    if ( 1000000 * ((unsigned __int64)(a3 - qword_180345108) / g_qpcFrequency.QuadPart)
       + 1000000 * ((unsigned __int64)(a3 - qword_180345108) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart > (unsigned int)dword_1803452B4 )
      v9 = 1000000 * ((unsigned __int64)(a3 - qword_180345108) / g_qpcFrequency.QuadPart)
         + 1000000 * ((unsigned __int64)(a3 - qword_180345108) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    dword_1803452B4 = v9;
  }
  else
  {
    if ( dword_180345318 == `anonymous namespace'::_frameStartSnaphot
      && dword_180345320 == dword_180345760
      && dword_18034531C == dword_18034575C
      && dword_180345324 == dword_180345764 )
    {
      ++dword_1803452A4;
      v10 = &unk_1803452C8;
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
      ++dword_1803452A0;
      v10 = &unk_1803452C0;
    }
    anonymous_namespace_::MeasureCyclesDelta(&qword_180345118, v10);
    if ( byte_180345114 )
    {
      ++dword_180345334;
      if ( dword_180343A90 )
        --dword_180343A90;
      else
        ++dword_18034528C;
    }
    QueryPerformanceCounter((LARGE_INTEGER *)&CycleTime);
    v8 = g_qpcFrequency;
    *((_QWORD *)&xmmword_1803453E0 + 1) = CycleTime;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer(
      dword_180345360 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 3),
      dword_180345378 - xmmword_180345170,
      dword_180345394 - `anonymous namespace'::_etwEndFrameSnapshot,
      dword_180345398 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 1),
      dword_18034539C - *(&`anonymous namespace'::_etwEndFrameSnapshot + 8),
      dword_180345360 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 12),
      dword_180345378 - xmmword_180345170,
      dword_18034536C - BYTE4(xmmword_180345170),
      dword_180345248 - BYTE8(xmmword_180345170),
      dword_18034524C - BYTE12(xmmword_180345170),
      dword_180345250 - xmmword_180345180,
      dword_180345254 - BYTE4(xmmword_180345180),
      dword_180345258 - BYTE8(xmmword_180345180),
      dword_18034525C - BYTE12(xmmword_180345180),
      dword_180345260 - xmmword_180345190);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &ENDFRAME_PRIMITIVE_GROUP_STATS,
        (unsigned int)(dword_18034534C - DWORD1(xmmword_180345190)),
        (unsigned int)(dword_180345350 - DWORD2(xmmword_180345190)));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qqq_EventWriteTransfer(
          v11,
          (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
          dword_180345354 - HIDWORD(xmmword_180345190),
          dword_180345358 - xmmword_1803451A0,
          dword_18034535C - BYTE4(xmmword_1803451A0));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0qq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
            (unsigned int)(dword_180345370 - DWORD2(xmmword_1803451A0)),
            (unsigned int)(dword_180345374 - HIDWORD(xmmword_1803451A0)));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0qq_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
              (unsigned int)(dword_18034537C - qword_1803451B0),
              (unsigned int)(dword_180345380 - HIDWORD(qword_1803451B0)));
        }
      }
    }
    `anonymous namespace'::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot((_anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_ *)&`anonymous namespace'::_etwEndFrameSnapshot);
    v8 = g_qpcFrequency;
  }
  if ( 1000 * ((unsigned __int64)(qword_180345108 - xmmword_1803453E0) / v8.QuadPart)
     + 1000 * ((unsigned __int64)(qword_180345108 - xmmword_1803453E0) % v8.QuadPart) / v8.QuadPart >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
}
