/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x18005E290
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18005D908 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180024548 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800386C0 (-CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z.c)
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x180052124 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18006AEF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800D37D4 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@-$ve.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180235F38 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::FindOrCreateResourceNoRef(
        __int64 a1,
        struct CD3DDevice *a2,
        struct CD3DPixelShader **a3)
{
  __int64 v3; // r11
  unsigned int v4; // edi
  __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  struct CD3DPixelShader *v10; // rax
  int v12; // eax
  unsigned int v13; // ecx
  struct CD3DPixelShader *v14; // rbx
  const void **v15; // rcx
  _BYTE *v16; // rdx
  struct CD3DPixelShader **v17; // rdx
  CDeviceManager *v18; // rcx
  int DefaultDevice; // eax
  unsigned int v20; // ecx
  CD3DDevice *v21; // rbx
  int v22; // eax
  unsigned int v23; // ecx
  CD3DDevice *v24; // rcx
  struct CD3DPixelShader *v25; // [rsp+60h] [rbp+30h] BYREF
  CD3DDevice *v26; // [rsp+70h] [rbp+40h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  *a3 = 0LL;
  v7 = (v5 - v3) >> 3;
  if ( !v7 )
    goto LABEL_6;
  while ( a2 && a2 != *(struct CD3DDevice **)(*(_QWORD *)(*(_QWORD *)(v3 + 8 * v6) + 16LL) + 80LL) )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= v7 )
      goto LABEL_6;
  }
  v10 = *(struct CD3DPixelShader **)(v3 + 8 * v6);
  *a3 = v10;
  if ( !v10 )
  {
LABEL_6:
    v25 = 0LL;
    if ( a2 )
    {
      v12 = CLinkedShader::CreateResource(*(CLinkedShader **)(a1 + 8), a2, &v25);
      v4 = v12;
      if ( v12 >= 0 )
      {
LABEL_8:
        v14 = v25;
        v26 = (CD3DDevice *)a1;
        v15 = (const void **)((char *)v25 + 88);
        v16 = (_BYTE *)*((_QWORD *)v25 + 12);
        if ( *((_BYTE **)v25 + 13) == v16 )
        {
          std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(v15, v16, &v26);
        }
        else
        {
          *(_QWORD *)v16 = a1;
          v15[1] = (char *)v15[1] + 8;
        }
        v17 = *(struct CD3DPixelShader ***)(a1 + 24);
        if ( *(struct CD3DPixelShader ***)(a1 + 32) == v17 )
        {
          std::vector<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> const &>(
            a1 + 16,
            v17,
            &v25);
          v14 = v25;
        }
        else
        {
          *v17 = v14;
          if ( v14 )
            (**(void (__fastcall ***)(struct CD3DPixelShader *))v14)(v14);
          *(_QWORD *)(a1 + 24) += 8LL;
        }
        *a3 = v14;
        goto LABEL_13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x52u, 0LL);
      goto LABEL_13;
    }
    v26 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v26);
    DefaultDevice = CDeviceManager::GetDefaultDevice(v18, &v26);
    v4 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
      v24 = v26;
      if ( !v26 )
        goto LABEL_13;
    }
    else
    {
      v21 = v26;
      v22 = CLinkedShader::CreateResource(*(CLinkedShader **)(a1 + 8), v26, &v25);
      v4 = v22;
      if ( v22 >= 0 )
      {
        if ( v21 )
          CD3DDevice::Release(v21);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x4Eu, 0LL);
      if ( !v21 )
      {
LABEL_13:
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v25);
        return v4;
      }
      v24 = v21;
    }
    CD3DDevice::Release(v24);
    goto LABEL_13;
  }
  return v4;
}
