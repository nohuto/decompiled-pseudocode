/*
 * XREFs of ?TryGetMasterTableEntry@CChannelTable@@QEAAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@I@Z @ 0x1800E716C
 * Callers:
 *     ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800E7040 (-PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x180193B70 (-SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x1800BE004 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

struct CLIENT_CHANNEL_HANDLE_ENTRY *__fastcall CChannelTable::TryGetMasterTableEntry(
        CChannelTable *this,
        unsigned int a2)
{
  __int64 v2; // rcx
  int v3; // r8d

  if ( HANDLE_TABLE::ValidEntry(this, a2) )
    return (struct CLIENT_CHANNEL_HANDLE_ENTRY *)(*(_QWORD *)(v2 + 24) + (unsigned int)(v3 * *(_DWORD *)(v2 + 8)));
  else
    return 0LL;
}
