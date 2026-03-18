/*
 * XREFs of GreRestoreDCInternal @ 0x1C00D0920
 * Callers:
 *     GreRestoreDC @ 0x1C014E450 (GreRestoreDC.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001BB44 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     GreUnlockVisRgn @ 0x1C003CF80 (GreUnlockVisRgn.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C003D898 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003ECA0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00409E8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00411F0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0041330 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0042480 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0042ED0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C00440A0 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C00442F0 (HmgPentryFromPobj.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004AA4C (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004BE7C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C004D3F8 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C004D598 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C005E1C8 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     GreLockVisRgn @ 0x1C005E980 (GreLockVisRgn.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0060C28 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0064CB0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     GreDCSelectPen @ 0x1C0081F60 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C0082190 (GreDCSelectBrush.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0087248 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     HmgLockIgnoreOwner @ 0x1C0091640 (HmgLockIgnoreOwner.c)
 *     vRestoreRegion @ 0x1C00962A0 (vRestoreRegion.c)
 *     hbmSelectBitmap @ 0x1C009AF40 (hbmSelectBitmap.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00CF684 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreRestoreDCInternal(HDC a1, int a2, int a3, int a4)
{
  int v8; // r8d
  DC *v9; // rdi
  unsigned int v10; // r14d
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rbx
  int v14; // r15d
  int v15; // r12d
  int v16; // eax
  unsigned int *v17; // rcx
  int v18; // eax
  DC *v19; // rcx
  DC *v20; // rdx
  __int64 v21; // rax
  DC *v22; // rcx
  int v23; // edx
  __int64 v24; // r8
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  int v29; // r8d
  ULONG v30; // ecx
  __int64 v32; // [rsp+30h] [rbp-30h] BYREF
  HSEMAPHORE v33; // [rsp+38h] [rbp-28h] BYREF
  DC *v34[2]; // [rsp+40h] [rbp-20h] BYREF
  DC *v35[2]; // [rsp+50h] [rbp-10h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v34, a1);
  v9 = v34[0];
  v10 = 1;
  if ( !v34[0] || !a3 && (*(_DWORD *)(HmgPentryFromPobj((_DWORD *)v34[0]) + 8) & 0xFFFFFFFE) == 0 )
  {
    v30 = 6;
    goto LABEL_68;
  }
  if ( a4 && *((_WORD *)v9 + 6) > 1u )
  {
    TraceLoggingWriteUnsupportedGdiUsage();
LABEL_69:
    v10 = 0;
    goto LABEL_70;
  }
  v11 = *((_QWORD *)v9 + 122);
  v12 = *(_DWORD *)(v11 + 152);
  if ( (v12 & 0x1000) != 0 )
  {
    GreDCSelectBrush((__int64)v9, *(_QWORD *)(v11 + 160));
    v9 = v34[0];
  }
  if ( (v12 & 0x2000) != 0 )
  {
    GreDCSelectPen((struct HOBJ__ ***)v9, *(struct HOBJ__ **)(*((_QWORD *)v9 + 122) + 168LL));
    v9 = v34[0];
  }
  if ( a2 < 0 )
    a2 += *((_DWORD *)v9 + 26);
  if ( a2 < 1 || a2 >= *((_DWORD *)v9 + 26) )
  {
    v30 = 87;
LABEL_68:
    EngSetLastError(v30);
    goto LABEL_69;
  }
  v13 = *((_QWORD *)v9 + 6);
  if ( (*(_DWORD *)(v13 + 40) & 1) != 0 )
  {
    GreLockVisRgn(*((_QWORD *)v9 + 6), v11, v8);
    v9 = v34[0];
  }
  v14 = *((_DWORD *)v9 + 9) & 0x800;
  if ( v14 )
  {
    DC::bMakeInfoDC(v9, 0);
    v9 = v34[0];
  }
  v15 = *(_DWORD *)(*((_QWORD *)v9 + 122) + 104LL);
  while ( 1 )
  {
    v35[1] = 0LL;
    v35[0] = 0LL;
    v35[0] = (DC *)HmgLockIgnoreOwner(*((_QWORD *)v9 + 14), 1);
    if ( !v35[0] )
      break;
    DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v34[0] + 17));
    DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v34[0] + 18));
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)v34[0] + 19));
    DEC_SHARE_REF_CNT(*((unsigned int **)v34[0] + 12));
    vRestoreRegion((__int64)v34);
    if ( qword_1C024F240 )
      v16 = qword_1C024F240();
    else
      v16 = -1073741637;
    if ( v16 >= 0 && qword_1C024F248 )
      qword_1C024F248(v34, (unsigned int)(*((_DWORD *)v34[0] + 26) - 1));
    v17 = (unsigned int *)*((_QWORD *)v34[0] + 62);
    if ( v17 )
    {
      if ( *((_DWORD *)v34[0] + 8) == 1 )
      {
        hbmSelectBitmap(a1, (HBITMAP)gahStockObjects[21], 1, 0);
      }
      else
      {
        v18 = v17[28];
        if ( (v18 & 0x800) != 0 )
        {
          DEC_SHARE_REF_CNT(v17);
        }
        else if ( v18 >= 0 )
        {
          SURFACE::vDec_cRef((SURFACE *)v17);
        }
      }
    }
    v33 = ghsemPalette;
    EngAcquireSemaphore(ghsemPalette);
    v19 = v35[0];
    v20 = v34[0];
    if ( *((_QWORD *)v34[0] + 10) != *((_QWORD *)v35[0] + 10) )
    {
      SelectPaletteWorker((struct XDCOBJ *)v34, *((HPALETTE *)v35[0] + 10), 1);
      v20 = v34[0];
      v19 = v35[0];
    }
    if ( *((_QWORD *)v20 + 11) != *((_QWORD *)v19 + 11) )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v32, *((HPALETTE *)v20 + 10));
      *((_QWORD *)v35[0] + 11) = v32;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v32);
      v19 = v35[0];
    }
    v21 = *((_QWORD *)v19 + 11);
    if ( (struct PALETTE *)v21 != ppalDefault )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v21 + 56));
      v19 = v35[0];
    }
    DC::vCopyTo(v19, (struct XDCOBJ *)v34);
    XDCOBJ::bDeleteDC(v35, 0);
    SEMOBJ::vUnlock((PERESOURCE *)&v33);
    if ( v35[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v35);
    v9 = v34[0];
    if ( a2 >= *((_DWORD *)v34[0] + 26) )
      goto LABEL_47;
  }
  EngSetLastError(6u);
  v10 = 0;
  if ( v35[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v35);
  v9 = v34[0];
LABEL_47:
  if ( v15 != *(_DWORD *)(*((_QWORD *)v9 + 122) + 104LL) )
  {
    *((_DWORD *)v9 + 63) |= 1u;
    v9 = v34[0];
  }
  if ( v14 )
  {
    DC::bMakeInfoDC(v9, 1);
    v9 = v34[0];
  }
  DC::vReleaseRao(v9);
  DC::vUpdate_VisRect(v34[0], *((__m128i **)v34[0] + 140));
  *(_DWORD *)(*((_QWORD *)v34[0] + 122) + 152LL) |= 0x12001Fu;
  v22 = v34[0];
  if ( *((_DWORD *)v34[0] + 8) == 1 )
  {
    DC::bSetDefaultRegion(v34[0]);
    v22 = v34[0];
  }
  v23 = *((_DWORD *)v22 + 9);
  v24 = *((_QWORD *)v22 + 62);
  if ( (v23 & 1) != 0
    || *((_DWORD *)v22 + 8) == 1
    && v24
    && ((v25 = *(_DWORD *)(v24 + 112), (v25 & 0x4000) != 0) || (v25 & 0x800000) != 0 && (*(_DWORD *)(v13 + 40) & 1) != 0) )
  {
    *((_DWORD *)v22 + 9) = v23 | 0x200;
    v26 = *((_DWORD *)v34[0] + 9);
    if ( (*(_DWORD *)(v24 + 112) & 0x200) != 0 )
      v27 = v26 | 0x8000;
    else
      v27 = v26 & 0xFFFF7FFF;
    *((_DWORD *)v34[0] + 9) = v27;
  }
  else
  {
    *((_DWORD *)v22 + 9) = v23 & 0xFFFFFDFF;
  }
  DC::vCalcFillOrigin(v34[0]);
  if ( (*(_DWORD *)(v13 + 40) & 1) != 0 )
    GreUnlockVisRgn(v13, v28, v29);
LABEL_70:
  if ( v34[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v34);
  return v10;
}
