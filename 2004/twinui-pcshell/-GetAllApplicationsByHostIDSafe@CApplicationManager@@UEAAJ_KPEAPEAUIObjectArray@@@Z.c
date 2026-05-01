/*
 * XREFs of ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x1800694F0
 * Callers:
 *     ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180069480 (-GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18003E1A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::GetAllApplicationsByHostIDSafe(
        CApplicationManager *this,
        __int64 a2,
        struct IObjectArray **a3)
{
  __int64 v4; // r14
  void **v6; // rdi
  void **v7; // rax
  const struct _GUID *v8; // rdx
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  void **v10; // rbx
  void **v11; // rsi
  int Instance; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r15
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-28h] BYREF
  void **v23; // [rsp+28h] [rbp-20h]
  int *v24; // [rsp+30h] [rbp-18h]
  __int64 v25; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  int v27; // [rsp+90h] [rbp+48h] BYREF
  __int64 v28; // [rsp+98h] [rbp+50h]
  __int64 v29; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+60h] BYREF

  v28 = a2;
  v4 = a2;
  *a3 = 0LL;
  v22 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  v23 = 0LL;
  v7 = (void **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v7;
  v11 = 0LL;
  if ( v7 )
  {
    v7[1] = 0LL;
    v7[2] = 0LL;
    v7[3] = 0LL;
    *v7 = &Microsoft::WRL::ChainInterfaces<IKioskPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_DWORD *)v7 + 5) = 1;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    v7[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    v9 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v10 = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    v10[1] = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    v10[3] = 0LL;
    v11 = v10;
    v6 = v10;
    v23 = v10;
  }
  if ( v11 )
  {
    Instance = CEnumerableObjectCollection::CreateInstance((__int64)v9, v8, v11 + 3);
    if ( Instance >= 0 )
      Instance = (*(__int64 (__fastcall **)(void **, GUID *, __int64 *))*v6)(
                   v6,
                   &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
                   &v29);
  }
  else
  {
    Instance = -2147024882;
  }
  if ( v11 )
    (*((void (__fastcall **)(void **))*v11 + 2))(v11);
  v27 = Instance;
  v13 = v29;
  if ( Instance >= 0 )
  {
    v24 = &v27;
    v14 = v29;
    v25 = v29;
    v15 = v29;
    if ( v29 )
    {
      (*(void (**)(void))(*(_QWORD *)v29 + 8LL))();
      v13 = v29;
      Instance = v27;
    }
    v16 = *((_QWORD *)this + 48);
    v17 = 0LL;
    if ( v16 )
    {
      do
      {
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 64LL))(
                     v15,
                     *(_QWORD *)(*((_QWORD *)this + 47) + 8 * v17));
        v27 = Instance;
        if ( Instance < 0 )
          break;
        ++v17;
      }
      while ( v17 < v16 );
      v13 = v29;
    }
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v13 = v29;
      Instance = v27;
    }
    if ( Instance >= 0 )
    {
      Instance = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD))v13)(
                   v13,
                   &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
                   &v22);
      v27 = Instance;
      v13 = v29;
    }
    v4 = v28;
  }
  if ( v13 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D9,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)Instance);
  }
  else
  {
    v30 = 0LL;
    v18 = (**v22)(v22, &GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34, &v30);
    Instance = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10DB,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v18);
    }
    else
    {
      Instance = (*(__int64 (__fastcall **)(__int64, __int64, struct IObjectArray **))(*(_QWORD *)v30 + 40LL))(
                   v30,
                   v4,
                   a3);
      if ( Instance >= 0 )
        Instance = 0;
    }
    v19 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  v20 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v20)[2])(v20);
  }
  return (unsigned int)Instance;
}
