/*
 * XREFs of ?Uncloak@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1801BBA60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1801BB99C (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Uncloak(CortanaSharedExperienceManager *this)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  CortanaSharedExperienceManager::TryGetDesktopViewIfActive((__int64)this, &v3);
  if ( v3 )
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 104LL))(v3);
  else
    v1 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  return v1;
}
