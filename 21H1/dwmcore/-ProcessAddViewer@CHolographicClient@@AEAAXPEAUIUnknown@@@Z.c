/*
 * XREFs of ?ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025C518
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x18025C74C (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddViewer(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rdx
  unsigned int v9; // edx
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  lpVtbl = a2->lpVtbl;
  v13 = 0LL;
  if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_6be85f9e_fb49_4826_8b19_a61973c8ea67,
         &v13) >= 0 )
  {
    v4 = v13;
    v5 = *((unsigned int *)this + 46);
    v6 = 0LL;
    v7 = *((_QWORD *)this + 20);
    if ( (_DWORD)v5 )
    {
      v8 = (_QWORD *)*((_QWORD *)this + 20);
      while ( v13 != *v8 )
      {
        v6 = (unsigned int)(v6 + 1);
        ++v8;
        if ( (unsigned int)v6 >= (unsigned int)v5 )
          goto LABEL_6;
      }
      goto LABEL_11;
    }
LABEL_6:
    v9 = v5 + 1;
    if ( (int)v5 + 1 >= (unsigned int)v5 )
    {
      if ( v9 <= *((_DWORD *)this + 45) )
      {
        *(_QWORD *)(v7 + 8 * v5) = v13;
        *((_DWORD *)this + 46) = v9;
        goto LABEL_10;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 160, 8, 1, &v13);
      v10 = v11;
      if ( v11 >= 0 )
        goto LABEL_10;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC0u, 0LL);
    }
    else
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    if ( v10 < 0 )
    {
      v4 = v13;
LABEL_11:
      if ( v4 )
        (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, v8, v6, v7);
      return;
    }
LABEL_10:
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 200LL))(*((_QWORD *)this + 3), v13, v6);
    v4 = 0LL;
    v13 = 0LL;
    goto LABEL_11;
  }
}
