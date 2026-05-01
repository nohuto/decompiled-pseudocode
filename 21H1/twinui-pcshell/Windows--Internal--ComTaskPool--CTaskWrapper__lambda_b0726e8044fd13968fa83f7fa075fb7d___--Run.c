/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0726e8044fd13968fa83f7fa075fb7d___::Run @ 0x1801837F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0726e8044fd13968fa83f7fa075fb7d___::Run(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  if ( (*(int (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &SID_FullScreenManager,
         &GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d,
         &v4) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *(_QWORD *)(a1 + 24), 0LL);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
}
