/*
 * XREFs of ?vLine4Octant07@@YGXPAU_DDALINE@@PAEJK@Z @ 0x2409A9
 * Callers:
 *     ?vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0xBE39A (-vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall vLine4Octant07(struct _DDALINE *a1, unsigned __int8 *a2, int a3, char a4)
{
  unsigned int v4; // ebx
  int v5; // edi
  char v6; // dh
  unsigned __int8 *v7; // eax
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]
  struct _DDALINE *v10; // [esp+1Ch] [ebp+8h]

  v4 = *((_DWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 6);
  v8 = *((_DWORD *)a1 + 4);
  v9 = *((_DWORD *)a1 + 5);
  v10 = (struct _DDALINE *)*((_DWORD *)a1 + 3);
  v6 = a4 & 0xF | (16 * (a4 & 0xF));
  a2[v4 >> 1] = *((_BYTE *)&PixelLineMask4 + (v4 & 1)) & a2[v4 >> 1] | v6 & ~*((_BYTE *)&PixelLineMask4 + (v4 & 1));
  while ( 1 )
  {
    v10 = (struct _DDALINE *)((char *)v10 - 1);
    if ( !v10 )
      break;
    v7 = a2;
    ++v4;
    v5 += v9;
    if ( v5 >= 0 )
    {
      v5 -= v8;
      v7 = &a2[a3];
      a2 += a3;
    }
    v7[v4 >> 1] = *((_BYTE *)&PixelLineMask4 + (v4 & 1)) & v7[v4 >> 1] | v6 & ~*((_BYTE *)&PixelLineMask4 + (v4 & 1));
  }
}
