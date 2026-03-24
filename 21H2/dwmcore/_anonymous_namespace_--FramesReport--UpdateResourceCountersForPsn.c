/*
 * XREFs of _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x180034900
 * Callers:
 *     _lambda_5fcd38f73916aa9cc2ab190da74b00ea_::operator() @ 0x1800347D0 (_lambda_5fcd38f73916aa9cc2ab190da74b00ea_--operator().c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18003468C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::emplace_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____ @ 0x180034ABC (std--vector_std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_std--default_de.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180035198 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Insert_nohint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x1800360A8 (--$_Insert_nohint@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NAEBV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@_K@Z @ 0x1800CDC38 (-IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NA.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 */

void __fastcall anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  char v7; // r12
  _QWORD *v9; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rbx
  _QWORD *v14; // rcx
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  char *v20; // rax
  char *v21; // rbx
  int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int128 v25; // xmm3
  __int128 v26; // xmm4
  __int64 v27; // rax
  __int64 v28; // r8
  void *v30; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v31[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v32[4]; // [rsp+50h] [rbp-68h] BYREF

  v5 = a5;
  v6 = a1 + 112;
  v7 = 0;
  LODWORD(v30) = 0;
  v9 = *(_QWORD **)(a1 + 120);
  v11 = *(_QWORD **)(a1 + 112);
  v31[0] = a5;
  v12 = v9 - v11;
  if ( v12 > 0 )
  {
    do
    {
      if ( (unsigned __int8)CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber::IsLessThan(
                              &v11[v12 >> 1],
                              a3) )
      {
        v11 += (v12 >> 1) + 1;
        v12 += -1 - (v12 >> 1);
      }
      else
      {
        v12 >>= 1;
      }
    }
    while ( v12 > 0 );
    v9 = *(_QWORD **)(a1 + 120);
    v6 = a1 + 112;
    v5 = v31[0];
  }
  if ( v11 == v9 || (v14 = (_QWORD *)*v11, *(_QWORD *)*v11 != a3) )
  {
    v20 = (char *)operator new(0x70uLL);
    v21 = v20;
    if ( v20 )
      memset_0(v20, 0, 0x70uLL);
    else
      v21 = 0LL;
    *((_DWORD *)v21 + 26) = a2;
    *(_QWORD *)v21 = a3;
    v22 = *(_DWORD *)(a4 + 80);
    v30 = v21;
    v23 = *(_OWORD *)(a4 + 16);
    v24 = *(_OWORD *)(a4 + 32);
    v25 = *(_OWORD *)(a4 + 48);
    v26 = *(_OWORD *)(a4 + 64);
    *(_OWORD *)(v21 + 8) = *(_OWORD *)a4;
    *(_OWORD *)(v21 + 24) = v23;
    *(_OWORD *)(v21 + 40) = v24;
    *(_OWORD *)(v21 + 56) = v25;
    *(_OWORD *)(v21 + 72) = v26;
    *((_DWORD *)v21 + 22) = v22;
    if ( v5 )
    {
      std::wstring::wstring(v32, v5);
      ((void (__fastcall *)(__int64, _QWORD *, __int64, _QWORD *))std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_nohint<std::wstring,std::_Not_a_node_tag>)(
        a1 + 160,
        v31,
        v28,
        v32);
      v7 = 1;
      v27 = v31[0] + 32LL;
    }
    else
    {
      v27 = 0LL;
    }
    *((_QWORD *)v21 + 12) = v27;
    if ( (v7 & 1) != 0 )
      std::wstring::_Tidy_deallocate(v32);
    std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::emplace_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____(
      v6,
      v31,
      v11,
      &v30);
    if ( v30 )
      operator delete(v30, 0x70uLL);
  }
  else
  {
    v15 = *(_DWORD *)(a4 + 80);
    v16 = *(_OWORD *)(a4 + 16);
    v17 = *(_OWORD *)(a4 + 32);
    v18 = *(_OWORD *)(a4 + 48);
    v19 = *(_OWORD *)(a4 + 64);
    *(_OWORD *)(v14 + 1) = *(_OWORD *)a4;
    *(_OWORD *)(v14 + 3) = v16;
    *(_OWORD *)(v14 + 5) = v17;
    *(_OWORD *)(v14 + 7) = v18;
    *(_OWORD *)(v14 + 9) = v19;
    *((_DWORD *)v14 + 22) = v15;
  }
}
