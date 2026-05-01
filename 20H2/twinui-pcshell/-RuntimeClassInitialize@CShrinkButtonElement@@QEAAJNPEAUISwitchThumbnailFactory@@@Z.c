/*
 * XREFs of ?RuntimeClassInitialize@CShrinkButtonElement@@QEAAJNPEAUISwitchThumbnailFactory@@@Z @ 0x1803AEF1C
 * Callers:
 *     ?RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchThumbnailFactory@@PEAUISwitchItem@@@Z @ 0x1803B5DF4 (-RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchTh.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShrinkButtonElement::RuntimeClassInitialize(
        CShrinkButtonElement *this,
        double a2,
        struct ISwitchThumbnailFactory *a3)
{
  __int64 *v3; // rdi
  __int64 v5; // rbx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (__int64 *)((char *)this + 240);
  *((double *)this + 29) = a2;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 30, (__int64)a3);
  v5 = *v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v5 + 112LL))(
         v5,
         0LL,
         0x100000001LL,
         &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
         (char *)this + 88);
  if ( v6 < 0 )
  {
    v7 = 12LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\shrinkbuttonelement.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v8 = *v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v8 + 112LL))(
         v8,
         *((_QWORD *)this + 11),
         0x100000001LL,
         &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
         (char *)this + 264);
  if ( v6 < 0 )
  {
    v7 = 13LL;
    goto LABEL_7;
  }
  v9 = *v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 31);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v9 + 112LL))(
         v9,
         *((_QWORD *)this + 33),
         0x100000001LL,
         &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
         (char *)this + 248);
  if ( v6 < 0 )
  {
    v7 = 14LL;
    goto LABEL_7;
  }
  return (unsigned int)v6;
}
