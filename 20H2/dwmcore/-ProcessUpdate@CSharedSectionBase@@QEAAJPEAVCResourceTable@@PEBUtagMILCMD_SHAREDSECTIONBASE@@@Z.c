/*
 * XREFs of ?ProcessUpdate@CSharedSectionBase@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTIONBASE@@@Z @ 0x1801B39D4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedSectionBase::ProcessUpdate(
        CSharedSectionBase *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAREDSECTIONBASE *a3)
{
  *((_QWORD *)this + 7) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 16) = *((_DWORD *)a3 + 4);
  (*(void (__fastcall **)(CSharedSectionBase *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
