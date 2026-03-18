/*
 * XREFs of ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C004B09C
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C02DBAC0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C02DBF00 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C000A59C (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 */

bool __fastcall ADAPTER_RENDER::GdiNodeSupportsGpuVa(ADAPTER_RENDER *this)
{
  unsigned __int8 v1; // al
  __int64 v2; // r10
  char v3; // dl

  v1 = ADAPTER_RENDER::NodeSupportsGpuVa(this, 0, 0);
  v3 = 0;
  if ( v1 )
    return *(_BYTE *)(*(_QWORD *)(v2 + 16) + 2729LL) == 0;
  return v3;
}
