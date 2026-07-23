/*
 * XREFs of MiDecommitHardwareEnclavePages @ 0x140547F28
 * Callers:
 *     MiDecommitEnclavePages @ 0x1408D56C4 (MiDecommitEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1409B3EC4 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402CFD90 (MiPageTableLockIsContended.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     RtlInterlockedSetClearRun @ 0x140360D30 (RtlInterlockedSetClearRun.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     KeBlockEnclavePage @ 0x14051358C (KeBlockEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405137AC (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x1405137F0 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x1405138B0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1405138F4 (KeTrackEnclaveTbFlush.c)
 *     MiGetExceptionInfo @ 0x140532EC0 (MiGetExceptionInfo.c)
 *     MiDeleteEnclavePage @ 0x140548940 (MiDeleteEnclavePage.c)
 */

__int64 __fastcall MiDecommitHardwareEnclavePages(__int64 a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4, int a5)
{
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  _KPROCESS *v11; // rdx
  unsigned int v12; // ebx
  _KPROCESS *v13; // rdx
  ULONG_PTR v14; // rax
  ULONG_PTR v15; // r13
  int v16; // ebx
  unsigned __int8 v17; // bl
  unsigned __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // ebx
  int v25; // r8d
  __int64 v26; // r9
  unsigned int v27; // r10d
  unsigned int v28; // r11d
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 *v31; // rdx
  __int64 i; // rax
  __int64 v33; // rbx
  int v34; // ebx
  __int64 result; // rax
  struct _KTHREAD *v36; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v38; // r15
  __int64 v39; // r14
  unsigned int v40; // edx
  __int64 v41; // rcx
  bool v42; // zf
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // ecx
  volatile signed __int32 *v47; // r9
  __int64 v48; // r10
  int v49; // r15d
  unsigned __int8 v50; // [rsp+30h] [rbp-1A8h]
  int v51; // [rsp+34h] [rbp-1A4h]
  unsigned int v52; // [rsp+3Ch] [rbp-19Ch]
  int v53; // [rsp+40h] [rbp-198h]
  ULONG_PTR v54; // [rsp+48h] [rbp-190h]
  int v55; // [rsp+58h] [rbp-180h] BYREF
  ULONG_PTR v56; // [rsp+60h] [rbp-178h]
  unsigned __int64 v57; // [rsp+68h] [rbp-170h]
  unsigned __int64 ValidPte; // [rsp+70h] [rbp-168h] BYREF
  __int64 v59; // [rsp+78h] [rbp-160h]
  int v60; // [rsp+80h] [rbp-158h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-150h]
  ULONG_PTR v62; // [rsp+90h] [rbp-148h]
  __int64 v63; // [rsp+98h] [rbp-140h]
  __int64 v64; // [rsp+A0h] [rbp-138h]
  __int64 v65; // [rsp+A8h] [rbp-130h]
  ULONG_PTR v66; // [rsp+B0h] [rbp-128h]
  __int64 v67; // [rsp+B8h] [rbp-120h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-118h]
  _QWORD v69[24]; // [rsp+D0h] [rbp-108h] BYREF

  v56 = a3;
  v59 = a2;
  v65 = a2;
  v66 = a3;
  ValidPte = 0LL;
  memset(v69, 0, 0xB8uLL);
  v63 = a2;
  CurrentThread = KeGetCurrentThread();
  v7 = a1 + 1664;
  v67 = v7;
  v8 = 0LL;
  v57 = 0LL;
  v9 = 0;
  v54 = 0LL;
  v64 = 0LL;
  LODWORD(v69[0]) = 1;
  WORD2(v69[0]) = 0;
  v69[2] = 0LL;
  LODWORD(v69[1]) = 20;
  v69[3] = 0LL;
  v10 = 2;
  v53 = 2;
  v50 = MiLockWorkingSetShared(v7);
  v12 = 0;
  while ( 1 )
  {
    v52 = v12;
    if ( v12 >= v10 )
      break;
    if ( v12 == 2 )
    {
      KeTrackEnclaveTbFlush();
      MiInsertTbFlushEntry((__int64)v69, (__int64)(v56 << 25) >> 16, 1LL, 0);
      MiFlushTbList((unsigned int *)v69, v13);
    }
    v14 = v56;
    v15 = v56;
    v62 = v56;
    while ( v15 <= a4 )
    {
      if ( (v15 & 0x78) != 0 || v15 == v14 )
        goto LABEL_18;
      v16 = 0;
      if ( MiWorkingSetIsContended(v7)
        || KeShouldYieldProcessor()
        || v8 && (unsigned int)MiPageTableLockIsContended(v7, v8) )
      {
        v16 = 1;
      }
      if ( v16 != 1 )
      {
LABEL_18:
        v17 = v50;
      }
      else
      {
        if ( v8 )
        {
          MiFlushTbList((unsigned int *)v69, v11);
          MiUnlockPageTableInternal(v7, v8);
          v8 = 0LL;
          v57 = 0LL;
        }
        v17 = v50;
        MiUnlockWorkingSetShared(v7, v50);
        MiLockWorkingSetShared(v7);
      }
      if ( v8 )
      {
        if ( (v15 & 0xFFF) != 0 )
          goto LABEL_23;
        MiFlushTbList((unsigned int *)v69, v11);
        MiUnlockPageTableInternal(v7, v8);
      }
      v8 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v57 = v8;
      MiMakeSystemAddressValid(v15, 0LL, (*(_DWORD *)(v63 + 48) >> 12) & 0x3F, v17, 0);
LABEL_23:
      v18 = MI_READ_PTE_LOCK_FREE(v15);
      ValidPte = v18;
      if ( !v18 )
        goto LABEL_62;
      v19 = (__int64)(v15 << 25) >> 16;
      BugCheckParameter2 = v19;
      if ( v52 )
      {
        if ( v52 == 1 )
        {
          v23 = KeRemoveEnclavePage();
          v24 = v23;
          v51 = v23;
          if ( v23 < 0 )
          {
            if ( v23 != -1073741757 || a5 )
            {
              v24 = 0;
            }
            else
            {
              if ( !v54 )
              {
                while ( 1 )
                {
                  v25 = *(_DWORD *)qword_140C4ED10;
                  v26 = *(_QWORD *)(qword_140C4ED10 + 8);
                  v27 = (*(_DWORD *)(qword_140C4ED10 + 8) & 4) != 0LL ? 0x20 : 0;
                  v60 = 0;
                  v28 = v27 + v25 - 1;
                  v29 = v26 - ((v26 & 4) != 0 ? 4 : 0);
                  if ( v25 )
                  {
                    v31 = (__int64 *)(v29 + 8 * ((unsigned __int64)v27 >> 6));
                    for ( i = *v31 | ((1LL << v27) - 1); i == -1; i = *v31 )
                    {
                      if ( (unsigned __int64)++v31 > v29 + 8 * ((unsigned __int64)v28 >> 6) )
                        goto LABEL_43;
                    }
                    _BitScanForward64((unsigned __int64 *)&i, ~i);
                    v60 = i;
                    v30 = (unsigned int)i + ((unsigned int)(((__int64)v31 - v29) >> 3) << 6);
                    if ( (unsigned int)v30 > v28 )
                      v30 = 0xFFFFFFFFLL;
                  }
                  else
                  {
LABEL_43:
                    v30 = 0xFFFFFFFFLL;
                  }
                  v9 = v30 - v27;
                  if ( (_DWORD)v30 == -1 )
                    v9 = -1;
                  if ( v9 == -1 )
                    break;
                  if ( (unsigned int)RtlInterlockedSetClearRun(qword_140C4ED10, v9, 1u) )
                    goto LABEL_56;
                }
                MiFlushTbList((unsigned int *)v69, (_KPROCESS *)v30);
                v33 = v67;
                MiUnlockPageTableInternal(v67, v8);
                MiUnlockWorkingSetShared(v33, v50);
                --CurrentThread->SpecialApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4ED18, 0LL);
                v9 = 0;
                MiLockWorkingSetShared(v33);
                MiMakeSystemAddressValid(v15, 0LL, (*(_DWORD *)(v63 + 48) >> 12) & 0x3F, v50, 0);
LABEL_56:
                v54 = qword_140C4ED08 + 8 * v9;
                ++v53;
                v24 = v51;
              }
              KeBlockEnclavePage();
            }
          }
          if ( v24 < 0 )
            goto LABEL_61;
        }
        else
        {
          do
          {
            ExAcquireSpinLockShared(&dword_140C4ED20);
            v34 = KeOutPageEnclavePage(v19, *(_QWORD *)(v59 + 88));
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4ED20);
          }
          while ( v34 == -1073741802 );
          if ( v34 < 0 )
            KeBugCheckEx(0x1Au, 0x18011713uLL, v19, v34, 0LL);
        }
        MiDeleteEnclavePage(v15, 1LL);
      }
      else
      {
        if ( MiPteInShadowRange((unsigned __int64)&ValidPte)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v18 & 1) != 0
          && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v22 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&ValidPte >> 3) & 0x1FF));
            if ( (v22 & 0x20) != 0 )
              v18 |= 0x20uLL;
            if ( (v22 & 0x42) != 0 )
              v18 |= 0x42uLL;
          }
        }
        ValidPte = MiMakeValidPte(v15, (v18 >> 12) & 0xFFFFFFFFFLL, 3221225476LL, v20);
        MiWriteValidPteNewProtection(v15, ValidPte);
      }
LABEL_61:
      MiInsertTbFlushEntry((__int64)v69, v19, 1LL, 0);
      v7 = v67;
LABEL_62:
      v15 += 8LL;
      v62 = v15;
      v14 = v56;
    }
    MiFlushTbList((unsigned int *)v69, v11);
    if ( v8 )
    {
      MiUnlockPageTableInternal(v7, v8);
      v8 = 0LL;
      v57 = 0LL;
    }
    v12 = v52 + 1;
    v10 = v53;
  }
  result = MiUnlockWorkingSetShared(v7, v50);
  if ( v54 )
  {
    if ( v9 )
    {
      v46 = 1;
      v47 = (volatile signed __int32 *)(*(_QWORD *)(qword_140C4ED10 + 8) + 4 * ((unsigned __int64)v9 >> 5));
      v48 = v9 & 0x1F;
      result = v48 + 1;
      if ( (unsigned __int64)(v48 + 1) > 0x20 )
      {
        v49 = v9 & 0x1F;
        if ( v49 )
        {
          result = (unsigned int)~(((1 << (32 - v49)) - 1) << v48);
          _InterlockedAnd(v47, result);
          v46 = 1 - (32 - v49);
          ++v47;
        }
        if ( v46 >= 0x20 )
        {
          result = (unsigned __int64)v46 >> 5;
          do
          {
            *v47++ = 0;
            v46 -= 32;
            --result;
          }
          while ( result );
        }
        if ( v46 )
          _InterlockedAnd(v47, -1 << v46);
      }
      else
      {
        _InterlockedAnd(v47, ~(1 << v48));
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4ED18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4ED18);
      v55 = 0;
      v36 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C4ED18) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)v36->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v36->SpecialApcDisable;
      v38 = ++v36->AbAllocationRegionCount;
      v39 = 0LL;
      v40 = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v42 = !_BitScanReverse((unsigned int *)&v43, v40);
        if ( v42 )
          break;
        v40 &= ~(1 << v43);
        v41 = (__int64)&v36->LockEntries[v43];
        if ( (*(_BYTE *)(v41 + 26) & 1) != 0
          && (*(_DWORD *)(v41 + 32) & 1) == 0
          && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C4ED18 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v41 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v41 + 26) &= ~1u;
          if ( *(_QWORD *)(v41 + 32) )
          {
            v39 = v41;
            break;
          }
        }
      }
      if ( v39 )
      {
        *(_BYTE *)(v39 + 32) |= 2u;
        if ( *(__int64 *)(v39 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v39);
        v55 = *(_DWORD *)(v39 + 88) & 0x1FFFF;
        *(_DWORD *)(v39 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v39 + 25) &= ~1u;
        *(_QWORD *)(v39 + 32) = 0LL;
        v44 = (signed __int64)(v39 - (unsigned __int64)v36->LockEntries) / 96;
        if ( v38 == 1 )
          v36->AbEntrySummary |= 1 << v44;
        else
          _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v44);
      }
      else if ( (*((_DWORD *)&v36->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v36, (ULONG_PTR)&qword_140C4ED18, SessionId, 0LL);
      }
      --v36->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v36, (__int64)&qword_140C4ED18, &v55);
      v42 = v36->SpecialApcDisable++ == -1;
      if ( v42 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
        KiCheckForKernelApcDelivery(v45);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return result;
}
