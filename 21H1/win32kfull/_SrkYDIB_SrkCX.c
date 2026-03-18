/*
 * XREFs of _SrkYDIB_SrkCX @ 0x1CC2A4
 * Callers:
 *     _ShrinkDIB_CY_SrkCX @ 0x1CB85E (_ShrinkDIB_CY_SrkCX.c)
 * Callees:
 *     <none>
 */

int __fastcall SrkYDIB_SrkCX(int a1, unsigned __int8 *a2, int a3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  _WORD *v7; // ecx
  int result; // eax
  unsigned int v9; // esi
  unsigned int v10; // ecx
  unsigned __int8 v11; // al
  int v12; // edx
  int v13; // edi
  int v14; // ecx
  _WORD *v15; // [esp+Ch] [ebp-2Ch]
  unsigned __int8 *v16; // [esp+10h] [ebp-28h]
  unsigned int v17; // [esp+14h] [ebp-24h]
  int v18; // [esp+1Ch] [ebp-1Ch]
  int v19; // [esp+20h] [ebp-18h]
  _BYTE *v20; // [esp+24h] [ebp-14h]
  int v21; // [esp+28h] [ebp-10h]
  int v22; // [esp+2Ch] [ebp-Ch]
  int v23; // [esp+30h] [ebp-8h]
  __int16 v24; // [esp+34h] [ebp-4h]

  v4 = *(unsigned __int16 *)(a1 + 14);
  if ( *(_WORD *)(a1 + 14) )
  {
    v5 = v4 * a2[2];
    v6 = v4 * a2[1];
    v21 = v4 * *a2;
    a2 += 3 * *(unsigned __int16 *)(a1 + 10);
  }
  else
  {
    v5 = 0;
    v6 = 0;
    v21 = 0;
  }
  v7 = *(_WORD **)(a1 + 32);
  result = *(_DWORD *)(a1 + 24);
  v22 = v6;
  v23 = v5;
  v9 = (unsigned __int16)*v7;
  v18 = result;
  if ( *v7 )
  {
    v20 = (_BYTE *)(a3 + 1);
    do
    {
      v15 = v7 + 1;
      v24 = *(_WORD *)a2;
      v10 = v18 + ((v9 >> 5) & 0x400);
      v11 = a2[2];
      a2 += 3;
      v17 = v10;
      v16 = a2;
      if ( (v9 & 0x4000) != 0 )
      {
        v12 = (v9 & 0x3FFF) * v11;
        v13 = (v9 & 0x3FFF) * HIBYTE(v24);
        v19 = (v9 & 0x3FFF) * (unsigned __int8)v24;
        v20[1] = (unsigned int)(v12 + v23 + 4096) >> 13;
        *v20 = (unsigned int)(v13 + v22 + 4096) >> 13;
        *(v20 - 1) = (unsigned int)(v21 + 4096 + v19) >> 13;
        v20 += 3;
        v14 = *(_DWORD *)(v10 + 4 * v11) - v12;
        a2 = v16;
        v23 = v14;
        result = *(_DWORD *)(v17 + 4 * (unsigned __int8)v24) - v19;
        v6 = *(_DWORD *)(v17 + 4 * HIBYTE(v24)) - v13;
        v5 = v14;
        v22 = v6;
        v21 = result;
      }
      else
      {
        v5 += *(_DWORD *)(v10 + 4 * v11);
        v23 = v5;
        v6 += *(_DWORD *)(v10 + 4 * HIBYTE(v24));
        result = (unsigned __int8)v24;
        v22 = v6;
        v21 += *(_DWORD *)(v10 + 4 * (unsigned __int8)v24);
      }
      v7 = v15;
      v9 = (unsigned __int16)*v15;
    }
    while ( *v15 );
  }
  return result;
}
