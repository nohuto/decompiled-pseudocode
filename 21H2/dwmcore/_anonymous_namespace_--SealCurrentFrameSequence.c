/*
 * XREFs of _anonymous_namespace_::SealCurrentFrameSequence @ 0x180028740
 * Callers:
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x180071614 (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180071888 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 * Callees:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x180028530 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x180028B84 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x180028C48 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x180029104 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     _anonymous_namespace_::FramesReport::FramesReport @ 0x180029250 (_anonymous_namespace_--FramesReport--FramesReport.c)
 *     std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x18004FD78 (std--_Tree_node_std--pair__anonymous_namespace_--AnimationId_const__unsigned_int__void___--_Buyh.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x18005001C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x180050908 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEA.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     std::function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&)_::function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&)___lambda_5fcd38f73916aa9cc2ab190da74b00ea__void_ @ 0x1800EA6E8 (std--function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_Pro.c)
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800EB3C0 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180152CC4 (McTemplateU0xq_EventWriteTransfer.c)
 */

void __fastcall anonymous_namespace_::SealCurrentFrameSequence(char a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  LARGE_INTEGER v7; // rcx
  __int64 v8; // r10
  unsigned __int64 v9; // r11
  int v10; // edx
  unsigned int v11; // r8d
  __int64 *v12; // rdi
  unsigned int v13; // eax
  HANDLE CurrentProcess; // rax
  _QWORD *v15; // rcx
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  void *v20; // rax
  void *v21; // rdi
  union _SLIST_HEADER *v22; // rcx
  struct _SLIST_ENTRY *v23; // rdx
  _BYTE v24[408]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+1C0h] [rbp+B8h]
  __int64 v26; // [rsp+1C8h] [rbp+C0h]
  __int64 v27; // [rsp+1D0h] [rbp+C8h]
  __int64 v28; // [rsp+1D8h] [rbp+D0h]
  __int64 v29; // [rsp+1E8h] [rbp+E0h]
  __int64 v30; // [rsp+1F0h] [rbp+E8h]
  __int128 v31; // [rsp+1F8h] [rbp+F0h]
  _BYTE ppsmemCounters[80]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v33; // [rsp+258h] [rbp+150h]

  v1 = 0LL;
  if ( dword_1803472B8 )
  {
    memset_0(ppsmemCounters, 0, 0x58uLL);
    LOBYTE(v3) = 0;
    `anonymous namespace'::_etwEndFrameSnapshot = *(_OWORD *)ppsmemCounters;
    xmmword_180347180 = *(_OWORD *)&ppsmemCounters[16];
    xmmword_180347190 = *(_OWORD *)&ppsmemCounters[32];
    xmmword_1803471A0 = *(_OWORD *)&ppsmemCounters[48];
    xmmword_1803471B0 = *(_OWORD *)&ppsmemCounters[64];
    qword_1803471C0 = v33;
    v5 = std::function_void___cdecl_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const____::function_void___cdecl_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const______lambda_5fcd38f73916aa9cc2ab190da74b00ea__void_(
           ppsmemCounters,
           v3,
           v4,
           *(_QWORD *)qword_1803471C8);
    CProcessAttributionObserver::ForEachChangedProcessAttribution(v6, 0LL, v5);
    v7 = g_qpcFrequency;
    v8 = *((_QWORD *)&xmmword_180347400 + 1);
    v9 = xmmword_180347400;
    dword_1803472D0 = 1000
                    * ((*((_QWORD *)&xmmword_180347400 + 1) - (_QWORD)xmmword_180347400)
                     / g_qpcFrequency.QuadPart)
                    + (unsigned __int64)(1000
                                       * ((*((_QWORD *)&xmmword_180347400 + 1) - (_QWORD)xmmword_180347400)
                                        % g_qpcFrequency.QuadPart))
                    / g_qpcFrequency.QuadPart;
    if ( xmmword_180347158 == *(_OWORD *)&GUID_NULL )
    {
      v10 = dword_1803472C0;
      if ( (unsigned int)dword_1803472C0 > 0x37
        && (dword_180347120 & 0x100000) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 0x400000) != 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq_EventWriteTransfer)(
          (LARGE_INTEGER)g_qpcFrequency.QuadPart,
          &EVTDESC_DIAGTRACK_TRIGGER,
          16525050LL,
          0LL);
        v8 = *((_QWORD *)&xmmword_180347400 + 1);
        v9 = xmmword_180347400;
        v10 = dword_1803472C0;
        v7 = g_qpcFrequency;
      }
      v11 = v10 + `anonymous namespace'::_unpresentedFramesOnScreenOffSession;
      `anonymous namespace'::_unpresentedFramesOnScreenOffSession += v10;
      if ( `anonymous namespace'::_startOfScreenOff )
      {
        if ( v11 >= 0x30570
          && (v8 - `anonymous namespace'::_startOfScreenOff) / v7.QuadPart
           + (v8 - `anonymous namespace'::_startOfScreenOff) % v7.QuadPart / v7.QuadPart < 0xE10
          && (Microsoft_Windows_Dwm_CoreEnableBits & 0x400000) != 0 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq_EventWriteTransfer)(
            (LARGE_INTEGER)v7.QuadPart,
            &EVTDESC_DIAGTRACK_TRIGGER,
            16525050LL,
            1LL);
        }
      }
      else
      {
        `anonymous namespace'::_startOfScreenOff = v9;
      }
    }
    else
    {
      `anonymous namespace'::_unpresentedFramesOnScreenOffSession = 0;
      `anonymous namespace'::_startOfScreenOff = 0LL;
    }
    v12 = (__int64 *)*((_QWORD *)qword_1803471C8 + 5);
    if ( v12[4] == v12[3] )
    {
      std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const___(
        v12 + 2,
        v12[3],
        (__int64)&unk_180347230);
    }
    else
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v12[3], &unk_180347230);
      v12[3] += 480LL;
    }
    v31 = 0LL;
    memset_0(v24, 0, sizeof(v24));
    v26 = 0LL;
    v25 = std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>();
    v28 = 0LL;
    v27 = std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>();
    v30 = 0LL;
    v29 = std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______();
    anonymous_namespace_::FrameSequenceInfo::operator_(&unk_180347230, v24);
    anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(v24);
    v13 = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(
            *((_QWORD *)qword_1803471C8 + 5),
            qword_180347118);
    if ( a1
      || v13 >= CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds
      || g_fTelemetry_FramesReportFast && v13 >= 0x3E8 )
    {
      *(_DWORD *)ppsmemCounters = 80;
      CurrentProcess = GetCurrentProcess();
      if ( K32GetProcessMemoryInfo(CurrentProcess, (PPROCESS_MEMORY_COUNTERS)ppsmemCounters, 0x50u) )
      {
        HIDWORD(qword_180347110) = *(_QWORD *)&ppsmemCounters[16] >> 10;
        LODWORD(qword_180347110) = *(_QWORD *)&ppsmemCounters[56] >> 10;
      }
      v15 = qword_1803471C8;
      v16 = xmmword_1803470E0;
      *(_OWORD *)(*((_QWORD *)qword_1803471C8 + 5) + 176LL) = xmmword_180347158;
      v17 = v15[5];
      *(_OWORD *)(v17 + 40) = xmmword_1803470D0;
      v18 = xmmword_1803470F0;
      *(_OWORD *)(v17 + 56) = v16;
      v19 = xmmword_180347100;
      *(_OWORD *)(v17 + 72) = v18;
      *(_QWORD *)&v18 = qword_180347110;
      *(_OWORD *)(v17 + 88) = v19;
      *(_QWORD *)(v17 + 104) = v18;
      v20 = operator new(0xC0uLL);
      v21 = v20;
      if ( v20 )
      {
        memset_0(v20, 0, 0xC0uLL);
        v1 = anonymous_namespace_::FramesReport::FramesReport(v21);
      }
      v22 = (union _SLIST_HEADER *)qword_1803471C8;
      v23 = (struct _SLIST_ENTRY *)*((_QWORD *)qword_1803471C8 + 5);
      *((_QWORD *)qword_1803471C8 + 5) = v1;
      InterlockedPushEntrySList(v22 + 3, v23);
      SubmitThreadpoolWork(*((PTP_WORK *)qword_1803471C8 + 1));
    }
  }
}
