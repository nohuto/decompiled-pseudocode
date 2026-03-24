/*
 * XREFs of KeFlushSingleTb @ 0x14026BA08
 * Callers:
 *     MiValidFault @ 0x140209750 (MiValidFault.c)
 *     MiValidateInPage @ 0x14023B570 (MiValidateInPage.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiTradeActivePage @ 0x1402B65F0 (MiTradeActivePage.c)
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x1402C6830 (MiSwapStackPageNoDpc.c)
 *     MiClearPageFileHash @ 0x1402CB854 (MiClearPageFileHash.c)
 *     MiFillPhysicalPages @ 0x1402E6470 (MiFillPhysicalPages.c)
 *     MiAbortCombineScan @ 0x140303770 (MiAbortCombineScan.c)
 *     MiNoFaultFound @ 0x1403121C8 (MiNoFaultFound.c)
 *     MiMapSinglePage @ 0x14036B104 (MiMapSinglePage.c)
 *     MiLockPagedAddress @ 0x14036B924 (MiLockPagedAddress.c)
 *     MmStealTopLevelPage @ 0x1403885D8 (MmStealTopLevelPage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140397874 (MiUpdateImagePfnImportRelocations.c)
 *     MiPrepareToStealNonPagedPool @ 0x1403C4FAC (MiPrepareToStealNonPagedPool.c)
 *     MiReleaseFaultPte @ 0x14053A96C (MiReleaseFaultPte.c)
 *     MiDbgCopyMemoryTarget @ 0x140545B40 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1405460BC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405461F0 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1405465C4 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x140548AB4 (MiLargePageFault.c)
 *     MiScrubAwePage @ 0x14054DD3C (MiScrubAwePage.c)
 *     MiRelocateImagePfn @ 0x1405FC260 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14079F9BC (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x140A568CC (MxCopyPage.c)
 *     MxSwapPages @ 0x140A57120 (MxSwapPages.c)
 * Callees:
 *     KiPreprocessFlushTb @ 0x1402316E0 (KiPreprocessFlushTb.c)
 *     KxFlushSingleTb @ 0x14026BB58 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x14027AD04 (KeFlushProcessWriteBuffers.c)
 *     KiIsSecureProcessFlush @ 0x14033B4E0 (KiIsSecureProcessFlush.c)
 *     HvlFlushRangeListTb @ 0x14038FF5C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x140390D2C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x140390D64 (KiFlushAffinity.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x1403FF4F0 (KiSetUserTbFlushPending.c)
 *     VmFlushTb @ 0x1405A274C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B7218 (ExFlushTb.c)
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
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v20; // si
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
  if ( KiPreprocessFlushTb(0, a2, a3, &v32, &v31) )
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
      v20 = v31;
      if ( v31 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = v31;
        v23 = ~(unsigned __int16)(-1LL << (v31 + 1));
        v24 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v20 = v31;
    }
    __writecr8(v20);
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
