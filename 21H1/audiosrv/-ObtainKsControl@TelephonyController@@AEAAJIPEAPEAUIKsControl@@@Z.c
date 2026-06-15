/*
 * XREFs of ?ObtainKsControl@TelephonyController@@AEAAJIPEAPEAUIKsControl@@@Z @ 0x18014358C
 * Callers:
 *     ?CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x180141E60 (-CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyContr.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180058174 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?GetNode@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@IAEAI0AEAPEAV312@@Z @ 0x180140D54 (-GetNode@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-.c)
 */

__int64 __fastcall TelephonyController::ObtainKsControl(
        TelephonyController *this,
        unsigned int a2,
        struct IKsControl **a3)
{
  struct IKsControl *v4; // rbx
  unsigned int v5; // edi
  __int64 Node; // rax
  struct IUnknown *v7; // rdx
  struct IUnknown *v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v9 = 0LL;
  v5 = 0;
  Node = ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::GetNode(
           (__int64)this + 120,
           a2,
           &v12,
           &v11,
           &v10);
  if ( Node )
  {
    v7 = *(struct IUnknown **)(Node + 8);
    if ( v7 )
    {
      ATL::AtlComPtrAssign(&v9, v7);
      v4 = (struct IKsControl *)v9;
    }
    if ( a3 )
    {
      *a3 = v4;
      if ( !v4 )
        return v5;
      ((void (__fastcall *)(struct IKsControl *))v4->lpVtbl->AddRef)(v4);
    }
  }
  else
  {
    v5 = -2147023728;
  }
  if ( v4 )
    ((void (__fastcall *)(struct IKsControl *))v4->lpVtbl->Release)(v4);
  return v5;
}
