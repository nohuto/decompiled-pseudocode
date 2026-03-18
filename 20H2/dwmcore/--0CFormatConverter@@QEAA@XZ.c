/*
 * XREFs of ??0CFormatConverter@@QEAA@XZ @ 0x180216118
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180216B48 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     <none>
 */

CFormatConverter *__fastcall CFormatConverter::CFormatConverter(CFormatConverter *this)
{
  __int64 v2; // rcx
  CFormatConverter *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = &CFormatConverter::`vbtable';
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_QWORD *)this + 2) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)this = &CFormatConverter::`vftable';
  *((_QWORD *)this + 2) = &CFormatConverter::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CFormatConverter::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v2 + 20) = v2 - 784;
  *((_QWORD *)this + 15) = &CScanPipeline::`vftable';
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 16) = (char *)this + 160;
  *((_QWORD *)this + 17) = (char *)this + 160;
  *((_DWORD *)this + 36) = 10;
  *((_DWORD *)this + 37) = 10;
  *((_DWORD *)this + 170) = 0;
  *((_QWORD *)this + 82) = (char *)this + 688;
  *((_QWORD *)this + 83) = (char *)this + 688;
  *((_DWORD *)this + 168) = 3;
  *((_DWORD *)this + 169) = 3;
  *((_DWORD *)this + 184) = 0;
  *((_QWORD *)this + 89) = (char *)this + 744;
  *((_QWORD *)this + 90) = (char *)this + 744;
  *((_DWORD *)this + 182) = 2;
  *((_DWORD *)this + 183) = 2;
  result = this;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  return result;
}
