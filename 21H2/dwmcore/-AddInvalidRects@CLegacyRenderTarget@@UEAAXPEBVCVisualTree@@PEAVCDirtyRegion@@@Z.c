/*
 * XREFs of ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800BB300
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800B4B40 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z @ 0x1800BCB34 (-HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D2754 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800DE8F0 (-AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800DE978 (-Add@CDirtyRegion@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800E8D60 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800FE910 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180193D74 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x1801DF0D8 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 */

void __fastcall CLegacyRenderTarget::AddInvalidRects(
        CLegacyRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  char v6; // si
  __int64 v7; // rcx
  __int64 v8; // rdx
  FastRegion::Internal::CRgnData *v9; // rcx
  char v10; // al
  float v11; // xmm2_4
  CDirectFlipInfo *v12; // rcx
  __int64 v13; // r11
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // eax
  __int64 v20; // rdx
  FastRegion::Internal::CRgnData *v21; // rcx
  int v22; // [rsp+20h] [rbp-89h]
  _BYTE v23[8]; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-71h]
  _DWORD *v25; // [rsp+40h] [rbp-69h]
  __int64 v26; // [rsp+48h] [rbp-61h]
  int v27; // [rsp+50h] [rbp-59h]
  _OWORD v28[4]; // [rsp+60h] [rbp-49h] BYREF
  int v29; // [rsp+A0h] [rbp-9h]
  __int128 v30; // [rsp+B0h] [rbp+7h] BYREF
  _DWORD v31[4]; // [rsp+C0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 13) )
    return;
  v6 = CDeviceManager::HardwareProtectionRequired(this, *(struct _LUID *)((char *)this + 18352));
  v7 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 13) + 8LL) + 12LL) + *((_QWORD *)this + 13) + 8LL;
  if ( v6 != (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) )
  {
    LOBYTE(v8) = v6;
    if ( (*(int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 224LL))(*((_QWORD *)this + 13), v8) < 0 )
      goto LABEL_4;
    *((_BYTE *)this + 69) = 1;
  }
  *((_BYTE *)this + 18372) = v6;
LABEL_4:
  if ( *((_BYTE *)this + 69) )
  {
    if ( *((_BYTE *)this + 18340) )
    {
      CDirtyRegion::SetFullDirty(a3);
      *((_BYTE *)this + 69) = 0;
    }
    else
    {
      CRenderTarget::AddInvalidRects(this, a2, a3);
    }
  }
  else
  {
    v9 = (FastRegion::Internal::CRgnData *)*((_QWORD *)this + 2307);
    if ( *(_DWORD *)v9 )
    {
      FastRegion::Internal::CRgnData::BeginIterator(v9, (struct FastRegion::CRegion::Iterator *)v23);
      while ( (unsigned __int64)v25 < v24 )
      {
        v31[1] = *v25;
        v31[3] = v25[2];
        v20 = 2 * v27;
        v31[0] = *(_DWORD *)(v26 + 4 * v20);
        v31[2] = *(_DWORD *)(v26 + 4 * v20 + 4);
        CDirtyRegion::Add(a3, v31);
        FastRegion::Internal::CRgnData::StepIterator(v21, (struct FastRegion::CRegion::Iterator *)v23);
      }
    }
  }
  **((_DWORD **)this + 2307) = 0;
  if ( *((_BYTE *)this + 11145) || (v10 = 1, !*((_BYTE *)this + 18342)) )
    v10 = 0;
  *((_BYTE *)a3 + 4425) |= v10;
  v11 = 1.0
      / (float)((float)(*((float *)this + 4539) * *((float *)this + 4534))
              - (float)(*((float *)this + 4538) * *((float *)this + 4535)));
  if ( v11 > *((float *)a3 + 1105) )
    *((float *)a3 + 1105) = v11;
  v12 = (CDirectFlipInfo *)*((_QWORD *)this + 1411);
  if ( v12 )
    CDirectFlipInfo::AddOverdrawToDirtyRegion(v12, a3, (CLegacyRenderTarget *)((char *)this + 18136));
  v13 = *((_QWORD *)this - 7);
  if ( *(_DWORD *)(v13 + 1224) && (*(_BYTE *)(v13 + 1276) || !CDirtyRegion::IsEmpty(a3)) )
  {
    *((_BYTE *)a3 + 4428) = 1;
    *(_BYTE *)(*((_QWORD *)this - 7) + 1276LL) = 0;
    v13 = *((_QWORD *)this - 7);
  }
  if ( *(_DWORD *)(v13 + 1232) )
    *((_BYTE *)a3 + 4429) = 1;
  v14 = *((_BYTE *)this + 11145) != 0 ? 0x88 : 0;
  v15 = *(_OWORD *)((char *)this + v14 + 18136);
  v16 = *(_OWORD *)((char *)this + v14 + 18152);
  v29 = *(_DWORD *)((char *)this + v14 + 18200);
  v28[0] = v15;
  v17 = *(_OWORD *)((char *)this + v14 + 18168);
  v28[1] = v16;
  v18 = *(_OWORD *)((char *)this + v14 + 18184);
  v28[2] = v17;
  v28[3] = v18;
  CMILMatrix::Invert((CMILMatrix *)v28);
  if ( *((_BYTE *)this + 11145) )
  {
    *((_QWORD *)&v30 + 1) = *(_QWORD *)((char *)this + 18124);
    *(_QWORD *)&v30 = 0LL;
  }
  else
  {
    v30 = *(_OWORD *)((char *)this + 18108);
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, __int128 *, struct CDirtyRegion *))(**((_QWORD **)this + 13) + 304LL))(
          *((_QWORD *)this + 13),
          v28,
          &v30,
          a3);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x449,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\legacyrendertarget.cpp",
      (const char *)(unsigned int)v19,
      v22);
}
