/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180040518
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18003C860 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18008AA6C (McGenEventWrite_EventWriteTransfer.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x1800BCE6C (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1800D99AC (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?UpdateSnapshot@_unnamed_type__etwEndFrameSnapshot_@?A0xd209ef2d@@QEAAXXZ @ 0x180155C50 (-UpdateSnapshot@_unnamed_type__etwEndFrameSnapshot_@-A0xd209ef2d@@QEAAXXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180155E28 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180155E98 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer @ 0x180155F18 (McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer.c)
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
    dword_180349290 |= 0x80u;
  byte_1803493F0 = dword_180349318 != `anonymous namespace'::_frameStartSnaphot;
  if ( a1 )
  {
    ++dword_18034929C;
    v5 = ::CycleTime;
    CycleTime = 0LL;
    if ( qword_180349118 )
    {
      CurrentThread = GetCurrentThread();
      v7 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v3 = CycleTime;
      if ( v7 )
        qword_1803492B8 += CycleTime - qword_180349118;
    }
    v8 = g_qpcFrequency;
    *((_QWORD *)&xmmword_1803493E0 + 1) = a3;
    qword_1803492F0 = v3 - v5;
    dword_180347A90 = 3;
    v9 = dword_1803492B4;
    if ( 1000000 * ((unsigned __int64)(a3 - qword_180349108) / g_qpcFrequency.QuadPart)
       + 1000000 * ((unsigned __int64)(a3 - qword_180349108) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart > (unsigned int)dword_1803492B4 )
      v9 = 1000000 * ((unsigned __int64)(a3 - qword_180349108) / g_qpcFrequency.QuadPart)
         + 1000000 * ((unsigned __int64)(a3 - qword_180349108) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    dword_1803492B4 = v9;
  }
  else
  {
    if ( dword_180349318 == `anonymous namespace'::_frameStartSnaphot
      && dword_180349320 == dword_180349740
      && dword_18034931C == dword_18034973C
      && dword_180349324 == dword_180349744 )
    {
      ++dword_1803492A4;
      v10 = &unk_1803492C8;
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
      ++dword_1803492A0;
      v10 = &unk_1803492C0;
    }
    anonymous_namespace_::MeasureCyclesDelta(&qword_180349118, v10);
    if ( byte_180349114 )
    {
      ++dword_180349334;
      if ( dword_180347A90 )
        --dword_180347A90;
      else
        ++dword_18034928C;
    }
    QueryPerformanceCounter((LARGE_INTEGER *)&CycleTime);
    v8 = g_qpcFrequency;
    *((_QWORD *)&xmmword_1803493E0 + 1) = CycleTime;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer(
      dword_180349360 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 3),
      dword_180349378 - xmmword_180349170,
      dword_180349394 - `anonymous namespace'::_etwEndFrameSnapshot,
      dword_180349398 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 1),
      dword_18034939C - *(&`anonymous namespace'::_etwEndFrameSnapshot + 8),
      dword_180349360 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 12),
      dword_180349378 - xmmword_180349170,
      dword_18034936C - BYTE4(xmmword_180349170),
      dword_180349248 - BYTE8(xmmword_180349170),
      dword_18034924C - BYTE12(xmmword_180349170),
      dword_180349250 - xmmword_180349180,
      dword_180349254 - BYTE4(xmmword_180349180),
      dword_180349258 - BYTE8(xmmword_180349180),
      dword_18034925C - BYTE12(xmmword_180349180),
      dword_180349260 - xmmword_180349190);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &ENDFRAME_PRIMITIVE_GROUP_STATS,
        (unsigned int)(dword_18034934C - DWORD1(xmmword_180349190)),
        (unsigned int)(dword_180349350 - DWORD2(xmmword_180349190)));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qqq_EventWriteTransfer(
          v11,
          (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
          dword_180349354 - HIDWORD(xmmword_180349190),
          dword_180349358 - xmmword_1803491A0,
          dword_18034935C - BYTE4(xmmword_1803491A0));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0qq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
            (unsigned int)(dword_180349370 - DWORD2(xmmword_1803491A0)),
            (unsigned int)(dword_180349374 - HIDWORD(xmmword_1803491A0)));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0qq_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
              (unsigned int)(dword_18034937C - qword_1803491B0),
              (unsigned int)(dword_180349380 - HIDWORD(qword_1803491B0)));
        }
      }
    }
    `anonymous namespace'::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot((_anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_ *)&`anonymous namespace'::_etwEndFrameSnapshot);
    v8 = g_qpcFrequency;
  }
  if ( 1000 * ((unsigned __int64)(qword_180349108 - xmmword_1803493E0) / v8.QuadPart)
     + 1000 * ((unsigned __int64)(qword_180349108 - xmmword_1803493E0) % v8.QuadPart) / v8.QuadPart >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0LL);
}
