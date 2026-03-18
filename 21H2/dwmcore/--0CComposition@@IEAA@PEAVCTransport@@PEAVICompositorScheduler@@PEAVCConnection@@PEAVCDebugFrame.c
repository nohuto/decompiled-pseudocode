/*
 * XREFs of ??0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x1800F22B0
 * Callers:
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAVCComposition@@@Z @ 0x1800F21F8 (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCD.c)
 * Callees:
 *     ??0CMmcssTask@@QEAA@XZ @ 0x18002BBE0 (--0CMmcssTask@@QEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
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
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 7) = (char *)this + 80;
  *((_QWORD *)this + 8) = (char *)this + 80;
  *((_QWORD *)this + 9) = (char *)this + 208;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  CMmcssTask::CMmcssTask((CComposition *)((char *)this + 336));
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_DWORD *)this + 116) = 0;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 118) = 1;
  *((_QWORD *)this + 62) = 1LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_DWORD *)this + 142) = 0;
  *((_QWORD *)this + 78) = a5;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_DWORD *)this + 150) = 0;
  *((_QWORD *)this + 79) = 0LL;
  *((_DWORD *)this + 160) = 0;
  *((_QWORD *)this + 81) = a2;
  *((_QWORD *)this + 82) = a3;
  *((_QWORD *)this + 83) = a4;
  *((_QWORD *)this + 84) = 0LL;
  *((_DWORD *)this + 170) = 0;
  *((_QWORD *)this + 90) = (char *)this + 752;
  *((_QWORD *)this + 91) = (char *)this + 752;
  *((_QWORD *)this + 95) = (char *)this + 792;
  *((_QWORD *)this + 96) = (char *)this + 792;
  *((_DWORD *)this + 194) = 2;
  *(_QWORD *)((char *)this + 780) = 2LL;
  *((_QWORD *)this + 101) = (char *)this + 840;
  *((_QWORD *)this + 102) = (char *)this + 840;
  *((_DWORD *)this + 206) = 16;
  *(_QWORD *)((char *)this + 828) = 16LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_DWORD *)this + 178) = 0;
  *((_DWORD *)this + 184) = 1;
  *(_QWORD *)((char *)this + 740) = 1LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_DWORD *)this + 248) = 0;
  *((_QWORD *)this + 125) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 128) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_DWORD *)this + 260) = 0;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_DWORD *)this + 268) = 0;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 137) = 0LL;
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_DWORD *)this + 280) = 0;
  *((_DWORD *)this + 284) = 0;
  *((_DWORD *)this + 307) = 0;
  *((_QWORD *)this + 156) = 0LL;
  *((_QWORD *)this + 157) = 0LL;
  *((_QWORD *)this + 158) = 0LL;
  *((_DWORD *)this + 318) = 0;
  *(_WORD *)((char *)this + 1277) = 0;
  *((_DWORD *)this + 324) = 37120;
  *(_QWORD *)((char *)this + 1300) = 37120LL;
  *((_BYTE *)this + 1279) = 0;
  *((_DWORD *)this + 327) = 0;
  *((_QWORD *)this + 164) = 0LL;
  *((_QWORD *)this + 165) = 0LL;
  *((_QWORD *)this + 166) = 0LL;
  *((_QWORD *)this + 167) = 0LL;
  *((_QWORD *)this + 161) = (*(__int64 (__fastcall **)(struct ICompositorScheduler *))(*(_QWORD *)a3 + 96LL))(a3);
  CMILRefCountImpl::AddReference((CComposition *)((char *)this + 8));
  result = this;
  g_pFrameId = (unsigned __int64 *)((char *)this + 496);
  return result;
}
