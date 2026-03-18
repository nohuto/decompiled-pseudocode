/*
 * XREFs of ?vLine24Octant25@@YGXPAU_DDALINE@@PAEJK@Z @ 0x2407F2
 * Callers:
 *     ?vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0xBE39A (-vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall vLine24Octant25(struct _DDALINE *a1, unsigned __int8 *a2, int a3, unsigned int a4)
{
  unsigned __int8 v4; // bl
  int v5; // edx
  int v6; // esi
  int v7; // edi
  unsigned __int8 *v8; // ecx
  int v9; // [esp+Ch] [ebp-8h]

  v4 = a4;
  v5 = *((_DWORD *)a1 + 6);
  v6 = *((_DWORD *)a1 + 3);
  v9 = *((_DWORD *)a1 + 5);
  v7 = *((_DWORD *)a1 + 4);
  v8 = &a2[3 * *((_DWORD *)a1 + 1)];
  while ( 1 )
  {
    *v8 = v4;
    *(_WORD *)(v8 + 1) = *(_WORD *)((char *)&a4 + 1);
    v4 = a4;
    if ( !--v6 )
      break;
    v8 += a3;
    v5 += v9;
    if ( v5 >= 0 )
    {
      v5 -= v7;
      v8 -= 3;
    }
  }
}
