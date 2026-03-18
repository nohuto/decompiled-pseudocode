/*
 * XREFs of ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IW4Enum@FrontBufferRender@@PEAPEAVILegacySwapChain@@@Z @ 0x1800323E4
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x1800320D4 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@W4Enum@FrontBufferRender@@@Z @ 0x18003251C (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, _QWORD *a7)
{
  _QWORD *v9; // rbx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  void *v15; // rax
  unsigned int v16; // ecx
  unsigned int v18; // [rsp+20h] [rbp-B8h]
  _BYTE v19[8]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v20; // [rsp+58h] [rbp-80h]
  int v21; // [rsp+78h] [rbp-60h]

  v9 = 0LL;
  *a7 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 80LL))(a2, v19);
  v14 = v12;
  if ( v12 < 0 )
  {
    v18 = 27;
  }
  else
  {
    v15 = DefaultHeap::Alloc(0x170uLL);
    if ( v15 )
      v9 = (_QWORD *)CLegacySwapChain::CLegacySwapChain(v15, a1, a2, a3, a4, v21, a5, v20, a6, 1);
    if ( !v9 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x28u, 0LL);
      goto LABEL_12;
    }
    (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
    v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 48LL))(v9);
    v14 = v12;
    if ( v12 >= 0 )
    {
      *a7 = (char *)v9 + *(int *)(v9[3] + 16LL) + 24;
      return v14;
    }
    v18 = 42;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v18, 0LL);
LABEL_12:
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  return v14;
}
