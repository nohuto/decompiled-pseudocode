/*
 * XREFs of ?_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z @ 0x1803862E8
 * Callers:
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x180385918 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180049430 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180150574 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall _DoesBitmapHaveAlpha(HBITMAP hbm, bool *a2)
{
  int Error; // ebx
  unsigned __int64 v5; // rdi
  HDC DC; // rax
  char *v7; // rsi
  HDC v8; // r14
  bool v9; // al
  int v10; // edx
  _BYTE *v11; // rcx
  LPVOID lpvBits; // [rsp+40h] [rbp-29h] BYREF
  _BYTE pv[4]; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v15; // [rsp+4Ch] [rbp-1Dh]
  UINT cLines; // [rsp+50h] [rbp-19h]
  __int16 v17; // [rsp+58h] [rbp-11h]
  __int16 v18; // [rsp+5Ah] [rbp-Fh]
  struct tagBITMAPINFO bmi; // [rsp+68h] [rbp-1h] BYREF

  *a2 = 0;
  if ( GetObjectW(hbm, 32, pv) )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      return (unsigned int)Error;
  }
  if ( v17 == 1 && v18 == 32 )
  {
    v5 = cLines * (unsigned __int64)v15;
    if ( v5 <= 0xFFFFFFFF && (lpvBits = 0LL, is_mul_ok((unsigned int)v5, 4uLL)) )
    {
      Error = CTCoAllocPolicy::Alloc((void *)(unsigned int)v5, 1, 4LL * (unsigned int)v5, &lpvBits);
      if ( Error >= 0 )
      {
        DC = GetDC(0LL);
        v7 = (char *)lpvBits;
        v8 = DC;
        if ( DC )
        {
          memset(&bmi.bmiHeader.biCompression, 0, 28);
          bmi.bmiHeader.biWidth = v15;
          bmi.bmiHeader.biSize = 40;
          bmi.bmiHeader.biHeight = cLines;
          *(_DWORD *)&bmi.bmiHeader.biPlanes = 2097153;
          if ( GetDIBits(DC, hbm, 0, cLines, lpvBits, &bmi, 0) )
          {
            Error = 0;
            v9 = 0;
            v10 = 0;
            if ( (int)v5 > 0 )
            {
              v11 = v7 + 3;
              do
              {
                if ( v9 )
                  break;
                v9 = *v11 != 0;
                ++v10;
                v11 += 4;
              }
              while ( v10 < (int)v5 );
            }
            *a2 = v9;
          }
          else
          {
            Error = -2147467259;
          }
          ReleaseDC(0LL, v8);
        }
        else
        {
          Error = -2147467259;
        }
        CoTaskMemFree(v7);
      }
    }
    else
    {
      return (unsigned int)-2147024362;
    }
  }
  return (unsigned int)Error;
}
