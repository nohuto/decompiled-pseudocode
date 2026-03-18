/*
 * XREFs of KeFlushSingleTb @ 0x140353AC8
 * Callers:
 *     MiValidFault @ 0x14026AA70 (MiValidFault.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiNoFaultFound @ 0x1402997A8 (MiNoFaultFound.c)
 *     MiValidateInPage @ 0x1402C9D90 (MiValidateInPage.c)
 *     MiTradeActivePage @ 0x140313B60 (MiTradeActivePage.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x140325F40 (MiSwapStackPageNoDpc.c)
 *     MiClearPageFileHash @ 0x14032A0D4 (MiClearPageFileHash.c)
 *     MiFillPhysicalPages @ 0x1403333BC (MiFillPhysicalPages.c)
 *     MiAbortCombineScan @ 0x140349794 (MiAbortCombineScan.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiMapSinglePage @ 0x14036AE54 (MiMapSinglePage.c)
 *     MiLockPagedAddress @ 0x14036B674 (MiLockPagedAddress.c)
 *     MmStealTopLevelPage @ 0x140387E78 (MmStealTopLevelPage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403973FC (MiUpdateImagePfnImportRelocations.c)
 *     MiPrepareToStealNonPagedPool @ 0x1403C484C (MiPrepareToStealNonPagedPool.c)
 *     MiReleaseFaultPte @ 0x140538E6C (MiReleaseFaultPte.c)
 *     MiDbgCopyMemoryTarget @ 0x140544040 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1405445BC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405446F0 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140544AC4 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x140546FB4 (MiLargePageFault.c)
 *     MiScrubAwePage @ 0x14054C23C (MiScrubAwePage.c)
 *     MiRelocateImagePfn @ 0x1406818C0 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14079549C (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x140A552A8 (MxCopyPage.c)
 *     MxSwapPages @ 0x140A55AFC (MxSwapPages.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x1402BF970 (KiIsSecureProcessFlush.c)
 *     KiPreprocessFlushTb @ 0x1402BFF00 (KiPreprocessFlushTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1402EA60C (KeFlushProcessWriteBuffers.c)
 *     KxFlushSingleTb @ 0x140353C18 (KxFlushSingleTb.c)
 *     HvlFlushRangeListTb @ 0x14038FA8C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14039085C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x140390894 (KiFlushAffinity.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x1403FD230 (KiSetUserTbFlushPending.c)
 *     VmFlushTb @ 0x1405A0D1C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B57E8 (ExFlushTb.c)
 */

char __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  char v4; // si
  __int64 v7; // r8
  char result; // al
  unsigned __int64 v9; // rbx
  int v10; // eax
  int v11; // r8d
  char v12; // r11
  int v13; // r9d
  char v14; // r10
  _KPROCESS *Process; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v18; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // bl
  _DWORD *v24; // r10
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  unsigned __int8 v29; // [rsp+40h] [rbp-40h] BYREF
  char v30; // [rsp+41h] [rbp-3Fh] BYREF
  char v31[6]; // [rsp+42h] [rbp-3Eh] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-38h] BYREF
  __int64 v33; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-28h] BYREF
  __int128 v35; // [rsp+60h] [rbp-20h]

  v33 = 0LL;
  v30 = 0;
  v31[0] = 0;
  v29 = 0;
  v4 = 0;
  if ( KiPreprocessFlushTb(0, a2, a3, &v30, &v29) )
  {
    if ( ((1 << a2) & 0xA) != 0 )
    {
      if ( KiFlushPcid )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( !Process->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v35 = 1LL;
            *((_QWORD *)&v35 + 1) = a1;
            _EAX = 0;
            __asm { invpcid eax, [rbp+var_20] }
          }
          else
          {
            KiSetUserTbFlushPending(Process, 15LL, v7);
          }
        }
      }
    }
    __invlpg((void *)a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v18 = v29;
      if ( v29 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = v29;
        v21 = ~(unsigned __int16)(-1LL << (v29 + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v18 = v29;
    }
    __writecr8(v18);
    v4 = 1;
  }
  result = KiIsSecureProcessFlush(a1, a2);
  if ( result || v30 )
  {
    KiPrepareFlushParameters(a2, &v33, v31);
    v10 = KiFlushAffinity(a3);
    LOBYTE(v11) = v31[0];
    LOBYTE(v13) = v12;
    v34 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v33, v10, v11, v13, v14, 1, (__int64)&v34);
    v4 |= result;
  }
  if ( v4 )
  {
    if ( a2 == 4 )
      result = KeFlushProcessWriteBuffers(1);
  }
  else
  {
    result = KxFlushSingleTb(a1, a2, a3);
  }
  v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( VmTbFlushEnabled )
  {
    v32 = v9;
    result = VmFlushTb(1LL, &v32, a2);
  }
  if ( ExTbFlushActive )
  {
    v32 = v9;
    v23 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v23 <= 0xFu )
    {
      v24 = KeGetCurrentPrcb()->SchedulerAssist;
      v24[5] |= (-1 << (v23 + 1)) & 0xFFFC;
    }
    ExFlushTb(1LL, &v32, a2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && v23 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (v23 + 1));
          v22 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
    }
    result = v23;
    __writecr8(v23);
  }
  return result;
}
