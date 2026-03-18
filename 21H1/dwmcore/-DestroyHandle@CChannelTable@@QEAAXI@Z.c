/*
 * XREFs of ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x1801527BC
 * Callers:
 *     ?CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800D8AA0 (-CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 *     ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18015242C (-DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800D9600 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 */

void __fastcall CChannelTable::DestroyHandle(struct _RTL_CRITICAL_SECTION *this, unsigned int a2)
{
  int MasterTableEntry; // eax
  __int64 v5; // rcx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v6; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v7 = this + 1;
  EnterCriticalSection(this + 1);
  MasterTableEntry = CChannelTable::GetMasterTableEntry((CChannelTable *)this, a2, &v6);
  if ( MasterTableEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, MasterTableEntry, 0x50u, 0LL);
  }
  else
  {
    CloseHandle(*((HANDLE *)v6 + 2));
    memset_0((char *)this->LockSemaphore + a2 * this->LockCount, 0, (unsigned int)this->LockCount);
    --LODWORD(this->SpinCount);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
}
