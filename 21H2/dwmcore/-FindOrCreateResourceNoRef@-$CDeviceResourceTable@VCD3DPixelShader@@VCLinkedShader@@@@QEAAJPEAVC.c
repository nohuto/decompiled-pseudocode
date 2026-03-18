/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x180039560
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800388E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x18003C28C (-CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800D5CA8 (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800ED52C (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@-$ve.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180277214 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::FindOrCreateResourceNoRef(
        CDeviceManager *a1,
        struct CD3DDevice *a2,
        struct CD3DPixelShader **a3)
{
  __int64 v3; // r11
  unsigned int v4; // edi
  __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  CD3DDevice *v9; // rsi
  struct CD3DPixelShader *v10; // rax
  CLinkedShader *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  struct CD3DPixelShader *v15; // rbx
  char *v16; // rcx
  CD3DDevice **v17; // rdx
  struct CD3DPixelShader **v18; // rdx
  int DefaultDevice; // eax
  unsigned int v20; // ecx
  CD3DDevice *v21; // rbx
  int v22; // eax
  unsigned int v23; // ecx
  CD3DDevice *v24; // rcx
  char *v25; // rcx
  struct CD3DPixelShader *v26; // [rsp+60h] [rbp+30h] BYREF
  CD3DDevice *v27; // [rsp+70h] [rbp+40h] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 3);
  v6 = 0LL;
  *a3 = 0LL;
  v7 = (v5 - v3) >> 3;
  v9 = a1;
  if ( !v7 )
    goto LABEL_6;
  while ( a2 )
  {
    a1 = *(CDeviceManager **)(*(_QWORD *)(v3 + 8 * v6) + 24LL);
    if ( a2 == *((struct CD3DDevice **)a1 + 10) )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= v7 )
      goto LABEL_7;
  }
  v10 = *(struct CD3DPixelShader **)(v3 + 8 * v6);
  *a3 = v10;
  if ( !v10 )
  {
LABEL_6:
    v26 = 0LL;
    if ( a2 )
    {
LABEL_7:
      v12 = (CLinkedShader *)*((_QWORD *)v9 + 1);
      v26 = 0LL;
      v13 = CLinkedShader::CreateResource(v12, a2, &v26);
      v4 = v13;
      if ( v13 >= 0 )
      {
LABEL_8:
        v15 = v26;
        v27 = v9;
        v16 = (char *)v26 + 72;
        v17 = (CD3DDevice **)*((_QWORD *)v26 + 10);
        if ( v17 == *((CD3DDevice ***)v26 + 11) )
        {
          std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(v16, v17, &v27);
        }
        else
        {
          *v17 = v9;
          *((_QWORD *)v16 + 1) += 8LL;
        }
        v18 = (struct CD3DPixelShader **)*((_QWORD *)v9 + 3);
        if ( v18 == *((struct CD3DPixelShader ***)v9 + 4) )
        {
          std::vector<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy> const &>(
            (char *)v9 + 16,
            v18,
            &v26);
          v15 = v26;
        }
        else
        {
          *v18 = v15;
          if ( v15 )
          {
            v25 = (char *)v15 + *(int *)(*((_QWORD *)v15 + 1) + 4LL) + 8;
            (*(void (__fastcall **)(char *))(*(_QWORD *)v25 + 8LL))(v25);
          }
          *((_QWORD *)v9 + 3) += 8LL;
        }
        *a3 = v15;
        goto LABEL_13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x52u, 0LL);
      goto LABEL_13;
    }
    v27 = 0LL;
    DefaultDevice = CDeviceManager::GetDefaultDevice(a1, &v27);
    v4 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
      v24 = v27;
      if ( !v27 )
        goto LABEL_13;
    }
    else
    {
      v21 = v27;
      v22 = CLinkedShader::CreateResource(*((CLinkedShader **)v9 + 1), v27, &v26);
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
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
        return v4;
      }
      v24 = v21;
    }
    CD3DDevice::Release(v24);
    goto LABEL_13;
  }
  return v4;
}
