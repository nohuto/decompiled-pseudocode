/*
 * XREFs of ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1801AD310
 * Callers:
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEAPEAVCCachedVisualImage@@@Z @ 0x1801F36E8 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJPEBVCDrawingContext@@AEBUD2D_VECTOR_2F@@PEAU3@PEA.c)
 *     ?ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z @ 0x1801F398C (-ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180098DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A0618 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::UpdateFromVisualSurface(
        __int64 a1,
        struct CResource *a2,
        float *a3,
        float *a4,
        float *a5,
        int a6)
{
  struct CResource *v7; // rdx
  unsigned int v8; // edi
  float v10; // xmm8_4
  float v11; // xmm9_4
  char v12; // al
  float v13; // xmm6_4
  float v14; // xmm7_4
  int v15; // eax
  __int64 v16; // rcx
  float v17; // xmm3_4
  float v19[12]; // [rsp+30h] [rbp-58h]

  v7 = *(struct CResource **)(a1 + 136);
  v8 = 0;
  v10 = a3[1];
  v12 = 0;
  v19[0] = *a3;
  v11 = *a3;
  v19[1] = v10;
  v13 = *a3 + *a4;
  v14 = v10 + a4[1];
  v19[2] = v13;
  v19[3] = v14;
  if ( v7 != a2 )
  {
    if ( v7 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)a1, v7);
      *(_QWORD *)(a1 + 136) = 0LL;
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)(a1 + 176));
    }
    *(_WORD *)(a1 + 1800) = 0;
    *(_QWORD *)(a1 + 136) = a2;
    v15 = CResource::RegisterNotifier((CResource *)a1, a2);
    v8 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1ECu, 0LL);
      return v8;
    }
    v12 = 1;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 88) - v11) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 92) - v10) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 96) - v13) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 100) - v14) & _xmm) > 0.0000011920929 )
  {
    v12 = 1;
    *(_OWORD *)(a1 + 88) = *(_OWORD *)v19;
  }
  v17 = a5[1];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(double *)(a1 + 112) - *a5) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(double *)(a1 + 120) - v17) & _xmm) > 0.0000011920929 )
  {
    v12 = 1;
    *(double *)(a1 + 112) = *a5;
    *(double *)(a1 + 120) = v17;
  }
  if ( *(_DWORD *)(a1 + 168) != a6 )
  {
    *(_DWORD *)(a1 + 168) = a6;
    v12 = 1;
  }
  if ( v12 )
    CResource::NotifyOnChanged(a1, 0, 0LL);
  return v8;
}
