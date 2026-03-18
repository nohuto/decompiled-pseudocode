/*
 * XREFs of ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0009C84
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EE230 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x1C0009D78 (-SupportHWVSync@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGADAPTER::QueryWDDM1_2Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_1_2_CAPS *a2)
{
  UINT v3; // r8d
  UINT v4; // eax
  UINT v5; // ecx
  UINT v6; // eax
  UINT v7; // ecx
  unsigned __int8 v8; // al
  int v9; // edx
  int v10; // ecx
  __int64 v11; // r10
  __int64 v12; // r9

  a2->PreemptionCaps.GraphicsPreemptionGranularity = *((_DWORD *)this + 624);
  a2->PreemptionCaps.ComputePreemptionGranularity = *((_DWORD *)this + 625);
  a2->Value ^= (a2->Value ^ *((unsigned __int8 *)this + 2504)) & 1;
  v3 = a2->Value ^ ((unsigned __int8)*(_DWORD *)&a2->0 ^ (unsigned __int8)(2 * *((_BYTE *)this + 2505))) & 2;
  a2->Value = v3;
  v4 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(4 * *((_BYTE *)this + 2506))) & 4;
  a2->Value = v4;
  v5 = v4 & 0xFFFFFFF7 | (2 * (*((_DWORD *)this + 505) & 4 | 8));
  a2->Value = v5;
  v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(*((_DWORD *)this + 505) >> 23)) & 0x20;
  a2->Value = v6;
  v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)this + 504) << 6)) & 0x40;
  a2->Value = v7;
  a2->Value = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(32 * *((_DWORD *)this + 500))) & 0x80;
  v8 = DXGADAPTER::SupportHWVSync(this);
  v10 = v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)(v8 << 8)) & 0x100;
  *(_DWORD *)(v11 + 8) = v10;
  *(_DWORD *)(v11 + 8) = v10 ^ ((unsigned __int16)(v9 ^ (v9 ^ (v8 << 8)) & 0x100) ^ (unsigned __int16)(*(unsigned __int8 *)(v12 + 2510) << 9)) & 0x200;
}
