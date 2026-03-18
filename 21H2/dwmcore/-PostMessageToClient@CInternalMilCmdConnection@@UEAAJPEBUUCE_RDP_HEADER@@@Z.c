/*
 * XREFs of ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800E7040
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x1800BE004 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?TryGetMasterTableEntry@CChannelTable@@QEAAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@I@Z @ 0x1800E716C (-TryGetMasterTableEntry@CChannelTable@@QEAAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@I@Z.c)
 *     ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800E7198 (-PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::PostMessageToClient(RTL_SRWLOCK *this, const struct UCE_RDP_HEADER *a2)
{
  RTL_SRWLOCK *v2; // r13
  signed int v5; // ebx
  __int64 v6; // rcx
  const struct MIL_MESSAGE *v7; // rdi
  struct CLIENT_CHANNEL_HANDLE_ENTRY *MasterTableEntry; // rax
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int i; // esi
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v15; // rax
  CChannel *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r14d
  signed int LastError; // eax
  __int64 v21; // rcx
  unsigned int v22; // [rsp+20h] [rbp-28h]

  v2 = this + 17;
  v5 = 0;
  AcquireSRWLockExclusive(this + 17);
  LODWORD(v2[1].Ptr) = GetCurrentThreadId();
  if ( !LOBYTE(this[3].Ptr) )
    goto LABEL_12;
  v6 = *(unsigned int *)a2;
  if ( *((_DWORD *)a2 + 1) < 0x44u || (unsigned int)(v6 - 10) > 1 )
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2003303421, 0x75u);
    v22 = 189;
    goto LABEL_35;
  }
  v7 = (const struct UCE_RDP_HEADER *)((char *)a2 + 40);
  if ( (_DWORD)v6 != 11 )
  {
    MasterTableEntry = CChannelTable::TryGetMasterTableEntry((CChannelTable *)&this[7], *((_DWORD *)a2 + 4));
    v9 = MasterTableEntry;
    if ( !MasterTableEntry )
      goto LABEL_12;
    if ( *(_DWORD *)v7 != 1 )
    {
      if ( *(_DWORD *)v7 == 2 || *(_DWORD *)v7 == 17 )
      {
        v10 = *((_QWORD *)MasterTableEntry + 1);
      }
      else
      {
        v10 = *((_QWORD *)MasterTableEntry + 1);
        if ( *(_DWORD *)v7 != 19 )
        {
          v11 = CChannel::PostMessageToChannel((CChannel *)v10, v7);
          v5 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x108u);
          goto LABEL_12;
        }
      }
      *(_OWORD *)(v10 + 128) = *(_OWORD *)v7;
      *(_QWORD *)(v10 + 144) = *((_QWORD *)v7 + 2);
      *(_DWORD *)(v10 + 152) = *((_DWORD *)v7 + 6);
      goto LABEL_12;
    }
    SetLastError(0);
    if ( SetEvent(*((HANDLE *)v9 + 2)) )
      goto LABEL_12;
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    v22 = 226;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v5, v22);
    goto LABEL_12;
  }
  for ( i = 1; i < HIDWORD(this[8].Ptr); ++i )
  {
    if ( HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)&this[7], i) )
    {
      v15 = CChannelTable::TryGetMasterTableEntry((CChannelTable *)&this[7], i);
      if ( v15 )
      {
        v16 = (CChannel *)*((_QWORD *)v15 + 1);
        if ( *((_BYTE *)v16 + 210) )
        {
          v17 = CChannel::PostMessageToChannel(v16, v7);
          v19 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0xCFu);
          if ( !v5 || v5 >= 0 && v19 < 0 )
            v5 = v19;
        }
      }
    }
  }
LABEL_12:
  LODWORD(v2[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v2);
  return (unsigned int)v5;
}
