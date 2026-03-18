/*
 * XREFs of ?ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18029DD80
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x18029E414 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddDisplay(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_5e01b98c_b7d8_4f41_8bf2_9dc251835cd5,
         &v9) >= 0 )
  {
    v4 = *((_DWORD *)this + 38);
    v5 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      if ( v5 <= *((_DWORD *)this + 37) )
      {
        *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v4) = v9;
        *((_DWORD *)this + 38) = v5;
LABEL_5:
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 88LL))(*((_QWORD *)this + 3), v9);
        v6 = 0LL;
        v9 = 0LL;
        goto LABEL_10;
      }
      v7 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 128, 8u, 1, &v9);
      if ( v7 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0xC0u);
    }
    v6 = v9;
LABEL_10:
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
