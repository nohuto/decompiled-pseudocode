/*
 * XREFs of ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x180255B64
 * Callers:
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x180252E70 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005D6EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180255220 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_180255220.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802552F8 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_1802552F8.c)
 *     ??0StereoscopicViewData@@QEAA@XZ @ 0x1802553A8 (--0StereoscopicViewData@@QEAA@XZ.c)
 */

void __fastcall CStereoscopicContentManager::RegisterStereoscopicContentConsumer(
        struct _RTL_CRITICAL_SECTION *this,
        struct CHolographicInteropTexture *a2)
{
  LONG *p_LockCount; // r9
  __int64 *v4; // rax
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  StereoscopicViewData *v7; // rax
  struct _RTL_CRITICAL_SECTION *v8; // r9
  __int128 v9; // xmm1
  LIST_ENTRY v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  LIST_ENTRY v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  LIST_ENTRY v18; // xmm0
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG *v20; // rdx
  struct _RTL_CRITICAL_SECTION *CriticalSection; // rcx
  __int128 v22; // xmm1
  LIST_ENTRY v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  LIST_ENTRY v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  LIST_ENTRY v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  LIST_ENTRY v32; // xmm1
  _BYTE v33[196]; // [rsp+7Ch] [rbp-8Ch] BYREF
  LIST_ENTRY v34; // [rsp+140h] [rbp+38h]
  __int128 v35; // [rsp+150h] [rbp+48h]
  LIST_ENTRY v36; // [rsp+160h] [rbp+58h]
  __int128 v37; // [rsp+170h] [rbp+68h]
  __int128 v38; // [rsp+180h] [rbp+78h]
  LIST_ENTRY v39; // [rsp+190h] [rbp+88h]
  __int128 v40; // [rsp+1A0h] [rbp+98h]
  __int128 v41; // [rsp+1B0h] [rbp+A8h]
  LIST_ENTRY v42; // [rsp+1C0h] [rbp+B8h]
  __int128 v43; // [rsp+1D0h] [rbp+C8h]
  __int128 v44; // [rsp+1E0h] [rbp+D8h]
  LIST_ENTRY v45; // [rsp+1F0h] [rbp+E8h]
  unsigned int v46; // [rsp+278h] [rbp+170h] BYREF
  unsigned int *v47; // [rsp+280h] [rbp+178h] BYREF
  struct _RTL_CRITICAL_SECTION *v48; // [rsp+288h] [rbp+180h] BYREF
  __int64 v49; // [rsp+290h] [rbp+188h] BYREF

  v46 = *((_DWORD *)a2 + 52);
  v48 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 96));
  p_LockCount = &this[8].LockCount;
  v4 = *(__int64 **)&this[8].LockCount;
  v5 = v4;
  v6 = (__int64 *)v4[1];
  if ( !*((_BYTE *)v6 + 25) )
  {
    do
    {
      if ( *((_DWORD *)v6 + 7) >= v46 )
      {
        v4 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
    v5 = *(__int64 **)p_LockCount;
  }
  if ( v4 == v5 || v46 < *((_DWORD *)v4 + 7) )
  {
    v47 = &v46;
    v4 = (__int64 *)*std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                       (__int64 *)&this[8].LockCount,
                       &v49,
                       v4,
                       (__int64)p_LockCount,
                       &v47);
  }
  *((_OWORD *)v4 + 2) = _xmm;
  *((_OWORD *)v4 + 3) = _xmm;
  *((_OWORD *)v4 + 4) = _xmm;
  *((_OWORD *)v4 + 5) = _xmm;
  *((_DWORD *)v4 + 24) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v48);
  v48 = this + 1;
  EnterCriticalSection(this + 1);
  memset_0(v33, 0, 0xC0uLL);
  v7 = StereoscopicViewData::StereoscopicViewData((StereoscopicViewData *)v33);
  v8 = this + 2;
  v9 = *((_OWORD *)v7 + 1);
  v34 = *(LIST_ENTRY *)v7;
  v10 = (LIST_ENTRY)*((_OWORD *)v7 + 2);
  v35 = v9;
  v11 = *((_OWORD *)v7 + 3);
  v36 = v10;
  v12 = *((_OWORD *)v7 + 4);
  v37 = v11;
  v13 = (LIST_ENTRY)*((_OWORD *)v7 + 5);
  v38 = v12;
  v14 = *((_OWORD *)v7 + 6);
  v39 = v13;
  v40 = v14;
  v15 = *((_OWORD *)v7 + 7);
  v7 = (StereoscopicViewData *)((char *)v7 + 128);
  v41 = v15;
  v16 = *((_OWORD *)v7 + 1);
  v42 = *(LIST_ENTRY *)v7;
  v17 = *((_OWORD *)v7 + 2);
  v43 = v16;
  v18 = (LIST_ENTRY)*((_OWORD *)v7 + 3);
  DebugInfo = this[2].DebugInfo;
  v44 = v17;
  v20 = DebugInfo;
  v45 = v18;
  CriticalSection = DebugInfo->CriticalSection;
  if ( !BYTE1(CriticalSection->LockSemaphore) )
  {
    do
    {
      if ( HIDWORD(CriticalSection->LockSemaphore) >= v46 )
      {
        DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)CriticalSection;
        CriticalSection = (struct _RTL_CRITICAL_SECTION *)CriticalSection->DebugInfo;
      }
      else
      {
        CriticalSection = (struct _RTL_CRITICAL_SECTION *)CriticalSection->OwningThread;
      }
    }
    while ( !BYTE1(CriticalSection->LockSemaphore) );
    v20 = v8->DebugInfo;
  }
  if ( DebugInfo == v20 || v46 < HIDWORD(DebugInfo->ProcessLocksList.Blink) )
  {
    v47 = &v46;
    DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)*std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                                                (__int64 *)&this[2],
                                                &v49,
                                                DebugInfo,
                                                (__int64)v8,
                                                &v47);
  }
  v22 = v35;
  *(LIST_ENTRY *)&DebugInfo->EntryCount = v34;
  v23 = v36;
  *(_OWORD *)&DebugInfo[1].Type = v22;
  v24 = v37;
  DebugInfo[1].ProcessLocksList = v23;
  v25 = v38;
  *(_OWORD *)&DebugInfo[1].EntryCount = v24;
  v26 = v39;
  *(_OWORD *)&DebugInfo[2].Type = v25;
  v27 = v40;
  DebugInfo[2].ProcessLocksList = v26;
  v28 = v41;
  *(_OWORD *)&DebugInfo[2].EntryCount = v27;
  v29 = v42;
  *(_OWORD *)&DebugInfo[3].Type = v28;
  v30 = v43;
  DebugInfo[3].ProcessLocksList = v29;
  v31 = v44;
  *(_OWORD *)&DebugInfo[3].EntryCount = v30;
  v32 = v45;
  *(_OWORD *)&DebugInfo[4].Type = v31;
  DebugInfo[4].ProcessLocksList = v32;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v48);
}
