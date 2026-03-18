/*
 * XREFs of ?vLine32Octant16@@YGXPAU_DDALINE@@PAEJK@Z @ 0x2408D7
 * Callers:
 *     ?vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0xBE39A (-vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall vLine32Octant16(struct _DDALINE *a1, unsigned __int8 *a2, int a3, unsigned int a4)
{
  int v4; // edx
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  unsigned __int8 *v8; // eax

  v4 = *((_DWORD *)a1 + 6);
  v5 = *((_DWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 3);
  v7 = *((_DWORD *)a1 + 4);
  v8 = &a2[4 * *((_DWORD *)a1 + 1)];
  while ( 1 )
  {
    *(_DWORD *)v8 = a4;
    if ( !--v6 )
      break;
    v8 += a3;
    v4 += v5;
    if ( v4 >= 0 )
    {
      v4 -= v7;
      v8 += 4;
    }
  }
}
