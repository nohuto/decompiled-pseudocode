/*
 * XREFs of ?vUpdateStyleState@XCLIPOBJ@@QAEXXZ @ 0x238683
 * Callers:
 *     ?bEnumStartLine@XCLIPOBJ@@QAEHK@Z @ 0x237B25 (-bEnumStartLine@XCLIPOBJ@@QAEHK@Z.c)
 * Callees:
 *     _RtlEnlargedUnsignedDivide@16 @ 0x238817 (_RtlEnlargedUnsignedDivide@16.c)
 */

void __thiscall XCLIPOBJ::vUpdateStyleState(XCLIPOBJ *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edx
  bool v8; // dl
  _DWORD *v9; // ecx
  unsigned int v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // esi
  ULONG v18; // [esp+0h] [ebp-18h]
  ULONG *v19; // [esp+4h] [ebp-14h]
  unsigned int v21; // [esp+14h] [ebp-4h]

  v2 = (_DWORD *)*((_DWORD *)this + 30);
  v3 = (_DWORD *)v2[3];
  if ( v2[1] - *v3 >= 0 )
    v4 = v2[1] - *v3;
  else
    v4 = *v3 - v2[1];
  v5 = v3[1];
  if ( v2[2] - v5 >= 0 )
    v6 = v2[2] - v5;
  else
    v6 = v5 - v2[2];
  v7 = v2[44];
  v21 = v2[43];
  if ( v21 == v7 )
    v8 = v4 >= v6;
  else
    v8 = v21 * (unsigned __int64)(unsigned int)v4 >= v7 * (unsigned __int64)(unsigned int)v6;
  v2[40] = v2[39];
  v9 = (_DWORD *)*((_DWORD *)this + 30);
  if ( v8 )
  {
    v10 = v9[43];
    v11 = v9[26];
    v12 = v9[24];
  }
  else
  {
    v10 = v9[44];
    v11 = v9[27];
    v12 = v9[25];
  }
  if ( v11 - v12 >= 0 )
    v13 = v11 - v12;
  else
    v13 = v12 - v11;
  v14 = v13 + 1;
  if ( ((v13 + 1) & 0xFFFF0000) != 0 )
  {
    RtlEnlargedUnsignedDivide((ULARGE_INTEGER)((int)v9[40] + v14 * (unsigned __int64)v10), v18, v19);
  }
  else
  {
    v9[40] += v10 * v14;
    v15 = *((_DWORD *)this + 30);
    v16 = *(_DWORD *)(v15 + 160);
    v17 = *(_DWORD *)(v15 + 164);
    if ( v16 >= v17 )
      *(_DWORD *)(v15 + 160) = v16 % v17;
  }
}
