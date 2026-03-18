/*
 * XREFs of ?GetETMFontManagement@@YGHAAVRFONTOBJ@@VPDEVOBJ@@PAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK4@Z @ 0x210654
 * Callers:
 *     _NtGdiGetETM@8 @ 0x22132A (_NtGdiGetETM@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 *     ?FontManagement@PFFOBJ@@QAEHPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z @ 0x229271 (-FontManagement@PFFOBJ@@QAEHPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z.c)
 */

int __fastcall GetETMFontManagement(
        int *a1,
        struct _SURFOBJ *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        void *a7,
        int a8,
        int a9)
{
  int v9; // eax
  int v11; // ecx
  PATHOBJ *v12; // esi
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  unsigned int *v17; // [esp+0h] [ebp-54h]
  int **v18; // [esp+4h] [ebp-50h]
  int v19; // [esp+10h] [ebp-44h] BYREF
  struct _SURFOBJ *v20; // [esp+14h] [ebp-40h]
  struct RFONTOBJ *v21; // [esp+18h] [ebp-3Ch] BYREF
  struct UMPDOBJ *v22; // [esp+1Ch] [ebp-38h] BYREF
  int v23; // [esp+20h] [ebp-34h]
  unsigned int v24; // [esp+24h] [ebp-30h] BYREF
  unsigned int v25[10]; // [esp+28h] [ebp-2Ch] BYREF

  v9 = a3;
  v20 = a2;
  v11 = *(_DWORD *)(a3 + 24);
  v12 = (PATHOBJ *)v25;
  v13 = 0;
  v24 = (unsigned int)v25;
  v23 = 0;
  v21 = 0;
  v22 = 0;
  if ( (v11 & 0x8080) == 0x8080 && *a1 )
  {
    v14 = UMPDReleaseRFONTSem((struct RFONTOBJ *)&v21, (struct UMPDOBJ *)&v22, &v24, v17, v18);
    v12 = (PATHOBJ *)v24;
    a2 = v20;
    v23 = v14;
    v9 = a3;
  }
  v15 = *a1;
  if ( v9 != dword_2785B8 || v15 && *(_DWORD *)(*(_DWORD *)(v15 + 20) + 4) == 3 )
  {
    v19 = *(_DWORD *)(v15 + 84);
    v13 = PFFOBJ::FontManagement((PFFOBJ *)&v19, a2, 0, 8u, 4u, a7, 0, 0);
  }
  if ( v23 )
  {
    UMPDAcquireRFONTSem(v21, v22, (unsigned int)v12, (unsigned int)v17, (const int *)v18);
    if ( v12 )
    {
      if ( v12 != (PATHOBJ *)v25 )
        Win32FreePool(v12);
    }
  }
  return v13;
}
