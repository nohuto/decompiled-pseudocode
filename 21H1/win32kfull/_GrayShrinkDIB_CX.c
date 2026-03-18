/*
 * XREFs of _GrayShrinkDIB_CX @ 0x1CA5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl GrayShrinkDIB_CX(int a1, unsigned __int8 *a2, _BYTE *a3, int a4, int a5)
{
  unsigned __int8 *v5; // ecx
  int v6; // edx
  unsigned __int16 *v7; // eax
  int v8; // ebx
  int v9; // edi
  unsigned int v10; // esi
  unsigned __int8 *v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  unsigned __int16 *v15; // eax
  unsigned int v17; // esi
  int v18; // ebx
  int v19; // esi
  int v20; // edx
  int v21; // eax
  unsigned int v22; // eax
  int v23; // [esp+0h] [ebp-20h]
  int v24; // [esp+4h] [ebp-1Ch]
  unsigned __int16 v25; // [esp+Ch] [ebp-14h]
  unsigned __int8 *v26; // [esp+10h] [ebp-10h]
  int v27; // [esp+10h] [ebp-10h]
  int v28; // [esp+14h] [ebp-Ch]
  int v29; // [esp+18h] [ebp-8h]
  int v30; // [esp+1Ch] [ebp-4h]
  unsigned __int16 *v31; // [esp+2Ch] [ebp+Ch]
  unsigned __int16 *v32; // [esp+2Ch] [ebp+Ch]

  v5 = a2;
  if ( a2 )
  {
    if ( *(_WORD *)(a1 + 14) )
    {
      v6 = *(unsigned __int16 *)(a1 + 14) * *a2;
      v5 = &a2[*(unsigned __int16 *)(a1 + 10)];
    }
    else
    {
      v6 = 0;
    }
    v7 = *(unsigned __int16 **)(a1 + 32);
    v28 = *(_DWORD *)(a1 + 24);
    v25 = *(_WORD *)(a1 + 12);
    v8 = v24;
    v31 = v7;
    v30 = v24;
    if ( v25 )
    {
      v29 = v23;
      v9 = v25;
      do
      {
        v10 = *v7;
        v31 = v7 + 1;
        v11 = v5 + 1;
        v12 = *v5;
        v26 = v11;
        v13 = *(_DWORD *)(v28 + ((v10 >> 5) & 0x400) + 4 * v12);
        if ( (v10 & 0x4000) != 0 )
        {
          v29 = v8;
          v14 = v12 * (v10 & 0x3FFF);
          v8 = v14 + v6;
          v6 = v13 - v14;
          --v9;
        }
        else
        {
          v6 += v13;
        }
        v5 = v26;
        v7 = v31;
      }
      while ( v9 );
      v30 = v8;
    }
    else
    {
      v29 = v23;
    }
    if ( v25 == 1 )
      v29 = v8;
    v15 = v31;
    v17 = *v31;
    if ( *v31 )
    {
      do
      {
        v32 = v15 + 1;
        v18 = v28 + ((v17 >> 5) & 0x400);
        v27 = *v5;
        ++v15;
        if ( (v17 & 0x4000) != 0 )
        {
          v19 = v27 * (v17 & 0x3FFF);
          v20 = v19 + v6;
          v21 = (6 * v30 - v20 - v29) >> 15;
          if ( (v21 & 0xFF00) != 0 )
            LOBYTE(v21) = ~HIBYTE(v21);
          *a3 = v21;
          a3 += a5;
          v29 = v30;
          v30 = v20;
          v15 = v32;
          v6 = *(_DWORD *)(v18 + 4 * *v5) - v19;
        }
        else
        {
          v6 += *(_DWORD *)(v18 + 4 * v27);
        }
        v17 = *v15;
        ++v5;
      }
      while ( *v15 );
      v8 = v30;
    }
    if ( a3 == (_BYTE *)(a4 - a5) )
    {
      v22 = (5 * v8 - v29) >> 15;
      if ( (v22 & 0xFF00) != 0 )
        v22 = ~HIBYTE(v22);
      *a3 = v22;
    }
  }
}
