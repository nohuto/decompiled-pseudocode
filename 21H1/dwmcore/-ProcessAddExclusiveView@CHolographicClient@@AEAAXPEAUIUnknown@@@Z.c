/*
 * XREFs of ?ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025C364
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x18025C74C (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddExclusiveView(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // r8d
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_92c14223_53b5_489b_b195_4227022eda18,
         &v9) >= 0 )
  {
    v4 = *((_DWORD *)this + 24);
    v5 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024362, 0xB5u, 0LL);
      goto LABEL_8;
    }
    if ( v5 <= *((_DWORD *)this + 23) )
    {
      *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * *((unsigned int *)this + 24)) = v9;
      *((_DWORD *)this + 24) = v5;
      return;
    }
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 72, 8, 1, &v9);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC0u, 0LL);
LABEL_8:
      if ( v6 < 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
}
