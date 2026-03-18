/*
 * XREFs of ?vHorizontalLine1@@YGXPAEJJK@Z @ 0x240126
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __stdcall vHorizontalLine1(unsigned __int8 *a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned int v4; // esi
  unsigned __int8 *v5; // edi
  int v6; // ebx
  unsigned __int8 v7; // dh
  unsigned __int8 v8; // al
  char v9; // dl

  v4 = a3 - a2;
  if ( a3 != a2 )
  {
    v5 = &a1[a2 >> 3];
    v6 = a2 & 7;
    if ( (a2 & 7) != 0 )
    {
      if ( v4 < 8 - v6 )
      {
        v8 = a4;
        v7 = a4;
      }
      else
      {
        v4 += v6 - 8;
        v7 = a4;
        *v5 = a4 & (255 >> v6) | *v5 & ~(255 >> v6);
        ++v5;
        v8 = a4;
        v6 = 0;
      }
      if ( v6 )
      {
        v9 = (255 >> v6) & (-1 << (8 - v6 - v4));
        *v5 = v9 & v7 | *v5 & ~v9;
        return;
      }
    }
    else
    {
      v8 = a4;
    }
    if ( v4 >> 3 )
    {
      memset(v5, v8, v4 >> 3);
      v5 += v4 >> 3;
      v4 &= 7u;
    }
    if ( v4 )
      *v5 = (255 >> v4) & *v5 | a4 & ~(255 >> v4);
  }
}
