/*
 * XREFs of ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z @ 0x180044F7C
 * Callers:
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x180044EA8 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CGlobalCompositionSurfaceInfo *__fastcall CGlobalCompositionSurfaceInfo::CGlobalCompositionSurfaceInfo(
        CGlobalCompositionSurfaceInfo *this,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3)
{
  CGlobalCompositionSurfaceInfo *result; // rax

  *((_QWORD *)this + 3) = a3;
  *((struct _LUID *)this + 5) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = (char *)this + 72;
  *((_QWORD *)this + 7) = (char *)this + 72;
  *((_QWORD *)this + 8) = (char *)this + 80;
  *(_QWORD *)this = &CGlobalCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 2) = &CGlobalCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 1065353216;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 14) = this;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *(struct _LUID *)((char *)this + 148) = g_luidZero;
  result = this;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 39) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_WORD *)this + 132) = 0;
  *(_QWORD *)((char *)this + 268) = 0LL;
  *((_DWORD *)this + 69) = 0;
  return result;
}
