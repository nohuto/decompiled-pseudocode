/*
 * XREFs of _anonymous_namespace_::SealCurrentFrameSequence @ 0x180077634
 * Callers:
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x18007A584 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18007ABBC (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x180077A0C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x180077EB4 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEA.c)
 *     std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x180077FB4 (std--_Tree_node_std--pair__anonymous_namespace_--AnimationId_const__unsigned_int__void___--_Buyh.c)
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x18007816C (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x1800785EC (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x180078738 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x180078A60 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 *     _anonymous_namespace_::FramesReport::FramesReport @ 0x1800DDF70 (_anonymous_namespace_--FramesReport--FramesReport.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x1800E350C (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180111E98 (McTemplateU0xq_EventWriteTransfer.c)
 */

void __fastcall anonymous_namespace_::SealCurrentFrameSequence(char a1)
{
  LARGE_INTEGER v2; // rcx
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  HANDLE CurrentProcess; // rax
  _QWORD *v11; // rcx
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  void *v16; // rax
  void *v17; // rbx
  union _SLIST_HEADER *v18; // rcx
  struct _SLIST_ENTRY *v19; // rdx
  int v20; // edx
  unsigned int v21; // r8d
  _BYTE v22[408]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+1B8h] [rbp+B8h]
  __int64 v24; // [rsp+1C0h] [rbp+C0h]
  __int64 v25; // [rsp+1C8h] [rbp+C8h]
  __int64 v26; // [rsp+1D0h] [rbp+D0h]
  __int64 v27; // [rsp+1E0h] [rbp+E0h]
  __int64 v28; // [rsp+1E8h] [rbp+E8h]
  __int128 v29; // [rsp+1F0h] [rbp+F0h]
  _BYTE ppsmemCounters[80]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v31; // [rsp+250h] [rbp+150h]

  if ( dword_1803D3168 )
  {
    memset_0(ppsmemCounters, 0, 0x58uLL);
    xmmword_1803D3370 = *(_OWORD *)ppsmemCounters;
    xmmword_1803D3380 = *(_OWORD *)&ppsmemCounters[16];
    xmmword_1803D3390 = *(_OWORD *)&ppsmemCounters[32];
    xmmword_1803D33A0 = *(_OWORD *)&ppsmemCounters[48];
    *(_QWORD *)ppsmemCounters = off_1802C16E0;
    xmmword_1803D33B0 = *(_OWORD *)&ppsmemCounters[64];
    qword_1803D33C0 = v31;
    *(_QWORD *)&ppsmemCounters[56] = ppsmemCounters;
    CProcessAttributionObserver::ForEachChangedProcessAttribution(*(_QWORD *)qword_1803D33C8, 0LL, ppsmemCounters);
    v2 = g_qpcFrequency;
    v3 = *((_QWORD *)&xmmword_1803D32B0 + 1);
    v4 = xmmword_1803D32B0;
    dword_1803D3180 = 1000
                    * ((*((_QWORD *)&xmmword_1803D32B0 + 1) - (_QWORD)xmmword_1803D32B0)
                     / g_qpcFrequency.QuadPart)
                    + (unsigned __int64)(1000
                                       * ((*((_QWORD *)&xmmword_1803D32B0 + 1) - (_QWORD)xmmword_1803D32B0)
                                        % g_qpcFrequency.QuadPart))
                    / g_qpcFrequency.QuadPart;
    v5 = xmmword_1803D3348 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)xmmword_1803D3348 == *(_QWORD *)&GUID_NULL.Data1 )
      v5 = *((_QWORD *)&xmmword_1803D3348 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v5 )
    {
      dword_1803D33D0 = 0;
      qword_1803D32C8 = 0LL;
    }
    else
    {
      v20 = dword_1803D3170;
      if ( (unsigned int)dword_1803D3170 > 0x37
        && (dword_1803D332C & 0x100000) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000000) != 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq_EventWriteTransfer)(
          (LARGE_INTEGER)g_qpcFrequency.QuadPart,
          &EVTDESC_DIAGTRACK_TRIGGER,
          16525050LL,
          0LL);
        v3 = *((_QWORD *)&xmmword_1803D32B0 + 1);
        v4 = xmmword_1803D32B0;
        v20 = dword_1803D3170;
        v2 = g_qpcFrequency;
      }
      v21 = v20 + dword_1803D33D0;
      dword_1803D33D0 += v20;
      if ( qword_1803D32C8 )
      {
        if ( v21 >= 0x30570
          && (unsigned __int64)(v3 - qword_1803D32C8) / v2.QuadPart
           + (unsigned __int64)(v3 - qword_1803D32C8) % v2.QuadPart / v2.QuadPart < 0xE10
          && (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000000) != 0 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xq_EventWriteTransfer)(
            (LARGE_INTEGER)v2.QuadPart,
            &EVTDESC_DIAGTRACK_TRIGGER,
            16525050LL,
            1LL);
        }
      }
      else
      {
        qword_1803D32C8 = v4;
      }
    }
    v6 = *((_QWORD *)qword_1803D33C8 + 5);
    if ( *(_QWORD *)(v6 + 24) == *(_QWORD *)(v6 + 32) )
    {
      std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const___(
        v6 + 16,
        *(_QWORD *)(v6 + 24),
        &unk_1803D30E0);
    }
    else
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(*(_QWORD *)(v6 + 24), &unk_1803D30E0);
      *(_QWORD *)(v6 + 24) += 480LL;
    }
    v7 = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(
           *((_QWORD *)qword_1803D33C8 + 5),
           qword_1803D32D0);
    if ( a1
      || v7 >= CCommonRegistryData::TelemetryFramesReportPeriodMilliseconds
      || g_fTelemetry_FramesReportFast && v7 >= 0x3E8 )
    {
      *(_DWORD *)ppsmemCounters = 80;
      CurrentProcess = GetCurrentProcess();
      if ( K32GetProcessMemoryInfo(CurrentProcess, (PPROCESS_MEMORY_COUNTERS)ppsmemCounters, 0x50u) )
      {
        HIDWORD(qword_1803D3320) = *(_QWORD *)&ppsmemCounters[16] >> 10;
        LODWORD(qword_1803D3320) = *(_QWORD *)&ppsmemCounters[56] >> 10;
      }
      v11 = qword_1803D33C8;
      v12 = xmmword_1803D32F0;
      *(_OWORD *)(*((_QWORD *)qword_1803D33C8 + 5) + 176LL) = xmmword_1803D3348;
      v13 = v11[5];
      *(_OWORD *)(v13 + 40) = xmmword_1803D32E0;
      v14 = xmmword_1803D3300;
      *(_OWORD *)(v13 + 56) = v12;
      v15 = xmmword_1803D3310;
      *(_OWORD *)(v13 + 72) = v14;
      *(_QWORD *)&v14 = qword_1803D3320;
      *(_OWORD *)(v13 + 88) = v15;
      *(_QWORD *)(v13 + 104) = v14;
      v16 = operator new(0xC0uLL);
      v17 = v16;
      if ( v16 )
      {
        memset_0(v16, 0, 0xC0uLL);
        v16 = (void *)anonymous_namespace_::FramesReport::FramesReport(v17);
      }
      v18 = (union _SLIST_HEADER *)qword_1803D33C8;
      v19 = (struct _SLIST_ENTRY *)*((_QWORD *)qword_1803D33C8 + 5);
      *((_QWORD *)qword_1803D33C8 + 5) = v16;
      InterlockedPushEntrySList(v18 + 3, v19);
      SubmitThreadpoolWork(*((PTP_WORK *)qword_1803D33C8 + 1));
    }
    v29 = 0LL;
    memset_0(v22, 0, sizeof(v22));
    v24 = 0LL;
    v8 = std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>();
    v26 = 0LL;
    v23 = v8;
    v9 = std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>();
    v28 = 0LL;
    v25 = v9;
    v27 = std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______();
    anonymous_namespace_::FrameSequenceInfo::operator_(&unk_1803D30E0, v22);
    anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(v22);
  }
}
