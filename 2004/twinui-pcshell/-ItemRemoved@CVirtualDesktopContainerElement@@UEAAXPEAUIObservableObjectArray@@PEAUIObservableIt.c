/*
 * XREFs of ?ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1803C08D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180165FA0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18038DCD0 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18038DD54 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x180392978 (--4-$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x18039A6D8 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ?GetAncestorElementOfType@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@W4AnimationCoordinatorItemType@@@Z @ 0x1803AD338 (-GetAncestorElementOfType@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsof.c)
 *     ??$As@UIVirtualDesktopItemElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803BF950 (--$As@UIVirtualDesktopItemElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ?VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVirtualDesktopMetrics@@HAEBU_GUID@@PEAPEAX@Z @ 0x1803C47A0 (-VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVi.c)
 */

void __fastcall CVirtualDesktopContainerElement::ItemRemoved(
        CVirtualDesktopContainerElement *this,
        struct IObservableObjectArray *a2,
        struct IObservableItem *a3)
{
  int v4; // esi
  struct IUnknown *v5; // r12
  char *v6; // r15
  const struct _GUID *v7; // r9
  int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rax
  struct IUnknown *v11; // rbx
  struct IUnknown **v12; // rax
  bool v13; // r12
  struct IMultitaskingViewElement *v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 **v17; // rax
  __int64 *v18; // rsi
  __int64 v19; // rdi
  unsigned int v20; // eax
  int v21; // eax
  char v22; // di
  __int64 v23; // r8
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  void *v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  struct IUnknown *v27; // [rsp+48h] [rbp-28h] BYREF
  __int64 v28[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v31; // [rsp+B0h] [rbp+40h] BYREF
  struct IObservableItem *v32; // [rsp+C0h] [rbp+50h]
  __int64 v33; // [rsp+C8h] [rbp+58h] BYREF

  v32 = a3;
  v4 = 0;
  LODWORD(v31) = 0;
  v5 = (struct IUnknown *)a3;
  v31 = *((_QWORD *)this + 4);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v31);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v29, &v31, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  v25 = 0LL;
  v6 = (char *)this - 208;
  ElementHelpers::GetAncestorElementOfType(&v24, (__int64)this - 208);
  if ( v24 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    v8 = VirtualDesktopRemoveAnimationCoordinator_CreateInstance(
           *((struct ISwitchThumbnailFactory **)this + 4),
           (CVirtualDesktopContainerElement *)((char *)this + 88),
           *((_DWORD *)this - 35) - *((_DWORD *)this - 37),
           v7,
           &v25);
    if ( v8 >= 0 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v24 + 392LL))(v24, v25);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
        (const char *)(unsigned int)v8);
  }
  v9 = 0;
  if ( *((_QWORD *)this + 74) )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = *(struct IUnknown **)(*((_QWORD *)this + 73) + 8 * v10);
      v27 = v11;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
      v26 = 0LL;
      v13 = 0;
      if ( (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopItemElement>(&v27, &v26) >= 0 )
      {
        v4 |= 1u;
        v12 = (struct IUnknown **)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 24LL))(v26, &v31);
        if ( (unsigned int)SHIsSameObject(*v12, v5) )
          v13 = 1;
      }
      if ( (v4 & 1) != 0 )
      {
        v4 &= ~1u;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      }
      if ( v13 )
        break;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
      v5 = (struct IUnknown *)v32;
      v10 = ++v9;
      if ( (unsigned __int64)v9 >= *((_QWORD *)this + 74) )
        goto LABEL_26;
    }
    v33 = *((_QWORD *)this + 4);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v33);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v28, &v33, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(
      (_QWORD *)this + 73,
      v9);
    if ( *((_QWORD *)this + 74) == 1LL )
    {
      *((_BYTE *)this + 616) = 0;
      LOBYTE(v33) = 1;
      ObservableProperty<bool>::operator=((__int64)this + 624, &v33);
    }
    if ( ElementHelpers::IsSameElement(v11, *((struct IUnknown **)this - 5), v14) )
    {
      v15 = (_QWORD *)(*(__int64 (__fastcall **)(char *, __int64 *, _QWORD, __int64, _DWORD))(*(_QWORD *)v6 + 272LL))(
                        (char *)this - 208,
                        &v33,
                        *((_QWORD *)this - 5),
                        5LL,
                        0);
      (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v6 + 288LL))((char *)this - 208, *v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    }
    v16 = *(_QWORD *)v6;
    LOBYTE(v31) = 1;
    v17 = (__int64 **)(*(__int64 (__fastcall **)(char *, __int64 *))(v16 + 384))((char *)this - 208, &v33);
    v18 = *v17;
    v19 = **v17;
    v20 = ((__int64 (__fastcall *)(struct IUnknown *))v11->lpVtbl[16].Release)(v11);
    v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IUnknown *, __int64 *))(v19 + 32))(v18, v20, v11, &v31);
    if ( v21 >= 0 )
    {
      if ( !(_BYTE)v31 )
      {
        v22 = 0;
        goto LABEL_23;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB2,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
        (const char *)(unsigned int)v21);
    }
    v22 = 1;
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    if ( v22 )
    {
      LOBYTE(v23) = 1;
      (*(void (__fastcall **)(char *, struct IUnknown *, __int64))(*(_QWORD *)v6 + 72LL))(v6, v11, v23);
      ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl[3].AddRef)(v11);
    }
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v28);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
  }
LABEL_26:
  if ( v24 && v25 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 72LL))(v25);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 392LL))(v24, 0LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v29);
}
