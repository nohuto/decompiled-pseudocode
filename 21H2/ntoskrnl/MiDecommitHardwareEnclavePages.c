/*
 * XREFs of MiDecommitHardwareEnclavePages @ 0x140549A28
 * Callers:
 *     MiDecommitEnclavePages @ 0x1408D2E84 (MiDecommitEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1409B0DC4 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockShared @ 0x14021CD80 (ExAcquireSpinLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     RtlInterlockedSetClearRun @ 0x140268460 (RtlInterlockedSetClearRun.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiPageTableLockIsContended @ 0x140308460 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x14030FA00 (MiWriteValidPteNewProtection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     KeBlockEnclavePage @ 0x1405150CC (KeBlockEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405152EC (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x140515330 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x1405153F0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x140515434 (KeTrackEnclaveTbFlush.c)
 *     MiGetExceptionInfo @ 0x1405349C0 (MiGetExceptionInfo.c)
 *     MiDeleteEnclavePage @ 0x14054A440 (MiDeleteEnclavePage.c)
 */

char __fastcall MiDecommitHardwareEnclavePages(__int64 a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4, int a5)
{
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  _KPROCESS *v14; // rdx
  unsigned int v15; // ebx
  _KPROCESS *v16; // rdx
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // r13
  int v19; // ebx
  unsigned __int8 v20; // bl
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  unsigned __int64 v24; // rbx
  __int64 v25; // r14
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v27; // rax
  int v28; // eax
  int v29; // ebx
  int v30; // r8d
  __int64 v31; // r9
  unsigned int v32; // r10d
  unsigned int v33; // r11d
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 *v36; // rdx
  __int64 i; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  _DWORD *v41; // r9
  int v42; // ebx
  unsigned __int64 v43; // rax
  struct _KTHREAD *v44; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v46; // r15
  __int64 v47; // r14
  unsigned int v48; // edx
  __int64 v49; // rcx
  bool v50; // zf
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // ecx
  volatile signed __int32 *v55; // r9
  __int64 v56; // r10
  int v57; // r15d
  unsigned __int8 v59; // [rsp+30h] [rbp-1A8h]
  int v60; // [rsp+34h] [rbp-1A4h]
  unsigned int v61; // [rsp+3Ch] [rbp-19Ch]
  int v62; // [rsp+40h] [rbp-198h]
  ULONG_PTR v63; // [rsp+48h] [rbp-190h]
  int v64; // [rsp+58h] [rbp-180h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-178h]
  unsigned __int64 v66; // [rsp+68h] [rbp-170h]
  unsigned __int64 ValidPte; // [rsp+70h] [rbp-168h] BYREF
  __int64 v68; // [rsp+78h] [rbp-160h]
  int v69; // [rsp+80h] [rbp-158h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-150h]
  ULONG_PTR v71; // [rsp+90h] [rbp-148h]
  __int64 v72; // [rsp+98h] [rbp-140h]
  __int64 v73; // [rsp+A0h] [rbp-138h]
  __int64 v74; // [rsp+A8h] [rbp-130h]
  ULONG_PTR v75; // [rsp+B0h] [rbp-128h]
  __int64 v76; // [rsp+B8h] [rbp-120h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-118h]
  _QWORD v78[24]; // [rsp+D0h] [rbp-108h] BYREF

  BugCheckParameter1 = a3;
  v68 = a2;
  v74 = a2;
  v75 = a3;
  ValidPte = 0LL;
  memset(v78, 0, 0xB8uLL);
  v72 = a2;
  CurrentThread = KeGetCurrentThread();
  v7 = a1 + 1664;
  v76 = v7;
  v8 = 0LL;
  v66 = 0LL;
  v9 = 0;
  v63 = 0LL;
  v73 = 0LL;
  LODWORD(v78[0]) = 1;
  WORD2(v78[0]) = 0;
  v78[2] = 0LL;
  LODWORD(v78[1]) = 20;
  v78[3] = 0LL;
  v10 = 2;
  v62 = 2;
  v59 = MiLockWorkingSetShared(v7, v11, v12, v13);
  v15 = 0;
  while ( 1 )
  {
    v61 = v15;
    if ( v15 >= v10 )
      break;
    if ( v15 == 2 )
    {
      KeTrackEnclaveTbFlush();
      MiInsertTbFlushEntry((__int64)v78, (__int64)(BugCheckParameter1 << 25) >> 16, 1LL, 0);
      MiFlushTbList((__int64)v78, v16);
    }
    v17 = BugCheckParameter1;
    v18 = BugCheckParameter1;
    v71 = BugCheckParameter1;
    while ( v18 <= a4 )
    {
      if ( (v18 & 0x78) != 0 || v18 == v17 )
        goto LABEL_18;
      v19 = 0;
      if ( MiWorkingSetIsContended(v7)
        || KeShouldYieldProcessor()
        || v8 && (unsigned int)MiPageTableLockIsContended(v7, v8) )
      {
        v19 = 1;
      }
      if ( v19 != 1 )
      {
LABEL_18:
        v20 = v59;
      }
      else
      {
        if ( v8 )
        {
          MiFlushTbList((__int64)v78, v14);
          MiUnlockPageTableInternal(v7, v8);
          v8 = 0LL;
          v66 = 0LL;
        }
        v20 = v59;
        MiUnlockWorkingSetShared(v7, v59);
        MiLockWorkingSetShared(v7, v21, v22, v23);
      }
      if ( v8 )
      {
        if ( (v18 & 0xFFF) != 0 )
          goto LABEL_23;
        MiFlushTbList((__int64)v78, v14);
        MiUnlockPageTableInternal(v7, v8);
      }
      v8 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v66 = v8;
      MiMakeSystemAddressValid(v18, 0LL, (*(_DWORD *)(v72 + 48) >> 12) & 0x3F, v20, 0);
LABEL_23:
      v24 = MI_READ_PTE_LOCK_FREE(v18);
      ValidPte = v24;
      if ( !v24 )
        goto LABEL_62;
      v25 = (__int64)(v18 << 25) >> 16;
      BugCheckParameter2 = v25;
      if ( v61 )
      {
        if ( v61 == 1 )
        {
          v28 = KeRemoveEnclavePage();
          v29 = v28;
          v60 = v28;
          if ( v28 < 0 )
          {
            if ( v28 != -1073741757 || a5 )
            {
              v29 = 0;
            }
            else
            {
              if ( !v63 )
              {
                while ( 1 )
                {
                  v30 = *(_DWORD *)qword_140C4EE90;
                  v31 = *(_QWORD *)(qword_140C4EE90 + 8);
                  v32 = (*(_DWORD *)(qword_140C4EE90 + 8) & 4) != 0LL ? 0x20 : 0;
                  v69 = 0;
                  v33 = v32 + v30 - 1;
                  v34 = v31 - ((v31 & 4) != 0 ? 4 : 0);
                  if ( v30 )
                  {
                    v36 = (__int64 *)(v34 + 8 * ((unsigned __int64)v32 >> 6));
                    for ( i = *v36 | ((1LL << v32) - 1); i == -1; i = *v36 )
                    {
                      if ( (unsigned __int64)++v36 > v34 + 8 * ((unsigned __int64)v33 >> 6) )
                        goto LABEL_43;
                    }
                    _BitScanForward64((unsigned __int64 *)&i, ~i);
                    v69 = i;
                    v35 = (unsigned int)i + ((unsigned int)(((__int64)v36 - v34) >> 3) << 6);
                    if ( (unsigned int)v35 > v33 )
                      v35 = 0xFFFFFFFFLL;
                  }
                  else
                  {
LABEL_43:
                    v35 = 0xFFFFFFFFLL;
                  }
                  v9 = v35 - v32;
                  if ( (_DWORD)v35 == -1 )
                    v9 = -1;
                  if ( v9 == -1 )
                    break;
                  if ( (unsigned int)RtlInterlockedSetClearRun(qword_140C4EE90, v9, 1u) )
                    goto LABEL_56;
                }
                MiFlushTbList((__int64)v78, (_KPROCESS *)v35);
                v38 = v76;
                MiUnlockPageTableInternal(v76, v8);
                MiUnlockWorkingSetShared(v38, v59);
                --CurrentThread->SpecialApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4EE98, 0LL);
                v9 = 0;
                MiLockWorkingSetShared(v38, v39, v40, v41);
                MiMakeSystemAddressValid(v18, 0LL, (*(_DWORD *)(v72 + 48) >> 12) & 0x3F, v59, 0);
LABEL_56:
                v63 = qword_140C4EE88 + 8 * v9;
                ++v62;
                v29 = v60;
              }
              KeBlockEnclavePage();
            }
          }
          if ( v29 < 0 )
            goto LABEL_61;
        }
        else
        {
          do
          {
            ExAcquireSpinLockShared(&dword_140C4EEA0);
            v42 = KeOutPageEnclavePage(v25, *(_QWORD *)(v68 + 88));
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EEA0);
          }
          while ( v42 == -1073741802 );
          if ( v42 < 0 )
            KeBugCheckEx(0x1Au, 0x18011713uLL, v25, v42, 0LL);
        }
        MiDeleteEnclavePage(v18, 1LL);
      }
      else
      {
        if ( MiPteInShadowRange((unsigned __int64)&ValidPte)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v24 & 1) != 0
          && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v27 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&ValidPte >> 3) & 0x1FF));
            if ( (v27 & 0x20) != 0 )
              v24 |= 0x20uLL;
            if ( (v27 & 0x42) != 0 )
              v24 |= 0x42uLL;
          }
        }
        ValidPte = MiMakeValidPte(v18, (v24 >> 12) & 0xFFFFFFFFFLL, -1073741820);
        MiWriteValidPteNewProtection(v18, ValidPte);
      }
LABEL_61:
      MiInsertTbFlushEntry((__int64)v78, v25, 1LL, 0);
      v7 = v76;
LABEL_62:
      v18 += 8LL;
      v71 = v18;
      v17 = BugCheckParameter1;
    }
    MiFlushTbList((__int64)v78, v14);
    if ( v8 )
    {
      MiUnlockPageTableInternal(v7, v8);
      v8 = 0LL;
      v66 = 0LL;
    }
    v15 = v61 + 1;
    v10 = v62;
  }
  LOBYTE(v43) = MiUnlockWorkingSetShared(v7, v59);
  if ( v63 )
  {
    if ( v9 )
    {
      v54 = 1;
      v55 = (volatile signed __int32 *)(*(_QWORD *)(qword_140C4EE90 + 8) + 4 * ((unsigned __int64)v9 >> 5));
      v56 = v9 & 0x1F;
      LOBYTE(v43) = v56 + 1;
      if ( (unsigned __int64)(v56 + 1) > 0x20 )
      {
        v57 = v9 & 0x1F;
        if ( v57 )
        {
          LODWORD(v43) = ~(((1 << (32 - v57)) - 1) << v56);
          _InterlockedAnd(v55, v43);
          v54 = 1 - (32 - v57);
          ++v55;
        }
        if ( v54 >= 0x20 )
        {
          v43 = (unsigned __int64)v54 >> 5;
          do
          {
            *v55++ = 0;
            v54 -= 32;
            --v43;
          }
          while ( v43 );
        }
        if ( v54 )
          _InterlockedAnd(v55, -1 << v54);
      }
      else
      {
        _InterlockedAnd(v55, ~(1 << v56));
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EE98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4EE98);
      v64 = 0;
      v44 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C4EE98) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)v44->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --v44->SpecialApcDisable;
      v46 = ++v44->AbAllocationRegionCount;
      v47 = 0LL;
      v48 = ((char)v44->AbEntrySummary | (char)v44->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v50 = !_BitScanReverse((unsigned int *)&v51, v48);
        if ( v50 )
          break;
        v48 &= ~(1 << v51);
        v49 = (__int64)&v44->LockEntries[v51];
        if ( (*(_BYTE *)(v49 + 26) & 1) != 0
          && (*(_DWORD *)(v49 + 32) & 1) == 0
          && (*(_QWORD *)(v49 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C4EE98 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v49 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v49 + 26) &= ~1u;
          if ( *(_QWORD *)(v49 + 32) )
          {
            v47 = v49;
            break;
          }
        }
      }
      if ( v47 )
      {
        *(_BYTE *)(v47 + 32) |= 2u;
        if ( *(__int64 *)(v47 + 32) < 0 )
          KiAbEntryRemoveFromTree(v47);
        v64 = *(_DWORD *)(v47 + 88) & 0x1FFFF;
        *(_DWORD *)(v47 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v47 + 25) &= ~1u;
        *(_QWORD *)(v47 + 32) = 0LL;
        v52 = (signed __int64)(v47 - (unsigned __int64)v44->LockEntries) / 96;
        if ( v46 == 1 )
          v44->AbEntrySummary |= 1 << v52;
        else
          _InterlockedOr8((volatile signed __int8 *)&v44->AbOrphanedEntrySummary, 1 << v52);
      }
      else if ( (*((_DWORD *)&v44->0 + 1) & 0x10000) == 0 )
      {
        KeBugCheckEx(0x162u, (ULONG_PTR)v44, (ULONG_PTR)&qword_140C4EE98, SessionId, 0LL);
      }
      --v44->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v44, (__int64)&qword_140C4EE98, (__int64)&v64, (_DWORD *)SessionId);
      v50 = v44->SpecialApcDisable++ == -1;
      if ( v50 && ($C459BD0D405E8E46662177FB3D0A143F *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
        KiCheckForKernelApcDelivery(v53);
      LOBYTE(v43) = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return v43;
}
