/*
 * XREFs of ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x18000C91C
 * Callers:
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18000C7CC (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180030F5C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___ @ 0x18000C9B0 (CDelayIAMOperations--AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::UpdateMonitorForAppAsync(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2)
{
  __int64 v4; // rsi
  CApplicationManager *v5; // [rsp+20h] [rbp-18h] BYREF
  struct IImmersiveApplicationInternal *v6; // [rsp+28h] [rbp-10h] BYREF
  struct IImmersiveApplicationInternal *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = *((_QWORD *)this + 100);
  v5 = this;
  v6 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 8LL))(a2);
  CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___(v4, &v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
}
