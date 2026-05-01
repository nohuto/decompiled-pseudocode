/*
 * XREFs of ?OnAnimationFinished@MultitaskingViewInvocationAnimationCoordinator@@MEAAXXZ @ 0x18038EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MultitaskingViewInvocationAnimationCoordinator::OnAnimationFinished(
        MultitaskingViewInvocationAnimationCoordinator *this)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 7);
  v3 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v1 + 24LL))(
         v1,
         &GUID_5b292bfd_6752_499b_bff1_cd8805578b96,
         &v3) >= 0 )
    (*(void (__fastcall **)(__int64, MultitaskingViewInvocationAnimationCoordinator *))(*(_QWORD *)v3 + 24LL))(v3, this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
}
