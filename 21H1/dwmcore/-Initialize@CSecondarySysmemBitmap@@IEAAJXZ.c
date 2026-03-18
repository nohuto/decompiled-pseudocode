/*
 * XREFs of ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x18002862C
 * Callers:
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18002853C (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180029704 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Initialize(enum DXGI_FORMAT *this)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned int v3; // ecx
  int v4; // edi
  unsigned int v5; // r8d
  unsigned int v6; // eax
  void *v7; // rax
  void *v8; // rcx
  int v9; // r9d
  int v10; // r10d
  int v11; // eax
  int v12; // r11d
  _DWORD *v14; // rdx

  PixelFormatSize = GetPixelFormatSize(this[35]);
  if ( PixelFormatSize && (v3 = *((_DWORD *)this + 32), v3 <= 0x7FFFFFF8u / PixelFormatSize) )
  {
    v4 = 0;
    v5 = (((v3 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  }
  else
  {
    v4 = -2147024362;
    v5 = 0;
  }
  *((_DWORD *)this + 34) = v5;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v4, 0x29u, 0LL);
  }
  else
  {
    v6 = -1;
    if ( v5 * (unsigned __int64)*((unsigned int *)this + 33) <= 0xFFFFFFFF )
      v6 = v5 * *((_DWORD *)this + 33);
    *((_DWORD *)this + 40) = v6;
    v7 = DefaultHeap::Alloc(v6);
    v8 = (void *)*((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = v7;
    if ( v8 )
    {
      operator delete(v8);
      v7 = (void *)*((_QWORD *)this + 19);
    }
    if ( v7 )
    {
      v9 = *((_DWORD *)this + 10);
      v10 = *((_DWORD *)this + 12);
      v11 = *((_DWORD *)this + 11);
      v12 = *((_DWORD *)this + 13);
      if ( v9 >= v10 || v11 >= v12 )
      {
        **((_DWORD **)this + 7) = 0;
      }
      else
      {
        v14 = (_DWORD *)*((_QWORD *)this + 7);
        *v14 = 2;
        v14[7] = v9;
        v14[3] = v11;
        v14[8] = v10;
        v14[4] = 16;
        v14[1] = v9;
        v14[2] = v10;
        v14[6] = 16;
        v14[5] = v12;
      }
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2147024882, 0x2Fu, 0LL);
    }
  }
  return (unsigned int)v4;
}
