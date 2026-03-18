/*
 * XREFs of ?CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA?BVCMILMatrix@@PEBVCVisualTree@@IIHH@Z @ 0x180297470
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x18029A484 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1802971AC (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IUStereoscopicSlateData@@U-$less@I@std@@V-$alloca.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1802972D0 (--$_Try_emplace@AEBI$$V@-$map@IUStereoscopicViewData@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIU.c)
 *     ?CalculateViewTransformsForSlate@CStereoscopicContentManager@@AEAAXW4StereoscopicContentMode@@MMAEBUStereoscopicSlateData@@PEAUStereoscopicViewData@@@Z @ 0x18029770C (-CalculateViewTransformsForSlate@CStereoscopicContentManager@@AEAAXW4StereoscopicContentMode@@MM.c)
 */

__int64 __fastcall CStereoscopicContentManager::CalculateViewTransformForVisualTree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  __int64 *v5; // rax
  __int64 v6; // r10
  __int64 v10; // rcx
  char v12; // di
  unsigned int v13; // r15d
  char v14; // r14
  __int64 *v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  _BYTE v28[16]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v29; // [rsp+48h] [rbp-41h]
  __int128 v30; // [rsp+58h] [rbp-31h]
  __int128 v31; // [rsp+68h] [rbp-21h]
  __int128 v32; // [rsp+78h] [rbp-11h]
  __int128 v33; // [rsp+88h] [rbp-1h]
  int v34; // [rsp+98h] [rbp+Fh]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+D8h] [rbp+4Fh] BYREF

  v5 = *(__int64 **)(a1 + 16);
  v6 = *(_QWORD *)(a3 + 64);
  *(_DWORD *)(a2 + 64) = 0;
  if ( v5 == *(__int64 **)(a1 + 24) )
  {
LABEL_6:
    *(_QWORD *)a2 = 1065353216LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 20) = 1065353216LL;
    *(_QWORD *)(a2 + 28) = 0LL;
    *(_DWORD *)(a2 + 36) = 0;
    *(_QWORD *)(a2 + 40) = 1065353216LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)(a2 + 56) = 0;
    *(_DWORD *)(a2 + 60) = 1065353216;
    *(_BYTE *)(a2 + 64) = 85;
LABEL_7:
    *(_BYTE *)(a2 + 65) = *(_BYTE *)(a2 + 65) & 0xC0 | 0x17;
    return a2;
  }
  while ( 1 )
  {
    v10 = *v5;
    if ( *v5 )
      break;
LABEL_5:
    if ( ++v5 == *(__int64 **)(a1 + 24) )
      goto LABEL_6;
  }
  while ( v10 != v6 )
  {
    v10 = *(_QWORD *)(v10 + 88);
    if ( !v10 )
      goto LABEL_5;
  }
  v12 = 0;
  v13 = *(_DWORD *)(*v5 + 216);
  v14 = 0;
  v30 = _xmm;
  v31 = _xmm;
  v32 = _xmm;
  v33 = _xmm;
  LOBYTE(v34) = 0;
  v35 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)(a1 + 328),
    (__int64)v28,
    &a5);
  v16 = v29;
  if ( *(_BYTE *)(v29 + 25) || a5 < *(_DWORD *)(v29 + 28) )
  {
    v16 = *v15;
    v17 = *v15;
  }
  else
  {
    v17 = *v15;
  }
  if ( v16 != v17 )
  {
    v18 = *(_OWORD *)(v16 + 32);
    v12 = 1;
    v19 = *(_OWORD *)(v16 + 48);
    v14 = *(_DWORD *)(v16 + 96);
    v34 = *(_DWORD *)(v16 + 96);
    v30 = v18;
    v20 = *(_OWORD *)(v16 + 64);
    v31 = v19;
    v21 = *(_OWORD *)(v16 + 80);
    *(_BYTE *)(v16 + 96) = 0;
    v32 = v20;
    v33 = v21;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v35);
  if ( !v12 )
  {
    *(_QWORD *)a2 = 1065353216LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 20) = 1065353216LL;
    *(_QWORD *)(a2 + 28) = 0LL;
    *(_DWORD *)(a2 + 36) = 0;
    *(_QWORD *)(a2 + 40) = 1065353216LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)(a2 + 56) = 0;
    *(_DWORD *)(a2 + 60) = 1065353216;
    *(_BYTE *)(a2 + 64) = 85;
    goto LABEL_7;
  }
  v35 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v23 = *(_QWORD *)std::map<unsigned int,StereoscopicViewData>::_Try_emplace<unsigned int const &,>(
                     (__int64 *)(a1 + 80),
                     (__int64)v28,
                     &a5,
                     v22)
      + 32LL;
  if ( v14 )
    CStereoscopicContentManager::CalculateViewTransformsForSlate(a1, v13);
  v24 = a4 != 0 ? 0x40 : 0;
  v25 = *(_OWORD *)(v24 + v23 + 80);
  v26 = *(_OWORD *)(v24 + v23 + 96);
  v27 = *(_OWORD *)(v24 + v23 + 112);
  *(_OWORD *)a2 = *(_OWORD *)(v24 + v23 + 64);
  *(_OWORD *)(a2 + 16) = v25;
  *(_OWORD *)(a2 + 32) = v26;
  *(_OWORD *)(a2 + 48) = v27;
  *(_DWORD *)(a2 + 64) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v35);
  return a2;
}
