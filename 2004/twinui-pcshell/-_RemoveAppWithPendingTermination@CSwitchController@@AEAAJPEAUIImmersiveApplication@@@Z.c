/*
 * XREFs of ?_RemoveAppWithPendingTermination@CSwitchController@@AEAAJPEAUIImmersiveApplication@@@Z @ 0x1803CC538
 * Callers:
 *     ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1803CC5CC (-_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchController::_RemoveAppWithPendingTermination(
        IUnknown **this,
        struct IImmersiveApplication *a2)
{
  HRESULT v4; // ebx
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         this[2],
         &IID_IImmersiveApplicationManager,
         &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
         &ppvOut);
  if ( v4 >= 0 )
    v4 = (*(unsigned int (__fastcall **)(void *, struct IImmersiveApplication *))(*(_QWORD *)ppvOut + 120LL))(
           ppvOut,
           a2) != 0
       ? 0x80070512
       : 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v4;
}
