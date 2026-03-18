/*
 * XREFs of ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C02157CC
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C01248A0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0009540 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CopyDListFileName(ADAPTER_RENDER *this, char *a2)
{
  __int64 v4; // rdx
  char *v5; // r8
  unsigned __int16 v6; // ax

  if ( (*((_BYTE *)DXGPROCESS::GetCurrent((__int64)this, (__int64)a2) + 347) & 1) != 0 )
  {
    v5 = (char *)*((_QWORD *)this + 64);
    v6 = *((_WORD *)this + 252);
  }
  else
  {
    v5 = (char *)*((_QWORD *)this + 62);
    v6 = *((_WORD *)this + 244);
  }
  if ( a2 )
    *(_WORD *)a2 = 0;
  return RtlStringCbCopyNW(a2, v4, v5, v6);
}
