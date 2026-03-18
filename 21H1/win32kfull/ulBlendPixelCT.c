/*
 * XREFs of ulBlendPixelCT @ 0x1D4F15
 * Callers:
 *     ?vSrcTranCopyS8D16New@@YGXPAEJJ0JJJJKKPAVSURFACE@@P6GXPBE00JPAPAG@Z0@Z @ 0x1D5304 (-vSrcTranCopyS8D16New@@YGXPAEJJ0JJJJKKPAVSURFACE@@P6GXPBE00JPAPAG@Z0@Z.c)
 *     _vSrcTranCopyS8D24@44 @ 0x1D6E22 (_vSrcTranCopyS8D24@44.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ulBlendPixelCT(_DWORD *a1, int a2, unsigned __int8 *a3)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  char v5; // cl
  int v6; // edi
  int v7; // esi
  int v8; // edi
  int v9; // esi
  unsigned int v11; // [esp+Ch] [ebp-18h]
  unsigned int v12; // [esp+Ch] [ebp-18h]
  int v13; // [esp+10h] [ebp-14h]
  int v14; // [esp+14h] [ebp-10h]
  unsigned int v15; // [esp+1Ch] [ebp-8h]
  unsigned int v16; // [esp+1Ch] [ebp-8h]

  v15 = a1[6];
  v3 = (a2 & v15) << *a1 >> a1[1];
  v14 = a1[12];
  v13 = a1[13];
  v4 = v15 & ((unsigned int)(*(unsigned __int8 *)(v13
                                                + (((int)&loc_80000
                                                  + (int)(&alAlpha)[*a3]
                                                  * (a1[9] - *(unsigned __int8 *)((unsigned __int8)v3 + v14))) >> 20)
                                                + *(unsigned __int8 *)((unsigned __int8)v3 + v14)) << a1[1]) >> *a1);
  v5 = a1[2];
  v6 = a1[3];
  v11 = a1[7];
  v7 = *(unsigned __int8 *)((unsigned __int8)((a2 & v11) << v5 >> v6) + v14);
  v16 = v11 & ((unsigned int)(*(unsigned __int8 *)(v13
                                                 + (((int)&loc_80000 + (int)(&alAlpha)[a3[1]] * (a1[10] - v7)) >> 20)
                                                 + v7) << v6) >> v5) | v4;
  v8 = a1[5];
  v12 = a1[8];
  v9 = *(unsigned __int8 *)((unsigned __int8)((a2 & v12) << a1[4] >> v8) + v14);
  return v16 | v12 & ((unsigned int)(*(unsigned __int8 *)(v13
                                                        + (((int)&loc_80000 + (int)(&alAlpha)[a3[2]] * (a1[11] - v9)) >> 20)
                                                        + v9) << v8) >> a1[4]);
}
