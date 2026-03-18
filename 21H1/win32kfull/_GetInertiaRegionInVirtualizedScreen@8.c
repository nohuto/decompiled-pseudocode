/*
 * XREFs of _GetInertiaRegionInVirtualizedScreen@8 @ 0x17CAF0
 * Callers:
 *     ?_InertiaRegionIntersectsTopEdge@Edgy@@YGHPBUINERTIA_INFO_INTERNAL@@PBUtagRECT@@@Z @ 0x16EAC6 (-_InertiaRegionIntersectsTopEdge@Edgy@@YGHPBUINERTIA_INFO_INTERNAL@@PBUtagRECT@@@Z.c)
 * Callees:
 *     __ftol2_sse @ 0xF9210 (__ftol2_sse.c)
 *     _D3DXVec4Transform@12 @ 0x1506A6 (_D3DXVec4Transform@12.c)
 */

int __fastcall GetInertiaRegionInVirtualizedScreen(int a1, _DWORD *a2)
{
  int v4; // eax
  _DWORD *v6; // ecx
  double v7; // st7
  unsigned int v8; // ebx
  float *v9; // edi
  double v10; // st7
  int v11; // eax
  float v12; // [esp+10h] [ebp-10h] BYREF
  float v13; // [esp+14h] [ebp-Ch]
  float v14; // [esp+18h] [ebp-8h]
  float v15; // [esp+1Ch] [ebp-4h]

  v4 = *(_DWORD *)(a1 + 176);
  if ( (v4 & 1) == 0 )
    return 0;
  if ( (v4 & 4) != 0 )
    v6 = (_DWORD *)(a1 + 32);
  else
    v6 = (_DWORD *)(*(_DWORD *)(_HMObjectFromHandle(*(_DWORD *)(a1 + 112)) + 20) + 52);
  *a2 = *v6;
  a2[1] = v6[1];
  a2[2] = v6[2];
  a2[3] = v6[1];
  a2[4] = v6[2];
  a2[5] = v6[3];
  a2[6] = *v6;
  a2[7] = v6[3];
  if ( (*(_BYTE *)(a1 + 176) & 4) != 0 )
  {
    v7 = 1.0;
    v8 = 0;
    v9 = (float *)(a1 + 48);
    do
    {
      v12 = (float)(int)a2[2 * v8];
      v13 = (float)(int)a2[2 * v8 + 1];
      v14 = v7;
      v15 = v7;
      D3DXVec4Transform(&v12, &v12, v9);
      v10 = v13;
      a2[2 * v8] = (int)v12;
      v11 = (int)v10;
      v7 = 1.0;
      a2[2 * v8++ + 1] = v11;
    }
    while ( v8 < 4 );
  }
  return 1;
}
