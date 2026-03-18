/*
 * XREFs of ?RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180193130
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18003A720 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@IEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x180192C84 (-CopyAndTransform@CGammaBlendLayer@@IEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAn.c)
 */

__int64 __fastcall CGammaBlendLayer::RestoreState(CGammaBlendLayer *this, struct CDrawingContext *a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, char *, _QWORD **); // rbp
  char *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v16[6]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v17; // [rsp+50h] [rbp+8h] BYREF

  v16[0] = 0;
  v16[1] = 0;
  v17 = 0LL;
  v16[2] = *((_DWORD *)this + 6);
  v16[3] = *((_DWORD *)this + 7);
  v5 = CExternalLayer::RestoreState(this, a2, a3);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x63u, 0LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 1) + *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 16LL);
    v9 = *(__int64 (__fastcall **)(__int64, char *, _QWORD **))(*(_QWORD *)(v8 + 8) + 48LL);
    if ( v17 )
    {
      v10 = (char *)v17 + *(int *)(v17[1] + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = v9(v8 + 8, (char *)a2 + 56, &v17);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x66u, 0LL);
    }
    else
    {
      v13 = CGammaBlendLayer::CopyAndTransform(v12, (unsigned __int64)a2, v17, v16, (__int64)this + 16, 3u);
      v7 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x6Eu, 0LL);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
  return v7;
}
