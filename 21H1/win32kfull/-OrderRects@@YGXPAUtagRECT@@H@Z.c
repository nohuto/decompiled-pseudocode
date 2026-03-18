/*
 * XREFs of ?OrderRects@@YGXPAUtagRECT@@H@Z @ 0x154134
 * Callers:
 *     _MirrorRegion@12 @ 0x9CC70 (_MirrorRegion@12.c)
 * Callees:
 *     <none>
 */

void __fastcall OrderRects(int *a1, int a2)
{
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int *v7; // ecx
  _DWORD *v8; // esi
  int v9; // [esp+10h] [ebp-20h]
  int v10; // [esp+14h] [ebp-1Ch]
  int v11; // [esp+18h] [ebp-18h]
  int v12; // [esp+20h] [ebp-10h]
  int v13; // [esp+24h] [ebp-Ch]
  int v14; // [esp+28h] [ebp-8h]
  int v15; // [esp+2Ch] [ebp-4h]

  if ( a2 > 0 )
  {
    v11 = a2;
    v4 = 1;
    v5 = a2;
    v10 = 1;
    do
    {
      v6 = v4;
      v9 = v4;
      if ( v4 < a2 )
      {
        v7 = a1 + 4;
        v8 = a1 + 1;
        do
        {
          if ( v7[1] != *v8 )
            break;
          if ( *v7 < *a1 )
          {
            v12 = *a1;
            v13 = a1[1];
            v14 = a1[2];
            v15 = a1[3];
            *a1 = *v7;
            a1[1] = v7[1];
            a1[2] = v7[2];
            a1[3] = v7[3];
            *v7 = v12;
            v7[1] = v13;
            v7[2] = v14;
            v7[3] = v15;
            v6 = v9;
            v8 = a1 + 1;
          }
          ++v6;
          v7 += 4;
          v9 = v6;
        }
        while ( v6 < a2 );
        v4 = v10;
        v5 = v11;
      }
      ++v4;
      a1 += 4;
      --v5;
      v10 = v4;
      v11 = v5;
    }
    while ( v5 );
  }
}
