/*
 * XREFs of ?GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1801C1480
 * Callers:
 *     <none>
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006E4C8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetBits(
        COffScreenRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  int v3; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  struct tagRECT v10; // [rsp+30h] [rbp-48h] BYREF
  int v11[4]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_DWORD *)this + 26);
  v11[0] = 0;
  v11[1] = 0;
  v11[2] = v3;
  v11[3] = *((_DWORD *)this + 27);
  if ( **((_QWORD **)this + 220) )
  {
    v10 = *a2;
    v6 = 0;
    if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(v11, &v10.left) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, int *, struct IBitmapDest *, _QWORD, _DWORD))(***((_QWORD ***)this + 220)
                                                                                          + 48LL))(
             **((_QWORD **)this + 220),
             v11,
             a3,
             0LL,
             0);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x1C2u);
    }
  }
  else
  {
    v6 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003304442, 0x1BAu);
  }
  return v6;
}
