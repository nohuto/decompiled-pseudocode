/*
 * XREFs of ?ProcessUpdate@CBrightnessEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BRIGHTNESSEFFECT@@@Z @ 0x1801B2F34
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrightnessEffect::ProcessUpdate(
        CBrightnessEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BRIGHTNESSEFFECT *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)this;
  *((_QWORD *)this + 19) = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 20) = *((_QWORD *)a3 + 2);
  (*(void (__fastcall **)(CBrightnessEffect *, _QWORD, _QWORD))(v3 + 72))(this, 0LL, 0LL);
  return 0LL;
}
