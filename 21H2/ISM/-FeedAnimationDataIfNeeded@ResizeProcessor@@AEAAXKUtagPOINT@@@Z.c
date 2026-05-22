/*
 * XREFs of ?FeedAnimationDataIfNeeded@ResizeProcessor@@AEAAXKUtagPOINT@@@Z @ 0x1800FDF60
 * Callers:
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FE460 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FEDE0 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C214 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x1800FE134 (-FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ResizeProcessor::FeedAnimationDataIfNeeded(__int64 **this, unsigned int a2, struct tagPOINT a3)
{
  unsigned __int64 v4; // r15
  __int64 appended; // rax
  _QWORD *v7; // r11
  __int64 v8; // r10
  __int64 *i; // rbx
  __int64 v10; // rbx
  struct IAnimationDataProvider *AnimationDataProvider; // r14
  void (__fastcall *v12)(struct IAnimationDataProvider *, __int64 *, __int64 *); // rsi
  __int64 (__fastcall *v13)(struct IAnimationDataProvider *, _QWORD *); // rsi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  _QWORD v18[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  __int64 v20; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+40h] BYREF
  struct tagPOINT v22; // [rsp+90h] [rbp+48h]
  __int64 v23; // [rsp+98h] [rbp+50h] BYREF

  v22 = a3;
  v21 = a2;
  v4 = a2;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v21, 4uLL);
  v8 = appended & v7[6];
  for ( i = *(__int64 **)(v7[3] + 16 * v8);
        i != (__int64 *)*std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                           (__int64)v7,
                           &v20,
                           v8);
        i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == (_DWORD)v4 )
      goto LABEL_6;
  }
  i = (__int64 *)v7[1];
LABEL_6:
  if ( i != this[38] )
  {
    v10 = i[3];
    v18[1] = v10;
    if ( v10 )
      (**(void (__fastcall ***)(__int64))v10)(v10);
    AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
    v12 = *(void (__fastcall **)(struct IAnimationDataProvider *, __int64 *, __int64 *))(*(_QWORD *)AnimationDataProvider
                                                                                       + 48LL);
    v23 = v10;
    if ( v10 )
      (**(void (__fastcall ***)(__int64))v10)(v10);
    v12(AnimationDataProvider, &v20, &v23);
    v13 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, _QWORD *))(*(_QWORD *)AnimationDataProvider + 40LL);
    v18[0] = v10;
    if ( v10 )
      (**(void (__fastcall ***)(__int64))v10)(v10);
    v14 = v13(AnimationDataProvider, v18);
    v15 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
    InputETW::Resize::FeedPositionData(v4, v15, v14, a3);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v20 + 8) + 48LL))(v20 + 8, 1LL);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        579LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeprocessor.cpp",
        (const char *)(unsigned int)v16);
    v17 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
}
