/*
 * XREFs of ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x1803C16D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18038D410 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18038D494 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___ @ 0x1803C11D4 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____ @ 0x1803C1280 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--ComponentInfo_CSimpleArrayStandardCompareHelper.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____ @ 0x1803C1404 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--PositionChangedInfo_CSimpleArraySt_ea_1803C1404.c)
 *     ??0ComponentInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1803C152C (--0ComponentInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     ??0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1803C1570 (--0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     ??0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1803C15B0 (--0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     _lambda_88032d98673c75c82401aed8ec27639f_::operator() @ 0x1803C15F8 (_lambda_88032d98673c75c82401aed8ec27639f_--operator().c)
 */

__int64 __fastcall ItemAnimationCoordinatorBase::BeginAnimation(ItemAnimationCoordinatorBase *this)
{
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v2; // rsi
  const struct ItemAnimationCoordinatorBase::ComponentInfo *i; // r14
  bool v4; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f; // ebx
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v9; // rsi
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v10; // rbx
  int v11; // eax
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v12; // r14
  const struct ItemAnimationCoordinatorBase::ComponentInfo *j; // rsi
  bool v14; // bl
  __int64 v15; // rax
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v16; // r14
  const struct ItemAnimationCoordinatorBase::ComponentInfo *k; // rsi
  bool v18; // bl
  __int128 v19; // xmm0
  __int64 v20; // rax
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v21; // r14
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v22; // rsi
  bool v23; // bl
  bool v24; // r15
  __int64 *v25; // rbx
  __int64 *v26; // r14
  __int128 *v27; // rsi
  __int64 v28; // rcx
  void (__fastcall *v29)(ItemAnimationCoordinatorBase *, __int64 *); // rax
  __int64 v30; // rcx
  ItemAnimationCoordinatorBase *v32; // [rsp+38h] [rbp-99h] BYREF
  struct IUnknown **v33; // [rsp+40h] [rbp-91h] BYREF
  __int64 v34; // [rsp+48h] [rbp-89h] BYREF
  __int64 v35; // [rsp+50h] [rbp-81h] BYREF
  __int64 v36[2]; // [rsp+58h] [rbp-79h] BYREF
  __int128 v37; // [rsp+68h] [rbp-69h] BYREF
  __int128 v38; // [rsp+78h] [rbp-59h]
  __int64 v39; // [rsp+88h] [rbp-49h]
  int v40; // [rsp+90h] [rbp-41h]
  _BYTE v41[8]; // [rsp+98h] [rbp-39h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-31h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-29h]
  __int64 v44; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-11h]
  _OWORD v46[2]; // [rsp+D0h] [rbp-1h] BYREF
  __int64 v47; // [rsp+F0h] [rbp+1Fh]
  int v48; // [rsp+F8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v32 = (ItemAnimationCoordinatorBase *)*((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v36, (__int64 *)&v32, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
  *((_BYTE *)this + 232) = 0;
  v2 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)*((_QWORD *)this + 3);
  for ( i = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v2 + 32 * *((_QWORD *)this + 4));
        v2 != i;
        v2 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v2 + 32) )
  {
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo((ItemAnimationCoordinatorBase::ComponentInfo *)v41, v2);
    v39 = 0LL;
    v40 = 0;
    v33 = (struct IUnknown **)v41;
    v37 = 0LL;
    v38 = 0LL;
    v4 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
                (_QWORD *)this + 19,
                (__int64)&v33,
                (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)&v37,
                &v32) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
    if ( v4 )
    {
      ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
        (ItemAnimationCoordinatorBase::ComponentInfo *)&v37,
        (const struct ItemAnimationCoordinatorBase::ComponentInfo *)v41);
      v5 = *(_QWORD *)this;
      v38 = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v32 + 28);
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int128 *))(v5 + 128))(this, &v37);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37 + 1);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
  }
  v35 = 0LL;
  v33 = (struct IUnknown **)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
  v33 = (struct IUnknown **)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  v32 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
  v35 = 0LL;
  v32 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
  LOBYTE(v6) = 0;
  AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___(v6, (__int64 *)&v32, v7, &v35);
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  if ( AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f >= 0 )
  {
    v9 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)*((_QWORD *)this + 7);
    v10 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v9 + 16 * *((_QWORD *)this + 8));
    while ( v9 != v10 )
    {
      ItemAnimationCoordinatorBase::ItemRemovedInfo::ItemRemovedInfo(
        (ItemAnimationCoordinatorBase::ItemRemovedInfo *)&v33,
        v9);
      v11 = (*(__int64 (__fastcall **)(ItemAnimationCoordinatorBase *, struct IUnknown ***, __int64))(*(_QWORD *)this + 136LL))(
              this,
              &v33,
              v35);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x91,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v11);
        ((void (__fastcall *)(struct IUnknown **))(*v33)[10].lpVtbl)(v33);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
      v9 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v9 + 16);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f);
    lambda_88032d98673c75c82401aed8ec27639f_::operator()((__int64 *)&v33);
  }
  v12 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)*((_QWORD *)this + 11);
  for ( j = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v12 + 32 * *((_QWORD *)this + 12));
        v12 != j;
        v12 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v12 + 32) )
  {
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo((ItemAnimationCoordinatorBase::ComponentInfo *)v41, v12);
    v39 = 0LL;
    v40 = 0;
    v33 = (struct IUnknown **)v41;
    v37 = 0LL;
    v38 = 0LL;
    v14 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
                 (_QWORD *)this + 19,
                 (__int64)&v33,
                 (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)&v37,
                 &v32) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
    if ( v14 )
    {
      ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
        (ItemAnimationCoordinatorBase::ComponentInfo *)&v37,
        (const struct ItemAnimationCoordinatorBase::ComponentInfo *)v41);
      v15 = *(_QWORD *)this;
      v38 = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v32 + 28);
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int128 *))(v15 + 144))(this, &v37);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37 + 1);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
  }
  v16 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)*((_QWORD *)this + 15);
  for ( k = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v16 + 32 * *((_QWORD *)this + 16));
        v16 != k;
        v16 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v16 + 32) )
  {
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo((ItemAnimationCoordinatorBase::ComponentInfo *)&v37, v16);
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
      (ItemAnimationCoordinatorBase::ComponentInfo *)v41,
      (const struct ItemAnimationCoordinatorBase::ComponentInfo *)&v37);
    v47 = 0LL;
    v48 = 0;
    v33 = (struct IUnknown **)&v37;
    memset(v46, 0, sizeof(v46));
    v18 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
                 (_QWORD *)this + 19,
                 (__int64)&v33,
                 (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)v46,
                 &v32) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v46);
    if ( v18 )
      v19 = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v32 + 12);
    else
      v19 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)&v37 + 1) + 88LL))(
                         *((_QWORD *)&v37 + 1),
                         &v44);
    v20 = *(_QWORD *)this;
    v43 = v19;
    (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, _BYTE *))(v20 + 152))(this, v41);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37 + 1);
  }
  v21 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)*((_QWORD *)this + 19);
  v22 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)((char *)v21 + 48 * *((_QWORD *)this + 20));
  while ( v21 != v22 )
  {
    ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
      (ItemAnimationCoordinatorBase::PositionChangedInfo *)v46,
      v21);
    v33 = (struct IUnknown **)v46;
    v37 = 0uLL;
    v38 = 0LL;
    v23 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
                 (_QWORD *)this + 3,
                 &v33,
                 (const struct ItemAnimationCoordinatorBase::ComponentInfo *)&v37,
                 &v32) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37 + 1);
    v37 = 0uLL;
    v38 = 0LL;
    v24 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
                 (_QWORD *)this + 11,
                 &v33,
                 (const struct ItemAnimationCoordinatorBase::ComponentInfo *)&v37,
                 &v32) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37 + 1);
    if ( !v23 && !v24 )
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, _OWORD *))(*(_QWORD *)this + 160LL))(this, v46);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v46);
    v21 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)((char *)v21 + 48);
  }
  v25 = (__int64 *)*((_QWORD *)this + 23);
  v26 = &v25[3 * *((_QWORD *)this + 24)];
  if ( v25 != v26 )
  {
    v27 = (__int128 *)(v25 + 1);
    do
    {
      v28 = *v25;
      v44 = v28;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      v29 = *(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int64 *))(*(_QWORD *)this + 168LL);
      v45 = *v27;
      v29(this, &v44);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
      v25 += 3;
      v27 = (__int128 *)((char *)v27 + 24);
    }
    while ( v25 != v26 );
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 27) + 32LL))(*((_QWORD *)this + 27), 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  v30 = *((_QWORD *)this + 28);
  if ( v30 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  }
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v36);
  return 0LL;
}
