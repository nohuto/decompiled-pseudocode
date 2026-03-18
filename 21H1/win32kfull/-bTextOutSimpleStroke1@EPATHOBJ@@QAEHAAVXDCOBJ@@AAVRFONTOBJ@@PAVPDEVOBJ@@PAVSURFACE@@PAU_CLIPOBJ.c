/*
 * XREFs of ?bTextOutSimpleStroke1@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@K@Z @ 0x1E5662
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1E4859 (-bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@P.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 */

BOOL __thiscall EPATHOBJ::bTextOutSimpleStroke1(
        PATHOBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        struct PDEVOBJ *a4,
        struct SURFACE *a5,
        struct _CLIPOBJ *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9)
{
  unsigned int *v9; // ebx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  BOOL v13; // esi
  unsigned int *v15; // [esp+0h] [ebp-88h]
  int **v16; // [esp+4h] [ebp-84h]
  LINEATTRS plineattrs; // [esp+10h] [ebp-78h] BYREF
  struct RFONTOBJ *v18; // [esp+30h] [ebp-58h]
  PATHOBJ *ppo; // [esp+34h] [ebp-54h]
  struct PDEVOBJ *v20; // [esp+38h] [ebp-50h]
  struct SURFACE *v21; // [esp+3Ch] [ebp-4Ch]
  CLIPOBJ *pco; // [esp+40h] [ebp-48h]
  BRUSHOBJ *pbo; // [esp+44h] [ebp-44h]
  POINTL *pptlBrushOrg; // [esp+48h] [ebp-40h]
  struct RFONTOBJ *v25; // [esp+4Ch] [ebp-3Ch] BYREF
  struct UMPDOBJ *v26; // [esp+50h] [ebp-38h] BYREF
  int v27; // [esp+54h] [ebp-34h]
  unsigned int v28; // [esp+58h] [ebp-30h] BYREF
  unsigned int v29[10]; // [esp+5Ch] [ebp-2Ch] BYREF

  ppo = this;
  v20 = a4;
  v21 = a5;
  pco = a6;
  v9 = v29;
  pbo = a7;
  pptlBrushOrg = a8;
  v10 = *(_DWORD *)a2;
  v27 = 0;
  v25 = 0;
  v26 = 0;
  v11 = *(_DWORD *)(*(_DWORD *)(v10 + 36) + 24) & 0x8080;
  v18 = a3;
  v28 = (unsigned int)v29;
  if ( v11 == 32896 && *(_DWORD *)a3 )
  {
    v12 = UMPDReleaseRFONTSem((struct RFONTOBJ *)&v25, (struct UMPDOBJ *)&v26, &v28, v15, v16);
    v10 = *(_DWORD *)a2;
    v9 = (unsigned int *)v28;
    v27 = v12;
  }
  qmemcpy(&plineattrs, &glaSimpleStroke, sizeof(plineattrs));
  v13 = EPATHOBJ::bSimpleStroke(ppo, *(_DWORD *)(v10 + 48), v20, v21, pco, 0, pbo, pptlBrushOrg, &plineattrs, 0xD0Du);
  if ( v27 )
  {
    UMPDAcquireRFONTSem(v25, v26, (unsigned int)v9, (unsigned int)v15, (const int *)v16);
    if ( v9 )
    {
      if ( v9 != v29 )
        Win32FreePool(v9);
    }
  }
  return v13;
}
