/*
 * XREFs of ?OnInputGenerated@?$CPointerInputObserverServer@$0M@@@UEBAXAEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@Z @ 0x1800F4FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     std::function_void___cdecl(Microsoft::WRL::ComPtr_BamoInputObserverClientProxy__const_&)_::function_void___cdecl(Microsoft::WRL::ComPtr_BamoInputObserverClientProxy__const_&)___lambda_3cfa35e9c796ca0beab8e1187c70cfaf__void_ @ 0x180045414 (std--function_void___cdecl(Microsoft--WRL--ComPtr_BamoInputObserverClientProxy__const_-)_--funct.c)
 *     ??1?$unique_ptr@UAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@U?$default_delete@UAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@std@@@std@@QEAA@XZ @ 0x1800F4C34 (--1-$unique_ptr@UAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@U-$default_delete@UAPP_MOUSE_.c)
 *     ?DeliverToApps@?$CBaseInputObserverServer@$0M@@@UEBAXV?$function@$$A6AXAEBV?$ComPtr@VBamoInputObserverClientProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x1800F4ED0 (-DeliverToApps@-$CBaseInputObserverServer@$0M@@@UEBAXV-$function@$$A6AXAEBV-$ComPtr@VBamoInputOb.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPointerInputObserverServer<12>::OnInputGenerated(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF
  void *v7; // [rsp+78h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 48) == 4 )
  {
    v4 = operator new(0x40uLL);
    v7 = v4;
    *v4 = 64;
    *((_QWORD *)v4 + 1) = *(_QWORD *)(a2 + 8);
    *((_BYTE *)v4 + 16) = *(_BYTE *)(a2 + 16) & 1;
    *((_QWORD *)v4 + 3) = *(_QWORD *)(a2 + 24);
    *((_QWORD *)v4 + 4) = *(_QWORD *)(a2 + 60);
    v4[10] = *(_DWORD *)(a2 + 32);
    *((_QWORD *)v4 + 6) = *(_QWORD *)(a2 + 40);
    v4[14] = *(_DWORD *)(a2 + 56);
    v7 = v4;
    v5 = std::function_void___cdecl_Microsoft::WRL::ComPtr_BamoInputObserverClientProxy__const____::function_void___cdecl_Microsoft::WRL::ComPtr_BamoInputObserverClientProxy__const______lambda_3cfa35e9c796ca0beab8e1187c70cfaf__void_(
           v6,
           (__int64)v4);
    CBaseInputObserverServer<12>::DeliverToApps(a1, (__int64)v5);
    std::unique_ptr<InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET>::~unique_ptr<InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET>(&v7);
  }
}
