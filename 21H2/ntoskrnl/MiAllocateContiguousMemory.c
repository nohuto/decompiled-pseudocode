/*
 * XREFs of MiAllocateContiguousMemory @ 0x140214244
 * Callers:
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403B28D0 (MmAllocateContiguousMemoryEx.c)
 *     MmAllocateContiguousMemory @ 0x140585380 (MmAllocateContiguousMemory.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140213FA8 (MiFreeContiguousPages.c)
 *     ExAllocateContiguousHeapPool @ 0x140214694 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x140214A58 (ExInsertPoolTag.c)
 *     MiMapContiguousMemory @ 0x14021538C (MiMapContiguousMemory.c)
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     MiProtectionToCacheAttribute @ 0x14033D7D0 (MiProtectionToCacheAttribute.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1405852C0 (MiLogPerfMemoryRangeEvent.c)
 *     EtwpGetDurationSince @ 0x14062EDA8 (EtwpGetDurationSince.c)
 */

unsigned __int64 __fastcall MiAllocateContiguousMemory(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        ULONG_PTR *a7,
        unsigned int a8,
        int a9)
{
  unsigned int v10; // r12d
  unsigned __int64 ContiguousHeapPool; // r15
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  LARGE_INTEGER v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r13
  int v17; // r8d
  int v18; // r10d
  int v19; // r11d
  int v20; // r12d
  unsigned __int16 v21; // dx
  unsigned int v22; // r9d
  unsigned int v23; // ebx
  _DWORD *v24; // r14
  _DWORD *v25; // rax
  int v26; // ecx
  unsigned __int64 v27; // r12
  int v28; // r14d
  int v29; // r8d
  int v30; // edx
  _DWORD *v31; // rbx
  BOOL v32; // ebx
  __int64 v33; // rax
  unsigned __int64 v34; // r14
  __int64 v35; // rbx
  unsigned __int64 v36; // rsi
  unsigned __int8 v37; // r10
  ULONGLONG Ptr; // r13
  int v39; // ebx
  unsigned __int64 *v40; // rcx
  unsigned __int64 v41; // r12
  int v42; // r14d
  SIZE_T v44; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v48; // eax
  bool v49; // zf
  unsigned __int8 v50; // [rsp+70h] [rbp-90h]
  unsigned int v51; // [rsp+74h] [rbp-8Ch]
  __int64 v52; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR *v53; // [rsp+80h] [rbp-80h]
  unsigned __int64 v54; // [rsp+88h] [rbp-78h]
  unsigned __int64 v55; // [rsp+90h] [rbp-70h]
  _DWORD *v56; // [rsp+98h] [rbp-68h]
  unsigned __int64 v57; // [rsp+A0h] [rbp-60h]
  int v58; // [rsp+A8h] [rbp-58h]
  int v59; // [rsp+ACh] [rbp-54h]
  BOOL v60; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v61; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v62; // [rsp+C0h] [rbp-40h]
  LARGE_INTEGER PerformanceCounter; // [rsp+C8h] [rbp-38h]
  _QWORD v64[7]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v65; // [rsp+108h] [rbp+8h]
  unsigned int v66; // [rsp+10Ch] [rbp+Ch]
  int v67; // [rsp+110h] [rbp+10h]
  unsigned int v68; // [rsp+114h] [rbp+14h]
  int v69; // [rsp+118h] [rbp+18h]
  int v70; // [rsp+11Ch] [rbp+1Ch]
  int v71; // [rsp+120h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+30h] BYREF

  v10 = a5;
  v62 = a1;
  v57 = a4;
  v53 = a7;
  v55 = a3;
  v54 = a2;
  v51 = a5;
  ContiguousHeapPool = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v61 = 0LL;
  PhysicalAddress.QuadPart = -1LL;
  v14 = PerformanceCounter;
  v15 = *a1;
  v52 = -1LL;
  v60 = MmProtectFreedNonPagedPool != 0;
  v16 = (v15 >> 12) + ((v15 & 0xFFF) != 0);
  UserData.Ptr = v16;
  if ( (a5 & 2) != 0 && (MiFlags & 0x8000) != 0 )
  {
    v10 = a5 & 0xFFFFFFFD;
    v51 = a5 & 0xFFFFFFFD;
  }
  if ( a4 && v16 > a4 || v54 > v55 || v54 + v16 <= v54 || v54 + v16 - 1 > v55 )
    goto LABEL_64;
  v20 = MiProtectionToCacheAttribute(v10);
  v59 = v20;
  if ( (unsigned __int16)KeNumberNodes <= v21 )
  {
    v22 = 0;
    a6 = 0;
    goto LABEL_8;
  }
  v22 = a6;
  if ( a6 != 0x80000000 )
  {
LABEL_8:
    v23 = v22;
    if ( v22 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_64;
    goto LABEL_9;
  }
  v23 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL);
LABEL_9:
  v24 = (_DWORD *)(qword_140C506D8 + 4LL * v23 * (unsigned __int16)KeNumberNodes);
  v25 = &v24[(unsigned __int16)KeNumberNodes];
  if ( v22 != 0x80000000 )
    v25 = v24 + 1;
  v56 = v25;
  if ( (v51 & 2) == 0 && v53 == &MiSystemPartition && !v17 && v20 == 1 && !MmProtectFreedNonPagedPool && v16 <= 0x200 )
  {
    v26 = 1953394499;
    if ( a8 != 1416523587 )
      v26 = a8;
    v58 = v26;
    v27 = v16 << 12;
    while ( 1 )
    {
      ContiguousHeapPool = ExAllocateContiguousHeapPool(v19, v18, v57, (_DWORD)v16 << 12, *v24, v26);
      if ( ContiguousHeapPool )
        break;
      v26 = v58;
      ++v24;
      v18 = v55;
      v19 = v54;
      if ( v24 == v56 )
      {
        v20 = v59;
        goto LABEL_23;
      }
    }
    v39 = 1;
    goto LABEL_40;
  }
LABEL_23:
  if ( (a9 & 1) == 0 )
  {
    v28 = 135266304;
    v29 = v18;
    v30 = v19;
    v31 = (_DWORD *)(qword_140C506D8 + 4LL * v23 * (unsigned __int16)KeNumberNodes);
    while ( (int)MiFindContiguousPagesEx(
                   (_DWORD)v53,
                   v30,
                   v29,
                   v57,
                   0,
                   v16,
                   v20,
                   *v31,
                   0x80000000,
                   v28,
                   2,
                   0LL,
                   (__int64)&v52) < 0 )
    {
      if ( ++v31 == v56 )
        goto LABEL_62;
      v29 = v55;
      v28 &= ~0x8000000u;
      v30 = v54;
    }
    v32 = v60;
    v27 = v16 << 12;
    v61 = v16;
    v33 = MiMapContiguousMemory((_DWORD)v52 << 12, (_DWORD)v16 << 12, (_DWORD)v16 << 12, v51, v60);
    ContiguousHeapPool = v33;
    if ( v33 && !(unsigned int)ExInsertPoolTag(a8, v33, v16 << 12) )
    {
      v44 = v16 << 12;
      if ( v32 )
        v44 = v27 + 4096;
      MmUnmapIoSpace((PVOID)ContiguousHeapPool, v44);
      ContiguousHeapPool = 0LL;
    }
    v34 = 48 * v52 - 0x220000000000LL;
    v56 = (_DWORD *)(v34 + 48 * v16);
    v35 = ContiguousHeapPool ? ((ContiguousHeapPool >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL : 0LL;
    v36 = (unsigned __int64)v56;
    do
    {
      v37 = MiLockPageInline(v34);
      v50 = v37;
      *(_QWORD *)(v34 + 8) = v35;
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v37 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v48 = ~(unsigned __int16)(-1LL << (v37 + 1));
            v49 = (v48 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v48;
            if ( v49 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v37 = v50;
            }
          }
        }
      }
      __writecr8(v37);
      v34 += 48LL;
      if ( v35 )
        v35 += 8LL;
    }
    while ( v34 < v36 );
    v14 = PerformanceCounter;
    Ptr = UserData.Ptr;
    if ( ContiguousHeapPool )
    {
      if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
        MiLogPerfMemoryRangeEvent(ContiguousHeapPool, 0LL, 13LL, UserData.Ptr);
      v39 = 0;
      if ( v53 == &MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_140C53538, Ptr);
LABEL_40:
      v40 = v62;
      *v62 = v27;
      goto LABEL_41;
    }
  }
LABEL_62:
  if ( v52 != -1 )
    MiFreeContiguousPages(v52, v61);
LABEL_64:
  v40 = v62;
  v39 = 0;
LABEL_41:
  v41 = *v40;
  v42 = *(unsigned __int16 *)v53;
  if ( EtwEventEnabled(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_ALLOCATION) )
  {
    if ( ContiguousHeapPool )
      PhysicalAddress = MmGetPhysicalAddress((PVOID)ContiguousHeapPool);
    v64[0] = ((__int64 (__fastcall *)(_QWORD))EtwpGetDurationSince)((LARGE_INTEGER)v14.QuadPart);
    v64[2] = v54 << 12;
    v64[1] = v41;
    v64[3] = (v55 << 12) | 0xFFF;
    v64[4] = v57 << 12;
    v65 = v51;
    v66 = a6;
    v68 = a8;
    v69 = a9;
    UserData.Ptr = (ULONGLONG)v64;
    v64[5] = PhysicalAddress.QuadPart;
    v64[6] = ContiguousHeapPool;
    v67 = v42;
    v70 = v39;
    v71 = 0;
    *(_QWORD *)&UserData.Size = 84LL;
    EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_CONT_ALLOCATION, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return ContiguousHeapPool;
}
