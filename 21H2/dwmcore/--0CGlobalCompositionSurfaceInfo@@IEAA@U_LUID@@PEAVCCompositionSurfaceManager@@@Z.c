/*
 * XREFs of ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z @ 0x1800C7CC8
 * Callers:
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800C7BF0 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CGlobalCompositionSurfaceInfo *__fastcall CGlobalCompositionSurfaceInfo::CGlobalCompositionSurfaceInfo(
        CGlobalCompositionSurfaceInfo *this,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3)
{
  CGlobalCompositionSurfaceInfo *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 4) = 0LL;
  *((struct _LUID *)this + 5) = a2;
  *((_QWORD *)this + 6) = (char *)this + 72;
  *((_QWORD *)this + 7) = (char *)this + 72;
  *((_QWORD *)this + 8) = (char *)this + 80;
  *(_QWORD *)this = &CGlobalCompositionSurfaceInfo::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 2) = &CGlobalCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 11) = this;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 1;
  *((_DWORD *)this + 31) = 0;
  *((struct _LUID *)this + 16) = g_luidZero;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_BYTE *)this + 192) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *(_QWORD *)((char *)this + 276) = 256LL;
  *((_BYTE *)this + 284) = 1;
  *((_QWORD *)this + 36) = 0LL;
  result = this;
  *((_DWORD *)this + 74) = -1;
  *(_QWORD *)((char *)this + 300) = 0LL;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 98) = 0;
  return result;
}
