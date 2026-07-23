/*
 * XREFs of MiAllocateContiguousMemory @ 0x140216BFC
 * Callers:
 *     MmAllocateContiguousNodeMemory @ 0x140216B60 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemory @ 0x140531920 (MmAllocateContiguousMemory.c)
 * Callees:
 *     ExAllocateContiguousHeapPool @ 0x140216FE0 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x14021728C (ExInsertPoolTag.c)
 *     MiMapContiguousMemory @ 0x1402174E4 (MiMapContiguousMemory.c)
 *     MiFreeContiguousPages @ 0x140217D28 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053185C (MiLogPerfMemoryRangeEvent.c)
 *     EtwpGetDurationSince @ 0x1405A8CA4 (EtwpGetDurationSince.c)
 */

unsigned __int64 __fastcall MiAllocateContiguousMemory(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int64 v8; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v10; // r9d
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  LARGE_INTEGER v12; // rsi
  unsigned __int64 ContiguousHeapPool; // r15
  unsigned __int64 v14; // r12
  int v15; // r14d
  unsigned int v16; // edx
  int v17; // r8d
  char v18; // r9
  int v19; // r10d
  int v20; // r11d
  unsigned int v21; // r13d
  unsigned int v22; // ebx
  _DWORD *v23; // r14
  __int64 v24; // rax
  _DWORD *v25; // rbx
  int i; // eax
  BOOL v27; // r14d
  __int64 v28; // rax
  int v29; // ecx
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // r13
  __int64 v32; // rbx
  unsigned __int8 v33; // r10
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  SIZE_T v37; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v41; // eax
  bool v42; // zf
  unsigned __int8 v43; // [rsp+60h] [rbp-A0h]
  unsigned int v44; // [rsp+64h] [rbp-9Ch]
  unsigned int v45; // [rsp+68h] [rbp-98h]
  int v47; // [rsp+78h] [rbp-88h]
  int v48; // [rsp+7Ch] [rbp-84h]
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v50; // [rsp+88h] [rbp-78h]
  unsigned __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  BOOL v53; // [rsp+A0h] [rbp-60h]
  _DWORD *v54; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v55; // [rsp+B0h] [rbp-50h]
  LARGE_INTEGER v56; // [rsp+B8h] [rbp-48h]
  _QWORD v57[7]; // [rsp+C0h] [rbp-40h] BYREF
  int v58; // [rsp+F8h] [rbp-8h]
  unsigned int v59; // [rsp+FCh] [rbp-4h]
  unsigned int v60; // [rsp+100h] [rbp+0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF

  v55 = a1;
  v51 = a4;
  v50 = a3;
  v8 = a2;
  v44 = a5;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = a5;
  PhysicalAddress.QuadPart = -1LL;
  v56 = PerformanceCounter;
  v12 = PerformanceCounter;
  v49 = -1LL;
  v53 = MmProtectFreedNonPagedPool != 0;
  ContiguousHeapPool = 0LL;
  v14 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  if ( (a5 & 2) != 0 && (MiFlags & 0x10000) != 0 )
  {
    v10 = a5 & 0xFFFFFFFD;
    v44 = a5 & 0xFFFFFFFD;
  }
  if ( !a4 || (v15 = 0, v14 <= a4) )
  {
    v15 = 0;
    if ( v8 <= v50 && v8 + v14 > v8 && v8 + v14 - 1 <= v50 )
    {
      v20 = MiProtectionToCacheAttribute(v10);
      v21 = a6;
      v48 = v20;
      if ( (unsigned __int16)KeNumberNodes <= 1u )
        v21 = v16;
      v45 = v21;
      if ( v21 == 0x80000000 )
      {
        v22 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
      }
      else
      {
        v22 = v21;
        if ( v21 >= (unsigned __int16)KeNumberNodes )
          goto LABEL_34;
      }
      v23 = (_DWORD *)(qword_140C4DED8 + 4LL * v22 * (unsigned __int16)KeNumberNodes);
      if ( v21 == 0x80000000 )
        v24 = (unsigned __int16)KeNumberNodes;
      else
        v24 = 1LL;
      v54 = &v23[v24];
      v52 = 512LL;
      if ( (v18 & 2) != 0 )
      {
        LODWORD(v52) = 0;
      }
      else if ( !v17 && v20 == 1 && !MmProtectFreedNonPagedPool && v14 <= 0x200 )
      {
        while ( 1 )
        {
          ContiguousHeapPool = ExAllocateContiguousHeapPool(a2, v19, v51, v55, *v23);
          if ( ContiguousHeapPool )
            break;
          v19 = v50;
          if ( ++v23 == v54 )
          {
            v20 = v48;
            goto LABEL_20;
          }
        }
        v15 = 1;
        goto LABEL_34;
      }
LABEL_20:
      v47 = 135266304;
      v25 = (_DWORD *)(qword_140C4DED8 + 4LL * v22 * (unsigned __int16)KeNumberNodes);
      for ( i = MiFindContiguousPages(
                  (unsigned int)&MiSystemPartition,
                  a2,
                  v19,
                  v51,
                  v14,
                  v20,
                  *v25,
                  0x80000000,
                  135266304,
                  0LL,
                  (__int64)&v49);
            i < 0;
            i = MiFindContiguousPages(
                  (unsigned int)&MiSystemPartition,
                  a2,
                  v50,
                  v51,
                  v14,
                  v48,
                  *v25,
                  0x80000000,
                  v47,
                  0LL,
                  (__int64)&v49) )
      {
        if ( ++v25 == v54 )
          goto LABEL_58;
        v47 &= ~0x8000000u;
      }
      v27 = v53;
      v28 = MiMapContiguousMemory(v49 << 12, v14 << 12, v44, v53);
      ContiguousHeapPool = v28;
      if ( v28 && !(unsigned int)ExInsertPoolTag(v29, v28, (_DWORD)v14 << 12, v52, v27) )
      {
        v37 = (v14 << 12) + 4096;
        if ( !v27 )
          v37 = v14 << 12;
        MmUnmapIoSpace((PVOID)ContiguousHeapPool, v37);
        ContiguousHeapPool = 0LL;
      }
      v30 = 48 * v49 - 0x58000000000LL;
      v31 = v30 + 48 * v14;
      if ( ContiguousHeapPool )
        v32 = ((ContiguousHeapPool >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      else
        v32 = 0LL;
      do
      {
        v33 = MiLockPageInline(v30);
        v43 = v33;
        v34 = *(_QWORD *)(v30 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
        *(_QWORD *)(v30 + 8) = v32;
        *(_QWORD *)(v30 + 40) = v34;
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v33 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v41 = ~(unsigned __int16)(-1LL << (v33 + 1));
              v42 = (v41 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v41;
              if ( v42 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                v33 = v43;
              }
            }
          }
        }
        __writecr8(v33);
        v35 = v32;
        v30 += 48LL;
        v32 += 8LL;
        if ( !v35 )
          v32 = 0LL;
      }
      while ( v30 < v31 );
      v12 = v56;
      if ( ContiguousHeapPool )
      {
        if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
          MiLogPerfMemoryRangeEvent(ContiguousHeapPool, 0LL, 13LL, v14);
        v21 = v45;
        v15 = 0;
        goto LABEL_34;
      }
      v21 = v45;
LABEL_58:
      v15 = 0;
      if ( v49 != -1 )
        MiFreeContiguousPages(v49, v14);
LABEL_34:
      v8 = a2;
      goto LABEL_35;
    }
  }
  v21 = a6;
LABEL_35:
  if ( EtwEventEnabled(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_ALLOCATION) )
  {
    if ( ContiguousHeapPool )
      PhysicalAddress = MmGetPhysicalAddress((PVOID)ContiguousHeapPool);
    v57[0] = ((__int64 (__fastcall *)(_QWORD))EtwpGetDurationSince)((LARGE_INTEGER)v12.QuadPart);
    v57[3] = v50 << 12;
    v57[4] = v51 << 12;
    v59 = v44;
    v57[1] = v55;
    UserData.Ptr = (ULONGLONG)v57;
    v57[6] = ContiguousHeapPool;
    v57[5] = PhysicalAddress.QuadPart;
    v57[2] = v8 << 12;
    v58 = v15;
    v60 = v21;
    *(_QWORD *)&UserData.Size = 68LL;
    EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_ALLOCATION, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return ContiguousHeapPool;
}
