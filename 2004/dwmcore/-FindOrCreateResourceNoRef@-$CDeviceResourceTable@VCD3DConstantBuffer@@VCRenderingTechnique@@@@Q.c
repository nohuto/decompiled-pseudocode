/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18004B0A4
 * Callers:
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAUID3D11Buffer@@@Z @ 0x18004C33C (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18003CA70 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18003CAA0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x180047B78 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800B2E7C (-CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800CB1D8 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@-.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800D1080 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180236EC8 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::FindOrCreateResourceNoRef(
        _QWORD *a1,
        struct CD3DDevice *a2,
        CMILPoolResource **a3)
{
  __int64 v3; // r11
  unsigned int v4; // edi
  __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  CMILPoolResource *v10; // rax
  CRenderingTechnique *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  CMILPoolResource *v15; // rbx
  __int64 *v16; // rcx
  _QWORD *v17; // rdx
  CMILPoolResource **v18; // rdx
  CMILPoolResource *v19; // rcx
  CDeviceManager *v20; // rcx
  int DefaultDevice; // eax
  __int64 v22; // rcx
  CD3DDevice *v23; // rbx
  CRenderingTechnique *v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  CMILPoolResource *v27; // [rsp+60h] [rbp+30h] BYREF
  CD3DDevice *v28; // [rsp+70h] [rbp+40h] BYREF
  _QWORD *v29; // [rsp+78h] [rbp+48h] BYREF

  v3 = a1[2];
  v4 = 0;
  v5 = a1[3];
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
  v10 = *(CMILPoolResource **)(v3 + 8 * v6);
  *a3 = v10;
  if ( !v10 )
  {
LABEL_6:
    if ( a2 )
    {
      v12 = (CRenderingTechnique *)a1[1];
      v27 = 0LL;
      v13 = CRenderingTechnique::CreateResource(v12, a2, &v27);
      v4 = v13;
      if ( v13 >= 0 )
      {
LABEL_8:
        v15 = v27;
        v29 = a1;
        v16 = (__int64 *)((char *)v27 + 88);
        v17 = (_QWORD *)*((_QWORD *)v27 + 12);
        if ( *((_QWORD **)v27 + 13) == v17 )
        {
          std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(v16, v17, &v29);
        }
        else
        {
          *v17 = a1;
          v16[1] += 8LL;
        }
        v18 = (CMILPoolResource **)a1[3];
        if ( (CMILPoolResource **)a1[4] == v18 )
        {
          std::vector<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy> const &>(
            a1 + 2,
            v18,
            &v27);
          v15 = v27;
        }
        else
        {
          *v18 = v15;
          if ( v15 )
          {
            _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
            v15 = v27;
          }
          a1[3] += 8LL;
        }
        *a3 = v15;
        if ( !v15 )
          return v4;
        v19 = v15;
LABEL_14:
        CMILPoolResource::Release(v19);
        return v4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x52u, 0LL);
    }
    else
    {
      v28 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v28);
      DefaultDevice = CDeviceManager::GetDefaultDevice(v20, &v28);
      v4 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
        if ( v28 )
          CD3DDevice::Release(v28);
        return v4;
      }
      v23 = v28;
      v24 = (CRenderingTechnique *)a1[1];
      v27 = 0LL;
      v25 = CRenderingTechnique::CreateResource(v24, v28, &v27);
      v4 = v25;
      if ( v25 >= 0 )
      {
        if ( v23 )
          CD3DDevice::Release(v23);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x4Eu, 0LL);
      if ( v23 )
        CD3DDevice::Release(v23);
    }
    v19 = v27;
    if ( !v27 )
      return v4;
    goto LABEL_14;
  }
  return v4;
}
