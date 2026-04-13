/*
 * XREFs of ?NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A3C4C
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A4074 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006AEBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800A2298 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800A3668 (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::NeedBinding(
        __int64 a1,
        __int64 *a2,
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a3)
{
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  bool v7; // bl
  char v8; // di
  __int64 v9; // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // r14
  void *v18; // rsi
  unsigned __int64 v19; // r15
  void *v20; // r12
  void **v21; // rcx
  _WORD *v22; // rdx
  unsigned __int64 v23; // rax
  int v24; // ecx
  int v25; // eax
  void **v26; // rcx
  _WORD *v27; // rdx
  unsigned __int64 v28; // rax
  int v29; // ecx
  int v30; // eax
  _WORD *v31; // rcx
  _WORD *v32; // rdx
  unsigned __int64 v33; // rax
  int v34; // ecx
  int v35; // eax
  _BYTE v37[4]; // [rsp+30h] [rbp-79h] BYREF
  int v38; // [rsp+34h] [rbp-75h] BYREF
  __int64 v39; // [rsp+38h] [rbp-71h] BYREF
  __int64 *v40; // [rsp+40h] [rbp-69h] BYREF
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v41; // [rsp+48h] [rbp-61h]
  __int64 v42; // [rsp+50h] [rbp-59h]
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v43; // [rsp+58h] [rbp-51h]
  void *v44[2]; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-39h]
  unsigned __int64 v46; // [rsp+78h] [rbp-31h]
  _QWORD v47[2]; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 v48; // [rsp+90h] [rbp-19h]
  unsigned __int64 v49; // [rsp+98h] [rbp-11h]
  _QWORD v50[2]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v51; // [rsp+B0h] [rbp+7h]
  unsigned __int64 v52; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v42 = -2LL;
  v41 = a3;
  v43 = a3;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _BYTE *))(*a2 + 56))(a2, *(_QWORD *)(a1 + 8), v37);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_73:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x95,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v5);
LABEL_74:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x9E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_75;
  }
  v7 = 0;
  v8 = 1;
  if ( !v37[0] )
    goto LABEL_12;
  v9 = *a2;
  v40 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 **))(v9 + 64))(a2, *(_QWORD *)(a1 + 8), 0LL, &v40);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_74;
  v39 = 0LL;
  v12 = *v40;
  v39 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 72))(v40, &v39);
  v14 = retaddr;
  if ( v13 < 0 )
  {
LABEL_75:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0xA2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v13);
    JUMPOUT(0x1800A406BLL);
  }
  v38 = 0;
  v15 = v39;
  if ( v39 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 56LL))(v39, &v38);
    if ( v16 >= 0 )
    {
      v7 = v38 != 0;
      v15 = v39;
      goto LABEL_8;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_73;
  }
LABEL_8:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v40 )
    (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
LABEL_12:
  CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
    (CreativeFramework::Policy *)v47,
    *(HSTRING *)(a1 + 8),
    (LPCWSTR)&stru_18016ADF0);
  CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
    (CreativeFramework::Policy *)v50,
    *(HSTRING *)(a1 + 8),
    (LPCWSTR)&stru_18016AE08);
  v46 = 7LL;
  v45 = 0LL;
  LOWORD(v44[0]) = 0;
  std::wstring::assign(v44, (char *)L"cloud", aCloud[0] != 0 ? 5 : 0);
  v17 = v49;
  v18 = (void *)v47[0];
  v19 = v52;
  v20 = (void *)v50[0];
  if ( v37[0] && v7 && v48 )
  {
    v21 = v44;
    if ( v46 >= 8 )
      v21 = (void **)v44[0];
    v22 = v47;
    if ( v49 >= 8 )
      v22 = (_WORD *)v47[0];
    v23 = v45;
    if ( v48 < v45 )
      v23 = v48;
    if ( v23 )
    {
      while ( *v22 == *(_WORD *)v21 )
      {
        ++v22;
        v21 = (void **)((char *)v21 + 2);
        if ( !--v23 )
          goto LABEL_24;
      }
      v24 = *v22 < *(_WORD *)v21 ? -1 : 1;
    }
    else
    {
LABEL_24:
      v24 = 0;
    }
    v25 = v48 != v45;
    if ( v48 < v45 )
      v25 = -1;
    if ( v24 )
      v25 = v24;
    if ( v25 )
    {
      v26 = v44;
      if ( v46 >= 8 )
        v26 = (void **)v44[0];
      v27 = v50;
      if ( v52 >= 8 )
        v27 = (_WORD *)v50[0];
      v28 = v45;
      if ( v51 < v45 )
        v28 = v51;
      if ( v28 )
      {
        while ( *v27 == *(_WORD *)v26 )
        {
          ++v27;
          v26 = (void **)((char *)v26 + 2);
          if ( !--v28 )
            goto LABEL_39;
        }
        v29 = *v27 < *(_WORD *)v26 ? -1 : 1;
      }
      else
      {
LABEL_39:
        v29 = 0;
      }
      v30 = v51 != v45;
      if ( v51 < v45 )
        v30 = -1;
      if ( v29 )
        v30 = v29;
      if ( v30 )
        goto LABEL_63;
    }
    v31 = v47;
    if ( v49 >= 8 )
      v31 = (_WORD *)v47[0];
    v32 = v50;
    if ( v52 >= 8 )
      v32 = (_WORD *)v50[0];
    v33 = v48;
    if ( v51 < v48 )
      v33 = v51;
    if ( v33 )
    {
      while ( *v32 == *v31 )
      {
        ++v32;
        ++v31;
        if ( !--v33 )
          goto LABEL_57;
      }
      v34 = *v32 < *v31 ? -1 : 1;
    }
    else
    {
LABEL_57:
      v34 = 0;
    }
    v35 = v51 != v48;
    if ( v51 < v48 )
      v35 = -1;
    if ( v34 )
      v35 = v34;
    if ( !v35 )
LABEL_63:
      v8 = 0;
  }
  if ( v46 >= 8 )
  {
    operator delete(v44[0]);
    v17 = v49;
    v18 = (void *)v47[0];
    v19 = v52;
    v20 = (void *)v50[0];
  }
  v46 = 7LL;
  v45 = 0LL;
  LOWORD(v44[0]) = 0;
  if ( v19 >= 8 )
  {
    operator delete(v20);
    v17 = v49;
    v18 = (void *)v47[0];
  }
  v52 = 7LL;
  v51 = 0LL;
  LOWORD(v50[0]) = 0;
  if ( v17 >= 8 )
    operator delete(v18);
  v49 = 7LL;
  v48 = 0LL;
  LOWORD(v47[0]) = 0;
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver(v41);
  return v8;
}
