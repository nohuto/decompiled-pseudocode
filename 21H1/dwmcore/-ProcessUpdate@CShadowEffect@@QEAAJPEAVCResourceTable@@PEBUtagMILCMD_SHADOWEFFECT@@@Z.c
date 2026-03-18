/*
 * XREFs of ?ProcessUpdate@CShadowEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHADOWEFFECT@@@Z @ 0x1801B81EC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShadowEffect::ProcessUpdate(
        CShadowEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHADOWEFFECT *a3)
{
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 2);
  *(_OWORD *)((char *)this + 156) = *(_OWORD *)((char *)a3 + 12);
  *((_DWORD *)this + 43) = *((_DWORD *)a3 + 7);
  (*(void (__fastcall **)(CShadowEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
