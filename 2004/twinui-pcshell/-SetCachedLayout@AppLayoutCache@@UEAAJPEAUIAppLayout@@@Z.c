/*
 * XREFs of ?SetCachedLayout@AppLayoutCache@@UEAAJPEAUIAppLayout@@@Z @ 0x180404490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppLayoutCache::SetCachedLayout(AppLayoutCache *this, struct IAppLayout *a2)
{
  RTL_SRWLOCK *v4; // rsi
  unsigned int v5; // ebx

  v4 = (RTL_SRWLOCK *)((char *)this + 56);
  AcquireSRWLockExclusive((PSRWLOCK)this + 7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  v5 = (*(__int64 (__fastcall **)(struct IAppLayout *, GUID *, char *))(*(_QWORD *)a2 + 192LL))(
         a2,
         &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
         (char *)this + 64);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v5;
}
