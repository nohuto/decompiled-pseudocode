/*
 * XREFs of ?vLine32Octant34@@YGXPAU_DDALINE@@PAEJK@Z @ 0x240955
 * Callers:
 *     ?vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0xBE39A (-vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall vLine32Octant34(struct _DDALINE *a1, unsigned __int8 *a2, int a3, unsigned int a4)
{
  int v4; // esi
  int v5; // edx
  int v6; // ecx
  unsigned __int8 *v7; // eax
  int i; // esi
  unsigned __int8 *v9; // edi
  int v10; // [esp+4h] [ebp-4h]
  struct _DDALINE *v11; // [esp+10h] [ebp+8h]

  v4 = *((_DWORD *)a1 + 3);
  v5 = *((_DWORD *)a1 + 6);
  v10 = *((_DWORD *)a1 + 4);
  v6 = *((_DWORD *)a1 + 1);
  v11 = (struct _DDALINE *)*((_DWORD *)a1 + 5);
  v7 = &a2[4 * v6];
  *(_DWORD *)v7 = a4;
  for ( i = v4 - 1; i; --i )
  {
    v9 = v7;
    v7 -= 4;
    v5 += (int)v11;
    if ( v5 >= 0 )
    {
      v5 -= v10;
      v7 = &v9[a3 - 4];
    }
    *(_DWORD *)v7 = a4;
  }
}
