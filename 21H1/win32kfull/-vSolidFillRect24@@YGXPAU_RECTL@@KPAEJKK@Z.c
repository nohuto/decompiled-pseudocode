/*
 * XREFs of ?vSolidFillRect24@@YGXPAU_RECTL@@KPAEJKK@Z @ 0xA7D76
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vSolidFillRect24(
        struct _RECTL *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  LONG *p_bottom; // ebx
  int v8; // edx
  unsigned __int8 *v9; // esi
  unsigned int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // [esp+4h] [ebp-10h]
  unsigned int v14; // [esp+8h] [ebp-Ch]
  unsigned int v15; // [esp+20h] [ebp+Ch]

  v6 = a2;
  if ( a2 )
  {
    p_bottom = &a1->bottom;
    do
    {
      v8 = *(p_bottom - 3);
      v9 = &a3[3 * v8 + a4 * *(p_bottom - 2)];
      v10 = *(p_bottom - 1) - v8;
      v14 = v10;
      v11 = a4 - 3 * v10;
      v12 = *p_bottom - *(p_bottom - 2);
      v13 = v11;
      while ( v12 )
      {
        --v12;
        v15 = v10;
        if ( v10 )
        {
          do
          {
            --v15;
            *(_WORD *)v9 = a5;
            v9[2] = BYTE2(a5);
            v9 += 3;
          }
          while ( v15 );
          v10 = v14;
          v11 = v13;
        }
        v9 += v11;
      }
      p_bottom += 4;
      --v6;
    }
    while ( v6 );
  }
}
