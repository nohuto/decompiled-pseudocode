/*
 * XREFs of ?bFindRFONT@RFONTOBJ@@QAEHPAU_FD_XFORM@@KKAAVPDEVOBJ@@PAVEXFORMOBJ@@PAVPFE@@HHHK@Z @ 0x209285
 * Callers:
 *     ?vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z @ 0x207D5B (-vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QAEHAAVXDCOBJ@@AAU_FD_XFORM@@K@Z @ 0x209520 (-bSetNewFDX@RFONTOBJ@@QAEHAAVXDCOBJ@@AAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0x846A8 (-prfntActive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z.c)
 *     ?vInsert@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0x851B6 (-vInsert@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0xA3954 (-vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?cInactive@PDEVOBJ@@QAEII@Z @ 0xD0B3A (-cInactive@PDEVOBJ@@QAEII@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0xD0B62 (-prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z.c)
 *     ?bMatchRealization@RFONTOBJ@@AAEHPAU_FD_XFORM@@KKPAVEXFORMOBJ@@PAVPFE@@HHHK@Z @ 0x209428 (-bMatchRealization@RFONTOBJ@@AAEHPAU_FD_XFORM@@KKPAVEXFORMOBJ@@PAVPFE@@HHHK@Z.c)
 */

int __thiscall RFONTOBJ::bFindRFONT(
        RFONTOBJ *this,
        struct _FD_XFORM *Buf1,
        unsigned int a3,
        unsigned int a4,
        struct PDEVOBJ *a5,
        struct EXFORMOBJ *a6,
        struct PFE *a7,
        int a8,
        int a9,
        int a10,
        struct RFONT *a11)
{
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int matched; // eax
  int v16; // ecx
  int v17; // eax
  int i; // eax
  int v19; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // [esp+Ch] [ebp-4h] BYREF

  v25 = _ghsemRFONTList;
  GreAcquireSemaphore(_ghsemRFONTList);
  v12 = *(_DWORD *)a5;
  if ( (*(_DWORD *)(*(_DWORD *)a5 + 24) & 0x800000) != 0 )
    v12 = *(_DWORD *)(v12 + 2316);
  v13 = *(_DWORD *)(v12 + 940);
  v14 = 1;
  while ( 1 )
  {
    *(_DWORD *)this = v13;
    if ( !v13 )
      break;
    matched = RFONTOBJ::bMatchRealization(this, Buf1, a3, a4, a6, a7, a8, a9, a10, (unsigned int)a11);
    v16 = *(_DWORD *)this;
    if ( matched )
    {
      ++*(_DWORD *)(v16 + 660);
      v19 = *(_DWORD *)a5;
      if ( (*(_DWORD *)(*(_DWORD *)a5 + 24) & 0x800000) != 0 )
        v19 = *(_DWORD *)(v19 + 2316);
      a11 = *(struct RFONT **)(v19 + 940);
      if ( a11 != *(struct RFONT **)this )
      {
        RFONTOBJ::vRemove(this, &a11, 1);
        RFONTOBJ::vInsert((int *)this, (int *)&a11, 1);
        PDEVOBJ::prfntActive(a5, a11);
      }
      goto LABEL_18;
    }
    v13 = *(_DWORD *)(v16 + 668);
  }
  v17 = *(_DWORD *)a5;
  if ( (*(_DWORD *)(*(_DWORD *)a5 + 24) & 0x800000) != 0 )
    v17 = *(_DWORD *)(v17 + 2316);
  for ( i = *(_DWORD *)(v17 + 944); ; i = *(_DWORD *)(*(_DWORD *)this + 668) )
  {
    *(_DWORD *)this = i;
    if ( !i )
    {
      v14 = 0;
      *(_DWORD *)this = 0;
      goto LABEL_18;
    }
    if ( RFONTOBJ::bMatchRealization(this, Buf1, a3, a4, a6, a7, a8, a9, a10, (unsigned int)a11) )
      break;
  }
  v21 = *(_DWORD *)a5;
  if ( (*(_DWORD *)(*(_DWORD *)a5 + 24) & 0x800000) != 0 )
    v21 = *(_DWORD *)(v21 + 2316);
  a11 = *(struct RFONT **)(v21 + 944);
  RFONTOBJ::vRemove(this, &a11, 1);
  PDEVOBJ::prfntInactive(a5, a11);
  v22 = *(_DWORD *)a5;
  if ( (*(_DWORD *)(*(_DWORD *)a5 + 24) & 0x800000) != 0 )
    v22 = *(_DWORD *)(v22 + 2316);
  PDEVOBJ::cInactive(a5, *(_DWORD *)(v22 + 948) - 1);
  v23 = *(_DWORD *)a5;
  if ( (v24 & *(_DWORD *)(*(_DWORD *)a5 + 24)) != 0 )
    v23 = *(_DWORD *)(v23 + 2316);
  a11 = *(struct RFONT **)(v23 + 940);
  RFONTOBJ::vInsert((int *)this, (int *)&a11, 1);
  PDEVOBJ::prfntActive(a5, a11);
  *(_DWORD *)(*(_DWORD *)this + 660) = 1;
LABEL_18:
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  return v14;
}
