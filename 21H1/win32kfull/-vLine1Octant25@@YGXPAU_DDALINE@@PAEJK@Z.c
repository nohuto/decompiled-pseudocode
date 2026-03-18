/*
 * XREFs of ?vLine1Octant25@@YGXPAU_DDALINE@@PAEJK@Z @ 0x2405F3
 * Callers:
 *     ?vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0xBE39A (-vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall vLine1Octant25(struct _DDALINE *a1, unsigned __int8 *a2, int a3, unsigned int a4)
{
  int v5; // esi
  int v6; // ebx
  unsigned __int8 *v7; // ecx
  int v8; // edi
  unsigned __int8 v9; // ah
  int v10; // edx
  struct _DDALINE *v11; // [esp+14h] [ebp+8h]

  v5 = *((_DWORD *)a1 + 6);
  v11 = (struct _DDALINE *)*((_DWORD *)a1 + 5);
  v6 = 128 >> (*((_DWORD *)a1 + 1) & 7);
  v7 = &a2[*((_DWORD *)a1 + 1) >> 3];
  v8 = *((_DWORD *)a1 + 4);
  v9 = *v7;
  v10 = *((_DWORD *)a1 + 3) - 1;
  if ( a4 )
  {
    for ( *v7 = v6 | v9; v10; --v10 )
    {
      v7 += a3;
      v5 += (int)v11;
      if ( v5 >= 0 )
      {
        v5 -= v8;
        LOBYTE(v6) = 2 * v6;
        if ( !(_BYTE)v6 )
        {
          LOBYTE(v6) = 1;
          --v7;
        }
      }
      *v7 |= v6;
    }
  }
  else
  {
    for ( *v7 = v9 & ~(_BYTE)v6; v10; --v10 )
    {
      v7 += a3;
      v5 += (int)v11;
      if ( v5 >= 0 )
      {
        v5 -= v8;
        LOBYTE(v6) = 2 * v6;
        if ( !(_BYTE)v6 )
        {
          LOBYTE(v6) = 1;
          --v7;
        }
      }
      *v7 &= ~(_BYTE)v6;
    }
  }
}
