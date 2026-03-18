/*
 * XREFs of ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x1C00492AC
 * Callers:
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C000E730 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C00494B8 (McTemplateK0qxxx_EtwWriteTransfer.c)
 */

void __fastcall VSYNC_TIME_STATS::VSyncStateChange(
        VSYNC_TIME_STATS *this,
        enum _DXGK_CRTC_VSYNC_STATE a2,
        enum _DXGK_CRTC_VSYNC_STATE a3)
{
  LARGE_INTEGER v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  union _LARGE_INTEGER v10; // [rsp+78h] [rbp+20h] BYREF

  v10.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&v10);
  if ( a3 == DXGK_VSYNC_ENABLE )
  {
    if ( (unsigned int)(a2 - 1) > 1 )
      return;
    v7 = v6.QuadPart - *(_QWORD *)this;
    if ( is_mul_ok(v7, 0x3E8uLL) )
    {
      v8 = v7 * (unsigned __int128)0x3E8uLL % (unsigned __int64)v10.QuadPart;
      v9 = v7 * (unsigned __int128)0x3E8uLL / (unsigned __int64)v10.QuadPart;
    }
    else
    {
      v7 /= v10.QuadPart;
      v8 = 1000 * ((v6.QuadPart - *(_QWORD *)this) % (unsigned __int64)v10.QuadPart) % v10.QuadPart;
      v9 = 1000 * v7 + 1000 * ((v6.QuadPart - *(_QWORD *)this) % (unsigned __int64)v10.QuadPart) / v10.QuadPart;
    }
    if ( a2 != DXGK_VSYNC_DISABLE_KEEP_PHASE )
    {
      *((_QWORD *)this + 4) += v9;
      goto LABEL_20;
    }
LABEL_19:
    *((_QWORD *)this + 3) += v9;
LABEL_20:
    *(LARGE_INTEGER *)this = v6;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
      McTemplateK0qxxx_EtwWriteTransfer(
        v7,
        v8,
        v9,
        a3,
        *((_QWORD *)this + 2),
        *((_QWORD *)this + 3),
        *((_QWORD *)this + 4));
    return;
  }
  if ( a3 == DXGK_VSYNC_DISABLE_KEEP_PHASE )
  {
    if ( a2 )
      return;
    v7 = v6.QuadPart - *(_QWORD *)this;
    if ( is_mul_ok(v7, 0x3E8uLL) )
    {
      v8 = v7 * (unsigned __int128)0x3E8uLL % (unsigned __int64)v10.QuadPart;
      v9 = v7 * (unsigned __int128)0x3E8uLL / (unsigned __int64)v10.QuadPart;
    }
    else
    {
      v7 /= v10.QuadPart;
      v8 = 1000 * ((v6.QuadPart - *(_QWORD *)this) % (unsigned __int64)v10.QuadPart) % v10.QuadPart;
      v9 = 1000 * v7 + 1000 * ((v6.QuadPart - *(_QWORD *)this) % (unsigned __int64)v10.QuadPart) / v10.QuadPart;
    }
    *((_QWORD *)this + 2) += v9;
    goto LABEL_20;
  }
  if ( a3 == DXGK_VSYNC_DISABLE_NO_PHASE && a2 == DXGK_VSYNC_DISABLE_KEEP_PHASE )
  {
    v7 = v6.QuadPart - *(_QWORD *)this;
    if ( is_mul_ok(v7, 0x3E8uLL) )
    {
      v8 = v7 * (unsigned __int128)0x3E8uLL % (unsigned __int64)v10.QuadPart;
      v9 = v7 * (unsigned __int128)0x3E8uLL / (unsigned __int64)v10.QuadPart;
    }
    else
    {
      v7 /= v10.QuadPart;
      v8 = 1000 * ((v6.QuadPart - *(_QWORD *)this) % (unsigned __int64)v10.QuadPart) % v10.QuadPart;
      v9 = 1000 * v7 + 1000 * ((v6.QuadPart - *(_QWORD *)this) % (unsigned __int64)v10.QuadPart) / v10.QuadPart;
    }
    goto LABEL_19;
  }
}
