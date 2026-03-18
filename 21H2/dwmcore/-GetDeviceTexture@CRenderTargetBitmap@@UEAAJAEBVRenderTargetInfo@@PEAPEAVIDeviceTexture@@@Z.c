/*
 * XREFs of ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180068450
 * Callers:
 *     ?GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010BD10 (-GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceText.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010CE90 (-GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010D1F0 (-GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180116222 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 *     ?GetDeviceTexture@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802A3964 (-GetDeviceTexture@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802A3984 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x1800686F0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetDeviceTexture(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  struct IDeviceTexture *v3; // rdi
  char *v4; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  int BitmapInternal; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned int *v16; // rax
  unsigned int v17; // ecx
  int v18; // ebx
  char *v19; // rcx
  int v20; // eax
  char *v21; // rcx
  unsigned int v22; // ecx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, struct IDeviceTexture **); // rcx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // [rsp+60h] [rbp+8h] BYREF
  char v29; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = (char *)this - 240;
  *a3 = 0LL;
  if ( !*((_QWORD *)this - 13) )
  {
    v13 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292412, 0x1A4u, 0LL);
    goto LABEL_18;
  }
  if ( !v4[144] )
    goto LABEL_3;
  v15 = (__int64)&v4[*(int *)(*((_QWORD *)v4 + 2) + 12LL) + 16];
  v16 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 32LL))(v15, &v29);
  v17 = *v16;
  if ( *(_DWORD *)a2 != *v16
    || *((_DWORD *)a2 + 1) != v16[1]
    || (v18 = *((_DWORD *)a2 + 2),
        v19 = &v4[*(int *)(*((_QWORD *)v4 + 2) + 20LL) + 16],
        v20 = *(_DWORD *)(*(__int64 (__fastcall **)(char *, __int64 *))(*(_QWORD *)v19 + 16LL))(v19, &v28),
        v20 != DisplayId::None)
    && v20 != v18
    && v18 != DisplayId::All )
  {
    v13 = -2003304287;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2003304287, 0x199u, 0LL);
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v13, 0x8Au, 0LL);
    return v13;
  }
  v21 = &v4[*(int *)(*((_QWORD *)v4 + 2) + 12LL) + 16];
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v21 + 24LL))(v21) && !*((_BYTE *)a2 + 20) )
  {
    v13 = -2147024891;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024891, 0x19Eu, 0LL);
    goto LABEL_18;
  }
LABEL_3:
  if ( *((_BYTE *)this - 96) )
  {
    v23 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IDeviceTexture **))(*((_QWORD *)this - 13)
                                                                             + 8LL
                                                                             + *(int *)(*(_QWORD *)(*((_QWORD *)this - 13)
                                                                                                  + 8LL)
                                                                                      + 4LL));
    result = (**v23)(v23, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, a3);
    v13 = result;
    if ( (int)result >= 0 )
      return result;
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, result, 0x92u, 0LL);
    return v13;
  }
  *a3 = 0LL;
  v8 = *((unsigned __int8 *)a2 + 20);
  v9 = *((unsigned int *)a2 + 2);
  v10 = *(_QWORD *)a2;
  v28 = 0LL;
  BitmapInternal = CD2DBitmapCache::GetBitmapInternal(v4, v10, v9, v8, &v28);
  v13 = BitmapInternal;
  if ( BitmapInternal >= 0 )
  {
    if ( v28 )
      v3 = (struct IDeviceTexture *)(*(int *)(*(_QWORD *)(v28 + 8) + 20LL) + v28 + 8);
    *a3 = v3;
    return v13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, BitmapInternal, 0x60u, 0LL);
  if ( v28 )
  {
    v27 = *(int *)(*(_QWORD *)(v28 + 8) + 4LL) + v28 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v13, 0x8Eu, 0LL);
  return v13;
}
