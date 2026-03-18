/*
 * XREFs of ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z @ 0x180268434
 * Callers:
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180269250 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$ApplyRangeColorKey@TGpCC@@@@YAXAEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z @ 0x180267F48 (--$ApplyRangeColorKey@TGpCC@@@@YAXAEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z.c)
 *     ??$ApplyRangeColorKey@TGpCCR@@@@YAXAEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z @ 0x180267FF4 (--$ApplyRangeColorKey@TGpCCR@@@@YAXAEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z.c)
 *     ??$ApplyRangeColorKey@UGpCCRf16@@@@YAXAEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z @ 0x1802680A4 (--$ApplyRangeColorKey@UGpCCRf16@@@@YAXAEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z.c)
 *     ??$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXAEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z @ 0x180268214 (--$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXAEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::ApplyColorKeyToBuffer(
        CColorKeyBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 *a5)
{
  unsigned int v8; // r14d
  __int64 (__fastcall ***v9)(_QWORD, _BYTE *); // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  int *v14; // r10
  int *v15; // rdx
  int v17; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v18[16]; // [rsp+48h] [rbp-40h] BYREF

  v8 = 0;
  v9 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 8LL)
                                                 + *((_QWORD *)this + 5)
                                                 + 8LL);
  v10 = *(_DWORD *)(**v9)(v9, v18);
  switch ( v10 )
  {
    case 2:
      ApplyRangeColorKey<_D3DCOLORVALUE>((__int64)a2, a3, v12, (__int64)a5, (float *)this + 27, (float *)this + 35);
      break;
    case 10:
      ApplyRangeColorKey<GpCCRf16>(
        (__int64)a2,
        a3,
        v12,
        (__int64)a5,
        (unsigned __int16 *)this + 50,
        (unsigned __int16 *)this + 66);
      break;
    case 28:
      v13 = *((_BYTE *)this + 88) == 0;
      v17 = -16777216;
      v15 = &v17;
      if ( !v13 )
        v15 = 0LL;
      ApplyRangeColorKey<GpCCR>(
        (__int64)a2,
        a3,
        v12,
        (__int64)a5,
        (unsigned __int8 *)this + 96,
        (unsigned __int8 *)this + 128,
        (__int64)v15);
      break;
    default:
      if ( (unsigned int)(v10 - 87) > 1 )
      {
        v8 = -2003292288;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003292288, 0x19Bu, 0LL);
      }
      else
      {
        v13 = *((_BYTE *)this + 88) == 0;
        v17 = -16777216;
        v14 = &v17;
        if ( !v13 )
          v14 = 0LL;
        ApplyRangeColorKey<GpCC>(
          (__int64)a2,
          a3,
          (__int64)this + 92,
          (__int64)a5,
          (unsigned __int8 *)this + 92,
          (unsigned __int8 *)this + 124,
          (__int64)v14);
      }
      break;
  }
  return v8;
}
