/*
 * XREFs of MiAllocateContiguousMemory @ 0x140294F3C
 * Callers:
 *     MmAllocateContiguousNodeMemory @ 0x140294EA0 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemory @ 0x1405316E0 (MmAllocateContiguousMemory.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     MiProtectionToCacheAttribute @ 0x140241E40 (MiProtectionToCacheAttribute.c)
 *     EtwWriteEx @ 0x14025DD10 (EtwWriteEx.c)
 *     ExAllocateContiguousHeapPool @ 0x140295320 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x1402955CC (ExInsertPoolTag.c)
 *     MiMapContiguousMemory @ 0x140295824 (MiMapContiguousMemory.c)
 *     MiFreeContiguousPages @ 0x140296068 (MiFreeContiguousPages.c)
 *     MmUnmapIoSpace @ 0x140297530 (MmUnmapIoSpace.c)
 *     MmGetPhysicalAddress @ 0x1402A8700 (MmGetPhysicalAddress.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiFindContiguousPages @ 0x1403016E0 (MiFindContiguousPages.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053161C (MiLogPerfMemoryRangeEvent.c)
 *     EtwpGetDurationSince @ 0x1405A8A74 (EtwpGetDurationSince.c)
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
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // r8
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r13
  __int64 v34; // rbx
  unsigned __int8 v35; // r10
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  SIZE_T v39; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  bool v44; // zf
  unsigned __int8 v45; // [rsp+60h] [rbp-A0h]
  unsigned int v46; // [rsp+64h] [rbp-9Ch]
  unsigned int v47; // [rsp+68h] [rbp-98h]
  int v49; // [rsp+78h] [rbp-88h]
  int v50; // [rsp+7Ch] [rbp-84h]
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v52; // [rsp+88h] [rbp-78h]
  unsigned __int64 v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  BOOL v55; // [rsp+A0h] [rbp-60h]
  _DWORD *v56; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v57; // [rsp+B0h] [rbp-50h]
  LARGE_INTEGER v58; // [rsp+B8h] [rbp-48h]
  _QWORD v59[7]; // [rsp+C0h] [rbp-40h] BYREF
  int v60; // [rsp+F8h] [rbp-8h]
  unsigned int v61; // [rsp+FCh] [rbp-4h]
  unsigned int v62; // [rsp+100h] [rbp+0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF

  v57 = a1;
  v53 = a4;
  v52 = a3;
  v8 = a2;
  v46 = a5;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = a5;
  PhysicalAddress.QuadPart = -1LL;
  v58 = PerformanceCounter;
  v12 = PerformanceCounter;
  v51 = -1LL;
  v55 = MmProtectFreedNonPagedPool != 0;
  ContiguousHeapPool = 0LL;
  v14 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  if ( (a5 & 2) != 0 && (MiFlags & 0x10000) != 0 )
  {
    v10 = a5 & 0xFFFFFFFD;
    v46 = a5 & 0xFFFFFFFD;
  }
  if ( !a4 || (v15 = 0, v14 <= a4) )
  {
    v15 = 0;
    if ( v8 <= v52 && v8 + v14 > v8 && v8 + v14 - 1 <= v52 )
    {
      v20 = MiProtectionToCacheAttribute(v10);
      v21 = a6;
      v50 = v20;
      if ( (unsigned __int16)KeNumberNodes <= 1u )
        v21 = v16;
      v47 = v21;
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
      v23 = (_DWORD *)(qword_140C4DE98 + 4LL * v22 * (unsigned __int16)KeNumberNodes);
      if ( v21 == 0x80000000 )
        v24 = (unsigned __int16)KeNumberNodes;
      else
        v24 = 1LL;
      v56 = &v23[v24];
      v54 = 512LL;
      if ( (v18 & 2) != 0 )
      {
        LODWORD(v54) = 0;
      }
      else if ( !v17 && v20 == 1 && !MmProtectFreedNonPagedPool && v14 <= 0x200 )
      {
        while ( 1 )
        {
          ContiguousHeapPool = ExAllocateContiguousHeapPool(a2, v19, v53, v57, *v23);
          if ( ContiguousHeapPool )
            break;
          v19 = v52;
          if ( ++v23 == v56 )
          {
            v20 = v50;
            goto LABEL_20;
          }
        }
        v15 = 1;
        goto LABEL_34;
      }
LABEL_20:
      v49 = 135266304;
      v25 = (_DWORD *)(qword_140C4DE98 + 4LL * v22 * (unsigned __int16)KeNumberNodes);
      for ( i = MiFindContiguousPages(
                  (unsigned int)&MiSystemPartition,
                  a2,
                  v19,
                  v53,
                  v14,
                  v20,
                  *v25,
                  0x80000000,
                  135266304,
                  0LL,
                  (__int64)&v51);
            i < 0;
            i = MiFindContiguousPages(
                  (unsigned int)&MiSystemPartition,
                  a2,
                  v52,
                  v53,
                  v14,
                  v50,
                  *v25,
                  0x80000000,
                  v49,
                  0LL,
                  (__int64)&v51) )
      {
        if ( ++v25 == v56 )
          goto LABEL_58;
        v49 &= ~0x8000000u;
      }
      v27 = v55;
      v28 = MiMapContiguousMemory(v51 << 12, v14 << 12, v46, v55);
      ContiguousHeapPool = v28;
      if ( v28 && !(unsigned int)ExInsertPoolTag(v30, v28, (_DWORD)v14 << 12, v54, v27) )
      {
        v39 = (v14 << 12) + 4096;
        if ( !v27 )
          v39 = v14 << 12;
        MmUnmapIoSpace((PVOID)ContiguousHeapPool, v39);
        ContiguousHeapPool = 0LL;
      }
      v32 = 48 * v51 - 0x58000000000LL;
      v33 = v32 + 48 * v14;
      if ( ContiguousHeapPool )
        v34 = ((ContiguousHeapPool >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      else
        v34 = 0LL;
      do
      {
        v35 = MiLockPageInline(v32, v29, v31);
        v45 = v35;
        v36 = *(_QWORD *)(v32 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
        *(_QWORD *)(v32 + 8) = v34;
        *(_QWORD *)(v32 + 40) = v36;
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v35 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v29 = -1LL << (v35 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v43 = ~(unsigned __int16)v29;
              v44 = (v43 & SchedulerAssist[5]) == 0;
              v31 = (unsigned int)v43 & SchedulerAssist[5];
              SchedulerAssist[5] = v31;
              if ( v44 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                v35 = v45;
              }
            }
          }
        }
        __writecr8(v35);
        v37 = v34;
        v32 += 48LL;
        v34 += 8LL;
        if ( !v37 )
          v34 = 0LL;
      }
      while ( v32 < v33 );
      v12 = v58;
      if ( ContiguousHeapPool )
      {
        if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
          MiLogPerfMemoryRangeEvent(ContiguousHeapPool, 0LL, 13LL, v14);
        v21 = v47;
        v15 = 0;
        goto LABEL_34;
      }
      v21 = v47;
LABEL_58:
      v15 = 0;
      if ( v51 != -1 )
        MiFreeContiguousPages(v51, v14);
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
    v59[0] = ((__int64 (__fastcall *)(_QWORD))EtwpGetDurationSince)((LARGE_INTEGER)v12.QuadPart);
    v59[3] = v52 << 12;
    v59[4] = v53 << 12;
    v61 = v46;
    v59[1] = v57;
    UserData.Ptr = (ULONGLONG)v59;
    v59[6] = ContiguousHeapPool;
    v59[5] = PhysicalAddress.QuadPart;
    v59[2] = v8 << 12;
    v60 = v15;
    v62 = v21;
    *(_QWORD *)&UserData.Size = 68LL;
    EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_ALLOCATION, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return ContiguousHeapPool;
}
