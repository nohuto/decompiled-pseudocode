/*
 * XREFs of ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x180193A64
 * Callers:
 *     ?Destroy@CChannel@@UEAAJXZ @ 0x1801AA740 (-Destroy@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x18002CEEC (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18002D830 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x1801A9A4C (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::DestroyChannel(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v2; // rdi
  CChannelTable *v3; // rbp
  int MasterTableEntry; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = this + 17;
  v3 = (CChannelTable *)&this[7];
  AcquireSRWLockExclusive(this + 17);
  LODWORD(v2[1].Ptr) = GetCurrentThreadId();
  MasterTableEntry = CChannelTable::GetMasterTableEntry(v3, a2, &v11);
  v7 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, MasterTableEntry, 0x6Eu);
    LODWORD(v2[1].Ptr) = 0;
    ReleaseSRWLockExclusive(v2);
  }
  else
  {
    ReleaseInterface<CChannel>((CChannel **)v11 + 1);
    CChannelTable::DestroyHandle(v3, a2);
    LODWORD(v2[1].Ptr) = 0;
    ReleaseSRWLockExclusive(v2);
    v8 = NtDCompositionDestroyChannel(a2);
    if ( v8 < 0 )
    {
      v7 = v8 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8 | 0x10000000, 0x7Cu);
    }
  }
  return v7;
}
