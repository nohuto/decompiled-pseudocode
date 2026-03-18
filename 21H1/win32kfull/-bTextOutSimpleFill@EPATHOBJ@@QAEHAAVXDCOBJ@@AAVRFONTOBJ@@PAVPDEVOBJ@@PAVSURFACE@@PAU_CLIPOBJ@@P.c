/*
 * XREFs of ?bTextOutSimpleFill@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1E5583
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1E4616 (-bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 */

PATHOBJ *__thiscall EPATHOBJ::bTextOutSimpleFill(
        PATHOBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        struct PDEVOBJ *a4,
        struct SURFACE *a5,
        struct _CLIPOBJ *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  int v10; // edx
  int v11; // eax
  unsigned int *v12; // esi
  int v13; // edi
  int v14; // eax
  unsigned int *v16; // [esp+0h] [ebp-64h]
  int **v17; // [esp+4h] [ebp-60h]
  struct RFONTOBJ *v18; // [esp+24h] [ebp-40h] BYREF
  struct UMPDOBJ *v19; // [esp+28h] [ebp-3Ch] BYREF
  unsigned int v20; // [esp+2Ch] [ebp-38h] BYREF
  PATHOBJ *ppo; // [esp+30h] [ebp-34h]
  unsigned int v22[10]; // [esp+34h] [ebp-30h] BYREF

  v10 = *(_DWORD *)a2;
  v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 36) + 24);
  v12 = v22;
  ppo = this;
  v13 = 0;
  v20 = (unsigned int)v22;
  v18 = 0;
  v19 = 0;
  if ( (v11 & 0x8080) == 0x8080 && *(_DWORD *)a3 )
  {
    v14 = UMPDReleaseRFONTSem((struct RFONTOBJ *)&v18, (struct UMPDOBJ *)&v19, &v20, v16, v17);
    v12 = (unsigned int *)v20;
    v13 = v14;
    v10 = *(_DWORD *)a2;
  }
  ppo = (PATHOBJ *)EPATHOBJ::bSimpleFill(ppo, *(_DWORD *)(v10 + 48), a4, a5, a6, a7, a8, 0xD0Du, 2u);
  if ( v13 )
  {
    UMPDAcquireRFONTSem(v18, v19, (unsigned int)v12, (unsigned int)v16, (const int *)v17);
    if ( v12 )
    {
      if ( v12 != v22 )
        Win32FreePool(v12);
    }
  }
  return ppo;
}
