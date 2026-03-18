/*
 * XREFs of _vSrcOpaqCopyS8D16@44 @ 0x1D5A7B
 * Callers:
 *     <none>
 * Callees:
 *     ?pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z @ 0x83544 (-pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __stdcall vSrcOpaqCopyS8D16(
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
  unsigned __int8 *v12; // edx
  _WORD *v13; // esi
  int v14; // ebx
  unsigned __int8 *v15; // edi
  _WORD *v16; // ecx
  unsigned int i; // eax
  struct _BLENDINFO *v18; // [esp+0h] [ebp-6Ch]
  int v19; // [esp+4h] [ebp-68h]
  unsigned int v20[14]; // [esp+10h] [ebp-5Ch] BYREF
  _DWORD v21[3]; // [esp+48h] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]
  unsigned int **v23; // [esp+84h] [ebp+18h]
  int v24; // [esp+88h] [ebp+1Ch]

  v24 = a6 - a5;
  memset(v20, 0, sizeof(v20));
  v21[0] = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  ms_exc.registration.TryLevel = 0;
  v23 = pvFillOpaqTableCT(a9, a10, a11, (struct SURFACE *)v20, 0, v18, v19);
  v12 = (unsigned __int8 *)(a2 + a1);
  v13 = (_WORD *)(a4 + 2 * a5);
  v14 = a8;
  while ( v14 )
  {
    v15 = v12;
    v16 = v13;
    for ( i = (unsigned int)&v13[v24]; ; i = (unsigned int)&v13[v24] )
    {
      v21[2] = v16;
      v21[1] = v15;
      if ( (unsigned int)v16 >= i )
        break;
      *v16 = *((_WORD *)v23 + *v15);
      v14 = a8;
      ++v16;
      ++v15;
    }
    a8 = --v14;
    v12 += a3;
    v13 = (_WORD *)((char *)v13 + a7);
  }
  ms_exc.registration.TryLevel = -2;
  SEMOBJ::vUnlock((SEMOBJ *)v21);
}
