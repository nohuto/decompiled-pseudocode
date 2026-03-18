/*
 * XREFs of ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180038BCC
 * Callers:
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800384CC (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800389D8 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x180038AE4 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180038B10 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800D94F0 (-PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800D9600 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800DB494 (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x180152560 (-SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HANDLE_TABLE::ValidEntry(HANDLE_TABLE *this, unsigned int a2)
{
  return a2 && a2 < *((_DWORD *)this + 3) && *(_DWORD *)(*((_DWORD *)this + 2) * a2 + *((_QWORD *)this + 3));
}
