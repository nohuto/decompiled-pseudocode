/*
 * XREFs of ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180016E1C
 * Callers:
 *     ?_ProcessNextOperation@CAppViewManager@@AEAAJXZ @ 0x1800166E0 (-_ProcessNextOperation@CAppViewManager@@AEAAJXZ.c)
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z @ 0x18016FCE0 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::_AddDelayedOperation(CAppViewManager *this, struct IAsyncCallback *a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 15))(
         *((_QWORD *)this + 15),
         &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
         &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, struct IAsyncCallback *))(*(_QWORD *)v6 + 128LL))(v6, a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return (unsigned int)v4;
}
