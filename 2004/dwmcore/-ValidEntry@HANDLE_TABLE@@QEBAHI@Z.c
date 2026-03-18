/*
 * XREFs of ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18009F05C
 * Callers:
 *     ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800281E0 (-PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800282F0 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x18009E954 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18009EE68 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x18009EF74 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EFA0 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800DC5F4 (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x1801509F0 (-SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HANDLE_TABLE::ValidEntry(HANDLE_TABLE *this, unsigned int a2)
{
  return a2 && a2 < *((_DWORD *)this + 3) && *(_DWORD *)(*((_DWORD *)this + 2) * a2 + *((_QWORD *)this + 3));
}
