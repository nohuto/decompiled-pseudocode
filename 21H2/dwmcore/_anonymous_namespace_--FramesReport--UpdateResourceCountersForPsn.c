/*
 * XREFs of _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x18005F320
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_dc2c95d2c2f70bb2af203226fe5ee6fa__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1800E2150 (std--_Func_impl_no_alloc__lambda_dc2c95d2c2f70bb2af203226fe5ee6fa__void_void___unsigned_long_uns.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18005E9A8 (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::emplace_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____ @ 0x18005F554 (std--vector_std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_std--default_de.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180061A30 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180061B50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NAEBV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@_K@Z @ 0x1800E17C8 (-IsLessThan@ResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@SA_NA.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
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
  void *v29; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v30[2]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v31[32]; // [rsp+40h] [rbp-68h] BYREF

  v5 = a5;
  v6 = a1 + 112;
  v7 = 0;
  LODWORD(v29) = 0;
  v9 = *(_QWORD **)(a1 + 120);
  v11 = *(_QWORD **)(a1 + 112);
  v30[0] = a5;
  v12 = v9 - v11;
  if ( v12 > 0 )
  {
    do
    {
      if ( (unsigned __int8)CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber::IsLessThan(
                              &v11[(unsigned __int64)v12 >> 1],
                              a3) )
      {
        v11 += ((unsigned __int64)v12 >> 1) + 1;
        v12 += -1LL - ((unsigned __int64)v12 >> 1);
      }
      else
      {
        v12 = (unsigned __int64)v12 >> 1;
      }
    }
    while ( v12 > 0 );
    v9 = *(_QWORD **)(a1 + 120);
    v6 = a1 + 112;
    v5 = v30[0];
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
    v29 = v21;
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
      std::wstring::wstring(v31, v5);
      v7 = 1;
      v27 = *(_QWORD *)std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::insert<0,0>(
                         a1 + 160,
                         (__int64)v30)
          + 32LL;
    }
    else
    {
      v27 = 0LL;
    }
    *((_QWORD *)v21 + 12) = v27;
    if ( (v7 & 1) != 0 )
      std::wstring::_Tidy_deallocate(v31);
    std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::emplace_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____(
      v6,
      v30,
      v11,
      &v29);
    if ( v29 )
      operator delete(v29, 0x70uLL);
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
