/*
 * XREFs of MiSpecialPurposeMemoryRemoved @ 0x14096E960
 * Callers:
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 *     MiAddSpecialPurposeMemoryComplete @ 0x14096DEDC (MiAddSpecialPurposeMemoryComplete.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x14096E3D8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiSpecialPurposeMemoryRemoved(__int64 a1)
{
  HANDLE *v1; // rsi
  HANDLE *SpecialPurposeMemoryTypeByPartition; // rax
  __int64 v4; // rdi
  HANDLE *v5; // rbx
  HANDLE *v6; // rax
  HANDLE **v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  bool v9; // zf
  __int128 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v1 = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( !*(_QWORD *)(a1 + 16720) )
  {
    SpecialPurposeMemoryTypeByPartition = (HANDLE *)MiFindSpecialPurposeMemoryTypeByPartition(
                                                      a1,
                                                      &v13,
                                                      (volatile signed __int64 **)&BugCheckParameter2);
    v4 = v13;
    v5 = SpecialPurposeMemoryTypeByPartition;
    if ( SpecialPurposeMemoryTypeByPartition
      && !*(_QWORD *)(a1 + 16720)
      && *(_QWORD *)(*(_QWORD *)(a1 + 176) + 32LL) <= 1uLL )
    {
      if ( SpecialPurposeMemoryTypeByPartition[9] )
      {
        HIDWORD(v11) = 0;
        *((_QWORD *)&v10 + 1) = v13;
        *(_QWORD *)&v10 = SpecialPurposeMemoryTypeByPartition;
        KeGenericCallDpc((__int64)MiSpecialPurposeMemoryCacheUpdateDpc, (__int64)&v10);
      }
      v6 = (HANDLE *)*v5;
      if ( *((HANDLE **)*v5 + 1) != v5 || (v7 = (HANDLE **)v5[1], *v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      v1 = v5;
      v6[1] = v7;
    }
    if ( BugCheckParameter2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      CurrentThread = KeGetCurrentThread();
      v9 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v9
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v4 = v13;
    }
    if ( v4 )
      PsDereferencePartition(*(_QWORD *)(v4 + 176));
    if ( v1 )
    {
      ZwClose(v1[7]);
      ExFreePoolWithTag(v1, 0);
    }
  }
}
