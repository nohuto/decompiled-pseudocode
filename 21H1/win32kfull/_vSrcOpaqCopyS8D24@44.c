/*
 * XREFs of _vSrcOpaqCopyS8D24@44 @ 0x1D5B54
 * Callers:
 *     <none>
 * Callees:
 *     ?pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z @ 0x83544 (-pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __stdcall vSrcOpaqCopyS8D24(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct SURFACE *a9,
        struct _BLENDINFO *a10,
        void **a11)
{
  unsigned __int8 *v12; // edi
  _BYTE *v13; // edx
  unsigned __int8 *v15; // eax
  _BYTE *v16; // esi
  unsigned int i; // ecx
  unsigned int **v18; // ecx
  _BYTE *v19; // esi
  struct _BLENDINFO *v20; // [esp+0h] [ebp-6Ch]
  int v21; // [esp+4h] [ebp-68h]
  unsigned int v22[14]; // [esp+10h] [ebp-5Ch] BYREF
  HSEMAPHORE v23; // [esp+48h] [ebp-24h] BYREF
  unsigned __int8 *v24; // [esp+4Ch] [ebp-20h]
  _BYTE *v25; // [esp+50h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]
  unsigned int **v27; // [esp+84h] [ebp+18h]
  int v28; // [esp+88h] [ebp+1Ch]

  v28 = 3 * (a6 - a5);
  memset(v22, 0, sizeof(v22));
  v23 = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  ms_exc.registration.TryLevel = 0;
  v27 = pvFillOpaqTableCT(a9, a10, a11, (struct SURFACE *)v22, 0, v20, v21);
  v12 = (unsigned __int8 *)(a2 + a1);
  v13 = (_BYTE *)(3 * a5 + a4);
  while ( a8 )
  {
    v15 = v12;
    v24 = v12;
    v16 = v13;
    for ( i = (unsigned int)&v13[v28]; ; i = (unsigned int)&v13[v28] )
    {
      v25 = v16;
      if ( (unsigned int)v16 >= i )
        break;
      v18 = &v27[*v15];
      *v16 = *(_BYTE *)v18;
      v19 = v16 + 1;
      v25 = v19;
      *v19++ = *((_BYTE *)v18 + 1);
      v25 = v19;
      *v19 = *((_BYTE *)v18 + 2);
      v16 = v19 + 1;
      v15 = ++v24;
    }
    --a8;
    v12 += a3;
    v13 += a7;
  }
  ms_exc.registration.TryLevel = -2;
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
}
