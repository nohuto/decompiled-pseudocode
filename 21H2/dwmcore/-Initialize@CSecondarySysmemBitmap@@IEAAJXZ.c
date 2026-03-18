/*
 * XREFs of ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x18006CE5C
 * Callers:
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18006D09C (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800739B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Initialize(enum DXGI_FORMAT *this)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned int v3; // ecx
  unsigned int v4; // r8d
  unsigned int v5; // eax
  void *v6; // rax
  void *v7; // rcx
  int v8; // r10d
  int v9; // r9d
  int v10; // eax
  int v11; // r11d
  unsigned int v12; // edi
  _DWORD *v14; // rdx

  PixelFormatSize = GetPixelFormatSize(this[33]);
  if ( PixelFormatSize && *((_DWORD *)this + 30) <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v4 = (((*((_DWORD *)this + 30) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    *((_DWORD *)this + 32) = v4;
    v5 = -1;
    if ( v4 * (unsigned __int64)*((unsigned int *)this + 31) <= 0xFFFFFFFF )
      v5 = v4 * *((_DWORD *)this + 31);
    *((_DWORD *)this + 38) = v5;
    v6 = DefaultHeap::Alloc(v5);
    v7 = (void *)*((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = v6;
    if ( v7 )
    {
      DefaultHeap::Free(v7);
      v6 = (void *)*((_QWORD *)this + 18);
    }
    if ( v6 )
    {
      v8 = *((_DWORD *)this + 8);
      v9 = *((_DWORD *)this + 10);
      v10 = *((_DWORD *)this + 9);
      v11 = *((_DWORD *)this + 11);
      if ( v8 >= v9 || v10 >= v11 )
      {
        **((_DWORD **)this + 6) = 0;
      }
      else
      {
        v14 = (_DWORD *)*((_QWORD *)this + 6);
        *v14 = 2;
        v14[7] = v8;
        v14[3] = v10;
        v14[8] = v9;
        v14[4] = 16;
        v14[1] = v8;
        v14[2] = v9;
        v14[6] = 16;
        v14[5] = v11;
      }
      return 0;
    }
    else
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, -2147024882, 0x2Fu, 0LL);
    }
  }
  else
  {
    *((_DWORD *)this + 32) = 0;
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024362, 0x29u, 0LL);
  }
  return v12;
}
