/*
 * XREFs of ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0285700
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C01562AC (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0156B10 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C0283508 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0077C50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 */

void __fastcall vSpUpdatePerPixelAlphaFromColorKey(
        struct _SURFOBJ *a1,
        int a2,
        struct _RECTL *a3,
        unsigned __int8 **a4)
{
  unsigned __int8 *v5; // r14
  LONG cy; // edi
  LONG cx; // r15d
  int v8; // r13d
  int v9; // r12d
  LONG lDelta; // r9d
  int v11; // r15d
  int v12; // edi
  int v13; // r8d
  signed int v14; // ecx
  char *v15; // r8
  int v16; // r10d
  int v17; // r9d
  char *v18; // rdx
  int v19; // eax
  int v20; // [rsp+20h] [rbp-78h]
  __int64 v21; // [rsp+30h] [rbp-68h] BYREF
  LONG v22; // [rsp+38h] [rbp-60h]
  LONG v23; // [rsp+3Ch] [rbp-5Ch]
  LONG v24; // [rsp+40h] [rbp-58h]
  int v25; // [rsp+44h] [rbp-54h]
  unsigned __int8 *v26; // [rsp+48h] [rbp-50h]
  unsigned __int8 *v27; // [rsp+50h] [rbp-48h]
  char *v28; // [rsp+58h] [rbp-40h]
  char *v29; // [rsp+60h] [rbp-38h]
  LONG v30; // [rsp+A0h] [rbp+8h]

  v5 = 0LL;
  v26 = 0LL;
  if ( a1->iBitmapFormat == 6 && !a1->iType )
  {
    v20 = a2 & 0xFF00 | ((unsigned __int8)a2 << 16) | BYTE2(a2);
    cy = a1->sizlBitmap.cy;
    cx = a1->sizlBitmap.cx;
    v8 = 0;
    v21 = 0LL;
    v9 = 0;
    v22 = cx;
    v23 = cy;
    if ( a3 )
    {
      ERECTL::operator*=((int *)&v21, &a3->left);
      cy = v23;
      cx = v22;
      v9 = HIDWORD(v21);
      v8 = v21;
    }
    lDelta = a1->lDelta;
    v30 = lDelta;
    v24 = lDelta;
    v11 = cx - v8;
    v25 = v11;
    v12 = cy - v9;
    if ( a4 )
    {
      v13 = abs32(v11);
      v14 = abs32(v12);
      if ( v13 )
      {
        if ( v14 && v13 < 0x7FFFFFFF / v14 )
        {
          v5 = (unsigned __int8 *)PALLOCMEM2((unsigned int)(v13 * v14), 1886221383LL, 0);
          v26 = v5;
          *a4 = v5;
          lDelta = v30;
        }
      }
    }
    v27 = v5;
    v15 = (char *)a1->pvScan0 + 4 * v8 + lDelta * v9;
    v16 = 0;
    while ( 1 )
    {
      v29 = v15;
      if ( !v12 )
        break;
      v17 = v11;
      v18 = v15;
      while ( 1 )
      {
        v28 = v18;
        if ( !v17 )
          break;
        if ( v5 )
          v5[v16] = v18[3];
        if ( *(_DWORD *)v18 == v20 )
          *(_DWORD *)v18 = 0;
        else
          v18[3] = -1;
        --v17;
        v18 += 4;
        v19 = v16 + 1;
        if ( !v5 )
          v19 = v16;
        v16 = v19;
      }
      --v12;
      v15 += v30;
    }
  }
}
