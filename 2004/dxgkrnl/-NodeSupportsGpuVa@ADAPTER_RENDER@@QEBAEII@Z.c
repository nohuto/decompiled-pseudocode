/*
 * XREFs of ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0002458
 * Callers:
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C003ED6C (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00E5C60 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014BDA4 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C0222F24 (DxgkCreateLightweightDeviceAndContext.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ADAPTER_RENDER::NodeSupportsGpuVa(ADAPTER_RENDER *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  char v4; // cl
  __int64 v5; // rdx

  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2584LL) + 360LL * a2 + 32);
  v4 = 0;
  if ( !v3 )
    return 0;
  v5 = 74LL * a3;
  if ( *(_BYTE *)(v5 + v3 + 72) || *(_BYTE *)(v5 + v3 + 73) )
    return 1;
  return v4;
}
