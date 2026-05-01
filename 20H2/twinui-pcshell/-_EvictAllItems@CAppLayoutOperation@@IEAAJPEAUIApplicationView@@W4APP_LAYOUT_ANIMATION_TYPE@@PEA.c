/*
 * XREFs of ?_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA_N@Z @ 0x18047F70C
 * Callers:
 *     ?SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x18040B020 (-SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180480160 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x180409A8C (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18047FAE4 (-_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18047FB3C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_EvictAllItems(__int64 a1, struct IUnknown *a2, unsigned int a3, char *a4)
{
  int v8; // eax
  char v9; // si
  int v10; // r13d
  __int64 v11; // rbx
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rbx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  struct IUnknown *v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+38h] [rbp-30h] BYREF
  __int64 v22; // [rsp+40h] [rbp-28h] BYREF
  __int128 v23; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]

  if ( a4 )
    *a4 = 0;
  if ( a3 > 0xA || (v8 = 1470, !_bittest(&v8, a3)) )
  {
    v13 = -2147024809;
    v17 = 315LL;
    goto LABEL_31;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 264LL))(*(_QWORD *)(a1 + 40), 6LL);
  v9 = 0;
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 72LL))(*(_QWORD *)(a1 + 40));
  if ( !v10 )
    goto LABEL_16;
  do
  {
    v21 = 0LL;
    v11 = *(_QWORD *)(a1 + 40);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v11 + 96LL))(
            v11,
            (unsigned int)(v10 - 1),
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            &v21);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x145,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_24;
    }
    v20 = 0LL;
    v14 = v21;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v15 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v14 + 48LL))(
            v14,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v20);
    v13 = v15;
    if ( v15 < 0 )
    {
      v18 = 327LL;
      goto LABEL_21;
    }
    if ( !v9 && a2 && (unsigned int)SHIsSameObject(v20, a2) )
    {
      v22 = 0LL;
      v9 = 1;
      v16 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(&v21, &v22);
      v13 = v16;
      if ( v16 >= 0 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v22 + 104LL))(v22, 0LL, &v23);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        goto LABEL_14;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x150,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      return (unsigned int)v13;
    }
    v15 = CAppLayoutOperation::_EvictView(a1, v20, a3);
    v13 = v15;
    if ( v15 < 0 )
    {
      v18 = 342LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_22;
    }
LABEL_14:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    --v10;
  }
  while ( v10 );
  if ( v9 )
    goto LABEL_25;
LABEL_16:
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 240LL))(
          *(_QWORD *)(a1 + 40),
          0LL,
          0LL,
          0LL);
  if ( v13 >= 0 )
  {
LABEL_25:
    v13 = CAppLayoutOperation::_FinalizeLayout(a1);
    if ( v13 < 0 )
    {
      v17 = 353LL;
      goto LABEL_31;
    }
    if ( a4 )
      *a4 = v9;
    return 0LL;
  }
  else
  {
    v17 = 350LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
}
