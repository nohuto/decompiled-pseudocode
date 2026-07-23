/*
 * XREFs of KeFlushSingleTb @ 0x1402599A8
 * Callers:
 *     MiTradeActivePage @ 0x1402347D0 (MiTradeActivePage.c)
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x140245010 (MiSwapStackPageNoDpc.c)
 *     MiClearPageFileHash @ 0x140249FA4 (MiClearPageFileHash.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiFillPhysicalPages @ 0x1402977C0 (MiFillPhysicalPages.c)
 *     MiValidFault @ 0x1402AE050 (MiValidFault.c)
 *     MiValidateInPage @ 0x1402DFDC0 (MiValidateInPage.c)
 *     MiAbortCombineScan @ 0x14030E4C0 (MiAbortCombineScan.c)
 *     MiNoFaultFound @ 0x14031CF18 (MiNoFaultFound.c)
 *     MiMapSinglePage @ 0x14036B2B4 (MiMapSinglePage.c)
 *     MiLockPagedAddress @ 0x14036BAD4 (MiLockPagedAddress.c)
 *     MmStealTopLevelPage @ 0x140388728 (MmStealTopLevelPage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403979C4 (MiUpdateImagePfnImportRelocations.c)
 *     MiPrepareToStealNonPagedPool @ 0x1403C53DC (MiPrepareToStealNonPagedPool.c)
 *     MiReleaseFaultPte @ 0x14053ABAC (MiReleaseFaultPte.c)
 *     MiDbgCopyMemoryTarget @ 0x140545D80 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x1405462FC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140546430 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140546804 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiLargePageFault @ 0x140548CF4 (MiLargePageFault.c)
 *     MiScrubAwePage @ 0x14054DF7C (MiScrubAwePage.c)
 *     MiRelocateImagePfn @ 0x1406EB9C0 (MiRelocateImagePfn.c)
 *     MiMarkBootGuardPage @ 0x14079FBBC (MiMarkBootGuardPage.c)
 *     MxCopyPage @ 0x140A578CC (MxCopyPage.c)
 *     MxSwapPages @ 0x140A58120 (MxSwapPages.c)
 * Callees:
 *     KxFlushSingleTb @ 0x140259AF8 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140268CA4 (KeFlushProcessWriteBuffers.c)
 *     KiPreprocessFlushTb @ 0x1402D5F30 (KiPreprocessFlushTb.c)
 *     KiIsSecureProcessFlush @ 0x140346230 (KiIsSecureProcessFlush.c)
 *     HvlFlushRangeListTb @ 0x1403900AC (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x140390E7C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x140390EB4 (KiFlushAffinity.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x1403FF6D0 (KiSetUserTbFlushPending.c)
 *     VmFlushTb @ 0x1405A297C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B7448 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleTb(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  char v4; // si
  __int64 v7; // r8
  __int64 result; // rax
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
  if ( (unsigned __int8)KiPreprocessFlushTb(0, a2, a3, (unsigned int)&v31, (__int64)&v30) )
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
  if ( (_BYTE)result || v31 )
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
