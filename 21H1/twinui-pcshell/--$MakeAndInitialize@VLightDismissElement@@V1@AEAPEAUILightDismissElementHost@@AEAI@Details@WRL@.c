/*
 * XREFs of ??$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVLightDismissElement@@AEAPEAUILightDismissElementHost@@AEAI@Z @ 0x18039B7A8
 * Callers:
 *     ?LightDismissElement_CreateInstance@@YAJPEAUILightDismissElementHost@@IAEBU_GUID@@PEAPEAX@Z @ 0x18039BA8C (-LightDismissElement_CreateInstance@@YAJPEAUILightDismissElementHost@@IAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0LightDismissElement@@QEAA@XZ @ 0x18039B888 (--0LightDismissElement@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<LightDismissElement,LightDismissElement,ILightDismissElementHost * &,unsigned int &>(
        LightDismissElement **a1,
        __int64 *a2,
        int *a3)
{
  unsigned int v5; // ebx
  LightDismissElement *v7; // rax
  LightDismissElement *v8; // rax
  int v9; // ebp
  LightDismissElement *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  LightDismissElement *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  *a1 = 0LL;
  v7 = (LightDismissElement *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = LightDismissElement::LightDismissElement(v7);
    v9 = *a3;
    v10 = v8;
    v11 = *a2;
    v14 = v8;
    v12 = *((_QWORD *)v8 + 29);
    if ( v12 != v11 )
    {
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v12 = *((_QWORD *)v10 + 29);
      }
      *((_QWORD *)v10 + 29) = v11;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    *((_DWORD *)v10 + 60) = v9;
    (*(void (__fastcall **)(LightDismissElement *))(*(_QWORD *)v10 + 8LL))(v10);
    *a1 = v10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
