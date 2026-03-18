/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x18007CB98
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180078EE0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180035330 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x1800C32C8 (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?UpdateSnapshot@_unnamed_type__etwEndFrameSnapshot_@?A0xd209ef2d@@QEAAXXZ @ 0x1801521D0 (-UpdateSnapshot@_unnamed_type__etwEndFrameSnapshot_@-A0xd209ef2d@@QEAAXXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801523A8 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180152418 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer @ 0x180152498 (McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer.c)
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
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+88h] [rbp-30h] BYREF

  v3 = 0LL;
  if ( a2 )
    dword_180344280 |= 0x80u;
  byte_1803443E0 = dword_180344308 != `anonymous namespace'::_frameStartSnaphot;
  if ( a1 )
  {
    ++dword_18034428C;
    v5 = ::CycleTime;
    CycleTime = 0LL;
    if ( qword_180344120 )
    {
      CurrentThread = GetCurrentThread();
      v7 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v3 = CycleTime;
      if ( v7 )
        qword_1803442A8 += CycleTime - qword_180344120;
    }
    v8 = g_qpcFrequency;
    *((_QWORD *)&xmmword_1803443D0 + 1) = a3;
    qword_1803442E0 = v3 - v5;
    dword_180342A90 = 3;
    v9 = dword_1803442A4;
    if ( 1000000 * ((unsigned __int64)(a3 - qword_1803440B8) / g_qpcFrequency.QuadPart)
       + 1000000 * ((unsigned __int64)(a3 - qword_1803440B8) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart > (unsigned int)dword_1803442A4 )
      v9 = 1000000 * ((unsigned __int64)(a3 - qword_1803440B8) / g_qpcFrequency.QuadPart)
         + 1000000 * ((unsigned __int64)(a3 - qword_1803440B8) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    dword_1803442A4 = v9;
  }
  else
  {
    if ( dword_180344308 == `anonymous namespace'::_frameStartSnaphot
      && dword_180344310 == dword_180344740
      && dword_18034430C == dword_18034473C
      && dword_180344314 == dword_180344744 )
    {
      ++dword_180344294;
      v10 = &unk_1803442B8;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_UNPRESENTED_FRAME,
          a3,
          1u,
          &v13);
      ++dword_180344290;
      v10 = &unk_1803442B0;
    }
    anonymous_namespace_::MeasureCyclesDelta(&qword_180344120, v10);
    if ( byte_180344108 )
    {
      ++dword_180344324;
      if ( dword_180342A90 )
        --dword_180342A90;
      else
        ++dword_18034427C;
    }
    QueryPerformanceCounter((LARGE_INTEGER *)&CycleTime);
    v8 = g_qpcFrequency;
    *((_QWORD *)&xmmword_1803443D0 + 1) = CycleTime;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer(
      dword_180344350 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 3),
      dword_180344368 - xmmword_180344160,
      dword_180344384 - `anonymous namespace'::_etwEndFrameSnapshot,
      dword_180344388 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 1),
      dword_18034438C - *(&`anonymous namespace'::_etwEndFrameSnapshot + 8),
      dword_180344350 - *(&`anonymous namespace'::_etwEndFrameSnapshot + 12),
      dword_180344368 - xmmword_180344160,
      dword_18034435C - BYTE4(xmmword_180344160),
      dword_180344238 - BYTE8(xmmword_180344160),
      dword_18034423C - BYTE12(xmmword_180344160),
      dword_180344240 - xmmword_180344170,
      dword_180344244 - BYTE4(xmmword_180344170),
      dword_180344248 - BYTE8(xmmword_180344170),
      dword_18034424C - BYTE12(xmmword_180344170),
      dword_180344250 - xmmword_180344180);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &ENDFRAME_PRIMITIVE_GROUP_STATS,
        (unsigned int)(dword_18034433C - DWORD1(xmmword_180344180)),
        (unsigned int)(dword_180344340 - DWORD2(xmmword_180344180)));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qqq_EventWriteTransfer(
          v11,
          (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
          dword_180344344 - HIDWORD(xmmword_180344180),
          dword_180344348 - xmmword_180344190,
          dword_18034434C - BYTE4(xmmword_180344190));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0qq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
            (unsigned int)(dword_180344360 - DWORD2(xmmword_180344190)),
            (unsigned int)(dword_180344364 - HIDWORD(xmmword_180344190)));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0qq_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
              (unsigned int)(dword_18034436C - qword_1803441A0),
              (unsigned int)(dword_180344370 - HIDWORD(qword_1803441A0)));
        }
      }
    }
    `anonymous namespace'::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot((_anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_ *)&`anonymous namespace'::_etwEndFrameSnapshot);
    v8 = g_qpcFrequency;
  }
  if ( 1000 * ((unsigned __int64)(qword_1803440B8 - xmmword_1803443D0) / v8.QuadPart)
     + 1000 * ((unsigned __int64)(qword_1803440B8 - xmmword_1803443D0) % v8.QuadPart) / v8.QuadPart >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
}
