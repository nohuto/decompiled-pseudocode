/*
 * XREFs of MiReturnMdlExcess @ 0x1405343EC
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140294744 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x140217EF8 (MiReleaseNonPagedResources.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiInitializeMdlPages @ 0x1402948B4 (MiInitializeMdlPages.c)
 *     MiInitializeMdlBatchPages @ 0x140294C34 (MiInitializeMdlBatchPages.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnMdlExcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rbp
  ULONG_PTR *v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  int v9; // eax
  _WORD *Pool; // rax
  _WORD *v11; // rbx

  v4 = *(unsigned int **)(a1 + 64);
  v6 = *(ULONG_PTR **)a1;
  v7 = (unsigned __int64)v4[10] >> 12;
  v8 = *(_QWORD *)(a1 + 40) - v7;
  MiReleaseNonPagedResources(*(_QWORD *)a1, v8, a3, a4);
  if ( v6 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EFF8, -(__int64)v8);
  if ( !v7 )
    goto LABEL_4;
  v9 = *(_DWORD *)(a1 + 8);
  if ( (v9 & 4) != 0 )
  {
    if ( (v9 & 0x40) == 0 )
    {
      MiInitializeMdlBatchPages(a1);
      MiInitializeMdlPages((__int64)v4, *(_DWORD *)(a1 + 8));
    }
    MiFreePagesFromMdl((ULONG_PTR)v4, 0);
LABEL_4:
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 64) = 0LL;
    return;
  }
  if ( v8 > 0x800 )
  {
    Pool = MiAllocatePool(64, 8 * v7 + 48, 0x69646D4Du);
    v11 = Pool;
    if ( Pool )
    {
      *(_QWORD *)Pool = 0LL;
      Pool[4] = 8 * (v7 + 6);
      *((_DWORD *)Pool + 10) = (_DWORD)v7 << 12;
      Pool[5] = 0;
      *((_QWORD *)Pool + 4) = 0LL;
      *((_DWORD *)Pool + 11) = 0;
      memmove(Pool + 24, (const void *)(*(_QWORD *)(a1 + 64) + 48LL), 8 * v7);
      ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
      *(_QWORD *)(a1 + 64) = v11;
    }
  }
}
