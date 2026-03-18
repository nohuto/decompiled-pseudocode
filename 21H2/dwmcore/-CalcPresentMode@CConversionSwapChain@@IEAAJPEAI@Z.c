/*
 * XREFs of ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x1802913AC
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180292F84 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800DB680 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18028AB2C (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV.c)
 *     ?IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180292C78 (-IsDesktopPlane@CConversionSwapChain@@IEBA_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 */

__int64 __fastcall CConversionSwapChain::CalcPresentMode(CConversionSwapChain *this, unsigned int *a2)
{
  char v2; // di
  unsigned int v4; // ebp
  unsigned int v5; // r8d
  int v6; // ecx
  unsigned int v7; // r9d
  _DWORD *v8; // r10
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // ecx
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rdx
  enum DXGI_COLOR_SPACE_TYPE v20; // r8d
  __int128 v22; // [rsp+30h] [rbp-48h] BYREF
  int v23[4]; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0;
  v4 = 0;
  v5 = -1;
  v6 = 0;
  v7 = 0;
  v8 = (_DWORD *)((char *)this + 372);
  do
  {
    if ( *v8 )
    {
      ++v6;
      v9 = v7;
      if ( v5 != -1 )
        v9 = v5;
      v5 = v9;
    }
    ++v7;
    v8 += 34;
  }
  while ( v7 < 2 );
  *a2 = v5;
  v10 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v10 )
  {
    if ( (_DWORD)v10 == 1 )
    {
      if ( *((_DWORD *)this + 91) == 2 || !operator==((_DWORD *)this + 107, (_DWORD *)this + 178) )
        *((_BYTE *)this + 744) = 1;
      *((_DWORD *)this + 91) = 3;
      v11 = *((_DWORD *)this + 108);
      v12 = *((_DWORD *)this + 109);
      v13 = *((_DWORD *)this + 110);
      *((_DWORD *)this + 178) = *((_DWORD *)this + 107);
      *((_DWORD *)this + 179) = v11;
      *((_DWORD *)this + 180) = v12;
      *((_DWORD *)this + 181) = v13;
    }
    else
    {
      v4 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, -2003292412, 0x25Du);
    }
  }
  else
  {
    v14 = v5;
    v15 = 136LL * v5;
    if ( CConversionSwapChain::IsDesktopPlane(this, (CConversionSwapChain *)((char *)this + v15 + 368)) )
    {
      *((_DWORD *)this + 91) = 0;
    }
    else
    {
      if ( *(int *)((char *)this + v15 + 396) >= 0 )
      {
        v16 = *(_DWORD *)((char *)this + v15 + 400);
        if ( v16 >= 0 )
        {
          v17 = *(_DWORD *)((char *)this + v15 + 412);
          if ( v17 >= 0 )
          {
            v18 = *(_DWORD *)((char *)this + v15 + 416);
            if ( v18 >= 0 && *(_DWORD *)((char *)this + v15 + 444) == 1 )
            {
              v23[0] = *(_DWORD *)((char *)this + v15 + 396);
              v23[2] = *(_DWORD *)((char *)this + v15 + 404);
              v23[1] = v16;
              *(_QWORD *)&v22 = __PAIR64__(v18, v17);
              v19 = *(_QWORD *)((char *)this + v15 + 376);
              v20 = *(_DWORD *)((char *)this + v15 + 468);
              v23[3] = *((_DWORD *)this + 34 * v14 + 102);
              *((_QWORD *)&v22 + 1) = *(_QWORD *)((char *)this + v15 + 420);
              v2 = CLegacySwapChain::CheckDirectFlipSupport((__int64)this + 400, v19, v20, v23, &v22);
            }
          }
        }
      }
      *((_DWORD *)this + 91) = (v2 != 0) + 1;
    }
  }
  return v4;
}
