/*
 * XREFs of ?vClearTypeLookupTableLoop@@YGXKPAVSURFACE@@PAU_BLENDINFO@@KK@Z @ 0x8372C
 * Callers:
 *     _vSrcOpaqCopyS8D32@44 @ 0x55F00 (_vSrcOpaqCopyS8D32@44.c)
 *     ?pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z @ 0x83544 (-pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge vClearTypeLookupTableLoop(
        void **a1@<edx>,
        int a2@<ecx>,
        _DWORD *a3,
        struct SURFACE *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int v8; // edx
  unsigned int v9; // ebx
  int v10; // esi
  char *v11; // eax
  int v12; // edx
  unsigned int v13; // esi
  int v14; // [esp+Ch] [ebp-20h]
  int v15; // [esp+14h] [ebp-18h]
  int v16; // [esp+18h] [ebp-14h]
  int v17; // [esp+1Ch] [ebp-10h]
  int v18; // [esp+20h] [ebp-Ch]
  int v19; // [esp+24h] [ebp-8h]
  unsigned int *v20; // [esp+28h] [ebp-4h]
  unsigned __int8 *v21; // [esp+34h] [ebp+8h]

  uFCacheCT = (unsigned int)a4;
  uGammaCacheCT = gulGamma;
  hCacheCT = *a1;
  uBCacheCT = a5;
  v8 = a3[12];
  v20 = (unsigned int *)&unk_274924;
  v15 = *(unsigned __int8 *)((unsigned __int8)((a3[6] & a5) << *a3 >> a3[1]) + v8);
  v19 = *(unsigned __int8 *)((unsigned __int8)((a3[7] & a5) << a3[2] >> a3[3]) + v8);
  v9 = 2;
  v17 = *(unsigned __int8 *)((unsigned __int8)((a5 & a3[8]) << a3[4] >> a3[5]) + v8);
  v10 = a3[10] - v19;
  v16 = a3[9] - v15;
  v14 = v10;
  v18 = a3[11] - v17;
  v11 = (char *)off_266024 + 4;
  v21 = (unsigned __int8 *)off_266024 + 4;
  do
  {
    v12 = a3[13];
    v13 = a3[6] & ((unsigned int)(*(unsigned __int8 *)(v12
                                                     + (((int)&loc_80000 + v16 * (int)(&alAlpha)[*v21]) >> 20)
                                                     + v15) << a3[1]) >> *a3) | a3[8] & ((unsigned int)(*(unsigned __int8 *)(v12 + (((int)&loc_80000 + v18 * (int)(&alAlpha)[v21[2]]) >> 20) + v17) << a3[5]) >> a3[4]) | a3[7] & ((unsigned int)(*(unsigned __int8 *)(v12 + (((int)&loc_80000 + v10 * (int)(&alAlpha)[(unsigned __int8)v11[1]]) >> 20) + v19) << a3[3]) >> a3[2]);
    if ( a2 == 2 )
      *(_WORD *)((char *)&aulCacheCT + v9) = v13;
    else
      *v20 = v13;
    v10 = v14;
    ++v20;
    v9 += 2;
    v11 = (char *)(v21 + 4);
    v21 += 4;
  }
  while ( v9 < 0xE4 );
  if ( a2 == 2 )
  {
    LOWORD(aulCacheCT) = a5;
    word_274A04 = (__int16)a4;
  }
  else
  {
    aulCacheCT = (unsigned int *)a5;
    dword_274AE8 = (int)a4;
  }
}
