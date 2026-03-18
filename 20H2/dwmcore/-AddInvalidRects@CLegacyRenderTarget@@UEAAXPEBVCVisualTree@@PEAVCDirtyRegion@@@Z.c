/*
 * XREFs of ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18009BAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x18008B8A0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180099D5C (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?HasVirtualModeScale@CLegacyRenderTarget@@AEBA_NXZ @ 0x18009C730 (-HasVirtualModeScale@CLegacyRenderTarget@@AEBA_NXZ.c)
 *     ?AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800C13A0 (-AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800CD148 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800D1330 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x1801835E0 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180184894 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CLegacyRenderTarget::AddInvalidRects(
        CLegacyRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  __int64 v6; // rbx
  char v7; // r14
  __int64 i; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // r10
  const struct CMILMatrix *v14; // r8
  float v15; // xmm2_4
  CDirectFlipInfo *v16; // rcx
  __int64 v17; // r9
  Windows::Foundation::Numerics *v18; // rcx
  bool v19; // al
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(__int64, __m128 *, __int128 *, struct CDirtyRegion *); // r10
  char v22; // r8
  int v23; // eax
  int v24; // [rsp+20h] [rbp-59h]
  __m128 v25[4]; // [rsp+30h] [rbp-49h] BYREF
  int v26; // [rsp+70h] [rbp-9h]
  __int128 v27; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( *((_QWORD *)this + 12) )
  {
    v6 = *(_QWORD *)((char *)this + 164);
    v7 = 0;
    *(_QWORD *)&v27 = v6;
    EnterCriticalSection(&stru_180348570);
    for ( i = qword_180348598; i != (_QWORD)xmmword_1803485A0; i += 16LL )
    {
      v9 = *(_QWORD *)i;
      if ( __PAIR64__(DWORD1(v27), v6) == *(_QWORD *)(*(_QWORD *)i + 936LL) )
      {
        if ( !*(_BYTE *)(v9 + 500) && !byte_1803485B0 && *(_DWORD *)(v9 + 496) )
          v7 = 1;
        break;
      }
    }
    LeaveCriticalSection(&stru_180348570);
    v10 = *((_QWORD *)this + 12) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8LL) + 12LL);
    if ( v7 == (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) )
      goto LABEL_10;
    LOBYTE(v11) = v7;
    if ( (*(int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 176LL))(*((_QWORD *)this + 12), v11) >= 0 )
    {
      *((_BYTE *)this + 65) = 1;
LABEL_10:
      *((_BYTE *)this + 184) = v7;
    }
  }
  if ( *((_BYTE *)this + 65) )
  {
    *((_QWORD *)&v27 + 1) = *((_QWORD *)this + 2);
    *(_QWORD *)&v27 = 0LL;
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
                            (char *)this + 136,
                            &v27) )
    {
      CRenderTarget::AddInvalidRects(this, a2, a3);
    }
    else
    {
      CDirtyRegion::SetFullDirty(a3);
      *((_BYTE *)this + 65) = 0;
    }
  }
  if ( CLegacyRenderTarget::HasVirtualModeScale((CLegacyRenderTarget *)((char *)this - 64)) && !*(_BYTE *)(v12 + 11505) )
    v13 = 1;
  *((_BYTE *)a3 + 4457) |= v13;
  v14 = (CLegacyRenderTarget *)((char *)this + 200);
  v15 = 1.0
      / (float)((float)(*((float *)this + 55) * *((float *)this + 50))
              - (float)(*((float *)this + 54) * *((float *)this + 51)));
  if ( v15 > *((float *)a3 + 1113) )
    *((float *)a3 + 1113) = v15;
  v16 = (CDirectFlipInfo *)*((_QWORD *)this + 1463);
  if ( v16 )
    CDirectFlipInfo::AddOverdrawToDirtyRegion(v16, a3, v14);
  if ( *((_QWORD *)this + 12) )
  {
    v17 = *((_QWORD *)this - 6);
    if ( *(_DWORD *)(v17 + 1072) && (*(_BYTE *)(v17 + 1131) || !CDirtyRegion::IsEmpty(a3)) )
    {
      *((_BYTE *)a3 + 4460) = 1;
      *(_BYTE *)(*((_QWORD *)this - 6) + 1131LL) = 0;
      v17 = *((_QWORD *)this - 6);
    }
    if ( *(_DWORD *)(v17 + 1076) )
      *((_BYTE *)a3 + 4461) = 1;
    LOBYTE(v14) = *((_BYTE *)this + 11441);
    v18 = (CLegacyRenderTarget *)((char *)this + ((_BYTE)v14 != 0 ? 268LL : 200LL));
    v26 = *((_DWORD *)v18 + 16);
    v19 = Windows::Foundation::Numerics::invert(v18, v25, v14);
    LOWORD(v26) = v26 & 0xCCF;
    v20 = *((_QWORD *)this + 12);
    v26 = v19 ? v26 : 0;
    v21 = *(__int64 (__fastcall **)(__int64, __m128 *, __int128 *, struct CDirtyRegion *))(*(_QWORD *)v20 + 256LL);
    if ( v22 )
    {
      DWORD2(v27) = *((_DWORD *)this + 32) - *((_DWORD *)this + 30);
      HIDWORD(v27) = *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
      *(_QWORD *)&v27 = 0LL;
    }
    else
    {
      v27 = *(_OWORD *)((char *)this + 136);
    }
    v23 = v21(v20, v25, &v27, a3);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x409,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\legacyrendertarget.cpp",
        (const char *)(unsigned int)v23,
        v24);
  }
}
