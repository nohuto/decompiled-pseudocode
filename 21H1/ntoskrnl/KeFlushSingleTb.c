/*
 * XREFs of KeFlushSingleTb @ 0x14034C17C
 * Callers:
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiNoFaultFound @ 0x14022B5D8 (MiNoFaultFound.c)
 *     MiValidateInPage @ 0x140282810 (MiValidateInPage.c)
 *     MiTradeActivePage @ 0x1402F16A8 (MiTradeActivePage.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x1403177D0 (MiSwapStackPageNoDpc.c)
 *     MiClearPageFileHash @ 0x14031BC04 (MiClearPageFileHash.c)
 *     MiValidFault @ 0x140334E00 (MiValidFault.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiFillPhysicalPages @ 0x1403511A8 (MiFillPhysicalPages.c)
 *     MiAbortCombineScan @ 0x140353270 (MiAbortCombineScan.c)
 *     MiMapSinglePage @ 0x1403684B4 (MiMapSinglePage.c)
 *     MiLockPagedAddress @ 0x140368CD4 (MiLockPagedAddress.c)
 *     MmStealTopLevelPage @ 0x140384D68 (MmStealTopLevelPage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14039436C (MiUpdateImagePfnImportRelocations.c)
 *     MiPrepareToStealNonPagedPool @ 0x1403C121C (MiPrepareToStealNonPagedPool.c)
 *     MiReleaseFaultPte @ 0x140534E4C (MiReleaseFaultPte.c)
 *     MiDbgCopyMemoryTarget @ 0x140540020 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x14054059C (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405406D0 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140540AA4 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x140542F94 (MiLargePageFault.c)
 *     MiScrubAwePage @ 0x14054821C (MiScrubAwePage.c)
 *     MiRelocateImagePfn @ 0x140631750 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x140781E08 (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x140A4EF28 (MxCopyPage.c)
 *     MxSwapPages @ 0x140A4F77C (MxSwapPages.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x1402933D0 (KiIsSecureProcessFlush.c)
 *     KiPreprocessFlushTb @ 0x140293880 (KiPreprocessFlushTb.c)
 *     KxFlushSingleTb @ 0x14034C2CC (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140358FBC (KeFlushProcessWriteBuffers.c)
 *     HvlFlushRangeListTb @ 0x14038CA2C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14038D7FC (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14038D834 (KiFlushAffinity.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x1403F7010 (KiSetUserTbFlushPending.c)
 *     VmFlushTb @ 0x14059CB8C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B1568 (ExFlushTb.c)
 */

char __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  char v4; // si
  __int64 v7; // r8
  char result; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  int v11; // eax
  int v12; // r8d
  char v13; // r11
  int v14; // r9d
  char v15; // r10
  _KPROCESS *Process; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v19; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // bl
  _DWORD *v25; // r10
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  unsigned __int8 v30; // [rsp+40h] [rbp-40h] BYREF
  char v31; // [rsp+41h] [rbp-3Fh] BYREF
  char v32[6]; // [rsp+42h] [rbp-3Eh] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-38h] BYREF
  __int64 v34; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-28h] BYREF
  __int128 v36; // [rsp+60h] [rbp-20h]

  v34 = 0LL;
  v31 = 0;
  v32[0] = 0;
  v30 = 0;
  v4 = 0;
  if ( KiPreprocessFlushTb(0, a2, a3, &v31, &v30) )
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
            *(_QWORD *)&v36 = 1LL;
            *((_QWORD *)&v36 + 1) = a1;
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
      v19 = v30;
      if ( v30 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = v30;
        v22 = ~(unsigned __int16)(-1LL << (v30 + 1));
        v23 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v19 = v30;
    }
    __writecr8(v19);
    v4 = 1;
  }
  result = KiIsSecureProcessFlush(a1, a2);
  if ( result || v31 )
  {
    KiPrepareFlushParameters(a2, &v34, v32);
    v11 = KiFlushAffinity(a3);
    LOBYTE(v12) = v32[0];
    LOBYTE(v14) = v13;
    v35 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v34, v11, v12, v14, v15, 1, (__int64)&v35);
    v4 |= result;
  }
  if ( v4 )
  {
    if ( a2 == 4 )
    {
      LOBYTE(v9) = 1;
      result = KeFlushProcessWriteBuffers(v9);
    }
  }
  else
  {
    result = KxFlushSingleTb(a1, a2, a3);
  }
  v10 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( VmTbFlushEnabled )
  {
    v33 = v10;
    result = VmFlushTb(1LL, &v33, a2);
  }
  if ( ExTbFlushActive )
  {
    v33 = v10;
    v24 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
    {
      v25 = KeGetCurrentPrcb()->SchedulerAssist;
      v25[5] |= (-1 << (v24 + 1)) & 0xFFFC;
    }
    ExFlushTb(1LL, &v33, a2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && v24 <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (v24 + 1));
          v23 = (v29 & v28[5]) == 0;
          v28[5] &= v29;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
    }
    result = v24;
    __writecr8(v24);
  }
  return result;
}
