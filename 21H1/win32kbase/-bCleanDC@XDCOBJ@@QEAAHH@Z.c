/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00829C0
 * Callers:
 *     GreCleanDC @ 0x1C00691F0 (GreCleanDC.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C006D360 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C30E0 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     GreDCSelectPen @ 0x1C0007FA0 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C00081E0 (GreDCSelectBrush.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0008DE0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     GreSelectPalette @ 0x1C0017520 (GreSelectPalette.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0017948 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     hbmSelectBitmap @ 0x1C002CF90 (hbmSelectBitmap.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C007FC10 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C00806A0 (INC_SHARE_REF_CNT.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0080AA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00810A0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0082610 (DEC_SHARE_REF_CNT.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008BB14 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C008BB38 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00C4A50 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 *     IsXDCOBJ_vSetDefaultFontSupported @ 0x1C00D1C98 (IsXDCOBJ_vSetDefaultFontSupported.c)
 *     XDCOBJ_vSetDefaultFontWrap @ 0x1C00D1CC4 (XDCOBJ_vSetDefaultFontWrap.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0146F78 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(DC **this)
{
  DC *v2; // rcx
  __int64 v3; // rdx
  int v4; // ebx
  DC *v5; // rcx
  int v6; // ebp
  DC *v7; // rcx
  DC *v8; // rdx
  DC *v9; // rcx
  __int128 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int128 *v13; // rcx
  __int128 v14; // xmm0
  _OWORD *v15; // rcx
  PKDPC *p_BufferChainingDpc; // rax
  __int128 v17; // xmm0
  __int64 v18; // rbx
  DC *v19; // rdx
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  DC *v23; // r8
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rcx
  int v27; // edx
  __int64 v29; // [rsp+40h] [rbp+8h] BYREF
  char v30; // [rsp+50h] [rbp+18h] BYREF

  v2 = *this;
  v3 = *((_QWORD *)v2 + 122);
  v4 = *(_DWORD *)(v3 + 152);
  if ( (v4 & 0x1000) != 0 )
    GreDCSelectBrush((__int64)v2, *(_QWORD *)(v3 + 160));
  if ( (v4 & 0x2000) != 0 )
    GreDCSelectPen(*this, *(_QWORD *)(*((_QWORD *)*this + 122) + 168LL));
  v5 = *this;
  if ( *(_DWORD *)(*((_QWORD *)*this + 122) + 104LL) != 1 || (v6 = 0, (*((_DWORD *)v5 + 63) & 1) != 0) )
    v6 = 1;
  if ( *((int *)v5 + 26) > 1 )
  {
    GreRestoreDCInternal(*(HDC *)v5);
    v5 = *this;
  }
  if ( *((struct PALETTE **)v5 + 11) != ppalDefault )
  {
    GreSelectPalette(*(HDC *)v5, dclevelDefault, 1);
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
    v29 = *((_QWORD *)*this + 20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
    *((_QWORD *)*this + 20) = 0LL;
    v7 = *this;
  }
  if ( *((_QWORD *)v7 + 21) )
  {
    v29 = *((_QWORD *)v7 + 21);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
    *((_QWORD *)*this + 21) = 0LL;
    v7 = *this;
  }
  DC::hpath(v7, 0LL);
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*this + 19));
  DEC_SHARE_REF_CNT(*((int **)*this + 12));
  v8 = *this;
  v9 = (DC *)*((_QWORD *)*this + 37);
  if ( v9 && v9 != (DC *)((char *)*this + 264) )
  {
    Win32FreePool(v9);
    *((_QWORD *)*this + 37) = 0LL;
    v8 = *this;
  }
  v10 = (__int128 *)((char *)v8 + 80);
  v11 = 3LL;
  v12 = 3LL;
  v13 = (__int128 *)&dclevelDefault;
  do
  {
    v10 += 8;
    v14 = *v13;
    v13 += 8;
    *(v10 - 8) = v14;
    *(v10 - 7) = *(v13 - 7);
    *(v10 - 6) = *(v13 - 6);
    *(v10 - 5) = *(v13 - 5);
    *(v10 - 4) = *(v13 - 4);
    *(v10 - 3) = *(v13 - 3);
    *(v10 - 2) = *(v13 - 2);
    *(v10 - 1) = *(v13 - 1);
    --v12;
  }
  while ( v12 );
  *v10 = *v13;
  v10[1] = v13[1];
  v15 = (_OWORD *)*((_QWORD *)*this + 122);
  p_BufferChainingDpc = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  do
  {
    v15 += 8;
    v17 = *(_OWORD *)p_BufferChainingDpc;
    p_BufferChainingDpc += 16;
    *(v15 - 8) = v17;
    *(v15 - 7) = *((_OWORD *)p_BufferChainingDpc - 7);
    *(v15 - 6) = *((_OWORD *)p_BufferChainingDpc - 6);
    *(v15 - 5) = *((_OWORD *)p_BufferChainingDpc - 5);
    *(v15 - 4) = *((_OWORD *)p_BufferChainingDpc - 4);
    *(v15 - 3) = *((_OWORD *)p_BufferChainingDpc - 3);
    *(v15 - 2) = *((_OWORD *)p_BufferChainingDpc - 2);
    *(v15 - 1) = *((_OWORD *)p_BufferChainingDpc - 1);
    --v11;
  }
  while ( v11 );
  *v15 = *(_OWORD *)p_BufferChainingDpc;
  v15[1] = *((_OWORD *)p_BufferChainingDpc + 1);
  v15[2] = *((_OWORD *)p_BufferChainingDpc + 2);
  *(_DWORD *)(*((_QWORD *)*this + 122) + 152LL) |= 0x12001Fu;
  INC_SHARE_REF_CNT(*((int **)*this + 17));
  INC_SHARE_REF_CNT(*((int **)*this + 18));
  v18 = *((_QWORD *)*this + 6);
  if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
    XDCOBJ_vSetDefaultFontWrap(this, *(_DWORD *)(v18 + 40) & 1);
  v19 = *this;
  if ( *((_QWORD *)*this + 6) == *(_QWORD *)(gpDispInfo + 40) )
  {
    **((_DWORD **)v19 + 122) |= 2u;
    v19 = *this;
  }
  v20 = *((_DWORD *)v19 + 63);
  v21 = v20 | 1;
  v22 = v20 & 0xFFFFFFFE;
  if ( !v6 )
    v21 = v22;
  *((_DWORD *)v19 + 63) = v21;
  INC_SHARE_REF_CNT(*((int **)*this + 12));
  RFONTOBJ::RFONTOBJ((RFONTOBJ *)&v30, *((struct RFONT **)*this + 218));
  *((_QWORD *)*this + 218) = 0LL;
  v23 = *this;
  v24 = *((_DWORD *)*this + 10) & 1;
  v25 = *((_DWORD *)*this + 2 * v24 + 255);
  *((_DWORD *)v23 + 294) = *((_DWORD *)*this + 2 * v24 + 254);
  *((_DWORD *)v23 + 295) = v25;
  DC::vReleaseRao(*this);
  if ( (unsigned int)DC::bDpiScaleTransform(*this) )
  {
    v27 = *(_DWORD *)(v26 + 520);
    if ( (v27 & 1) != 0 )
    {
      *(_DWORD *)(v26 + 36) |= 0x10u;
      *(_QWORD *)(v26 + 524) = 0LL;
      *(_DWORD *)(v26 + 520) = v27 & 0xFFFFFFF8 | 4;
      *(_QWORD *)(v26 + 532) = 0LL;
      DC::vUpdateCachedDPIScaleValue((DC *)v26);
    }
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30);
  return 1LL;
}
