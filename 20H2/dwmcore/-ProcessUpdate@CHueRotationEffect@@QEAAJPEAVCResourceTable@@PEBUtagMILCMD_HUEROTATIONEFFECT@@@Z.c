/*
 * XREFs of ?ProcessUpdate@CHueRotationEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HUEROTATIONEFFECT@@@Z @ 0x1801B2F04
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHueRotationEffect::ProcessUpdate(
        CHueRotationEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HUEROTATIONEFFECT *a3)
{
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CHueRotationEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
