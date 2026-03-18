/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C004D3F8
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D0920 (GreRestoreDCInternal.c)
 *     GreSelectPalette @ 0x1C014ACB0 (GreSelectPalette.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C003D898 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C004D598 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00A47E0 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00A4870 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C00AEC10 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // r9
  __int64 v10; // rbx
  HPALETTE v11; // rdi
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  HSEMAPHORE v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v18 = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v19, a2);
  v9 = *(_QWORD **)a1;
  v10 = v19;
  if ( !*(_QWORD *)a1 || !v19 || (*(_DWORD *)(v19 + 24) & 0x100) == 0 )
    goto LABEL_2;
  if ( !a3 )
  {
    hForePID = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v7, v6, v8, v9);
    hForePalette = a2;
    v9 = *(_QWORD **)a1;
  }
  v11 = (HPALETTE)v9[10];
  if ( v11 != a2 )
  {
    v20 = v9[11];
    if ( (struct PALETTE *)v10 == ppalDefault )
      goto LABEL_12;
    v13 = v9[6];
    if ( *(_QWORD *)(v10 + 48) == v13 )
      goto LABEL_12;
    if ( !*(_DWORD *)(v10 + 56) )
    {
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v19);
      *(_QWORD *)(v10 + 48) = v13;
LABEL_12:
      GreAcquireHmgrSemaphore(v7);
      XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v20, a1);
      *(_QWORD *)(*(_QWORD *)a1 + 80LL) = a2;
      *(_QWORD *)(*(_QWORD *)a1 + 88LL) = v10;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xFu;
      v14 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      if ( v14 && (struct PALETTE *)v10 != ppalDefault )
        *(_QWORD *)(v14 + 176) = a2;
      XEPALOBJ::vAddToList((XEPALOBJ *)&v19, a1);
      GreReleaseHmgrSemaphore(v16, v15, v17);
      goto LABEL_3;
    }
LABEL_2:
    v11 = 0LL;
  }
LABEL_3:
  if ( v10 )
    HmgDecrementShareReferenceCountEx(v10, 0LL);
  SEMOBJ::vUnlock((PERESOURCE *)&v18);
  return v11;
}
