/*
 * XREFs of ViMapDoubleBuffer @ 0x1409CC074
 * Callers:
 *     VfBuildScatterGatherList @ 0x1409C7FE0 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x1409C90D0 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x1409C9850 (VfMapTransfer.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeFlushIoBuffers @ 0x1402FB650 (KeFlushIoBuffers.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     VfReportIssueWithOptions @ 0x14059C234 (VfReportIssueWithOptions.c)
 *     ViAllocateMapRegistersFromFile @ 0x1409CA7B8 (ViAllocateMapRegistersFromFile.c)
 *     ViHalPreprocessOptions @ 0x1409CBC40 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViMapDoubleBuffer(__int64 a1, PMDL MemoryDescriptorList, ULONG_PTR a3, unsigned int a4, char a5)
{
  unsigned int v5; // esi
  PMDL v9; // r9
  ULONG_PTR v10; // r8
  ULONG_PTR v11; // rdx
  unsigned __int64 v13; // rbp
  PVOID MappedSystemVa; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbp
  ULONG_PTR v22; // rbx
  __int64 v23; // r8
  ULONG_PTR v24; // rdx
  __int64 v25; // rax
  _DWORD *v26; // r9
  PMDL v27; // r15
  unsigned int v28; // r14d
  struct _MDL *Next; // rax
  __int64 v30; // rbx
  const char *v31; // rdx
  CHAR *v32; // rbp
  ULONG ByteCount; // ecx
  unsigned __int64 v34; // rbx
  PVOID v35; // rax
  unsigned __int8 v36; // cl
  struct _KPRCB *v37; // r10
  int v38; // eax
  ULONG_PTR v39; // rcx
  PMDL BugCheckOnFailure; // [rsp+20h] [rbp-68h]
  CHAR *Priority; // [rsp+28h] [rbp-60h]
  int v42; // [rsp+30h] [rbp-58h]
  void *Src; // [rsp+38h] [rbp-50h]
  char *v44; // [rsp+40h] [rbp-48h]
  _DWORD *v45; // [rsp+48h] [rbp-40h]
  unsigned __int64 v46; // [rsp+50h] [rbp-38h]
  ULONG v47; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a4;
  v47 = 0;
  if ( !a4 )
  {
    ViHalPreprocessOptions(byte_140C12CE0, "Driver is attempting to map a 0-length transfer.", 33LL, a1, 0LL, 0LL);
    Priority = byte_140C12CE0;
    v9 = 0LL;
    BugCheckOnFailure = 0LL;
    v10 = a1;
    v11 = 33LL;
LABEL_3:
    VfReportIssueWithOptions(0xE6u, v11, v10, (ULONG_PTR)v9, (ULONG_PTR)BugCheckOnFailure, Priority);
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 25) && a4 >= 4096 - (a3 & 0xFFF) )
    v5 = 4096 - (a3 & 0xFFF);
  if ( (PVOID)a3 < (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset )
  {
    ViHalPreprocessOptions(
      &dword_140C12CE4,
      "Virtual address %p is before the first MDL %p.",
      268435487LL,
      1LL,
      a3,
      (__int64)MemoryDescriptorList);
    Priority = (CHAR *)&dword_140C12CE4;
    v9 = (PMDL)a3;
    BugCheckOnFailure = MemoryDescriptorList;
    v10 = 1LL;
LABEL_10:
    v11 = 31LL;
    goto LABEL_3;
  }
  if ( (unsigned int)(a3 - MemoryDescriptorList->ByteOffset - LODWORD(MemoryDescriptorList->StartVa)) >= MemoryDescriptorList->ByteCount )
  {
    ViHalPreprocessOptions(
      &dword_140C12CE8,
      "Virtual address %p is after the first MDL %p.",
      268435487LL,
      2LL,
      a3,
      (__int64)MemoryDescriptorList);
    VfReportIssueWithOptions(0xE6u, 0x1FuLL, 2uLL, a3, (ULONG_PTR)MemoryDescriptorList, &dword_140C12CE8);
    return 0LL;
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 80));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v13);
  if ( !MappedSystemVa )
    return 0LL;
  v20 = a3 - MemoryDescriptorList->ByteOffset - (unsigned __int64)MemoryDescriptorList->StartVa;
  v21 = MemoryDescriptorList->ByteCount - v20;
  v22 = (ULONG_PTR)MappedSystemVa + v20;
  v42 = 1;
  v46 = v21;
  Src = (void *)v22;
  if ( !(unsigned int)ViAllocateMapRegistersFromFile(a1, v22, v5, a5, &v47) )
    return 0LL;
  v24 = (v47 << 12) + (v22 & 0xFFF);
  v25 = *(_QWORD *)(a1 + 72);
  v26 = (_DWORD *)(v24 + *(_QWORD *)(a1 + 64));
  v45 = v26;
  if ( !v25 )
    return 0LL;
  v27 = MemoryDescriptorList;
  v44 = (char *)(v24 + v25);
  v28 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !v27 )
        return 0LL;
      Next = v27->Next;
      if ( v42 )
      {
        v42 = 0;
        if ( !Next && v28 > v21 )
        {
          v30 = v5;
          if ( (((v5 - 1) ^ (v21 + v5 - (unsigned __int64)v28)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            v31 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x.";
            v32 = (CHAR *)&unk_140C12CEC;
LABEL_33:
            ViHalPreprocessOptions(v32, v31, 268435487LL, 3LL, (__int64)MemoryDescriptorList, v30);
            Priority = v32;
            v9 = MemoryDescriptorList;
            BugCheckOnFailure = (PMDL)v30;
            v10 = 3LL;
            goto LABEL_10;
          }
LABEL_37:
          LODWORD(v21) = v28;
          goto LABEL_41;
        }
      }
      else
      {
        if ( !Next )
        {
          ByteCount = v27->ByteCount;
          if ( v28 > ByteCount )
          {
            if ( (((v5 - 1) ^ (v5 + ByteCount - v28)) & 0xFFFFF000) != 0 )
            {
              v30 = v5;
              v31 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x";
              v32 = (CHAR *)&unk_140C12CD4;
              goto LABEL_33;
            }
            goto LABEL_37;
          }
        }
        LODWORD(v21) = v27->ByteCount;
      }
      if ( v28 < (unsigned int)v21 )
        LODWORD(v21) = v28;
LABEL_41:
      memmove(v26, Src, (unsigned int)v21);
      v45 = (_DWORD *)((char *)v45 + (unsigned int)v21);
      memmove(v44, Src, (unsigned int)v21);
      v44 += (unsigned int)v21;
      v27 = v27->Next;
      if ( v27 )
      {
        v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
        if ( (v27->MdlFlags & 5) != 0 )
          v35 = v27->MappedSystemVa;
        else
          v35 = MmMapLockedPagesSpecifyCache(v27, 0, MmCached, 0LL, 0, 0x40000010u);
        Src = v35;
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 80));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v36 = KeGetCurrentIrql();
            if ( v36 <= 0xFu && (unsigned __int8)v34 <= 0xFu && v36 >= 2u )
            {
              v37 = KeGetCurrentPrcb();
              v26 = v37->SchedulerAssist;
              v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
              v19 = (v38 & v26[5]) == 0;
              v23 = (unsigned int)v38 & v26[5];
              v26[5] = v23;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick((__int64)v37);
            }
          }
        }
        __writecr8(v34);
        if ( !Src )
          return 0LL;
      }
      v28 -= v21;
      if ( !v28 )
        break;
      v21 = v46;
      v26 = v45;
    }
  }
  v39 = *(_QWORD *)(a1 + 56);
  if ( v39 )
  {
    LOBYTE(v23) = 1;
    KeFlushIoBuffers(v39, a5 == 0, v23, (__int64)v26);
  }
  return v5;
}
