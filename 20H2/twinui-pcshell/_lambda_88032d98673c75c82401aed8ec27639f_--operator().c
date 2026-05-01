/*
 * XREFs of _lambda_88032d98673c75c82401aed8ec27639f_::operator() @ 0x1803C15F8
 * Callers:
 *     ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x1803C16D0 (-BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___::OnStoryboardStatusChanged @ 0x1803C24F0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_3f14cb8a0624f1150359153641_ea_1803C24F0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1803C1570 (--0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 */

__int64 __fastcall lambda_88032d98673c75c82401aed8ec27639f_::operator()(__int64 *a1)
{
  __int64 result; // rax
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v2; // rdi
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v3; // rbx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h] BYREF

  result = *a1;
  v2 = *(const struct ItemAnimationCoordinatorBase::ItemRemovedInfo **)(*a1 + 56);
  v3 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v2 + 16 * *(_QWORD *)(*a1 + 64));
  while ( v2 != v3 )
  {
    ItemAnimationCoordinatorBase::ItemRemovedInfo::ItemRemovedInfo(
      (ItemAnimationCoordinatorBase::ItemRemovedInfo *)&v4,
      v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
    v2 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v2 + 16);
  }
  return result;
}
