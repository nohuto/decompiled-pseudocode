/*
 * XREFs of KeFlushSingleTb @ 0x14031CE3C
 * Callers:
 *     MiValidateInPage @ 0x1402297C0 (MiValidateInPage.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiNoFaultFound @ 0x1402BE258 (MiNoFaultFound.c)
 *     MiValidFault @ 0x1402EFCC0 (MiValidFault.c)
 *     MiFillPhysicalPages @ 0x1402F51CC (MiFillPhysicalPages.c)
 *     MiAbortCombineScan @ 0x1402F7290 (MiAbortCombineScan.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiTradeActivePage @ 0x14032D448 (MiTradeActivePage.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x140355280 (MiSwapStackPageNoDpc.c)
 *     MiClearPageFileHash @ 0x1403597D4 (MiClearPageFileHash.c)
 *     MiMapSinglePage @ 0x140368E74 (MiMapSinglePage.c)
 *     MiLockPagedAddress @ 0x140369694 (MiLockPagedAddress.c)
 *     MmStealTopLevelPage @ 0x140385CD8 (MmStealTopLevelPage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140394F3C (MiUpdateImagePfnImportRelocations.c)
 *     MiPrepareToStealNonPagedPool @ 0x1403C20DC (MiPrepareToStealNonPagedPool.c)
 *     MiReleaseFaultPte @ 0x14053549C (MiReleaseFaultPte.c)
 *     MiDbgCopyMemoryTarget @ 0x140540670 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x140540BEC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140540D20 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1405410F4 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x1405435E4 (MiLargePageFault.c)
 *     MiScrubAwePage @ 0x14054886C (MiScrubAwePage.c)
 *     MiRelocateImagePfn @ 0x1405FC710 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14078778C (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x140A54C28 (MxCopyPage.c)
 *     MxSwapPages @ 0x140A5547C (MxSwapPages.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x14023A380 (KiIsSecureProcessFlush.c)
 *     KiPreprocessFlushTb @ 0x14023A850 (KiPreprocessFlushTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1402FCFDC (KeFlushProcessWriteBuffers.c)
 *     KxFlushSingleTb @ 0x14031CF8C (KxFlushSingleTb.c)
 *     HvlFlushRangeListTb @ 0x14038D59C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14038E36C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14038E3A4 (KiFlushAffinity.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x1403F82A0 (KiSetUserTbFlushPending.c)
 *     VmFlushTb @ 0x14059D27C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B1C88 (ExFlushTb.c)
 */

char __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  char v4; // si
  char result; // al
  unsigned __int64 v8; // rbx
  int v9; // eax
  int v10; // r8d
  char v11; // r11
  int v12; // r9d
  char v13; // r10
  _KPROCESS *Process; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v17; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // bl
  _DWORD *v23; // r10
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  unsigned __int8 v28; // [rsp+40h] [rbp-40h] BYREF
  char v29; // [rsp+41h] [rbp-3Fh] BYREF
  char v30[6]; // [rsp+42h] [rbp-3Eh] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-38h] BYREF
  __int64 v32; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-28h] BYREF
  __int128 v34; // [rsp+60h] [rbp-20h]

  v32 = 0LL;
  v29 = 0;
  v30[0] = 0;
  v28 = 0;
  v4 = 0;
  if ( KiPreprocessFlushTb(0, a2, a3, &v29, &v28) )
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
            *(_QWORD *)&v34 = 1LL;
            *((_QWORD *)&v34 + 1) = a1;
            _EAX = 0;
            __asm { invpcid eax, [rbp+var_20] }
          }
          else
          {
            KiSetUserTbFlushPending(Process, 15LL);
          }
        }
      }
    }
    __invlpg((void *)a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v17 = v28;
      if ( v28 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = v28;
        v20 = ~(unsigned __int16)(-1LL << (v28 + 1));
        v21 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v17 = v28;
    }
    __writecr8(v17);
    v4 = 1;
  }
  result = KiIsSecureProcessFlush(a1, a2);
  if ( result || v29 )
  {
    KiPrepareFlushParameters(a2, &v32, v30);
    v9 = KiFlushAffinity(a3);
    LOBYTE(v10) = v30[0];
    LOBYTE(v12) = v11;
    v33 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v32, v9, v10, v12, v13, 1, (__int64)&v33);
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
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( VmTbFlushEnabled )
  {
    v31 = v8;
    result = VmFlushTb(1LL, &v31, a2);
  }
  if ( ExTbFlushActive )
  {
    v31 = v8;
    v22 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
    {
      v23 = KeGetCurrentPrcb()->SchedulerAssist;
      v23[5] |= (-1 << (v22 + 1)) & 0xFFFC;
    }
    ExFlushTb(1LL, &v31, a2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && v22 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (v22 + 1));
          v21 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
    result = v22;
    __writecr8(v22);
  }
  return result;
}
