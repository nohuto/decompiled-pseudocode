/*
 * XREFs of ?SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18002D308
 * Callers:
 *     ?SyncFlush@CChannel@@UEAAJXZ @ 0x18002D2C0 (-SyncFlush@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ?SynchronizedCommit@CChannel@@UEAAJPEAX@Z @ 0x18002D6D0 (-SynchronizedCommit@CChannel@@UEAAJPEAX@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18002D830 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::SynchronizeChannel(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v2; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ecx
  int MasterTableEntry; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  void *v10; // xmm0_8
  CChannel *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  signed int LastError; // eax
  unsigned int v16; // ecx
  unsigned int v17; // [rsp+20h] [rbp-48h]
  __m128i v18; // [rsp+30h] [rbp-38h]
  int v19; // [rsp+70h] [rbp+8h] BYREF
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v20; // [rsp+80h] [rbp+18h] BYREF

  v2 = this + 17;
  AcquireSRWLockExclusive(this + 17);
  CurrentThreadId = GetCurrentThreadId();
  v20 = 0LL;
  LODWORD(v2[1].Ptr) = CurrentThreadId;
  LOBYTE(CurrentThreadId) = this[3].Ptr;
  v19 = 52;
  if ( !(_BYTE)CurrentThreadId )
  {
    v9 = -2003303402;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303402, 0x158u, 0LL);
LABEL_9:
    LODWORD(v2[1].Ptr) = 0;
    ReleaseSRWLockExclusive(v2);
    return v9;
  }
  MasterTableEntry = CChannelTable::GetMasterTableEntry((CChannelTable *)&this[7], a2, &v20);
  v9 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, MasterTableEntry, 0x15Cu, 0LL);
    goto LABEL_9;
  }
  v18 = *(__m128i *)v20;
  v10 = (void *)*((_QWORD *)v20 + 2);
  LODWORD(v2[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v2);
  v11 = (CChannel *)_mm_srli_si128(v18, 8).m128i_u64[0];
  v12 = CChannel::SendCommand(v11, &v19, 4u);
  v9 = v12;
  if ( v12 < 0 )
  {
    v17 = 360;
    goto LABEL_17;
  }
  v12 = CChannel::SynchronizedCommit(v11, 0LL);
  v9 = v12;
  if ( v12 < 0 )
  {
    v17 = 363;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v17, 0LL);
    return v9;
  }
  SetLastError(0);
  if ( WaitForSingleObject(v10, 0xFFFFFFFF) == -1 )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( (v9 & 0x80000000) == 0 )
      v9 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v9, 0x174u, 0LL);
  }
  return v9;
}
