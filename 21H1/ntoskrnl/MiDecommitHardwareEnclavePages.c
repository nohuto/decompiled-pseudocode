/*
 * XREFs of MiDecommitHardwareEnclavePages @ 0x140543F08
 * Callers:
 *     MiDecommitEnclavePages @ 0x1408CE534 (MiDecommitEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1409AD0F4 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     RtlInterlockedSetClearRun @ 0x14034F770 (RtlInterlockedSetClearRun.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KeBlockEnclavePage @ 0x14050F60C (KeBlockEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x14050F82C (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x14050F870 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x14050F930 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x14050F974 (KeTrackEnclaveTbFlush.c)
 *     MiGetExceptionInfo @ 0x14052EEA0 (MiGetExceptionInfo.c)
 *     MiDeleteEnclavePage @ 0x140544920 (MiDeleteEnclavePage.c)
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
  __int64 v17; // r8
  unsigned __int8 v18; // bl
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v24; // rax
  int v25; // eax
  int v26; // ebx
  int v27; // r8d
  __int64 v28; // r9
  unsigned int v29; // r10d
  unsigned int v30; // r11d
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 *v33; // rdx
  __int64 i; // rax
  __int64 v35; // rbx
  __int64 v36; // r8
  int v37; // ebx
  __int64 v38; // r8
  __int64 result; // rax
  struct _KTHREAD *v40; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v42; // r15
  __int64 v43; // r14
  unsigned int v44; // edx
  __int64 v45; // rcx
  bool v46; // zf
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _DWORD *v52; // r9
  unsigned int v53; // ecx
  volatile signed __int32 *v54; // r9
  __int64 v55; // r10
  int v56; // r15d
  unsigned __int8 v57; // [rsp+30h] [rbp-1A8h]
  int v58; // [rsp+34h] [rbp-1A4h]
  unsigned int v59; // [rsp+3Ch] [rbp-19Ch]
  int v60; // [rsp+40h] [rbp-198h]
  ULONG_PTR v61; // [rsp+48h] [rbp-190h]
  int v62; // [rsp+58h] [rbp-180h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-178h]
  unsigned __int64 v64; // [rsp+68h] [rbp-170h]
  unsigned __int64 ValidPte; // [rsp+70h] [rbp-168h] BYREF
  __int64 v66; // [rsp+78h] [rbp-160h]
  int v67; // [rsp+80h] [rbp-158h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-150h]
  ULONG_PTR v69; // [rsp+90h] [rbp-148h]
  __int64 v70; // [rsp+98h] [rbp-140h]
  __int64 v71; // [rsp+A0h] [rbp-138h]
  __int64 v72; // [rsp+A8h] [rbp-130h]
  ULONG_PTR v73; // [rsp+B0h] [rbp-128h]
  __int64 v74; // [rsp+B8h] [rbp-120h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-118h]
  _QWORD v76[24]; // [rsp+D0h] [rbp-108h] BYREF

  BugCheckParameter1 = a3;
  v66 = a2;
  v72 = a2;
  v73 = a3;
  ValidPte = 0LL;
  memset(v76, 0, 0xB8uLL);
  v70 = a2;
  CurrentThread = KeGetCurrentThread();
  v7 = a1 + 1664;
  v74 = v7;
  v8 = 0LL;
  v64 = 0LL;
  v9 = 0;
  v61 = 0LL;
  v71 = 0LL;
  LODWORD(v76[0]) = 1;
  WORD2(v76[0]) = 0;
  v76[2] = 0LL;
  LODWORD(v76[1]) = 20;
  v76[3] = 0LL;
  v10 = 2;
  v60 = 2;
  v57 = MiLockWorkingSetShared(v7);
  v12 = 0;
  while ( 1 )
  {
    v59 = v12;
    if ( v12 >= v10 )
      break;
    if ( v12 == 2 )
    {
      KeTrackEnclaveTbFlush();
      MiInsertTbFlushEntry((__int64)v76, (__int64)(BugCheckParameter1 << 25) >> 16, 1LL, 0);
      MiFlushTbList((__int64)v76, v13);
    }
    v14 = BugCheckParameter1;
    v15 = BugCheckParameter1;
    v69 = BugCheckParameter1;
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
        v18 = v57;
      }
      else
      {
        if ( v8 )
        {
          MiFlushTbList((__int64)v76, v11);
          MiUnlockPageTableInternal(v7, v8, v17);
          v8 = 0LL;
          v64 = 0LL;
        }
        v18 = v57;
        MiUnlockWorkingSetShared(v7, v57);
        MiLockWorkingSetShared(v7);
      }
      if ( v8 )
      {
        if ( (v15 & 0xFFF) != 0 )
          goto LABEL_23;
        MiFlushTbList((__int64)v76, v11);
        MiUnlockPageTableInternal(v7, v8, v19);
      }
      v8 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v64 = v8;
      MiMakeSystemAddressValid(v15, 0LL, (*(_DWORD *)(v70 + 48) >> 12) & 0x3F, v18, 0);
LABEL_23:
      v20 = MI_READ_PTE_LOCK_FREE(v15);
      ValidPte = v20;
      if ( !v20 )
        goto LABEL_62;
      v21 = (__int64)(v15 << 25) >> 16;
      BugCheckParameter2 = v21;
      if ( v59 )
      {
        if ( v59 == 1 )
        {
          v25 = KeRemoveEnclavePage();
          v26 = v25;
          v58 = v25;
          if ( v25 < 0 )
          {
            if ( v25 != -1073741757 || a5 )
            {
              v26 = 0;
            }
            else
            {
              if ( !v61 )
              {
                while ( 1 )
                {
                  v27 = *(_DWORD *)qword_140C4EDD0;
                  v28 = *(_QWORD *)(qword_140C4EDD0 + 8);
                  v29 = (*(_DWORD *)(qword_140C4EDD0 + 8) & 4) != 0LL ? 0x20 : 0;
                  v67 = 0;
                  v30 = v29 + v27 - 1;
                  v31 = v28 - ((v28 & 4) != 0 ? 4 : 0);
                  if ( v27 )
                  {
                    v33 = (__int64 *)(v31 + 8 * ((unsigned __int64)v29 >> 6));
                    for ( i = *v33 | ((1LL << v29) - 1); i == -1; i = *v33 )
                    {
                      if ( (unsigned __int64)++v33 > v31 + 8 * ((unsigned __int64)v30 >> 6) )
                        goto LABEL_43;
                    }
                    _BitScanForward64((unsigned __int64 *)&i, ~i);
                    v67 = i;
                    v32 = (unsigned int)i + ((unsigned int)(((__int64)v33 - v31) >> 3) << 6);
                    if ( (unsigned int)v32 > v30 )
                      v32 = 0xFFFFFFFFLL;
                  }
                  else
                  {
LABEL_43:
                    v32 = 0xFFFFFFFFLL;
                  }
                  v9 = v32 - v29;
                  if ( (_DWORD)v32 == -1 )
                    v9 = -1;
                  if ( v9 == -1 )
                    break;
                  if ( (unsigned int)RtlInterlockedSetClearRun(qword_140C4EDD0, v9, 1u) )
                    goto LABEL_56;
                }
                MiFlushTbList((__int64)v76, (_KPROCESS *)v32);
                v35 = v74;
                MiUnlockPageTableInternal(v74, v8, v36);
                MiUnlockWorkingSetShared(v35, v57);
                --CurrentThread->SpecialApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4EDD8, 0LL);
                v9 = 0;
                MiLockWorkingSetShared(v35);
                MiMakeSystemAddressValid(v15, 0LL, (*(_DWORD *)(v70 + 48) >> 12) & 0x3F, v57, 0);
LABEL_56:
                v61 = qword_140C4EDC8 + 8 * v9;
                ++v60;
                v26 = v58;
              }
              KeBlockEnclavePage();
            }
          }
          if ( v26 < 0 )
            goto LABEL_61;
        }
        else
        {
          do
          {
            ExAcquireSpinLockShared(&dword_140C4EDE0);
            v37 = KeOutPageEnclavePage(v21, *(_QWORD *)(v66 + 88));
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EDE0);
          }
          while ( v37 == -1073741802 );
          if ( v37 < 0 )
            KeBugCheckEx(0x1Au, 0x18011713uLL, v21, v37, 0LL);
        }
        MiDeleteEnclavePage(v15, 1LL);
      }
      else
      {
        if ( MiPteInShadowRange((unsigned __int64)&ValidPte)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v20 & 1) != 0
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v24 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&ValidPte >> 3) & 0x1FF));
            if ( (v24 & 0x20) != 0 )
              v20 |= 0x20uLL;
            if ( (v24 & 0x42) != 0 )
              v20 |= 0x42uLL;
          }
        }
        ValidPte = MiMakeValidPte(v15, (v20 >> 12) & 0xFFFFFFFFFLL, 3221225476LL, v22);
        MiWriteValidPteNewProtection(v15, ValidPte);
      }
LABEL_61:
      MiInsertTbFlushEntry((__int64)v76, v21, 1LL, 0);
      v7 = v74;
LABEL_62:
      v15 += 8LL;
      v69 = v15;
      v14 = BugCheckParameter1;
    }
    MiFlushTbList((__int64)v76, v11);
    if ( v8 )
    {
      MiUnlockPageTableInternal(v7, v8, v38);
      v8 = 0LL;
      v64 = 0LL;
    }
    v12 = v59 + 1;
    v10 = v60;
  }
  result = MiUnlockWorkingSetShared(v7, v57);
  if ( v61 )
  {
    if ( v9 )
    {
      v53 = 1;
      v54 = (volatile signed __int32 *)(*(_QWORD *)(qword_140C4EDD0 + 8) + 4 * ((unsigned __int64)v9 >> 5));
      v55 = v9 & 0x1F;
      result = v55 + 1;
      if ( (unsigned __int64)(v55 + 1) > 0x20 )
      {
        v56 = v9 & 0x1F;
        if ( v56 )
        {
          result = (unsigned int)~(((1 << (32 - v56)) - 1) << v55);
          _InterlockedAnd(v54, result);
          v53 = 1 - (32 - v56);
          ++v54;
        }
        if ( v53 >= 0x20 )
        {
          result = (unsigned __int64)v53 >> 5;
          do
          {
            *v54++ = 0;
            v53 -= 32;
            --result;
          }
          while ( result );
        }
        if ( v53 )
          _InterlockedAnd(v54, -1 << v53);
      }
      else
      {
        _InterlockedAnd(v54, ~(1 << v55));
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EDD8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4EDD8);
      v62 = 0;
      v40 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C4EDD8) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)v40->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v40->SpecialApcDisable;
      v42 = ++v40->AbAllocationRegionCount;
      v43 = 0LL;
      v44 = ((char)v40->AbEntrySummary | (char)v40->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v46 = !_BitScanReverse((unsigned int *)&v47, v44);
        if ( v46 )
          break;
        v44 &= ~(1 << v47);
        v45 = (__int64)&v40->LockEntries[v47];
        if ( (*(_BYTE *)(v45 + 26) & 1) != 0
          && (*(_DWORD *)(v45 + 32) & 1) == 0
          && (*(_QWORD *)(v45 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C4EDD8 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v45 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v45 + 26) &= ~1u;
          if ( *(_QWORD *)(v45 + 32) )
          {
            v43 = v45;
            break;
          }
        }
      }
      if ( v43 )
      {
        *(_BYTE *)(v43 + 32) |= 2u;
        if ( *(__int64 *)(v43 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v43);
        v62 = *(_DWORD *)(v43 + 88) & 0x1FFFF;
        *(_DWORD *)(v43 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v43 + 25) &= ~1u;
        *(_QWORD *)(v43 + 32) = 0LL;
        v48 = (signed __int64)(v43 - (unsigned __int64)v40->LockEntries) / 96;
        if ( v42 == 1 )
          v40->AbEntrySummary |= 1 << v48;
        else
          _InterlockedOr8((volatile signed __int8 *)&v40->AbOrphanedEntrySummary, 1 << v48);
      }
      else if ( (*((_DWORD *)&v40->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v40, (ULONG_PTR)&qword_140C4EDD8, SessionId, 0LL);
      }
      --v40->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v40, (__int64)&qword_140C4EDD8, &v62);
      v46 = v40->SpecialApcDisable++ == -1;
      if ( v46 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
        KiCheckForKernelApcDelivery(v50, v49, v51, v52);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v49, v51, (__int64)v52);
    }
  }
  return result;
}
