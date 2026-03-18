/*
 * XREFs of KeFlushSingleTb @ 0x1402EA644
 * Callers:
 *     MiFillPhysicalPages @ 0x140235AAC (MiFillPhysicalPages.c)
 *     MiLockPagedAddress @ 0x140245DF4 (MiLockPagedAddress.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x14024A0FC (MiSwapStackPageNoDpc.c)
 *     MiPrepareToStealNonPagedPool @ 0x14024DE5C (MiPrepareToStealNonPagedPool.c)
 *     MiAbortCombineScan @ 0x140268998 (MiAbortCombineScan.c)
 *     MiMapSinglePage @ 0x14026C124 (MiMapSinglePage.c)
 *     MiNoFaultFound @ 0x14027B0B8 (MiNoFaultFound.c)
 *     MiValidFault @ 0x140291FC0 (MiValidFault.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1402DAEB0 (MiUpdateImagePfnImportRelocations.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiTradeActivePage @ 0x1402EA95C (MiTradeActivePage.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiValidateInPage @ 0x140338080 (MiValidateInPage.c)
 *     MmStealTopLevelPage @ 0x14036CD34 (MmStealTopLevelPage.c)
 *     MiDbgReleaseAddress @ 0x1403AD0A8 (MiDbgReleaseAddress.c)
 *     MiReleaseFaultPte @ 0x140596090 (MiReleaseFaultPte.c)
 *     MiDbgCopyMemoryTarget @ 0x1405A47A0 (MiDbgCopyMemoryTarget.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405A4C68 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1405A4FB8 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x1405A7708 (MiLargePageFault.c)
 *     MiScrubAwePage @ 0x1405AC670 (MiScrubAwePage.c)
 *     MiRelocateImagePfn @ 0x1407BF070 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x140829B50 (MiMarkBootGuardPage.c)
 *     MxSwapPages @ 0x140AF3FFC (MxSwapPages.c)
 *     MxCopyPage @ 0x140B51C0C (MxCopyPage.c)
 * Callees:
 *     KxFlushSingleTb @ 0x1402EA7E4 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 *     KiIsSecureProcessFlush @ 0x1402F3A88 (KiIsSecureProcessFlush.c)
 *     KiPreprocessFlushTb @ 0x1402F3FE0 (KiPreprocessFlushTb.c)
 *     HvlFlushRangeListTb @ 0x14039DB1C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14039E48C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14039E55C (KiFlushAffinity.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x140420AD0 (KiSetUserTbFlushPending.c)
 *     VmFlushTb @ 0x14045F6DE (VmFlushTb.c)
 *     ExFlushTb @ 0x14063F75C (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  char v4; // si
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  int v12; // eax
  int v13; // r8d
  char v14; // r11
  int v15; // r9d
  char v16; // r10
  _KPROCESS *Process; // rcx
  unsigned __int8 v18; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // bl
  _DWORD *v26; // r10
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  unsigned __int8 v31; // [rsp+40h] [rbp-40h] BYREF
  char v32; // [rsp+41h] [rbp-3Fh] BYREF
  char v33[6]; // [rsp+42h] [rbp-3Eh] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-38h] BYREF
  __int64 v35; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-28h] BYREF
  __int128 v37; // [rsp+60h] [rbp-20h]

  v35 = 0LL;
  v32 = 0;
  v33[0] = 0;
  v31 = 0;
  v4 = 0;
  if ( (unsigned __int8)KiPreprocessFlushTb(0, a2, a3, (unsigned int)&v32, (__int64)&v31) )
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
            *(_QWORD *)&v37 = 1LL;
            *((_QWORD *)&v37 + 1) = a1;
            _EAX = 0;
            __asm { invpcid eax, [rbp+var_20] }
          }
          else
          {
            KiSetUserTbFlushPending(Process, 15LL, v7, v8);
          }
        }
      }
    }
    __invlpg((void *)a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v18 = v31;
      if ( v31 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = v31;
        v23 = ~(unsigned __int16)(-1LL << (v31 + 1));
        v24 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v18 = v31;
    }
    __writecr8(v18);
    v4 = 1;
  }
  result = KiIsSecureProcessFlush(a1, a2);
  if ( (_BYTE)result || v32 )
  {
    KiPrepareFlushParameters(a2, &v35, v33);
    v12 = KiFlushAffinity(a3);
    LOBYTE(v13) = v33[0];
    LOBYTE(v15) = v14;
    v36 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v35, v12, v13, v15, v16, 1, (__int64)&v36);
    v4 |= result;
  }
  if ( v4 )
  {
    if ( a2 == 4 )
    {
      LOBYTE(v10) = 1;
      result = KeFlushProcessWriteBuffers(v10);
    }
  }
  else
  {
    result = KxFlushSingleTb(a1, a2, a3);
  }
  v11 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( VmTbFlushEnabled )
  {
    v34 = v11;
    result = VmFlushTb(1LL, &v34, a2);
  }
  if ( ExTbFlushActive )
  {
    v34 = v11;
    v25 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
    {
      v26 = KeGetCurrentPrcb()->SchedulerAssist;
      v26[5] |= (-1 << (v25 + 1)) & 0xFFFC;
    }
    ExFlushTb(1LL, &v34, a2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && v25 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (v25 + 1));
          v24 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
    }
    result = v25;
    __writecr8(v25);
  }
  return result;
}
