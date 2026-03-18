/*
 * XREFs of ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x18007A584
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18007A020 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180077634 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::MeasureCyclesDelta @ 0x18007A7D0 (_anonymous_namespace_--MeasureCyclesDelta.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180111C8E (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer @ 0x18011205A (McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer.c)
 *     ?UpdateSnapshot@_unnamed_type__etwEndFrameSnapshot_@?A0x155a666c@@QEAAXXZ @ 0x1801A98D8 (-UpdateSnapshot@_unnamed_type__etwEndFrameSnapshot_@-A0x155a666c@@QEAAXXZ.c)
 */

void __fastcall CTelemetryFrames::FrameEnded(char a1, char a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  LARGE_INTEGER v6; // rcx
  int v7; // r8d
  void *v8; // rdx
  int v9; // ecx
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+88h] [rbp-30h] BYREF

  if ( a2 )
    dword_1803D3160 |= 0x80u;
  byte_1803D32D8 = dword_1803D31E8 != dword_1803D3A70;
  if ( a1 )
  {
    ++dword_1803D316C;
    v4 = CycleTime;
    v5 = anonymous_namespace_::MeasureCyclesDelta(&qword_1803D3340, &unk_1803D3188);
    v6 = g_qpcFrequency;
    qword_1803D31C0 = v5 - v4;
    *((_QWORD *)&xmmword_1803D32B0 + 1) = a3;
    dword_1803D1AB0 = 3;
    v7 = dword_1803D3184;
    if ( 1000000 * ((unsigned __int64)(a3 - qword_1803D32D0) / g_qpcFrequency.QuadPart)
       + 1000000 * ((unsigned __int64)(a3 - qword_1803D32D0) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart > (unsigned int)dword_1803D3184 )
      v7 = 1000000 * ((unsigned __int64)(a3 - qword_1803D32D0) / g_qpcFrequency.QuadPart)
         + 1000000 * ((unsigned __int64)(a3 - qword_1803D32D0) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    dword_1803D3184 = v7;
  }
  else
  {
    if ( dword_1803D31E8 == dword_1803D3A70
      && dword_1803D31F0 == dword_1803D3A78
      && dword_1803D31EC == dword_1803D3A74
      && dword_1803D31F4 == dword_1803D3A7C )
    {
      ++dword_1803D3174;
      v8 = &unk_1803D3198;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McGenEventWrite_EventWriteTransfer(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_UNPRESENTED_FRAME,
          a3,
          1u,
          &v11);
      ++dword_1803D3170;
      v8 = &unk_1803D3190;
    }
    anonymous_namespace_::MeasureCyclesDelta(&qword_1803D3340, v8);
    if ( byte_1803D3329 )
    {
      ++dword_1803D3204;
      if ( dword_1803D1AB0 )
        --dword_1803D1AB0;
      else
        ++dword_1803D315C;
    }
    QueryPerformanceCounter(&PerformanceCount);
    v6 = g_qpcFrequency;
    *((LARGE_INTEGER *)&xmmword_1803D32B0 + 1) = PerformanceCount;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer(
      dword_1803D3230 - *(&xmmword_1803D3370 + 3),
      dword_1803D3248 - xmmword_1803D3380,
      dword_1803D3264 - xmmword_1803D3370,
      dword_1803D3268 - *(&xmmword_1803D3370 + 1),
      dword_1803D326C - *(&xmmword_1803D3370 + 8),
      dword_1803D3230 - *(&xmmword_1803D3370 + 12),
      dword_1803D3248 - xmmword_1803D3380,
      dword_1803D323C - BYTE4(xmmword_1803D3380),
      dword_1803D3118 - BYTE8(xmmword_1803D3380),
      dword_1803D311C - BYTE12(xmmword_1803D3380),
      dword_1803D3120 - xmmword_1803D3390,
      dword_1803D3124 - BYTE4(xmmword_1803D3390),
      dword_1803D3128 - BYTE8(xmmword_1803D3390),
      dword_1803D312C - BYTE12(xmmword_1803D3390),
      dword_1803D3130 - xmmword_1803D33A0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0qq_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &ENDFRAME_PRIMITIVE_GROUP_STATS,
        (unsigned int)(dword_1803D321C - DWORD1(xmmword_1803D33A0)),
        (unsigned int)(dword_1803D3220 - DWORD2(xmmword_1803D33A0)));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0qqq_EventWriteTransfer(
          v9,
          (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
          dword_1803D3224 - HIDWORD(xmmword_1803D33A0),
          dword_1803D3228 - xmmword_1803D33B0,
          dword_1803D322C - BYTE4(xmmword_1803D33B0));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          McTemplateU0qq_EventWriteTransfer(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
            (unsigned int)(dword_1803D3240 - DWORD2(xmmword_1803D33B0)),
            (unsigned int)(dword_1803D3244 - HIDWORD(xmmword_1803D33B0)));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0qq_EventWriteTransfer(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
              (unsigned int)(dword_1803D324C - qword_1803D33C0),
              (unsigned int)(dword_1803D3250 - HIDWORD(qword_1803D33C0)));
        }
      }
    }
    `anonymous namespace'::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot((_anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_ *)&xmmword_1803D3370);
    v6 = g_qpcFrequency;
  }
  if ( 1000 * ((unsigned __int64)(qword_1803D32D0 - xmmword_1803D32B0) / v6.QuadPart)
     + 1000 * ((unsigned __int64)(qword_1803D32D0 - xmmword_1803D32B0) % v6.QuadPart) / v6.QuadPart >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceMaximumPeriodMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
}
