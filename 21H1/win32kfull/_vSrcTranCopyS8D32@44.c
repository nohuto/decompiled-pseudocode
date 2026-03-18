/*
 * XREFs of _vSrcTranCopyS8D32@44 @ 0x832F0
 * Callers:
 *     <none>
 * Callees:
 *     ?pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z @ 0x83544 (-pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __stdcall vSrcTranCopyS8D32(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        unsigned int a11)
{
  _BYTE *v11; // edi
  unsigned int *v12; // esi
  int v13; // edx
  _BYTE *v14; // ebx
  unsigned int *v15; // eax
  unsigned int *v16; // ecx
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  unsigned int v20; // edi
  int v21; // esi
  unsigned int v22; // edi
  int v23; // esi
  struct _BLENDINFO *v24; // [esp+0h] [ebp-7Ch]
  int v25; // [esp+4h] [ebp-78h]
  unsigned int v26[14]; // [esp+14h] [ebp-68h] BYREF
  HSEMAPHORE v27; // [esp+4Ch] [ebp-30h] BYREF
  unsigned int *v28; // [esp+50h] [ebp-2Ch]
  _BYTE *v29; // [esp+54h] [ebp-28h]
  unsigned int *v30; // [esp+58h] [ebp-24h]
  unsigned int v31; // [esp+5Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+64h] [ebp-18h]
  int v33; // [esp+84h] [ebp+8h]
  int v34; // [esp+88h] [ebp+Ch]
  unsigned int *v35; // [esp+90h] [ebp+14h]
  unsigned int v36; // [esp+94h] [ebp+18h]
  int v37; // [esp+98h] [ebp+1Ch]
  char *v38; // [esp+ACh] [ebp+30h]

  memset(v26, 0, sizeof(v26));
  v37 = a6 - a5;
  v27 = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  ms_exc.registration.TryLevel = 0;
  v11 = (_BYTE *)(a2 + a1);
  v33 = a2 + a1;
  v12 = (unsigned int *)(a4 + 4 * a5);
  v35 = v12;
  v31 = *v12;
  v38 = (char *)pvFillOpaqTableCT(v31, a11, (unsigned int)v26, (struct SURFACE *)1, v24, v25);
  v13 = a8;
LABEL_2:
  if ( v13 )
  {
    v14 = v11;
    v15 = v12;
    v16 = &v12[v37];
    v28 = v16;
    while ( 1 )
    {
      while ( 1 )
      {
        v30 = v15;
        v29 = v14;
        if ( v15 >= v16 )
        {
          v13 = --a8;
          v11 = (_BYTE *)(a3 + v33);
          v33 += a3;
          v12 = (unsigned int *)((char *)v35 + a7);
          v35 = (unsigned int *)((char *)v35 + a7);
          goto LABEL_2;
        }
        v17 = (unsigned __int8)*v14;
        if ( *v14 )
          break;
LABEL_6:
        ++v15;
        ++v14;
        v16 = v28;
      }
      if ( v17 == 114 )
      {
        *v15++ = a9;
        ++v14;
        v16 = v28;
      }
      else
      {
        v36 = *v15;
        v18 = 4 * v17;
        v34 = 4 * v17;
        if ( *v15 != v31 )
        {
          v19 = *(unsigned __int8 *)((unsigned __int8)((*v15 & v26[6]) << SLOBYTE(v26[0]) >> SLOBYTE(v26[1])) + v26[12]);
          v20 = v26[6] & ((unsigned int)(*(unsigned __int8 *)(v26[13]
                                                            + ((int)((int)&loc_80000
                                                                   + (_DWORD)(&alAlpha)[*((unsigned __int8 *)off_266024
                                                                                        + v18)]
                                                                   * (v26[9] - v19)) >> 20)
                                                            + v19) << SLOBYTE(v26[1])) >> SLOBYTE(v26[0]));
          v21 = *(unsigned __int8 *)((unsigned __int8)((v36 & v26[7]) << SLOBYTE(v26[2]) >> SLOBYTE(v26[3])) + v26[12]);
          v22 = v26[7] & ((unsigned int)(*(unsigned __int8 *)(v26[13]
                                                            + ((int)((int)&loc_80000
                                                                   + (_DWORD)(&alAlpha)[*((unsigned __int8 *)off_266024
                                                                                        + v34
                                                                                        + 1)]
                                                                   * (v26[10] - v21)) >> 20)
                                                            + v21) << SLOBYTE(v26[3])) >> SLOBYTE(v26[2])) | v20;
          v23 = *(unsigned __int8 *)((unsigned __int8)((v36 & v26[8]) << SLOBYTE(v26[4]) >> SLOBYTE(v26[5])) + v26[12]);
          *v15 = v26[8] & ((unsigned int)(*(unsigned __int8 *)(v26[13]
                                                             + ((int)((int)&loc_80000
                                                                    + (v26[11] - v23)
                                                                    * (_DWORD)(&alAlpha)[*((unsigned __int8 *)off_266024
                                                                                         + v34
                                                                                         + 2)]) >> 20)
                                                             + v23) << SLOBYTE(v26[5])) >> SLOBYTE(v26[4])) | v22;
          goto LABEL_6;
        }
        *v15++ = *(_DWORD *)&v38[v18];
        ++v14;
        v16 = v28;
      }
    }
  }
  ms_exc.registration.TryLevel = -2;
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
}
