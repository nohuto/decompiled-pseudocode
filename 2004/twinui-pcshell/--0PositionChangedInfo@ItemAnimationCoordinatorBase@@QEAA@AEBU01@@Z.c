/*
 * XREFs of ??0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1803C1E70
 * Callers:
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_11c9f49c61b385fc004e087a93718bb8_____ @ 0x1803C1BF8 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--PositionChangedInfo_CSimpleArrayStandardCompare.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____ @ 0x1803C1CC4 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--PositionChangedInfo_CSimpleArraySt_ea_1803C1CC4.c)
 *     ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x1803C1F90 (-BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

ItemAnimationCoordinatorBase::PositionChangedInfo *__fastcall ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
        ItemAnimationCoordinatorBase::PositionChangedInfo *this,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a2)
{
  ItemAnimationCoordinatorBase::PositionChangedInfo *result; // rax

  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  result = this;
  *(_OWORD *)((char *)this + 12) = *(_OWORD *)((char *)a2 + 12);
  *(_OWORD *)((char *)this + 28) = *(_OWORD *)((char *)a2 + 28);
  return result;
}
