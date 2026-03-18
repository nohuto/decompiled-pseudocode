/*
 * XREFs of ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C000A59C
 * Callers:
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C004B09C (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C01693E8 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01D00EC (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02D0B18 (DxgkCreateLightweightDeviceAndContext.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ADAPTER_RENDER::NodeSupportsGpuVa(ADAPTER_RENDER *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  char v4; // cl
  __int64 v5; // rdx

  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2680LL) + 344LL * a2 + 32);
  v4 = 0;
  if ( !v3 )
    return 0;
  v5 = 74LL * a3;
  if ( *(_BYTE *)(v5 + v3 + 72) || *(_BYTE *)(v5 + v3 + 73) )
    return 1;
  return v4;
}
