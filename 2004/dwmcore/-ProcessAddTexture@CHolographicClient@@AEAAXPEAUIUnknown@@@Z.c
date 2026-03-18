/*
 * XREFs of ?ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802599C0
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180259CDC (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddTexture(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // r8d
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873,
         &v10) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v10);
    v4 = *((_DWORD *)this + 16);
    v5 = v4 + 1;
    if ( v4 + 1 >= v4 )
    {
      if ( v5 <= *((_DWORD *)this + 15) )
      {
        *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *((unsigned int *)this + 16)) = v10;
        *((_DWORD *)this + 16) = v5;
        goto LABEL_6;
      }
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8, 1, &v10);
      v6 = v8;
      if ( v8 >= 0 )
        goto LABEL_6;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
    }
    else
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    if ( v6 < 0 )
    {
      v7 = v10;
LABEL_7:
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return;
    }
LABEL_6:
    v7 = 0LL;
    v10 = 0LL;
    goto LABEL_7;
  }
}
