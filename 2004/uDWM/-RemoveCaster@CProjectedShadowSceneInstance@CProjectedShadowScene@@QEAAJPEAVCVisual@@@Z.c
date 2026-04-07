/*
 * XREFs of ?RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z @ 0x1800BC30C
 * Callers:
 *     ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800BC230 (-RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003EF44 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::RemoveCaster(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this,
        struct CVisual *a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v11[1] = 0LL;
  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 16);
  v11[0] = a2;
  v4 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 16), v11);
  if ( v4 )
  {
    v13 = 0LL;
    v5 = *((_QWORD *)this + 12);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v13);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 237LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
      return v7;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 88LL))(v13, v4[1]);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 238LL;
      goto LABEL_6;
    }
    v10 = v4[1];
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    RtlDeleteElementGenericTable(v2, v4);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
  }
  return 0LL;
}
