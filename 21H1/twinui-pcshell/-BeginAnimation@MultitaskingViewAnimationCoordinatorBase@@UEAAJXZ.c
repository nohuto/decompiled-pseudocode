/*
 * XREFs of ?BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ @ 0x18038FBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800A5F5C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134468 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18036C7C0 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18036C844 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_ @ 0x180372614 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc_____lambda_bbeb76a51bfb926050d075f4007d064b__&__lambda_ce3300e2c568934d15624d64d17a11bc__&_IDCompBatchAnimationCallback___&_ @ 0x18038E9FC (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_bbeb76a51.c)
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89___ @ 0x18038F0A8 (CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89___.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1803902DC (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemE.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUHWND__@@AEBV?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@PEAV345@@Z @ 0x180390D28 (-_AddUpdateItem@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-.c)
 */

__int64 __fastcall MultitaskingViewAnimationCoordinatorBase::BeginAnimation(
        MultitaskingViewAnimationCoordinatorBase *this)
{
  _OWORD *v2; // rax
  __int64 v3; // rbx
  __int128 v4; // xmm1
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  LPARAM *p_lParam; // rcx
  __int64 v14; // rbx
  _QWORD *v15; // rax
  char v16; // di
  __int64 v17; // rdx
  int updated; // eax
  __int64 *v19; // rax
  HWND v20; // rax
  const char *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  __int64 *v30; // rbx
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  _DWORD *v36; // rcx
  unsigned int v37; // edx
  unsigned int i; // edi
  __int64 v40; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C8h] BYREF
  void (__fastcall ***v42)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-A0h] BYREF
  MultitaskingViewAnimationCoordinatorBase *v47; // [rsp+70h] [rbp-98h] BYREF
  MultitaskingViewAnimationCoordinatorBase *v48; // [rsp+78h] [rbp-90h]
  int v49; // [rsp+80h] [rbp-88h] BYREF
  __int64 v50; // [rsp+84h] [rbp-84h]
  HLOCAL hMem; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h] BYREF
  MultitaskingViewAnimationCoordinatorBase *v53; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-60h] BYREF
  void (__fastcall ***v55)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp-58h] BYREF
  MultitaskingViewAnimationCoordinatorBase **v56; // [rsp+B8h] [rbp-50h]
  struct tagRECT Rect; // [rsp+C0h] [rbp-48h] BYREF
  LPARAM lParam; // [rsp+D8h] [rbp-30h] BYREF
  MultitaskingViewAnimationCoordinatorBase *v59; // [rsp+E0h] [rbp-28h] BYREF
  MultitaskingViewAnimationCoordinatorBase **v60; // [rsp+E8h] [rbp-20h]
  struct tagRECT *p_Rect; // [rsp+F0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v2 = (_OWORD *)(*(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, LPARAM *))(*(_QWORD *)this
                                                                                                 + 128LL))(
                   this,
                   &lParam);
  v3 = *((_QWORD *)this + 5);
  *(_OWORD *)((char *)this + 104) = *v2;
  *(_OWORD *)((char *)this + 120) = v2[1];
  *(_OWORD *)((char *)this + 136) = v2[2];
  v4 = v2[3];
  v46 = 0LL;
  *(_OWORD *)((char *)this + 152) = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 176LL))(v3, &v46);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_56;
  }
  v7 = *((_QWORD *)this + 5);
  v45 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 184LL))(v7, &v45);
  v8 = *((_QWORD *)this + 5);
  v44 = 0LL;
  v43 = 0LL;
  if ( *((_BYTE *)this + 168) )
  {
    if ( *((_BYTE *)this + 169) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 208LL))(v8, &v44);
      if ( v9 < 0 )
      {
        v10 = 34LL;
LABEL_11:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v9);
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 200LL))(v8, &v43);
      if ( v9 < 0 )
      {
        v10 = 38LL;
        goto LABEL_11;
      }
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 192LL))(v8, &v43);
    if ( v9 < 0 )
    {
      v10 = 45LL;
      goto LABEL_11;
    }
  }
  v11 = v46;
  v49 = 0;
  v50 = 31LL;
  hMem = 0LL;
  v52 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v52);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 56LL))(v11, &v52);
  v6 = v12;
  if ( v12 >= 0 )
  {
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
      (__int64)&v47,
      v52);
    LODWORD(v54) = 0;
    v56 = &v47;
    v55 = 0LL;
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::Iterator::GetCurrentObject(&v54);
    p_lParam = &lParam;
    LODWORD(lParam) = (_DWORD)v48;
    v60 = &v47;
    v59 = 0LL;
    while ( 1 )
    {
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::Iterator::GetCurrentObject(p_lParam);
      if ( (_DWORD)v54 == (_DWORD)lParam && v56 == v60 )
        break;
      v14 = (__int64)v55;
      v42 = v55;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v42);
      v15 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, MultitaskingViewAnimationCoordinatorBase **))(*(_QWORD *)v14 + 24LL))(
                        v14,
                        &v53);
      v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 152LL))(*v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
      if ( v16 )
      {
        *(_QWORD *)&Rect.left = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
        updated = CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
                    &v49,
                    v17,
                    &Rect,
                    &v42);
        v6 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x37,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
            (const char *)(unsigned int)updated);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v59);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
          goto LABEL_49;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
      LODWORD(v54) = v54 + 1;
      p_lParam = &v54;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v59);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
    v53 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v53);
    v47 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v47);
    v48 = this;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
    v19 = lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_(&v54, (__int64 *)&v47);
    CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89_(v19, (_QWORD *)this + 8);
    v42 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v42);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(
      &v54,
      (__int64 *)&v42,
      (__int64)this + 104,
      *((_QWORD *)this + 8));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
    if ( !*((_BYTE *)this + 169) )
    {
      Rect = 0LL;
      v20 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 328LL))(v46);
      if ( !GetClientRect(v20, &Rect) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x4B,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
          v21);
      LOBYTE(v40) = 0;
      lParam = (LPARAM)&v49;
      v59 = this;
      v60 = (MultitaskingViewAnimationCoordinatorBase **)&v40;
      p_Rect = &Rect;
      EnumWindows(
        (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_e2c0853faeb8110aeaae9508528948ac_>,
        (LPARAM)&lParam);
    }
    v41 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    *(_QWORD *)&Rect.left = *((_QWORD *)this + 8);
    v41 = 0LL;
    Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc_____lambda_bbeb76a51bfb926050d075f4007d064b_____lambda_ce3300e2c568934d15624d64d17a11bc____IDCompBatchAnimationCallback_____(
      &v42,
      v22,
      v23,
      (__int64 *)&Rect.left);
    v25 = (__int64)v42;
    if ( v42 )
    {
      (**v42)(v42, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, &v41);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v43;
    if ( v43 )
    {
      if ( !*((_QWORD *)this + 12) )
      {
        v27 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v43 + 32LL))(v43, v24, 0LL, v41);
        if ( v27 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x78,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
            (const char *)(unsigned int)v27);
        v26 = v43;
      }
      v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v26 + 128LL))(
              v26,
              *((unsigned int *)this + 32),
              v41);
      if ( v28 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7A,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v28);
    }
    v29 = v44;
    v30 = (__int64 *)((char *)this + 96);
    if ( v44 )
    {
      if ( !*v30 )
      {
        v31 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v44 + 32LL))(v44, v24, 0LL, v41);
        if ( v31 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x81,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
            (const char *)(unsigned int)v31);
        v29 = v44;
      }
      v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v29 + 128LL))(
              v29,
              *((unsigned int *)this + 40),
              v41);
      if ( v32 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x83,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v32);
    }
    v33 = v45;
    if ( v45 )
    {
      v30 = (__int64 *)((char *)this + 96);
      if ( !*((_QWORD *)this + 12) )
      {
        v34 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v45 + 504LL))(
                v45,
                v24,
                0LL,
                v41);
        if ( v34 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x8A,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
            (const char *)(unsigned int)v34);
        v33 = v45;
      }
      v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v33 + 496LL))(
              v33,
              *((unsigned int *)this + 36),
              v41);
      if ( v35 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8C,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v35);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
    v6 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)&v54);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)v12);
  }
LABEL_49:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v52);
  v36 = hMem;
  if ( hMem )
  {
    v37 = v50;
    for ( i = 0; i < v37; ++i )
    {
      if ( v36[6 * i] == 1 )
      {
        v36[6 * i] = 2;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36[6 * i + 4]);
        ++HIDWORD(v50);
        --v49;
        v36 = hMem;
        v37 = v50;
      }
    }
    LocalFree(v36);
    hMem = 0LL;
  }
  v49 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
LABEL_56:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
  return v6;
}
