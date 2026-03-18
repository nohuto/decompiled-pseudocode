/*
 * XREFs of ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0025DF8
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0025A70 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02A757C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0025FC0 (-bMatchRealization@RFONTOBJ@@AEAAHPEAU_FD_XFORM@@KKPEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0026F28 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C006395C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00639CC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00639F4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0064544 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00656B8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00656D8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bFindRFONT(
        RFONTOBJ *this,
        struct _FD_XFORM *a2,
        unsigned int a3,
        unsigned int a4,
        struct PDEVOBJ *a5,
        struct EXFORMOBJ *a6,
        struct PFE *a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  PDEVOBJ *v15; // rsi
  struct RFONT *v16; // rax
  unsigned int v17; // r13d
  unsigned int v18; // ebx
  int matched; // eax
  __int64 v20; // rcx
  struct RFONT *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v27; // [rsp+50h] [rbp-10h] BYREF
  struct RFONT *v28; // [rsp+90h] [rbp+30h] BYREF

  v27 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v15 = a5;
  v16 = PDEVOBJ::prfntActive(a5);
  v17 = a11;
  v18 = 0;
  while ( 1 )
  {
    *(_QWORD *)this = v16;
    if ( !v16 )
      break;
    matched = RFONTOBJ::bMatchRealization(this, a2, a3, a4, a6, a7, a8, a9, a10, v17);
    v20 = *(_QWORD *)this;
    if ( matched )
    {
      v18 = 1;
      ++*(_DWORD *)(v20 + 660);
      v28 = PDEVOBJ::prfntActive(v15);
      if ( v28 != *(struct RFONT **)this )
      {
        RFONTOBJ::vRemove(this, &v28, 1LL);
        RFONTOBJ::vInsert(this, &v28, 1LL);
        PDEVOBJ::prfntActive(v15, v28);
      }
      goto LABEL_12;
    }
    v16 = *(struct RFONT **)(v20 + 672);
  }
  v21 = PDEVOBJ::prfntInactive(v15);
  *(_QWORD *)this = v21;
  if ( v21 )
  {
    while ( !(unsigned int)RFONTOBJ::bMatchRealization(this, a2, a3, a4, a6, a7, a8, a9, a10, v17) )
    {
      v22 = *(_QWORD *)(*(_QWORD *)this + 672LL);
      *(_QWORD *)this = v22;
      if ( !v22 )
        goto LABEL_8;
    }
    v18 = 1;
    v28 = PDEVOBJ::prfntInactive(v15);
    RFONTOBJ::vRemove(this, &v28, 1LL);
    PDEVOBJ::prfntInactive(v15, v28);
    v23 = PDEVOBJ::cInactive(v15);
    v24 = *(_QWORD *)v15;
    v25 = v23 - 1;
    if ( (*(_DWORD *)(*(_QWORD *)v15 + 40LL) & 0x800000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v24 + 3520) + 1536LL) = v25;
    else
      *(_DWORD *)(v24 + 1536) = v25;
    v28 = PDEVOBJ::prfntActive(v15);
    RFONTOBJ::vInsert(this, &v28, 1LL);
    PDEVOBJ::prfntActive(v15, v28);
    *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
  }
  else
  {
LABEL_8:
    *(_QWORD *)this = 0LL;
  }
LABEL_12:
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
  return v18;
}
