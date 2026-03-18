/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C003A250 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ReleaseCacheDC @ 0x1C00418A0 (ReleaseCacheDC.c)
 *     GreCleanDC @ 0x1C009B4F0 (GreCleanDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C2B54 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C003C730 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0041330 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0042480 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0042ED0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C00440A0 (DEC_SHARE_REF_CNT.c)
 *     INC_SHARE_REF_CNT @ 0x1C00460C0 (INC_SHARE_REF_CNT.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C004BFB4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C004C0A8 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C004D3F8 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C005BAC8 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     GreDCSelectPen @ 0x1C0081F60 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C0082190 (GreDCSelectBrush.c)
 *     IsXDCOBJ_vSetDefaultFontSupported @ 0x1C00913C0 (IsXDCOBJ_vSetDefaultFontSupported.c)
 *     XDCOBJ_vSetDefaultFontWrap @ 0x1C00916DC (XDCOBJ_vSetDefaultFontWrap.c)
 *     hbmSelectBitmap @ 0x1C009AF40 (hbmSelectBitmap.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00C3D90 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C013E768 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     GreRestoreDC @ 0x1C014E450 (GreRestoreDC.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(DC **this)
{
  DC *v2; // rcx
  __int64 v3; // rdx
  int v4; // ebx
  DC *v5; // rcx
  BOOL v6; // ebp
  DC *v7; // rcx
  DC *v8; // rdx
  DC *v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  HPALETTE *v12; // rcx
  __int64 v13; // r8
  __int128 v14; // xmm1
  _OWORD *v15; // rcx
  PKDPC *p_BufferChainingDpc; // rax
  __int128 v17; // xmm1
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  DC *v24; // rdx
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  DC *v28; // r8
  __int64 v29; // rax
  int v30; // ecx
  DC *v31; // rcx
  int v32; // edx
  __int64 v34; // [rsp+40h] [rbp+8h] BYREF
  char v35; // [rsp+50h] [rbp+18h] BYREF

  v2 = *this;
  v3 = *((_QWORD *)v2 + 122);
  v4 = *(_DWORD *)(v3 + 152);
  if ( (v4 & 0x1000) != 0 )
    GreDCSelectBrush(v2, *(_QWORD *)(v3 + 160));
  if ( (v4 & 0x2000) != 0 )
    GreDCSelectPen(*this);
  v5 = *this;
  v6 = *(_DWORD *)(*((_QWORD *)*this + 122) + 104LL) != 1 || (*((_DWORD *)v5 + 63) & 1) != 0;
  if ( *((int *)v5 + 26) > 1 )
  {
    GreRestoreDC(*(_QWORD *)v5, 1LL);
    v5 = *this;
  }
  if ( *((struct PALETTE **)v5 + 11) != ppalDefault )
  {
    SelectPaletteWorker((struct XDCOBJ *)this, dclevelDefault, 1);
    v5 = *this;
  }
  if ( *((_DWORD *)v5 + 8) == 1 )
  {
    hbmSelectBitmap(*(HDC *)v5);
    *((_DWORD *)*this + 9) &= ~0x1000u;
    v5 = *this;
  }
  *((_WORD *)v5 + 1036) = -1;
  v7 = *this;
  if ( *((_QWORD *)*this + 20) )
  {
    v34 = *((_QWORD *)*this + 20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
    *((_QWORD *)*this + 20) = 0LL;
    v7 = *this;
  }
  if ( *((_QWORD *)v7 + 21) )
  {
    v34 = *((_QWORD *)v7 + 21);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
    *((_QWORD *)*this + 21) = 0LL;
    v7 = *this;
  }
  DC::hpath(v7, 0LL);
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)*this + 19));
  DEC_SHARE_REF_CNT(*((_QWORD *)*this + 12));
  v8 = *this;
  v9 = (DC *)*((_QWORD *)*this + 37);
  if ( v9 && v9 != (DC *)((char *)*this + 264) )
  {
    Win32FreePool(v9);
    *((_QWORD *)*this + 37) = 0LL;
    v8 = *this;
  }
  v10 = (_OWORD *)((char *)v8 + 80);
  v11 = 3LL;
  v12 = &dclevelDefault;
  v13 = 3LL;
  do
  {
    *v10 = *(_OWORD *)v12;
    v10[1] = *((_OWORD *)v12 + 1);
    v10[2] = *((_OWORD *)v12 + 2);
    v10[3] = *((_OWORD *)v12 + 3);
    v10[4] = *((_OWORD *)v12 + 4);
    v10[5] = *((_OWORD *)v12 + 5);
    v10[6] = *((_OWORD *)v12 + 6);
    v10 += 8;
    v14 = *((_OWORD *)v12 + 7);
    v12 += 16;
    *(v10 - 1) = v14;
    --v13;
  }
  while ( v13 );
  *v10 = *(_OWORD *)v12;
  v10[1] = *((_OWORD *)v12 + 1);
  v15 = (_OWORD *)*((_QWORD *)*this + 122);
  p_BufferChainingDpc = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  do
  {
    *v15 = *(_OWORD *)p_BufferChainingDpc;
    v15[1] = *((_OWORD *)p_BufferChainingDpc + 1);
    v15[2] = *((_OWORD *)p_BufferChainingDpc + 2);
    v15[3] = *((_OWORD *)p_BufferChainingDpc + 3);
    v15[4] = *((_OWORD *)p_BufferChainingDpc + 4);
    v15[5] = *((_OWORD *)p_BufferChainingDpc + 5);
    v15[6] = *((_OWORD *)p_BufferChainingDpc + 6);
    v15 += 8;
    v17 = *((_OWORD *)p_BufferChainingDpc + 7);
    p_BufferChainingDpc += 16;
    *(v15 - 1) = v17;
    --v11;
  }
  while ( v11 );
  *v15 = *(_OWORD *)p_BufferChainingDpc;
  v15[1] = *((_OWORD *)p_BufferChainingDpc + 1);
  v15[2] = *((_OWORD *)p_BufferChainingDpc + 2);
  *(_DWORD *)(*((_QWORD *)*this + 122) + 152LL) |= 0x12001Fu;
  INC_SHARE_REF_CNT(*((_QWORD *)*this + 17), 0LL, 0LL, 128LL);
  INC_SHARE_REF_CNT(*((_QWORD *)*this + 18), v18, v19, v20);
  v21 = *((_QWORD *)*this + 6);
  if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
    XDCOBJ_vSetDefaultFontWrap(this, *(_DWORD *)(v21 + 40) & 1);
  v24 = *this;
  if ( *((_QWORD *)*this + 6) == *(_QWORD *)(gpDispInfo + 40) )
  {
    **((_DWORD **)v24 + 122) |= 2u;
    v24 = *this;
  }
  v25 = *((_DWORD *)v24 + 63);
  v26 = v25 | 1;
  v27 = v25 & 0xFFFFFFFE;
  if ( !v6 )
    v26 = v27;
  *((_DWORD *)v24 + 63) = v26;
  INC_SHARE_REF_CNT(*((_QWORD *)*this + 12), v24, v22, v23);
  RFONTOBJ::RFONTOBJ((RFONTOBJ *)&v35, *((struct RFONT **)*this + 218));
  *((_QWORD *)*this + 218) = 0LL;
  v28 = *this;
  v29 = *((_DWORD *)*this + 10) & 1;
  v30 = *((_DWORD *)*this + 2 * v29 + 255);
  *((_DWORD *)v28 + 294) = *((_DWORD *)*this + 2 * v29 + 254);
  *((_DWORD *)v28 + 295) = v30;
  DC::vReleaseRao(*this);
  if ( (unsigned int)DC::bDpiScaleTransform(*this) )
  {
    v32 = *((_DWORD *)v31 + 130);
    if ( (v32 & 1) != 0 )
    {
      *((_DWORD *)v31 + 131) = 0;
      *((_DWORD *)v31 + 132) = 0;
      *((_DWORD *)v31 + 133) = 0;
      *((_DWORD *)v31 + 134) = 0;
      *((_DWORD *)v31 + 9) |= 0x10u;
      *((_DWORD *)v31 + 130) = v32 & 0xFFFFFFF8 | 4;
      DC::vUpdateCachedDPIScaleValue(v31);
    }
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
  return 1LL;
}
