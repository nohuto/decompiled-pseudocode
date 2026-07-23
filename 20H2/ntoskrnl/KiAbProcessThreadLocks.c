/*
 * XREFs of KiAbProcessThreadLocks @ 0x140242694
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiAbDeferredProcessingWorker @ 0x140242530 (KiAbDeferredProcessingWorker.c)
 *     KiAbPropagateBoosts @ 0x140242604 (KiAbPropagateBoosts.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140217F10 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14021EB40 (ObReferenceObjectSafeWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x140242170 (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbIoBoostOwners @ 0x14024232C (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140242430 (KiAbCpuBoostOwners.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1402432A0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbSetMinimumThreadPriority @ 0x140243354 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140243610 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140243BEC (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140243CC0 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140243D08 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140243DFC (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     IoBoostThreadIoPriority @ 0x1402EB1D4 (IoBoostThreadIoPriority.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessThreadLocks(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // esi
  int v8; // r15d
  __int64 v10; // rdx
  int v11; // r13d
  unsigned int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // rax
  bool v15; // zf
  int v16; // r14d
  __int64 LockedHeadEntry; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  char v22; // si
  int v23; // r10d
  char CpuPriorityKey; // r15
  int v25; // eax
  char v26; // r9
  char v27; // al
  _DWORD *v28; // rbx
  char v29; // al
  __int64 ExtensionTable; // rax
  int v31; // [rsp+30h] [rbp-30h] BYREF
  __int64 v32; // [rsp+38h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  int v34; // [rsp+A0h] [rbp+40h] BYREF
  int v35; // [rsp+B0h] [rbp+50h]
  int v36; // [rsp+B8h] [rbp+58h]

  v36 = a4;
  v35 = a3;
  v7 = a4;
  v8 = a3;
  if ( (*(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 870)) != 63 )
  {
    v10 = *(_QWORD *)(a1 + 800);
    v11 = *(char *)(a1 + 792) | *(char *)(a1 + 870);
    v32 = v10;
    v12 = v11 ^ 0x3F;
    v15 = !_BitScanForward((unsigned int *)&a1, v12);
    if ( !v15 )
    {
      while ( 1 )
      {
        v12 &= v12 - 1;
        v13 = v10 + 96 * a1;
        v14 = *(_QWORD *)(v13 + 32);
        if ( !v14 || (v14 & 2) != 0 )
          break;
        if ( a2 && (v14 & 1) != 0 )
          goto LABEL_24;
        if ( v14 >= 0 )
        {
          v25 = a2;
LABEL_28:
          if ( !v25 )
            goto LABEL_24;
          goto LABEL_11;
        }
        if ( a2 )
        {
          if ( (*(_BYTE *)(v13 + 27) & 1) != 0 )
            goto LABEL_24;
          if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
          {
            if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v10 + 96 * a1, v10, 15LL, a4) == *(_BYTE *)(v13 + 48) )
              goto LABEL_23;
LABEL_11:
            v34 = 0;
            v16 = 0;
            v31 = 0;
            memset(&LockHandle, 0, sizeof(LockHandle));
            LockedHeadEntry = KiAbEntryGetLockedHeadEntry((PRTL_BALANCED_NODE)v13);
            v20 = LockedHeadEntry;
            if ( LockedHeadEntry )
            {
              if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
              {
                if ( v8 )
                {
                  if ( v13 != LockedHeadEntry )
                    KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v13);
                  v21 = *(_QWORD *)(v20 + 56);
                  if ( v21 )
                    v22 = *(_BYTE *)(v21 + 48);
                  else
                    v22 = 15;
                  if ( (*(_BYTE *)(v20 + 25) & 1) == 0 )
                  {
                    v26 = KiAbOwnerComputeCpuPriorityKey(v20, v18, v19, a4);
                    v27 = v22;
                    if ( v26 < v22 )
                      v27 = v26;
                    v22 = v27;
                  }
                  KiAbTryIncrementIoWaiterCounts(v13, v20);
                  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v13);
                  if ( v22 < CpuPriorityKey )
                  {
                    if ( v23 )
                      goto LABEL_49;
                  }
                  else
                  {
                    if ( !v23 )
                    {
                      v7 = v36;
                      v8 = v35;
                      goto LABEL_22;
                    }
LABEL_49:
                    KiAbIoBoostOwners(v20, v23, a5, a6, a7);
                  }
                  KiAbCpuBoostOwners(v20, CpuPriorityKey, a5, a6, a7);
                  v7 = v36;
                  v8 = v35;
                }
LABEL_41:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                if ( v16 )
                {
                  v28 = (_DWORD *)(v13 - 16LL * *(unsigned __int8 *)(v13 + 24));
                  if ( ObReferenceObjectSafeWithTag((__int64)v28) )
                  {
                    if ( (v16 & 1) != 0 )
                      IoBoostThreadIoPriority(v28, 2LL, 0x80000000LL);
                    if ( (v16 & 2) != 0 && v28[342] )
                    {
                      ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                      if ( ExtensionTable )
                      {
                        (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v28);
                        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                      }
                    }
                    ObDereferenceObjectDeferDeleteWithTag(v28, 0x746C6644u);
                  }
                }
                goto LABEL_23;
              }
              if ( !v7 )
                goto LABEL_41;
              if ( v13 != LockedHeadEntry )
                KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13);
              KiAbDetermineMaxWaiterPriority(v20, (__int64)&v34);
              if ( v34 )
              {
                if ( (unsigned int)KiAbSetMinimumThreadPriority(v13, (unsigned int)&v34, a5, a6, a7, (__int64)&v31)
                  && v13 != v20 )
                {
                  KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13);
                }
                v16 = v31;
                goto LABEL_41;
              }
LABEL_22:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            }
LABEL_23:
            v10 = v32;
            goto LABEL_24;
          }
          v29 = *(_BYTE *)(v13 - 16LL * *(unsigned __int8 *)(v13 + 24) + 195);
          if ( v29 > 15 )
            v29 = 15;
          v15 = v29 == *(_BYTE *)(v13 + 48);
        }
        else if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
        {
          v15 = v8 == 0;
        }
        else
        {
          v15 = v7 == 0;
        }
        if ( !v15 )
          goto LABEL_11;
LABEL_24:
        v15 = !_BitScanForward((unsigned int *)&a1, v12);
        if ( v15 )
          return;
      }
      v25 = 0;
      goto LABEL_28;
    }
  }
}
