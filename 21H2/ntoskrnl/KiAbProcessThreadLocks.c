/*
 * XREFs of KiAbProcessThreadLocks @ 0x1403591D8
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x140359020 (KiAbDeferredProcessingWorker.c)
 *     KiAbPropagateBoosts @ 0x140359140 (KiAbPropagateBoosts.c)
 * Callees:
 *     IoBoostThreadIoPriority @ 0x140280754 (IoBoostThreadIoPriority.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14033E1B0 (KiAbTryIncrementIoWaiterCounts.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14034F230 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x14035A0F0 (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbIoBoostOwners @ 0x14035A160 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14035A264 (KiAbCpuBoostOwners.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14035A364 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbSetMinimumThreadPriority @ 0x14035A424 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14035A6C8 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14035A718 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14035A7F8 (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessThreadLocks(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int8 v7; // r10
  int v8; // esi
  unsigned __int8 v9; // al
  int v10; // r15d
  int v11; // r9d
  __int64 v12; // r12
  unsigned int v13; // r13d
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  bool i; // zf
  int v18; // r14d
  __int128 *LockedHeadEntry; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  char v22; // si
  int v23; // edx
  int v24; // r10d
  char CpuPriorityKey; // r15
  char v26; // al
  char v27; // dl
  __int64 v28; // rbx
  bool v29; // zf
  char v30; // al
  __int64 ExtensionTable; // rax
  int v32; // [rsp+30h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  int v34; // [rsp+A0h] [rbp+48h] BYREF
  int v35; // [rsp+A8h] [rbp+50h]
  int v36; // [rsp+B0h] [rbp+58h]
  int v37; // [rsp+B8h] [rbp+60h]

  v37 = a4;
  v36 = a3;
  v35 = a2;
  v7 = *(_BYTE *)(a1 + 792);
  v8 = a4;
  v9 = *(_BYTE *)(a1 + 870);
  v10 = a3;
  v34 = 0;
  v11 = a2;
  v12 = a1;
  if ( (v7 | v9) != 63 )
  {
    v13 = (*(unsigned __int8 *)(a1 + 792) | *(unsigned __int8 *)(a1 + 870)) ^ 0x3F;
    for ( i = !_BitScanForward((unsigned int *)&a1, v13); !i; i = !_BitScanForward((unsigned int *)&a1, v13) )
    {
      v13 &= v13 - 1;
      v14 = 96 * a1;
      v15 = v14 + v12 + 1696;
      v16 = *(_QWORD *)v15;
      if ( !*(_QWORD *)v15 || (v16 & 2) != 0 || v11 && (v16 & 1) != 0 )
        continue;
      if ( v16 >= 0 )
      {
        v29 = v11 == 0;
      }
      else
      {
        if ( !v11 )
        {
          if ( *(_BYTE *)(v15 + 17) )
            i = v10 == 0;
          else
            i = v8 == 0;
          if ( i )
            continue;
          goto LABEL_11;
        }
        if ( (*(_BYTE *)(v15 + 19) & 1) != 0 )
          continue;
        if ( !*(_BYTE *)(v15 + 17) )
        {
          if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v14 + v12 + 1696) == *(_BYTE *)(v15 + 48) )
            continue;
          goto LABEL_11;
        }
        v30 = *(_BYTE *)(v15 - 96LL * *(unsigned __int8 *)(v15 + 16) - 1501);
        if ( v30 > 30 )
          v30 = 30;
        v29 = v30 == *(_BYTE *)(v15 + 48);
      }
      if ( v29 )
        continue;
LABEL_11:
      v34 = 0;
      v18 = 0;
      v32 = 0;
      memset(&LockHandle, 0, sizeof(LockHandle));
      LockedHeadEntry = KiAbEntryGetLockedHeadEntry((__int128 *)v15, v11, &LockHandle);
      v20 = (__int64)LockedHeadEntry;
      if ( LockedHeadEntry )
      {
        if ( *(_BYTE *)(v15 + 17) )
        {
          if ( !v10 )
            goto LABEL_38;
          if ( (__int128 *)v15 != LockedHeadEntry )
            KiAbEntryUpdateWaiterTreePosition(v15, LockedHeadEntry);
          v21 = *(_QWORD *)(v20 + 56);
          if ( v21 )
            v22 = *(_BYTE *)(v21 + 24);
          else
            v22 = 30;
          if ( !*(_BYTE *)(v20 + 17) )
          {
            v26 = KiAbOwnerComputeCpuPriorityKey(v20);
            v27 = v22;
            if ( v26 < v22 )
              v27 = v26;
            v22 = v27;
          }
          KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)v15, v20);
          CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v15);
          if ( v22 < CpuPriorityKey )
          {
            if ( v24 )
LABEL_48:
              KiAbIoBoostOwners(v20, v24, a5, a6, a7);
            LOBYTE(v23) = CpuPriorityKey;
            KiAbCpuBoostOwners(v20, v23, a5, a6, a7);
            v8 = v37;
            v10 = v36;
LABEL_38:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( v18 )
            {
              v28 = v15 - 96LL * *(unsigned __int8 *)(v15 + 16) - 1696;
              if ( ObReferenceObjectSafeWithTag(v28) )
              {
                if ( (v18 & 1) != 0 )
                  IoBoostThreadIoPriority((KSPIN_LOCK *)v28, 2, 0x80000000);
                if ( (v18 & 2) != 0 && *(_DWORD *)(v28 + 1448) )
                {
                  ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                  if ( ExtensionTable )
                  {
                    (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(v28);
                    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                  }
                }
                ObDereferenceObjectDeferDeleteWithTag((PVOID)v28, 0x746C6644u);
              }
            }
            goto LABEL_23;
          }
          if ( v24 )
            goto LABEL_48;
          v8 = v37;
          v10 = v36;
        }
        else
        {
          if ( !v8 )
            goto LABEL_38;
          if ( (__int128 *)v15 != LockedHeadEntry )
            KiAbEntryUpdateOwnerTreePosition(v15, LockedHeadEntry);
          KiAbDetermineMaxWaiterPriority(v20, &v34);
          if ( v34 )
          {
            if ( (unsigned int)KiAbSetMinimumThreadPriority(v15, (unsigned int)&v34, a5, a6, a7, (__int64)&v32)
              && v15 != v20 )
            {
              KiAbEntryUpdateOwnerTreePosition(v15, v20);
            }
            v18 = v32;
            goto LABEL_38;
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
LABEL_23:
      v11 = v35;
    }
  }
}
