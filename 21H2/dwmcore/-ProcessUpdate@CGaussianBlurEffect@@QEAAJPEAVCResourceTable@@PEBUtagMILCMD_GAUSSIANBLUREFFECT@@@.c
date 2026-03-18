/*
 * XREFs of ?ProcessUpdate@CGaussianBlurEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GAUSSIANBLUREFFECT@@@Z @ 0x1802063E8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGaussianBlurEffect::ProcessUpdate(
        CGaussianBlurEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GAUSSIANBLUREFFECT *a3)
{
  *((_DWORD *)this + 40) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 41) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 4);
  (*(void (__fastcall **)(CGaussianBlurEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
