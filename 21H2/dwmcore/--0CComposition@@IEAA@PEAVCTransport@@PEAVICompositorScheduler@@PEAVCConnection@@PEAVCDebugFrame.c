/*
 * XREFs of ??0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x1800B570C
 * Callers:
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAVCComposition@@@Z @ 0x1800DE3D4 (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCD.c)
 * Callees:
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800B5DB8 (--0CMmcssTask@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

CComposition *__fastcall CComposition::CComposition(
        CComposition *this,
        struct CTransport *a2,
        struct ICompositorScheduler *a3,
        struct CConnection *a4,
        struct CDebugFrameCounter *a5)
{
  CComposition *result; // rax

  *(_QWORD *)this = &CComposition::`vftable';
  *((_DWORD *)this + 2) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_QWORD *)this + 7) = (char *)this + 80;
  *((_QWORD *)this + 8) = (char *)this + 80;
  *((_QWORD *)this + 9) = (char *)this + 88;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  CMmcssTask::CMmcssTask((CComposition *)((char *)this + 184));
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 44) = 1LL;
  *((_DWORD *)this + 82) = 1;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_DWORD *)this + 96) = 0;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 104) = 0;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 112) = 0;
  *((_QWORD *)this + 59) = a5;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  *((_QWORD *)this + 62) = a2;
  *((_QWORD *)this + 63) = a3;
  *((_QWORD *)this + 64) = a4;
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 132) = 0;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = 0;
  *((_QWORD *)this + 71) = (char *)this + 600;
  *((_QWORD *)this + 72) = (char *)this + 600;
  *((_DWORD *)this + 146) = 1;
  *(_QWORD *)((char *)this + 588) = 1LL;
  *((_QWORD *)this + 76) = (char *)this + 640;
  *((_QWORD *)this + 77) = (char *)this + 640;
  *((_DWORD *)this + 156) = 2;
  *(_QWORD *)((char *)this + 628) = 2LL;
  *((_QWORD *)this + 82) = (char *)this + 688;
  *((_QWORD *)this + 83) = (char *)this + 688;
  *((_DWORD *)this + 168) = 16;
  *(_QWORD *)((char *)this + 676) = 16LL;
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_DWORD *)this + 210) = 0;
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_DWORD *)this + 222) = 0;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_DWORD *)this + 230) = 0;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_DWORD *)this + 242) = 0;
  *((_DWORD *)this + 246) = 0;
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 137) = 0LL;
  *((_QWORD *)this + 140) = 0LL;
  *((_WORD *)this + 564) = 0;
  *((_BYTE *)this + 1130) = 0;
  *((_WORD *)this + 566) = 0;
  *((_DWORD *)this + 288) = 37120;
  *(_QWORD *)((char *)this + 1156) = 37120LL;
  *((_DWORD *)this + 291) = 0;
  *((_QWORD *)this + 146) = 0LL;
  *((_QWORD *)this + 147) = 0LL;
  *((_QWORD *)this + 148) = 0LL;
  InitializeSListHead((PSLIST_HEADER)this + 69);
  *((_QWORD *)this + 143) = (*(__int64 (__fastcall **)(struct ICompositorScheduler *))(*(_QWORD *)a3 + 72LL))(a3);
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  result = this;
  g_pFrameId = (unsigned __int64 *)((char *)this + 352);
  return result;
}
