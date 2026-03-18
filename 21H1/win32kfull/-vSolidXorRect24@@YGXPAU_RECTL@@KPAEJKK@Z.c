/*
 * XREFs of ?vSolidXorRect24@@YGXPAU_RECTL@@KPAEJKK@Z @ 0x247FB3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vSolidXorRect24(
        struct _RECTL *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  LONG *p_right; // ebx
  int v8; // ecx
  unsigned __int8 *v9; // esi
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  struct _RECTL *v14; // [esp+1Ch] [ebp+8h]
  unsigned int v15; // [esp+20h] [ebp+Ch]

  v6 = a2;
  if ( a2 )
  {
    p_right = &a1->right;
    v14 = (struct _RECTL *)&a1->right;
    do
    {
      v8 = *(p_right - 2);
      v9 = &a3[3 * v8 + a4 * *(p_right - 1)];
      v15 = *p_right - v8;
      v10 = p_right[1] - *(p_right - 1);
      v11 = a4 - 3 * v15;
      if ( v10 )
      {
        v12 = v15;
        do
        {
          --v10;
          v13 = v12;
          if ( v12 )
          {
            do
            {
              *(_WORD *)v9 ^= a5;
              v9[2] ^= BYTE2(a5);
              v9 += 3;
              --v13;
            }
            while ( v13 );
            v12 = v15;
            v11 = a4 - 3 * v15;
          }
          v9 += v11;
        }
        while ( v10 );
        p_right = &v14->left;
      }
      p_right += 4;
      v14 = (struct _RECTL *)p_right;
      --v6;
    }
    while ( v6 );
  }
}
