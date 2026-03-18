/*
 * XREFs of ?vLine24Octant07@@YGXPAU_DDALINE@@PAEJK@Z @ 0x24070D
 * Callers:
 *     ?vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0xBE39A (-vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall vLine24Octant07(struct _DDALINE *a1, unsigned __int8 *a2, int a3, unsigned int a4)
{
  int v4; // esi
  int v5; // edx
  unsigned __int8 *v6; // ecx
  unsigned __int8 v7; // bl
  int i; // esi
  unsigned __int8 *v9; // edi
  int v10; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h]

  v4 = *((_DWORD *)a1 + 3);
  v5 = *((_DWORD *)a1 + 6);
  v10 = *((_DWORD *)a1 + 4);
  v11 = *((_DWORD *)a1 + 5);
  v6 = &a2[3 * *((_DWORD *)a1 + 1)];
  *v6 = a4;
  v6[2] = BYTE2(a4);
  v7 = a4;
  v6[1] = BYTE1(a4);
  for ( i = v4 - 1; i; --i )
  {
    v9 = v6;
    v6 += 3;
    v5 += v11;
    if ( v5 >= 0 )
    {
      v5 -= v10;
      v6 = &v9[a3 + 3];
    }
    *v6 = v7;
    v6[2] = BYTE2(a4);
    v7 = a4;
    v6[1] = BYTE1(a4);
  }
}
