/*
 * XREFs of ?ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025B5C8
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x18025BBAC (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddDisplay(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // r8d
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  lpVtbl = a2->lpVtbl;
  v11 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_5e01b98c_b7d8_4f41_8bf2_9dc251835cd5,
         &v11) >= 0 )
  {
    v5 = *((_DWORD *)this + 38);
    v6 = v5 + 1;
    if ( v5 + 1 >= v5 )
    {
      if ( v6 <= *((_DWORD *)this + 37) )
      {
        *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * *((unsigned int *)this + 38)) = v11;
        *((_DWORD *)this + 38) = v6;
        goto LABEL_6;
      }
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 128, 8, 1, &v11);
      v7 = v9;
      if ( v9 >= 0 )
        goto LABEL_6;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC0u, 0LL);
    }
    else
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    if ( v7 < 0 )
    {
      v8 = v11;
LABEL_7:
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      return;
    }
LABEL_6:
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 88LL))(*((_QWORD *)this + 3), v11);
    v8 = 0LL;
    v11 = 0LL;
    goto LABEL_7;
  }
}
