/*
 * XREFs of GreRestoreDCInternal @ 0x1C00D0C80
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0089A90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDC @ 0x1C0150A00 (GreRestoreDC.c)
 * Callees:
 *     GreDCSelectPen @ 0x1C001E2D0 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C001E510 (GreDCSelectBrush.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0023C58 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreSelectPalette @ 0x1C00272A0 (GreSelectPalette.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C00276E8 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     HmgLockIgnoreOwner @ 0x1C0027980 (HmgLockIgnoreOwner.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     vRestoreRegion @ 0x1C00303E0 (vRestoreRegion.c)
 *     hbmSelectBitmap @ 0x1C003B7B0 (hbmSelectBitmap.c)
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0071D3C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C007FCBC (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreUnlockVisRgn @ 0x1C00811B0 (GreUnlockVisRgn.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00844C0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0086C70 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0086EC0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0087B70 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0088170 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C00896E0 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C0089850 (HmgPentryFromPobj.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0091F88 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreLockVisRgn @ 0x1C00A5B80 (GreLockVisRgn.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00A5FA0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00C0E8C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00C10F4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreRestoreDCInternal(HDC a1, int a2, int a3)
{
  int v6; // r8d
  DC *v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rbx
  int v12; // r15d
  int v13; // r13d
  int v14; // eax
  unsigned int *v15; // rcx
  int v16; // eax
  DC *v17; // rcx
  DC *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // r8
  DC *v24; // rcx
  int v25; // edx
  __int64 v26; // r8
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // rdx
  int v31; // r8d
  ULONG v32; // ecx
  PERESOURCE v34; // [rsp+20h] [rbp-30h] BYREF
  DC *v35[2]; // [rsp+28h] [rbp-28h] BYREF
  DC *v36[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v37; // [rsp+98h] [rbp+48h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v35, a1);
  v7 = v35[0];
  v8 = 1;
  if ( !v35[0] || !a3 && (*(_DWORD *)(HmgPentryFromPobj((_DWORD *)v35[0]) + 8) & 0xFFFFFFFE) == 0 )
  {
    v32 = 6;
    goto LABEL_65;
  }
  v9 = *((_QWORD *)v7 + 122);
  v10 = *(_DWORD *)(v9 + 152);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush((__int64)v7, *(_QWORD *)(v9 + 160));
    v7 = v35[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen(v7, *(_QWORD *)(*((_QWORD *)v7 + 122) + 168LL));
    v7 = v35[0];
  }
  if ( a2 < 0 )
    a2 += *((_DWORD *)v7 + 26);
  if ( a2 < 1 || a2 >= *((_DWORD *)v7 + 26) )
  {
    v32 = 87;
LABEL_65:
    EngSetLastError(v32);
    v8 = 0;
    goto LABEL_66;
  }
  v11 = *((_QWORD *)v7 + 6);
  if ( (*(_DWORD *)(v11 + 40) & 1) != 0 )
  {
    GreLockVisRgn(*((_QWORD *)v7 + 6), v9, v6);
    v7 = v35[0];
  }
  v12 = *((_DWORD *)v7 + 9) & 0x800;
  if ( v12 )
  {
    DC::bMakeInfoDC(v7, 0);
    v7 = v35[0];
  }
  v13 = *(_DWORD *)(*((_QWORD *)v7 + 122) + 104LL);
  while ( 1 )
  {
    v36[1] = 0LL;
    v36[0] = 0LL;
    v36[0] = (DC *)HmgLockIgnoreOwner(*((_QWORD *)v7 + 14), 1);
    if ( !v36[0] )
      break;
    DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v35[0] + 17));
    DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v35[0] + 18));
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)v35[0] + 19));
    DEC_SHARE_REF_CNT(*((unsigned int **)v35[0] + 12));
    vRestoreRegion((__int64)v35);
    if ( qword_1C0251240 )
      v14 = qword_1C0251240();
    else
      v14 = -1073741637;
    if ( v14 >= 0 && qword_1C0251248 )
      qword_1C0251248(v35, (unsigned int)(*((_DWORD *)v35[0] + 26) - 1));
    v15 = (unsigned int *)*((_QWORD *)v35[0] + 62);
    if ( v15 )
    {
      if ( *((_DWORD *)v35[0] + 8) == 1 )
      {
        hbmSelectBitmap(a1);
      }
      else
      {
        v16 = v15[28];
        if ( (v16 & 0x800) != 0 )
        {
          DEC_SHARE_REF_CNT(v15);
        }
        else if ( v16 >= 0 )
        {
          SURFACE::vDec_cRef((SURFACE *)v15);
        }
      }
    }
    v34 = ghsemPalette;
    EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
    v17 = v36[0];
    v18 = v35[0];
    if ( *((_QWORD *)v35[0] + 10) != *((_QWORD *)v36[0] + 10) )
    {
      GreSelectPalette(a1, *((HPALETTE *)v36[0] + 10), 1);
      v18 = v35[0];
      v17 = v36[0];
    }
    if ( *((_QWORD *)v18 + 11) != *((_QWORD *)v17 + 11) )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v37, *((HPALETTE *)v18 + 10));
      *((_QWORD *)v36[0] + 11) = v37;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v37);
      v17 = v36[0];
    }
    v19 = *((_QWORD *)v17 + 11);
    if ( (struct PALETTE *)v19 != ppalDefault )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v19 + 56));
      v17 = v36[0];
    }
    DC::vCopyTo(v17, (struct XDCOBJ *)v35);
    XDCOBJ::bDeleteDC(v36, 0);
    SEMOBJ::vUnlock((SEMOBJ *)&v34, v20, v21);
    if ( v36[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v36);
    v7 = v35[0];
    if ( a2 >= *((_DWORD *)v35[0] + 26) )
      goto LABEL_44;
  }
  EngSetLastError(6u);
  v8 = 0;
  if ( v36[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v36);
  v7 = v35[0];
LABEL_44:
  if ( v13 != *(_DWORD *)(*((_QWORD *)v7 + 122) + 104LL) )
  {
    *((_DWORD *)v7 + 63) |= 1u;
    v7 = v35[0];
  }
  if ( v12 )
  {
    DC::bMakeInfoDC(v7, 1);
    v7 = v35[0];
  }
  DC::vReleaseRao(v7);
  DC::vUpdate_VisRect(v35[0], *((__m128i **)v35[0] + 140));
  *(_DWORD *)(*((_QWORD *)v35[0] + 122) + 152LL) |= 0x12001Fu;
  v24 = v35[0];
  if ( *((_DWORD *)v35[0] + 8) == 1 )
  {
    DC::bSetDefaultRegion(v35[0], v22, v23);
    v24 = v35[0];
  }
  v25 = *((_DWORD *)v24 + 9);
  v26 = *((_QWORD *)v24 + 62);
  if ( (v25 & 1) != 0
    || *((_DWORD *)v24 + 8) == 1
    && v26
    && ((v27 = *(_DWORD *)(v26 + 112), (v27 & 0x4000) != 0) || (v27 & 0x800000) != 0 && (*(_DWORD *)(v11 + 40) & 1) != 0) )
  {
    *((_DWORD *)v24 + 9) = v25 | 0x200;
    v28 = *((_DWORD *)v35[0] + 9);
    if ( (*(_DWORD *)(v26 + 112) & 0x200) != 0 )
      v29 = v28 | 0x8000;
    else
      v29 = v28 & 0xFFFF7FFF;
    *((_DWORD *)v35[0] + 9) = v29;
  }
  else
  {
    *((_DWORD *)v24 + 9) = v25 & 0xFFFFFDFF;
  }
  DC::vCalcFillOrigin(v35[0]);
  if ( (*(_DWORD *)(v11 + 40) & 1) != 0 )
    GreUnlockVisRgn(v11, v30, v31);
LABEL_66:
  if ( v35[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v35);
  return v8;
}
