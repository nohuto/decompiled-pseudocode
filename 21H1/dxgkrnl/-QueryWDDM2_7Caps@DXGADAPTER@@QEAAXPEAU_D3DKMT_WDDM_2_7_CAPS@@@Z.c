/*
 * XREFs of ?QueryWDDM2_7Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_2_7_CAPS@@@Z @ 0x1C0161A78
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EE230 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueryWDDM2_7Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_2_7_CAPS *a2)
{
  int v3; // r8d
  int v4; // edx

  *(_DWORD *)a2 = 0;
  if ( *((_QWORD *)this + 335) )
  {
    v3 = (**((_DWORD **)this + 322) >> 15) & 1;
    *(_DWORD *)a2 = v3;
    v4 = v3 | (*(_BYTE *)(*((_QWORD *)this + 335) + 1649LL) != 0 ? 2 : 0);
    *(_DWORD *)a2 = v4;
    *(_DWORD *)a2 = v4 | (*((_DWORD *)this + 636) >> 1) & 8;
  }
}
