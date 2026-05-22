/*
 * XREFs of ?RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V?$function@$$A6AXE@Z@std@@PEAUIHapticsTimerProvider@234@@Z @ 0x18016EA48
 * Callers:
 *     Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_&___int64_unsigned_int_&_unsigned_char_&_bool_&_bool_&__lambda_a8bf174a58f89e727d2f8f2640ee39aa___ @ 0x1801686B8 (Microsoft--WRL--Details--MakeAndInitialize_Windows--Internal--SpatialInteractions--HapticsEngine.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$InitializeHapticsEngine@AEA_N_JE_N_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEA_N$$QEA_J$$QEAE$$QEA_N3@Z @ 0x180168644 (--$InitializeHapticsEngine@AEA_N_JE_N_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAE.c)
 *     ??$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIHapticsTimerProvider@345@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractions@Internal@Windows@@@Z @ 0x1801688B8 (--$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIH.c)
 *     ??4?$function@$$A6AXE@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016A190 (--4-$function@$$A6AXE@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::RuntimeClassInitialize(
        __int64 a1,
        bool a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6,
        char a7,
        __int64 a8)
{
  char v12; // r13
  char v13; // r12
  int v14; // eax
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  void *v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  char v23; // al
  char v24; // al
  unsigned __int8 v25; // al
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+40h]
  _QWORD *v28; // [rsp+80h] [rbp+48h] BYREF
  bool v29; // [rsp+88h] [rbp+50h] BYREF
  unsigned __int8 v30; // [rsp+90h] [rbp+58h] BYREF
  __int64 v31; // [rsp+98h] [rbp+60h] BYREF

  v29 = a2;
  v12 = a7;
  v13 = a6;
  std::function<void (unsigned char)>::operator=(a1 + 128, a8);
  *(_QWORD *)(a1 + 200) = a4;
  *(_QWORD *)(a1 + 208) = a3;
  v14 = 100;
  if ( !a2 )
    v14 = a5;
  *(_DWORD *)(a1 + 224) = v14;
  *(_BYTE *)(a1 + 229) = a2;
  *(_BYTE *)(a1 + 230) = v13;
  if ( !a2 )
  {
    v15 = operator new(0x80uLL);
    v28 = v15;
    v15[1] = a4;
    v15[2] = 0LL;
    v15[3] = 0LL;
    *((_BYTE *)v15 + 32) = v12;
    *((_DWORD *)v15 + 9) = 2;
    *((_BYTE *)v15 + 40) = 0;
    *v15 = &Windows::Internal::SpatialInteractions::AverageHapticsFilter::`vftable';
    *((_BYTE *)v15 + 48) = 0;
    v15[7] = 0LL;
    v15[8] = 0LL;
    v15[10] = 0LL;
    v15[11] = 0LL;
    v15[12] = 0LL;
    v15[13] = 0LL;
    v15[14] = 0LL;
    v16 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v16[1] = 0LL;
    v15[10] = v16;
    *v16 = v15 + 10;
    *((_BYTE *)v15 + 120) = 0;
    v17 = *(void **)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v15;
    if ( v17 )
      operator delete(v17, (const struct std::nothrow_t *)0x30);
    if ( !*(_QWORD *)(a1 + 112) )
    {
      v18 = -2147024882;
      v19 = 2147942414LL;
      v20 = 506LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\HapticsEngine.h",
        (const char *)v19);
      goto LABEL_23;
    }
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(a1 + 120));
  v21 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,>((_QWORD *)(a1 + 120));
  v18 = v21;
  if ( v21 < 0 )
  {
    v20 = 515LL;
LABEL_10:
    v19 = (unsigned int)v21;
    goto LABEL_11;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 120) + 56LL))(*(_QWORD *)(a1 + 120), a1 + 8);
  v18 = v21;
  if ( v21 < 0 )
  {
    v20 = 517LL;
    goto LABEL_10;
  }
  v23 = v12;
  if ( a2 )
    v23 = 0;
  a6 = v23;
  v24 = v13;
  if ( a2 )
    v24 = 0;
  LOBYTE(v28) = v24;
  v25 = a5;
  if ( a2 )
    v25 = 0;
  v30 = v25;
  if ( a2 )
    a4 = 0LL;
  v31 = a4;
  SpatialInteractionDevices::SpatialInteractionTrace::InitializeHapticsEngine<bool &,__int64,unsigned char,bool,bool>(
    &v29,
    &v31,
    &v30,
    (bool *)&v28,
    (bool *)&a6);
  v18 = 0;
LABEL_23:
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a8, v22);
  return v18;
}
