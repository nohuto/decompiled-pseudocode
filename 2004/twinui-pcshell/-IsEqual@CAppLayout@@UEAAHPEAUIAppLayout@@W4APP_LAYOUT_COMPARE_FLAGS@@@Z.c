/*
 * XREFs of ?IsEqual@CAppLayout@@UEAAHPEAUIAppLayout@@W4APP_LAYOUT_COMPARE_FLAGS@@@Z @ 0x180482940
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804817A8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VF.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::IsEqual(__int64 a1, int (__fastcall ***a2)(_QWORD, GUID *, __int64 *), char a3)
{
  int CanCastTo; // r14d
  unsigned int v7; // esi
  RTL_SRWLOCK *v8; // rbx
  RTL_SRWLOCK *v9; // rdi
  const struct _GUID *v10; // rdx
  __int64 *v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rcx
  int v16; // r13d
  __int64 v17; // rsi
  __int64 v18; // rsi
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned __int64 v23; // r12
  unsigned __int64 i; // r14
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v28; // [rsp+38h] [rbp-49h] BYREF
  struct IUnknown *v29; // [rsp+40h] [rbp-41h] BYREF
  __int64 *v30; // [rsp+48h] [rbp-39h] BYREF
  __int64 v31; // [rsp+50h] [rbp-31h] BYREF
  __int64 *v32; // [rsp+58h] [rbp-29h] BYREF
  struct IUnknown *v33[2]; // [rsp+60h] [rbp-21h] BYREF
  RECT rc2; // [rsp+70h] [rbp-11h] BYREF
  int v35; // [rsp+80h] [rbp-1h]
  int v36; // [rsp+84h] [rbp+3h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v33[1] = (struct IUnknown *)-2LL;
  CanCastTo = 0;
  v7 = 0;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  if ( (**a2)(a2, &GUID_1ef1ecfa_786a_4d06_b024_4a61c7049b29, &v28) < 0 )
    goto LABEL_48;
  v8 = 0LL;
  v9 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
  v30 = 0LL;
  if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v30 = v11;
    v12 = *v11;
    goto LABEL_6;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IAppLayoutInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutBuilder,IAppLayout,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
                (Microsoft::WRL::FtmBase *)v11,
                v10,
                (void **)&v30);
  if ( CanCastTo >= 0 )
  {
    v12 = *v30;
LABEL_6:
    (*(void (**)(void))(v12 + 8))();
  }
  if ( CanCastTo < 0 )
    goto LABEL_44;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
  if ( (**a2)(a2, &GUID_00000000_0000_0000_c000_000000000046, (__int64 *)&v32) < 0 )
    goto LABEL_44;
  v8 = (RTL_SRWLOCK *)(a1 + 16);
  if ( v32 > v30 )
  {
    v9 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 56LL))(v28);
    AcquireSRWLockShared(v9);
    AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 16));
    if ( v32 != v30 )
    {
      v9 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 56LL))(v28);
      AcquireSRWLockShared(v9);
    }
  }
  (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v28 + 24LL))(v28, &rc2);
  if ( (a3 & 1) != 0
    && (!EqualRect((const RECT *)(a1 + 24), &rc2) || *(_DWORD *)(a1 + 40) != v35 || *(_DWORD *)(a1 + 44) != v36) )
  {
    goto LABEL_43;
  }
  v7 = 1;
  if ( (a3 & 4) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 72);
    if ( v13 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28) )
    {
      v14 = 0LL;
      if ( v13 )
      {
        while ( 1 )
        {
          if ( !v7 )
            goto LABEL_44;
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v14);
          v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
          v31 = 0LL;
          v17 = v28;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
          if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v17 + 40LL))(
                 v17,
                 (unsigned int)v14,
                 &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
                 &v31) < 0
            || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v31 + 24LL))(v31) != v16 )
          {
            v7 = 0;
            goto LABEL_32;
          }
          v7 = 1;
          if ( v16 == 1 )
            break;
LABEL_32:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
          if ( ++v14 >= v13 )
            goto LABEL_44;
        }
        v29 = 0LL;
        v33[0] = 0LL;
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
        v19 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v18 + 48LL))(
                v18,
                &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                &v29);
        v20 = retaddr;
        if ( v19 >= 0 )
        {
          v22 = v31;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v33);
          v19 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v22 + 48LL))(
                  v22,
                  &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                  v33);
          v20 = retaddr;
          if ( v19 >= 0 )
          {
            v7 = SHIsSameObject(v29, v33[0]);
            goto LABEL_30;
          }
          v21 = 790LL;
        }
        else
        {
          v21 = 789LL;
        }
        wil::details::in1diag3::_Log_Hr(
          v20,
          (void *)v21,
          (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
          (const char *)(unsigned int)v19);
        v7 = 0;
LABEL_30:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v33);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
        goto LABEL_32;
      }
      goto LABEL_44;
    }
LABEL_43:
    v7 = 0;
    goto LABEL_44;
  }
  if ( (a3 & 2) != 0 )
  {
    v23 = *(_QWORD *)(a1 + 72);
    if ( v23 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28) )
    {
      for ( i = 0LL; i < v23; ++i )
      {
        if ( !v7 )
          break;
        v29 = 0LL;
        v25 = v28;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v25 + 40LL))(
               v25,
               (unsigned int)i,
               &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
               &v29) >= 0 )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i);
          v7 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v26 + 96LL))(v26, v29);
        }
        else
        {
          v7 = 0;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
      }
      goto LABEL_44;
    }
    goto LABEL_43;
  }
LABEL_44:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
  if ( v9 )
    ReleaseSRWLockShared(v9);
  if ( v8 )
    ReleaseSRWLockShared(v8);
LABEL_48:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  return v7;
}
