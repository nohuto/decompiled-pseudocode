/*
 * XREFs of MiReturnMdlExcess @ 0x1405341AC
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1402E33F4 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiReleaseNonPagedResources @ 0x140296B90 (MiReleaseNonPagedResources.c)
 *     MiInitializeMdlPages @ 0x1402E3564 (MiInitializeMdlPages.c)
 *     MiInitializeMdlBatchPages @ 0x1402E38E4 (MiInitializeMdlBatchPages.c)
 *     MiFreePagesFromMdl @ 0x1402FF4EC (MiFreePagesFromMdl.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnMdlExcess(__int64 a1)
{
  unsigned int *v1; // rbp
  ULONG_PTR *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r14
  __int64 v6; // r8
  int v7; // eax
  _WORD *Pool; // rax
  _WORD *v9; // rbx

  v1 = *(unsigned int **)(a1 + 64);
  v3 = *(ULONG_PTR **)a1;
  v4 = (unsigned __int64)v1[10] >> 12;
  v5 = *(_QWORD *)(a1 + 40) - v4;
  MiReleaseNonPagedResources(*(_QWORD *)a1, v5);
  if ( v3 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EFB8, -(__int64)v5);
  if ( !v4 )
    goto LABEL_4;
  v7 = *(_DWORD *)(a1 + 8);
  if ( (v7 & 4) != 0 )
  {
    if ( (v7 & 0x40) == 0 )
    {
      MiInitializeMdlBatchPages(a1);
      MiInitializeMdlPages((__int64)v1, *(_DWORD *)(a1 + 8));
    }
    MiFreePagesFromMdl((ULONG_PTR)v1, 0, v6);
LABEL_4:
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 64) = 0LL;
    return;
  }
  if ( v5 > 0x800 )
  {
    Pool = MiAllocatePool(64, 8 * v4 + 48, 0x69646D4Du);
    v9 = Pool;
    if ( Pool )
    {
      *(_QWORD *)Pool = 0LL;
      Pool[4] = 8 * (v4 + 6);
      *((_DWORD *)Pool + 10) = (_DWORD)v4 << 12;
      Pool[5] = 0;
      *((_QWORD *)Pool + 4) = 0LL;
      *((_DWORD *)Pool + 11) = 0;
      memmove(Pool + 24, (const void *)(*(_QWORD *)(a1 + 64) + 48LL), 8 * v4);
      ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
      *(_QWORD *)(a1 + 64) = v9;
    }
  }
}
