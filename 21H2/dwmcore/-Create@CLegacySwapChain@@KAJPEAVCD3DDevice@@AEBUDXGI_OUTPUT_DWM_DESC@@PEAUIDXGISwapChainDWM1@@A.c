/*
 * XREFs of ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAVILegacySwapChain@@@Z @ 0x18001ED08
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x18001D808 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@U_LUID@@IIIAEBUDXGI_RATIONAL@@_K6IW4Enum@FrontBufferRender@@@Z @ 0x18001EEB4 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?ValidateMinMaxVBlankDuration@@YAXAEBUDXGI_OUTPUT_DWM_DESC@@PEA_K1PEAI@Z @ 0x18001F364 (-ValidateMinMaxVBlankDuration@@YAXAEBUDXGI_OUTPUT_DWM_DESC@@PEA_K1PEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::Create(
        __int64 a1,
        const struct DXGI_OUTPUT_DWM_DESC *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  void *v15; // r10
  __int64 v16; // rax
  _QWORD *v17; // rdi
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v21; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp-A0h] BYREF
  unsigned __int64 v23; // [rsp+90h] [rbp-98h] BYREF
  _BYTE v24[40]; // [rsp+A0h] [rbp-88h] BYREF
  int v25; // [rsp+C8h] [rbp-60h]

  *a7 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 80LL))(a3, v24);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x3Au, 0LL);
  }
  else
  {
    ValidateMinMaxVBlankDuration(a2, &v23, &v22, &v21);
    v15 = DefaultHeap::Alloc(0x1A0uLL);
    if ( v15
      && (v16 = CLegacySwapChain::CLegacySwapChain(
                  v15,
                  a1,
                  a3,
                  a4,
                  a5,
                  *(_QWORD *)a2,
                  v25,
                  *((_DWORD *)a2 + 2),
                  *((_DWORD *)a2 + 3),
                  (char *)a2 + 40,
                  v23,
                  v22,
                  v21,
                  a6,
                  1),
          (v17 = (_QWORD *)v16) != 0LL) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v18 = (*(__int64 (__fastcall **)(_QWORD *))(*v17 + 48LL))(v17);
      v13 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x53u, 0LL);
        (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      }
      else
      {
        *a7 = (char *)v17 + *(int *)(v17[3] + 16LL) + 24;
      }
    }
    else
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x51u, 0LL);
    }
  }
  return v13;
}
