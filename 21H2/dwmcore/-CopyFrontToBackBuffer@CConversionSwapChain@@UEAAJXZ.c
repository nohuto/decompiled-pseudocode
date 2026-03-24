/*
 * XREFs of ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x18024F34C
 * Callers:
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F7C80 (-CopyFrontToBackBuffer@CConversionSwapChain@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180099D70 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B354 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ @ 0x18009D364 (-CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C4980 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall CConversionSwapChain::CopyFrontToBackBuffer(CConversionSwapChain *this, __int64 a2, __int64 a3)
{
  int v3; // eax
  CLegacySwapChain *v5; // rdi
  __int64 v6; // rdx
  FastRegion::Internal::CRgnData *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _BYTE v12[8]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-50h]
  _DWORD *v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-40h]
  int v16; // [rsp+50h] [rbp-38h]
  _DWORD v17[4]; // [rsp+60h] [rbp-28h] BYREF

  v3 = *((_DWORD *)this - 115);
  if ( !v3 || v3 == 3 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(
      *((FastRegion::Internal::CRgnData **)this - 23),
      (struct FastRegion::CRegion::Iterator *)v12);
    v5 = (CConversionSwapChain *)((char *)this - 424);
    while ( (unsigned __int64)v14 < v13 )
    {
      v5 = (CConversionSwapChain *)((char *)this - 424);
      v17[1] = *v14;
      v17[3] = v14[2];
      v6 = 2 * v16;
      v17[0] = *(_DWORD *)(v15 + 4 * v6);
      v17[2] = *(_DWORD *)(v15 + 4 * v6 + 4);
      CLegacySwapChain::NotifyRenderedRect((__int64)this - 424, v17);
      FastRegion::Internal::CRgnData::StepIterator(v7, (struct FastRegion::CRegion::Iterator *)v12);
    }
    v3 = *((_DWORD *)this - 115);
  }
  else
  {
    v5 = (CConversionSwapChain *)((char *)this - 424);
  }
  if ( (v3 == 1 || v3 == 3) && *((_BYTE *)this - 80) )
  {
    v5 = (CConversionSwapChain *)((char *)this - 424);
    CLegacySwapChain::NotifyRenderedRect((__int64)this - 424, (_DWORD *)this - 24);
  }
  v8 = CLegacySwapChain::CopyFrontToBackBuffer(v5, a2, a3);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x9Du, 0LL);
  return v10;
}
