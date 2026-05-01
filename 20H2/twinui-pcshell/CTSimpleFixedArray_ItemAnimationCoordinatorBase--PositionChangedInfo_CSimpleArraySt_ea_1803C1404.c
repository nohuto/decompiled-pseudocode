/*
 * XREFs of CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____ @ 0x1803C1404
 * Callers:
 *     ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x1803C16D0 (-BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1803C15B0 (--0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 */

__int64 __fastcall CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
        _QWORD *a1,
        __int64 a2,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v5; // rax
  __int64 i; // r14
  __int64 *v10; // rsi
  struct IUnknown **v11; // rdi
  BOOL v12; // ebx
  _BYTE v15[48]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v16[128]; // [rsp+58h] [rbp-80h] BYREF

  *a4 = 0LL;
  v4 = 0LL;
  v5 = a3;
  if ( !a1[1] )
    return 2147647531LL;
  for ( i = 0LL; ; i += 48LL )
  {
    v10 = (__int64 *)ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
                       (ItemAnimationCoordinatorBase::PositionChangedInfo *)v15,
                       v5);
    v11 = (struct IUnknown **)ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
                                (ItemAnimationCoordinatorBase::PositionChangedInfo *)v16,
                                (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)(i + *a1));
    v12 = SHIsSameObject(*(struct IUnknown **)(*(_QWORD *)a2 + 8LL), *v11) == 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    if ( !v12 )
      break;
    v5 = a3;
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
