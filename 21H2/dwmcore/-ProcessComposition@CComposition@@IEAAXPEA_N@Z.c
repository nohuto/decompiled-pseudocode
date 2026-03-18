/*
 * XREFs of ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18007CB4C
 * Callers:
 *     ?Render@CPartitionVerticalBlankScheduler@@AEAAXPEAUFRAME_TIME_INFO@@@Z @ 0x18007BC40 (-Render@CPartitionVerticalBlankScheduler@@AEAAXPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@URoundedRectangleCacheEntry@2@@std@@PEAX@1@@Z @ 0x1800167B4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManage.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x18003D270 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CFailFastInScope@@QEAA@XZ @ 0x18007CD98 (--1CFailFastInScope@@QEAA@XZ.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x18007CDB8 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?UpdateRenderFailureCount@CComposition@@SAXJ@Z @ 0x18007CEC8 (-UpdateRenderFailureCount@CComposition@@SAXJ@Z.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18007CF20 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x18007DDA4 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ @ 0x1800F5E78 (-UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ @ 0x180192F9C (-CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ.c)
 *     ?TriggerFailFastOnNextFailure@@YAX_NJ@Z @ 0x18026BD68 (-TriggerFailFastOnNextFailure@@YAX_NJ@Z.c)
 */

void __fastcall CComposition::ProcessComposition(CRenderTargetManager **this, bool *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  CRenderTargetManager *v7; // rax
  __int64 *v8; // rdx
  __int64 *i; // rcx
  int v10; // edi
  unsigned int v11; // ebp
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // ebp
  CRenderTargetManager *v16; // r15
  _QWORD *v17; // rdi
  __int64 *v18; // r14
  __int64 v19; // r8
  CRenderTargetManager *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // edi
  __int64 *v24; // rbp
  void *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int updated; // eax
  __int64 v29; // rcx
  int v30; // edi
  __int64 v31; // rax
  _BYTE v32[16]; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+40h] [rbp-58h] BYREF

  if ( CComposition::s_cRenderFailures > 0x3C )
  {
    v32[0] = 1;
    TriggerFailFastOnNextFailure(1, CComposition::s_hrExpectedError);
    CFailFastInScope::CaptureDxgkRingBuffer((CFailFastInScope *)v32);
  }
  else
  {
    v32[0] = 0;
  }
  *a2 = 0;
  v4 = CComposition::PreRender((CComposition *)this);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x281u);
  if ( *((_BYTE *)this + 1275) )
  {
    updated = CRenderTargetManager::UpdateMPOCaps(this[27]);
    v30 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, updated, 0x287u);
    if ( !v6 || v6 >= 0 && v30 < 0 )
      v6 = v30;
    *((_BYTE *)this + 1275) = 0;
  }
  *a2 = 0;
  v7 = this[32];
  v8 = (__int64 *)*((_QWORD *)v7 + 6);
  for ( i = (__int64 *)*((_QWORD *)v7 + 5); i != v8; i += 13 )
  {
    v31 = *i;
    *(_QWORD *)(v31 + 80) = 0LL;
    *(_QWORD *)(v31 + 72) = 0LL;
  }
  v10 = 0;
  v11 = 0;
  if ( *((_DWORD *)this + 186) )
  {
    while ( 1 )
    {
      v26 = CCachedVisualImage::Snapshot(*((CCachedVisualImage **)this[90] + v11));
      v10 = v26;
      if ( v26 < 0 )
        break;
      if ( ++v11 >= *((_DWORD *)this + 186) )
        goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0x97Fu);
  }
LABEL_9:
  *((_DWORD *)this + 186) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 90, 8LL);
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_180345830, 3LL, v10, 0x378u);
  v13 = CRenderTargetManager::Render(this[27], a2);
  v15 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_180345830, 3LL, v13, 0x37Bu);
  if ( v10 )
  {
    if ( v10 < 0 )
      goto LABEL_50;
    if ( v15 >= 0 )
      goto LABEL_15;
  }
  v10 = v15;
  if ( v15 < 0 )
LABEL_50:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v10, 0x28Cu);
LABEL_15:
  if ( !v6 || v6 >= 0 && v10 < 0 )
    v6 = v10;
  v16 = this[35];
  v17 = *(_QWORD **)v16;
  v18 = *(__int64 **)(*(_QWORD *)v16 + 8LL);
  while ( !*((_BYTE *)v18 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,CMeshCacheManager::RoundedRectangleCacheEntry>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,CMeshCacheManager::RoundedRectangleCacheEntry>,void *>>>(
      (__int64)v16,
      (__int64)v16,
      (__int64 *)v18[2]);
    v24 = v18;
    v18 = (__int64 *)*v18;
    v25 = (void *)v24[6];
    if ( v25 )
      DefaultHeap::Free(v25);
    std::_Deallocate<16,0>(v24, 56LL);
  }
  v17[1] = v17;
  *v17 = v17;
  v17[2] = v17;
  *((_QWORD *)v16 + 1) = 0LL;
  if ( !*a2 )
  {
    v21 = CComposition::PostPresent((CComposition *)this, 1);
    v23 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x294u);
    if ( !v6 || v6 >= 0 && v23 < 0 )
      v6 = v23;
  }
  CComposition::UpdateRenderFailureCount(v6);
  if ( v6 >= 0 )
  {
    v20 = this[27];
    if ( *((_BYTE *)v20 + 581) )
    {
      if ( !*((_BYTE *)v20 + 582) )
      {
        v6 = 142213121;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McGenEventWrite_EventWriteTransfer(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_SCHEDULE_DXGI_STATUS_OCCLUDED,
            v19,
            1u,
            &v33);
      }
    }
  }
  CComposition::ProcessRenderingStatus((CComposition *)this, v6);
  CFailFastInScope::~CFailFastInScope((CFailFastInScope *)v32);
}
