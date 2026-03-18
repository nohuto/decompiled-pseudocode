/*
 * XREFs of ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18002D830
 * Callers:
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18002CFF0 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18002D308 (-SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x180193A64 (-DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x1801A9A4C (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x1800BE004 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

__int64 __fastcall CChannelTable::GetMasterTableEntry(
        CChannelTable *this,
        unsigned int a2,
        struct CLIENT_CHANNEL_HANDLE_ENTRY **a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  unsigned int v7; // ebx

  if ( (unsigned int)HANDLE_TABLE::ValidEntry(this, a2) )
  {
    *v4 = *(_QWORD *)(v5 + 24) + (unsigned int)(v6 * *(_DWORD *)(v3 + 8));
    return 0;
  }
  else
  {
    v7 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024890, 0x24u, 0LL);
  }
  return v7;
}
