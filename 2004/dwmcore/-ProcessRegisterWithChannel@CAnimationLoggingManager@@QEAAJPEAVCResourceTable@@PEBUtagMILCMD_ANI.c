/*
 * XREFs of ?ProcessRegisterWithChannel@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_REGISTERWITHCHANNEL@@@Z @ 0x1800D6820
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessRegisterWithChannel(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_REGISTERWITHCHANNEL *a3)
{
  *(_QWORD *)(*((_QWORD *)this + 6) + 56LL) = this;
  (*(void (__fastcall **)(CAnimationLoggingManager *, struct CResourceTable *, const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_REGISTERWITHCHANNEL *))(*(_QWORD *)this + 8LL))(
    this,
    a2,
    a3);
  return 0LL;
}
