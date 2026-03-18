/*
 * XREFs of _vSrcOpaqCopyS4D16@44 @ 0x1D562F
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?pvFillOpaqTable@@YGPAXKKKPAVSURFACE@@@Z @ 0x9C0EE (-pvFillOpaqTable@@YGPAXKKKPAVSURFACE@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __stdcall vSrcOpaqCopyS4D16(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10,
        int *a11)
{
  _BYTE *v11; // ebx
  _WORD *v12; // ecx
  int v13; // eax
  unsigned __int8 *v14; // esi
  _WORD *v15; // edx
  int i; // edi
  unsigned __int8 v17; // al
  _WORD *v18; // edx
  unsigned int v19; // [esp+0h] [ebp-38h]
  struct SURFACE *v20; // [esp+4h] [ebp-34h]
  HSEMAPHORE v21; // [esp+10h] [ebp-28h] BYREF
  int v22; // [esp+14h] [ebp-24h]
  _BYTE *v23; // [esp+18h] [ebp-20h]
  _WORD *v24; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]
  _BYTE *v26; // [esp+40h] [ebp+8h]
  _WORD *v27; // [esp+4Ch] [ebp+14h]
  int v28; // [esp+54h] [ebp+1Ch]
  int v29; // [esp+60h] [ebp+28h]
  int *v30; // [esp+68h] [ebp+30h]

  v21 = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  ms_exc.registration.TryLevel = 0;
  v30 = pvFillOpaqTable(a9, 2, a10, a11, v19, v20);
  v11 = (_BYTE *)(a2 / 2 + a1);
  v26 = v11;
  v27 = (_WORD *)(a4 + 2 * a5);
  v29 = (int)((a6 & 0xFFFFFFFE) - ((a5 + 1) & 0xFFFFFFFE)) / 2;
  v28 = a6 - (a6 & 0xFFFFFFFE);
  v12 = v27;
  v13 = a8;
  while ( v13 )
  {
    v22 = 0;
    v14 = v11;
    v23 = v11;
    v15 = v12;
    v24 = v12;
    if ( ((a5 + 1) & 0xFFFFFFFE) != a5 )
    {
      v14 = v11 + 1;
      v23 = v11 + 1;
      *v12 = *((_WORD *)v30 + (*v11 & 0xF));
      v15 = v12 + 1;
      v24 = v12 + 1;
    }
    for ( i = 0; ; ++i )
    {
      v22 = i;
      if ( i >= v29 )
        break;
      v17 = *v14++;
      v23 = v14;
      *v15 = *((_WORD *)v30 + (v17 >> 4));
      v18 = v15 + 1;
      v24 = v18;
      *v18 = *((_WORD *)v30 + (v17 & 0xF));
      v15 = v18 + 1;
      v24 = v15;
      v11 = v26;
    }
    if ( v28 )
      *v15 = *((_WORD *)v30 + (*v14 >> 4));
    v13 = --a8;
    v11 += a3;
    v26 = v11;
    v12 = (_WORD *)((char *)v27 + a7);
    v27 = (_WORD *)((char *)v27 + a7);
  }
  ms_exc.registration.TryLevel = -2;
  SEMOBJ::vUnlock((SEMOBJ *)&v21);
}
