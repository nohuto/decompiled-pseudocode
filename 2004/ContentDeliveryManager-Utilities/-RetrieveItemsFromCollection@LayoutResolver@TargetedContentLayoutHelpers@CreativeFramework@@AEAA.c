/*
 * XREFs of ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800A5314
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800A5314 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A5948 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@PEAE@Z @ 0x1800A51CC (-GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU-$IMapView.c)
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800A5314 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 *     ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x1800A6AD4 (-push_back@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-.c)
 *     ??$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@XZ @ 0x1800A71A8 (--$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AV-$shared_ptr@UIt.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this,
        struct Windows::Services::TargetedContent::ITargetedContentCollection *a2,
        HSTRING a3,
        unsigned int a4)
{
  __int64 v6; // rax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // r15
  __int64 i; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD **); // rdi
  _QWORD *v16; // rcx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  HSTRING *v24; // rbx
  _QWORD *v25; // rsi
  void (__fastcall *v26)(_QWORD *, HSTRING *); // rdi
  __int64 v27; // rax
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  unsigned int v30; // ecx
  double NumberFromPropertyBag; // xmm0_8
  double v32; // xmm0_8
  double v33; // xmm0_8
  volatile signed __int32 *v34; // rbx
  _QWORD *v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  wil::details::in1diag3 *v38; // rcx
  __int64 v39; // rbx
  int v40; // eax
  wil::details::in1diag3 *v41; // rcx
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 (__fastcall *v45)(__int64, __int64, struct Windows::Services::TargetedContent::ITargetedContentCollection **); // rsi
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v46; // rcx
  int v47; // eax
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v48; // rcx
  char v49; // [rsp+30h] [rbp-E8h] BYREF
  char v50[7]; // [rsp+31h] [rbp-E7h] BYREF
  HSTRING *newString; // [rsp+38h] [rbp-E0h] BYREF
  volatile signed __int32 *v52; // [rsp+40h] [rbp-D8h]
  __int64 v53; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v54; // [rsp+50h] [rbp-C8h]
  unsigned int v55; // [rsp+58h] [rbp-C0h]
  _QWORD *v56; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+70h] [rbp-A8h]
  unsigned int v59; // [rsp+78h] [rbp-A0h]
  struct Windows::Services::TargetedContent::ITargetedContentCollection *v60; // [rsp+80h] [rbp-98h] BYREF
  int v61; // [rsp+88h] [rbp-90h] BYREF
  int v62; // [rsp+8Ch] [rbp-8Ch] BYREF
  __int64 v63; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v64[2]; // [rsp+98h] [rbp-80h] BYREF
  int v65; // [rsp+A8h] [rbp-70h]
  __int64 v66; // [rsp+B0h] [rbp-68h]
  __int64 v67; // [rsp+B8h] [rbp-60h]
  __int64 v68; // [rsp+C0h] [rbp-58h]
  int v69; // [rsp+C8h] [rbp-50h]
  __int64 v70; // [rsp+D0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v67 = -2LL;
  v6 = *(_QWORD *)a2;
  v64[0] = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, _QWORD *))(v6 + 96))(
         a2,
         v64);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_46:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x14A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_47;
  }
  v9 = v64[0];
  v54 = v64[0];
  v55 = 0;
  v56 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v64[0] + 56LL))(v64[0], &v61);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_47:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v10);
LABEL_48:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v17);
LABEL_49:
    wil::details::in1diag3::Throw_Hr(
      v21,
      (void *)0x150,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v20);
LABEL_50:
    wil::details::in1diag3::Throw_Hr(
      v23,
      (void *)0x152,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v22);
LABEL_51:
    wil::details::in1diag3::Throw_Hr(
      v29,
      (void *)0x15B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v28);
LABEL_52:
    wil::details::in1diag3::Throw_Hr(
      v38,
      (void *)0x173,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v37);
    goto LABEL_53;
  }
  v64[1] = v9;
  v65 = v61;
  v12 = 0LL;
  v66 = 0LL;
  for ( i = v55; (_DWORD)i != v65; i = ++v55 )
  {
    v14 = v54;
    v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)v54 + 48LL);
    v16 = v56;
    if ( v56 )
    {
      v56 = 0LL;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v16 + 16LL))(v16, *v16);
      i = v55;
    }
    v17 = v15(v14, i, &v56);
    v18 = retaddr;
    if ( v17 < 0 )
      goto LABEL_48;
    v57 = 0LL;
    v19 = *v56;
    v57 = 0LL;
    v20 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v19 + 72))(v56, &v57);
    v21 = retaddr;
    if ( v20 < 0 )
      goto LABEL_49;
    v50[0] = 0;
    v22 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v57 + 48LL))(v57, v50);
    v23 = retaddr;
    if ( v22 < 0 )
      goto LABEL_50;
    if ( v50[0] )
    {
      std::make_shared<CreativeFramework::TargetedContentLayoutHelpers::Item>(&newString);
      v24 = newString;
      if ( !a3 || a3 != *newString )
      {
        WindowsDeleteString(*newString);
        *v24 = 0LL;
        WindowsDuplicateString(a3, v24);
        v24 = newString;
      }
      v25 = v56;
      v26 = *(void (__fastcall **)(_QWORD *, HSTRING *))(*v56 + 48LL);
      WindowsDeleteString(v24[1]);
      v24[1] = 0LL;
      v26(v25, v24 + 1);
      v53 = 0LL;
      v27 = *v56;
      v53 = 0LL;
      v28 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v27 + 80))(v56, &v53);
      v29 = retaddr;
      if ( v28 < 0 )
        goto LABEL_51;
      v30 = a4++;
      *((_DWORD *)newString + 5) = v30;
      NumberFromPropertyBag = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(
                                L"collection",
                                v53,
                                &v49);
      *((double *)newString + 4) = NumberFromPropertyBag;
      *((_BYTE *)newString + 17) = v49 != 0;
      v32 = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(L"item", v53, &v49);
      *((double *)newString + 5) = v32;
      *((_BYTE *)newString + 18) = v49 != 0;
      v33 = CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(L"rank", v53, &v49);
      *((double *)newString + 3) = v33;
      *((_BYTE *)newString + 16) = v49 != 0;
      *((_BYTE *)newString + 48) = 0;
      std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
        (char *)this + 16,
        &newString);
      if ( *((_BYTE *)newString + 17) )
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
          (char *)this + 40,
          &newString);
      if ( v53 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
      v34 = v52;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
        }
        v12 = v66;
      }
    }
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v35 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
  }
  v36 = *(_QWORD *)a2;
  v63 = 0LL;
  v37 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(v36 + 88))(
          a2,
          &v63);
  v38 = retaddr;
  if ( v37 < 0 )
    goto LABEL_52;
  v39 = v63;
  v58 = v63;
  v59 = 0;
  v60 = 0LL;
  v40 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v63 + 56LL))(v63, &v62);
  v41 = retaddr;
  if ( v40 < 0 )
  {
LABEL_53:
    wil::details::in1diag3::Throw_Hr(
      v41,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v40);
    JUMPOUT(0x1800A593FLL);
  }
  v68 = v39;
  v42 = v62;
  v69 = v62;
  v70 = 0LL;
  v43 = v59;
  if ( v59 != v62 )
  {
    while ( 1 )
    {
      v44 = v58;
      v45 = *(__int64 (__fastcall **)(__int64, __int64, struct Windows::Services::TargetedContent::ITargetedContentCollection **))(*(_QWORD *)v58 + 48LL);
      v46 = v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, _QWORD))(*(_QWORD *)v46 + 16LL))(
          v46,
          *(_QWORD *)v46);
        v43 = v59;
      }
      v47 = v45(v44, v43, &v60);
      if ( v47 < 0 )
        break;
      CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection(this, v60, a3, a4);
      v43 = v59 + 1;
      v59 = v43;
      if ( (_DWORD)v43 == v42 )
        goto LABEL_38;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v47);
    goto LABEL_46;
  }
LABEL_38:
  v48 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *))(*(_QWORD *)v48 + 16LL))(v48);
  }
  if ( v63 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
  if ( v64[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v64[0] + 16LL))(v64[0]);
}
