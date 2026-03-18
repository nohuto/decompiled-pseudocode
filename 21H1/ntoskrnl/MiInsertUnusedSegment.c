/*
 * XREFs of MiInsertUnusedSegment @ 0x1402A4330
 * Callers:
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     MiCleanSection @ 0x14037C0AC (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1405230B8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405232AC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140523C94 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140524268 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140524498 (MiProcessDeleteOnClose.c)
 *     MiSetDeleteOnClose @ 0x140524EF4 (MiSetDeleteOnClose.c)
 * Callees:
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseControlAreaCharges @ 0x1402A42A0 (MiReleaseControlAreaCharges.c)
 *     MiComputePagedPoolSegmentBytes @ 0x1402A442C (MiComputePagedPoolSegmentBytes.c)
 *     MiConvertStaticSubsections @ 0x1402A56A4 (MiConvertStaticSubsections.c)
 */

__int64 __fastcall MiInsertUnusedSegment(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // r8
  int v6; // edx
  int v7; // ecx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rbx

  v1 = *(_DWORD *)(a1 + 56);
  v2 = 0LL;
  if ( (v1 & 0x100) == 0 )
  {
    if ( (v1 & 0x20) == 0 )
      v2 = MiConvertStaticSubsections();
    v4 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 1344));
    if ( !v2 )
      v2 = MiReleaseControlAreaCharges(a1);
    v5 = 0x40000LL;
    v6 = *(_DWORD *)(a1 + 56) | 0x8000000;
    *(_DWORD *)(a1 + 56) = v6;
    v7 = v6;
    if ( (*(_DWORD *)(v4 + 4) & 1) != 0 && (v6 & 0x40000) == 0 )
    {
      v7 = v6 | 0x40000;
      *(_DWORD *)(a1 + 56) = v6 | 0x40000;
    }
    v8 = (_QWORD *)(a1 + 8);
    if ( (v7 & 0x40000) != 0 )
    {
      v9 = *(_QWORD **)(v4 + 1608);
      if ( *v9 == v4 + 1600 )
      {
        *v8 = v4 + 1600;
        *(_QWORD *)(a1 + 16) = v9;
        *v9 = v8;
        *(_QWORD *)(v4 + 1608) = v8;
        ++*(_DWORD *)(v4 + 1348);
        if ( !*(_BYTE *)(v4 + 1680) )
        {
          *(_BYTE *)(v4 + 1680) = 1;
          KiSetTimerEx(v4 + 1616, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
        }
        goto LABEL_10;
      }
    }
    else
    {
      v9 = *(_QWORD **)(v4 + 1712);
      if ( *v9 == v4 + 1704 )
      {
        *v8 = v4 + 1704;
        *(_QWORD *)(a1 + 16) = v9;
        *v9 = v8;
        *(_QWORD *)(v4 + 1712) = v8;
LABEL_10:
        v10 = MiComputePagedPoolSegmentBytes(a1, v9, v5);
        *(_QWORD *)(v4 + 1696) += v10;
        v11 = v10;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1344));
        _InterlockedExchangeAdd64(&qword_140C4C8D8, v11);
        return v2;
      }
    }
    __fastfail(3u);
  }
  return 0LL;
}
