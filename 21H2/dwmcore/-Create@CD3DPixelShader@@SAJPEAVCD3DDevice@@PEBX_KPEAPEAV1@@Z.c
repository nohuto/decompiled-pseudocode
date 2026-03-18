/*
 * XREFs of ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x18003B49C
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180039660 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 *     ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x18003C28C (-CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18027E284 (-GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI_.c)
 * Callees:
 *     ?Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z @ 0x18003B5C4 (-Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z.c)
 *     ?CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x18003B6A4 (-CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z.c)
 *     ??0CD3DPixelShader@@IEAA@XZ @ 0x18003B718 (--0CD3DPixelShader@@IEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall CD3DPixelShader::Create(
        struct CD3DDevice *this,
        const void *a2,
        unsigned __int64 a3,
        struct CD3DPixelShader **a4)
{
  CD3DPixelShader *v8; // rax
  __int64 v9; // rcx
  CD3DPixelShader *v10; // rax
  CD3DPixelShader *v11; // rbx
  __int64 v12; // rcx
  struct ID3D11ClassLinkage *v13; // r9
  int v14; // eax
  unsigned int v15; // edi
  int v17; // r9d
  char *v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-28h]
  struct ID3D11PixelShader *v20; // [rsp+30h] [rbp-18h] BYREF

  v20 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(this, &EVTDESC_D3DSHADER_CREATE_Start, 1LL);
  v8 = (CD3DPixelShader *)operator new(0x80uLL);
  if ( !v8 )
  {
    v11 = 0LL;
    goto LABEL_19;
  }
  v10 = CD3DPixelShader::CD3DPixelShader(v8);
  v11 = v10;
  if ( !v10 )
  {
LABEL_19:
    v15 = -2147024882;
    v17 = -2147024882;
    v19 = 37;
    goto LABEL_20;
  }
  v12 = (__int64)v10 + *(int *)(*((_QWORD *)v10 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v14 = CD3DDevice::CreatePixelShader(this, a2, a3, v13, &v20);
  v15 = v14;
  if ( v14 < 0 )
  {
    v19 = 45;
  }
  else
  {
    v14 = CD3DPixelShader::Initialize(v11, (struct CD3DDevice *)((char *)this + 1104), a3, v20);
    v15 = v14;
    if ( v14 >= 0 )
    {
      *a4 = v11;
      v11 = 0LL;
      goto LABEL_8;
    }
    v19 = 47;
  }
  v17 = v14;
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v17, v19, 0LL);
LABEL_8:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(v9, &EVTDESC_D3DSHADER_CREATE_Stop, 1LL);
  if ( v20 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v20->lpVtbl->Release)(v20);
  if ( v11 )
  {
    v18 = (char *)v11 + *(int *)(*((_QWORD *)v11 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v15;
}
