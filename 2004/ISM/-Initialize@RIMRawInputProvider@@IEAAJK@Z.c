/*
 * XREFs of ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180020788
 * Callers:
 *     ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800206E0 (-Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x180020AB0 (-RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PenIdentity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180020AF4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PenIdentity@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180020B84 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18002198C (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18002294C (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180022AF0 (-Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180022C1C (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180022D10 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800233DC (-Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1.c)
 *     ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180023D60 (-Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180028040 (-IsEdition@@YA_N_K@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INVALIDATE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18002F7C4 (-Initialize@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessag.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180097938 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180099208 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 */

__int64 __fastcall RIMRawInputProvider::Initialize(RIMRawInputProvider *this, int a2)
{
  struct IMessageSession **v2; // r15
  __int64 v5; // rdx
  int v6; // edi
  __int64 v7; // r8
  void **v8; // rdi
  __int64 v9; // rcx
  int (*v10)(void *, unsigned int, void *); // r8
  int v11; // r14d
  void **v12; // rdi
  __int64 v13; // rcx
  int (*v14)(void *, unsigned int, void *); // r8
  void **v15; // rdi
  __int64 v16; // rcx
  int (*v17)(void *, unsigned int, void *); // r8
  void **v18; // rdi
  __int64 v19; // rcx
  int (*v20)(void *, unsigned int, void *); // r8
  void **v21; // rdi
  __int64 v22; // rcx
  int (*v23)(void *, unsigned int, void *); // r8
  void **v24; // rdi
  __int64 v25; // rcx
  int (*v26)(void *, unsigned int, void *); // r8
  __int64 v27; // r8
  void **v28; // rdi
  __int64 v29; // rcx
  int v30; // esi
  int (*v31)(void *, unsigned int, void *); // r8
  void **v32; // rdi
  __int64 v33; // rcx
  int (*v34)(void *, unsigned int, void *); // r8
  __int64 v36; // rdx
  __int64 v37; // rdx
  void **v38; // rdi
  __int64 v39; // rcx
  int (*v40)(void *, unsigned int, void *); // r8
  void **v41; // rdi
  __int64 v42; // rcx
  int (*v43)(void *, unsigned int, void *); // r8
  __int64 v44; // rdx
  int v45; // [rsp+20h] [rbp-50h]
  _QWORD v46[8]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  void *v48; // [rsp+A0h] [rbp+30h] BYREF

  v48 = 0LL;
  v2 = (struct IMessageSession **)((char *)this + 32);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 32);
  v6 = CoreUICreate(v2);
  if ( v6 < 0 )
  {
    v36 = 86LL;
    goto LABEL_45;
  }
  if ( (a2 & 0x400) != 0 )
  {
    v8 = (void **)((char *)this + 48);
    v9 = *((_QWORD *)this + 6);
    if ( v9 )
    {
      *v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v11 = AugmentedInputDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            &v48,
            (struct AugmentedInputDeviceCollection **)this + 6);
    if ( v11 < 0 )
    {
      v37 = 93LL;
LABEL_48:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
        (const char *)(unsigned int)v11,
        v45);
      return (unsigned int)v11;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v48, v10, *v8);
    if ( v6 < 0 )
    {
      v36 = 98LL;
      goto LABEL_45;
    }
  }
  if ( (a2 & 0x2000) != 0 )
  {
    v12 = (void **)((char *)this + 56);
    v13 = *((_QWORD *)this + 7);
    if ( v13 )
    {
      *v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v11 = SpatialRimDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            this,
            *v2,
            &v48,
            (struct SpatialRimDeviceCollection **)this + 7);
    if ( v11 < 0 )
    {
      v37 = 108LL;
      goto LABEL_48;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v48, v14, *v12);
    if ( v6 < 0 )
    {
      v36 = 113LL;
      goto LABEL_45;
    }
  }
  if ( (a2 & 0x80u) != 0 )
  {
    if ( IsEdition(0x3DDA1uLL) )
    {
      v38 = (void **)((char *)this + 40);
      v39 = *((_QWORD *)this + 5);
      if ( v39 )
      {
        *v38 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      }
      v11 = MobileButtonDeviceCollection::Create(
              *((struct IRawInputClient **)this + 3),
              this,
              &v48,
              (struct MobileButtonDeviceCollection **)this + 5);
      if ( v11 < 0 )
      {
        v37 = 132LL;
        goto LABEL_48;
      }
      v6 = RIMRawInputProvider::RegisterWaitHandler(this, v48, v40, *v38);
      if ( v6 < 0 )
      {
        v36 = 137LL;
        goto LABEL_45;
      }
      v41 = (void **)((char *)this + 64);
      v42 = *((_QWORD *)this + 8);
      if ( v42 )
      {
        *v41 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
      v11 = ConsumerControlDeviceCollection::Create(
              *((struct IRawInputClient **)this + 3),
              this,
              &v48,
              (struct ConsumerControlDeviceCollection **)this + 8);
      if ( v11 < 0 )
      {
        v37 = 143LL;
        goto LABEL_48;
      }
      v6 = RIMRawInputProvider::RegisterWaitHandler(this, v48, v43, *v41);
      if ( v6 < 0 )
      {
        v36 = 148LL;
        goto LABEL_45;
      }
    }
    v15 = (void **)((char *)this + 72);
    v16 = *((_QWORD *)this + 9);
    if ( v16 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v11 = SystemControlDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            this,
            &v48,
            (struct SystemControlDeviceCollection **)this + 9);
    if ( v11 < 0 )
    {
      v37 = 155LL;
      goto LABEL_48;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v48, v17, *v15);
    if ( v6 < 0 )
    {
      v36 = 160LL;
      goto LABEL_45;
    }
  }
  if ( (a2 & 0x800) != 0 )
  {
    v18 = (void **)((char *)this + 80);
    v19 = *((_QWORD *)this + 10);
    if ( v19 )
    {
      *v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v11 = HeatDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            this,
            &v48,
            (struct HeatDeviceCollection **)this + 10);
    if ( v11 < 0 )
    {
      v37 = 169LL;
      goto LABEL_48;
    }
    v11 = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)*v18 + 48LL))(*v18, &v48);
    if ( v11 < 0 )
    {
      v37 = 176LL;
      goto LABEL_48;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v48, v20, *v18);
    if ( v6 < 0 )
    {
      v36 = 181LL;
      goto LABEL_45;
    }
  }
  if ( (a2 & 0x4000) != 0 )
  {
    v21 = (void **)((char *)this + 88);
    v22 = *((_QWORD *)this + 11);
    if ( v22 )
    {
      *v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v11 = GazeDeviceCollection::Create(
            *((struct IRawInputClient **)this + 3),
            this,
            &v48,
            (struct GazeDeviceCollection **)this + 11);
    if ( v11 < 0 )
    {
      v37 = 190LL;
      goto LABEL_48;
    }
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v48, v23, *v21);
    if ( v6 < 0 )
    {
      v36 = 195LL;
      goto LABEL_45;
    }
  }
  LOBYTE(v7) = 3;
  LOBYTE(v5) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenIdentity>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PenIdentity>::GetImpl'::`2'::impl,
    v5,
    v7);
  v24 = (void **)((char *)this + 96);
  v25 = *((_QWORD *)this + 12);
  if ( v25 )
  {
    *v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v11 = PenDeviceCollection::Create(
          *((struct IRawInputClient **)this + 3),
          this,
          &v48,
          (struct PenDeviceCollection **)this + 12);
  if ( v11 < 0 )
  {
    v37 = 204LL;
    goto LABEL_48;
  }
  v6 = RIMRawInputProvider::RegisterWaitHandler(this, v48, v26, *v24);
  if ( v6 < 0 )
  {
    v36 = 209LL;
    goto LABEL_45;
  }
  if ( (a2 & 0x100000) == 0 )
  {
LABEL_42:
    v46[1] = this;
    v46[0] = off_1801AF850;
    v46[7] = v46;
    KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::Initialize((char *)this + 120, v2, v27, v46);
    return 0LL;
  }
  v28 = (void **)((char *)this + 104);
  v29 = *((_QWORD *)this + 13);
  if ( v29 )
  {
    *v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = DockDeviceCollection::Create(
          *((struct IRawInputClient **)this + 3),
          this,
          &v48,
          (struct DockDeviceCollection **)this + 13);
  if ( v30 >= 0 )
  {
    v6 = RIMRawInputProvider::RegisterWaitHandler(this, v48, v31, *v28);
    if ( v6 >= 0 )
    {
      v32 = (void **)((char *)this + 112);
      v33 = *((_QWORD *)this + 14);
      if ( v33 )
      {
        *v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v30 = DockableDeviceCollection::Create(
              *((struct IRawInputClient **)this + 3),
              this,
              &v48,
              (struct DockableDeviceCollection **)this + 14);
      if ( v30 >= 0 )
      {
        v6 = RIMRawInputProvider::RegisterWaitHandler(this, v48, v34, *v32);
        if ( v6 >= 0 )
          goto LABEL_42;
        v36 = 234LL;
        goto LABEL_45;
      }
      v44 = 229LL;
      goto LABEL_74;
    }
    v36 = 223LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
      (const char *)(unsigned int)v6,
      v45);
    return (unsigned int)v6;
  }
  v44 = 218LL;
LABEL_74:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v44,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
    (const char *)(unsigned int)v30,
    v45);
  return (unsigned int)v30;
}
