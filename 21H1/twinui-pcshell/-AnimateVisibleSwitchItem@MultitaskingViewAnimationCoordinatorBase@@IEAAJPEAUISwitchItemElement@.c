/*
 * XREFs of ?AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@_N@Z @ 0x18038F818
 * Callers:
 *     _lambda_e2c0853faeb8110aeaae9508528948ac_::operator() @ 0x18038F5C8 (_lambda_e2c0853faeb8110aeaae9508528948ac_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___ @ 0x18038F12C (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333a.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUHWND__@@AEBUThumbnailData@MultitaskingViewAnimationCoordinatorBase@@PEAU34@@Z @ 0x180390C20 (-_AddUpdateItem@-$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinat.c)
 */

__int64 __fastcall MultitaskingViewAnimationCoordinatorBase::AnimateVisibleSwitchItem(
        MultitaskingViewAnimationCoordinatorBase *this,
        struct ISwitchItemElement *a2,
        struct IDCompBatchAnimationCallback *a3,
        char a4)
{
  __int64 (__fastcall *v8)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, __int128 *); // rax
  int v9; // eax
  unsigned int updated; // ebx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rbx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  int AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e; // eax
  __int64 v29; // rdx
  struct ISwitchItemElement *v31; // [rsp+50h] [rbp-29h] BYREF
  struct ISwitchItemElement *v32; // [rsp+58h] [rbp-21h] BYREF
  struct ISwitchItemElement *v33; // [rsp+60h] [rbp-19h] BYREF
  __int64 v34; // [rsp+68h] [rbp-11h] BYREF
  __int64 v35; // [rsp+70h] [rbp-9h] BYREF
  __int128 v36; // [rsp+78h] [rbp-1h] BYREF
  __int128 v37; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v8 = *(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, __int128 *))(*(_QWORD *)this + 152LL);
  v36 = 0LL;
  v9 = v8(this, a2, &v36);
  updated = v9;
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *))(*(_QWORD *)a2 + 32LL))(a2);
    v31 = 0LL;
    v12 = v11;
    v13 = (__int64 *)*((_QWORD *)this + 12);
    v35 = v11;
    if ( v13
      && (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31),
          v14 = *v13,
          v15 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *))(*(_QWORD *)a2 + 32LL))(a2),
          (*(int (__fastcall **)(__int64 *, __int64, struct ISwitchItemElement **))(v14 + 24))(v13, v15, &v31) >= 0) )
    {
      v16 = (*(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, struct ISwitchItemElement *))(*(_QWORD *)this + 136LL))(
              this,
              a2,
              v31);
      updated = v16;
      if ( v16 < 0 )
      {
        v18 = (unsigned int)v16;
        v19 = 201LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
          (const char *)v18);
LABEL_29:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
        return updated;
      }
    }
    else
    {
      v20 = *(_QWORD *)this;
      v37 = 0LL;
      v21 = (*(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, __int128 *))(v20 + 144))(
              this,
              a2,
              &v37);
      updated = v21;
      if ( v21 < 0 )
      {
        v18 = (unsigned int)v21;
        v19 = 206LL;
        goto LABEL_20;
      }
      v22 = *((_QWORD *)this + 4);
      if ( a4 )
      {
        LODWORD(v32) = DWORD2(v36) - v36;
        HIDWORD(v32) = HIDWORD(v36) - DWORD1(v36);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
        v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, struct ISwitchItemElement **, _QWORD, GUID *, struct ISwitchItemElement **))(*(_QWORD *)v22 + 64LL))(
                v22,
                *((_QWORD *)this + 6),
                v12,
                0LL,
                &v32,
                0LL,
                &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                &v31);
        updated = v23;
        if ( v23 < 0 )
        {
          v18 = (unsigned int)v23;
          v19 = 212LL;
          goto LABEL_20;
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, GUID *, struct ISwitchItemElement **))(*(_QWORD *)v22 + 64LL))(
                v22,
                *((_QWORD *)this + 6),
                v12,
                0LL,
                0LL,
                0LL,
                &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                &v31);
        updated = v24;
        if ( v24 < 0 )
        {
          v18 = (unsigned int)v24;
          v19 = 216LL;
          goto LABEL_20;
        }
      }
      v25 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v31 + 24LL))(
              v31,
              &v37,
              0LL,
              0LL);
      updated = v25;
      if ( v25 < 0 )
      {
        v18 = (unsigned int)v25;
        v19 = 219LL;
        goto LABEL_20;
      }
    }
    LOBYTE(v17) = 1;
    v26 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, _QWORD, __int64))(*(_QWORD *)v31 + 152LL))(
            v31,
            0LL,
            v17);
    updated = v26;
    if ( v26 < 0 )
    {
      v18 = (unsigned int)v26;
      v19 = 221LL;
      goto LABEL_20;
    }
    v32 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
    v33 = v31;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
    updated = CSimpleHashTable<HWND__ *,MultitaskingViewAnimationCoordinatorBase::ThumbnailData,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
                (char *)this + 72,
                v27,
                &v35,
                &v32);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    if ( (updated & 0x80000000) != 0 )
    {
      v18 = updated;
      v19 = 222LL;
      goto LABEL_20;
    }
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
    v32 = v31;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
    AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___(
                                                                  (__int64 *)&v32,
                                                                  (__int64)a3,
                                                                  &v34);
    updated = AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e;
    if ( AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e >= 0 )
    {
      AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int128 *, _QWORD, __int64))(*(_QWORD *)v31 + 24LL))(
                                                                    v31,
                                                                    &v36,
                                                                    *((unsigned int *)this + 37),
                                                                    v34);
      updated = AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e;
      if ( AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e >= 0 )
      {
        AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e = (*(__int64 (__fastcall **)(MultitaskingViewAnimationCoordinatorBase *, struct ISwitchItemElement *, struct ISwitchItemElement *, __int64))(*(_QWORD *)this + 160LL))(
                                                                      this,
                                                                      a2,
                                                                      v31,
                                                                      v34);
        updated = AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e;
        if ( AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e >= 0 )
        {
LABEL_28:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
          goto LABEL_29;
        }
        v29 = 228LL;
      }
      else
      {
        v29 = 227LL;
      }
    }
    else
    {
      v29 = 225LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC2,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
    (const char *)(unsigned int)v9);
  return updated;
}
