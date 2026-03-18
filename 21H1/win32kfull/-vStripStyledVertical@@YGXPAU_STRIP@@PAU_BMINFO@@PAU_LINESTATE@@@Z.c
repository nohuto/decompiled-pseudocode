/*
 * XREFs of ?vStripStyledVertical@@YGXPAU_STRIP@@PAU_BMINFO@@PAU_LINESTATE@@@Z @ 0x23F1BE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vStripStyledVertical(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int v3; // edi
  int *v5; // ecx
  int v6; // ebx
  int v7; // edx
  int v8; // edx
  BOOL v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  char *v12; // [esp+Ch] [ebp-20h]
  int v13; // [esp+10h] [ebp-1Ch]
  int v14; // [esp+18h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-10h]
  int v16; // [esp+20h] [ebp-Ch]
  char *v17; // [esp+24h] [ebp-8h]
  int v18; // [esp+28h] [ebp-4h]
  struct _LINESTATE *v19; // [esp+3Ch] [ebp+10h]

  v3 = 4 * *((_DWORD *)a1 + 2);
  v12 = (char *)a1 + 4 * *(_DWORD *)a1 + 20;
  v17 = (char *)a1 + 20;
  if ( (*((_BYTE *)a1 + 4) & 8) != 0 )
    v3 = -4 * *((_DWORD *)a1 + 2);
  v5 = (int *)*((_DWORD *)a1 + 3);
  v18 = *((_DWORD *)a1 + 4);
  v6 = *((_DWORD *)a3 + 5);
  v7 = v18;
  v15 = *((_DWORD *)a3 + 1);
  v14 = *(_DWORD *)a3;
  v19 = (struct _LINESTATE *)*((_DWORD *)a3 + 15);
  do
  {
    v13 = v15 & *(_DWORD *)(*((_DWORD *)a2 + 1) + 4 * v7);
    v8 = v14 | ~*(_DWORD *)(*((_DWORD *)a2 + 1) + 4 * v7);
    v16 = *(_DWORD *)v17;
    v9 = (BOOL)v19;
    do
    {
      if ( !v9 )
      {
        *v5 = v13 ^ *v5 & v8;
        v9 = (BOOL)v19;
      }
      v6 -= *((_DWORD *)a3 + 2);
      v5 = (int *)((char *)v5 + v3);
      if ( v6 <= 0 )
      {
        *((_DWORD *)a3 + 12) += 4;
        v10 = (_DWORD *)*((_DWORD *)a3 + 12);
        if ( (unsigned int)v10 > *((_DWORD *)a3 + 11) )
        {
          v10 = (_DWORD *)*((_DWORD *)a3 + 10);
          *((_DWORD *)a3 + 12) = v10;
        }
        v6 += *v10;
        v9 = v19 == 0;
        v19 = (struct _LINESTATE *)v9;
      }
      --v16;
    }
    while ( v16 );
    v6 -= *((_DWORD *)a3 + 3);
    v5 += (v18 + 1) >> *((_DWORD *)a2 + 4);
    v7 = *((_DWORD *)a2 + 5) & (v18 + 1);
    v18 = v7;
    if ( v6 <= 0 )
    {
      v11 = (_DWORD *)(*((_DWORD *)a3 + 12) + 4);
      *((_DWORD *)a3 + 12) = v11;
      if ( (unsigned int)v11 > *((_DWORD *)a3 + 11) )
      {
        v11 = (_DWORD *)*((_DWORD *)a3 + 10);
        *((_DWORD *)a3 + 12) = v11;
      }
      v6 += *v11;
      v19 = (struct _LINESTATE *)(v19 == 0);
    }
    v17 += 4;
  }
  while ( v17 < v12 );
  *((_DWORD *)a1 + 4) = v7;
  *((_DWORD *)a1 + 3) = v5;
  *((_DWORD *)a3 + 5) = v6;
  *((_DWORD *)a3 + 15) = v19;
}
