/*
 * XREFs of ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x180028210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x180028320 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180028358 (-PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005D6EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18005DBD0 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::PostMessageToClient(
        CInternalMilCmdConnection *this,
        const struct UCE_RDP_HEADER *a2)
{
  signed int v4; // ebx
  unsigned int v5; // ecx
  const struct MIL_MESSAGE *v6; // rdi
  unsigned int v7; // edx
  int MasterTableEntry; // eax
  unsigned int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int i; // r14d
  CChannel *v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // r15d
  signed int LastError; // eax
  unsigned int v20; // ecx
  unsigned int v21; // [rsp+20h] [rbp-10h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v22; // [rsp+70h] [rbp+40h] BYREF
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v23; // [rsp+80h] [rbp+50h] BYREF
  char *v24; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0;
  v24 = (char *)this + 144;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  if ( !*((_BYTE *)this + 56) )
    goto LABEL_12;
  v5 = *(_DWORD *)a2;
  if ( *((_DWORD *)a2 + 1) < 0x44u || (unsigned int)(*(_DWORD *)a2 - 10) > 1 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003303421, 0x75u, 0LL);
    v21 = 332;
    goto LABEL_36;
  }
  v6 = (const struct UCE_RDP_HEADER *)((char *)a2 + 40);
  if ( v5 != 11 )
  {
    v7 = *((_DWORD *)a2 + 4);
    v22 = 0LL;
    MasterTableEntry = CChannelTable::GetMasterTableEntry((CInternalMilCmdConnection *)((char *)this + 64), v7, &v22);
    v4 = MasterTableEntry;
    if ( MasterTableEntry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, MasterTableEntry, 0x169u, 0LL);
      v4 = 0;
      goto LABEL_12;
    }
    if ( *(_DWORD *)v6 != 1 )
    {
      if ( *(_DWORD *)v6 == 2 || *(_DWORD *)v6 == 17 )
      {
        v10 = *((_QWORD *)v22 + 1);
      }
      else
      {
        v10 = *((_QWORD *)v22 + 1);
        if ( *(_DWORD *)v6 != 19 )
        {
          v11 = CChannel::PostMessageToChannel((CChannel *)v10, (const struct UCE_RDP_HEADER *)((char *)a2 + 40));
          v4 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1A0u, 0LL);
          goto LABEL_12;
        }
      }
      *(_OWORD *)(v10 + 128) = *(_OWORD *)v6;
      *(_QWORD *)(v10 + 144) = *((_QWORD *)a2 + 7);
      *(_DWORD *)(v10 + 152) = *((_DWORD *)a2 + 16);
      goto LABEL_12;
    }
    SetLastError(0);
    if ( SetEvent(*((HANDLE *)v22 + 2)) )
      goto LABEL_12;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
      v4 = -2003304445;
    v21 = 371;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v4, v21, 0LL);
    goto LABEL_12;
  }
  for ( i = 1; i < *((_DWORD *)this + 19); ++i )
  {
    if ( (unsigned int)HANDLE_TABLE::ValidEntry((CInternalMilCmdConnection *)((char *)this + 64), i) )
    {
      v23 = 0LL;
      if ( (int)CChannelTable::GetMasterTableEntry((CInternalMilCmdConnection *)((char *)this + 64), i, &v23) >= 0 )
      {
        v15 = (CChannel *)*((_QWORD *)v23 + 1);
        if ( *((_BYTE *)v15 + 210) )
        {
          v16 = CChannel::PostMessageToChannel(v15, v6);
          v18 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x15Eu, 0LL);
          if ( !v4 || v4 >= 0 && v18 < 0 )
            v4 = v18;
        }
      }
    }
  }
LABEL_12:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v24);
  return (unsigned int)v4;
}
