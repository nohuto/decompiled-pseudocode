/*
 * XREFs of DNG_StretchRow @ 0xA1CC0
 * Callers:
 *     DNG_DrawRow @ 0x51780 (DNG_DrawRow.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall DNG_StretchRow(_DWORD *a1, int a2, int a3, unsigned int *a4)
{
  _DWORD *v5; // edi
  unsigned int result; // eax
  unsigned int v7; // ebx
  _DWORD *v8; // esi
  int v9; // eax
  unsigned int v10; // [esp+8h] [ebp-8h]
  unsigned int v11; // [esp+Ch] [ebp-4h]
  unsigned int v12; // [esp+18h] [ebp+8h]
  unsigned int v13; // [esp+1Ch] [ebp+Ch]

  v5 = (_DWORD *)(a2 + 4 * a4[6]);
  v10 = a4[3];
  v11 = a4[2];
  result = a4[1];
  v13 = result;
  if ( a1[51] <= (unsigned int)v5 )
  {
    result = a4[7];
    v7 = a2 + 4 * result;
    if ( v7 <= a1[52] )
    {
      result = *a4;
      v8 = (_DWORD *)(a3 + 4 * *a4);
      if ( a1[53] <= (unsigned int)v8 )
      {
        result = a3 + 4 * (a1[10] - a1[11]);
        v12 = result;
        if ( result <= a1[54] )
        {
          while ( (unsigned int)v5 < v7 && (unsigned int)v8 < result )
          {
            v9 = -(v13 + v11 < v13);
            *v5 = *v8;
            v13 += v11;
            ++v5;
            v8 += v10 - v9;
            result = v12;
          }
        }
      }
    }
  }
  return result;
}
