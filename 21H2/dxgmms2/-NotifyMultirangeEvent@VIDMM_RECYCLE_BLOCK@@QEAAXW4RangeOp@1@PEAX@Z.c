/*
 * XREFs of ?NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C0005F68
 * Callers:
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007B8B4 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007D130 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C007E5E0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C007F2A0 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007F3F0 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 136);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 24) + 144LL * *(_QWORD *)(v5 + 32);
    *(_QWORD *)(v6 + 8) = a3;
    *(_DWORD *)v6 = a2;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v6 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(a1 + 136) + 32LL);
    v7 = *(_QWORD *)(a1 + 136);
    result = *(_QWORD *)(v7 + 48);
    if ( *(_QWORD *)(v7 + 32) == result )
    {
      *(_QWORD *)(v7 + 32) = 0LL;
      result = *(_QWORD *)(a1 + 136);
      *(_BYTE *)(result + 40) = 1;
    }
  }
  return result;
}
