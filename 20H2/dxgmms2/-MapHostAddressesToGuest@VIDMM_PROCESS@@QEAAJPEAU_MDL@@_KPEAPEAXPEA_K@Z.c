/*
 * XREFs of ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00BB1A4
 * Callers:
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C00831EC (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00B1FC0 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 * Callees:
 *     MapChildMmioSpace @ 0x1C00222AC (MapChildMmioSpace.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0086914 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00BAF10 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00BDF8C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::MapHostAddressesToGuest(
        VIDMM_PROCESS *this,
        struct _MDL *a2,
        unsigned __int64 a3,
        void **a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r10
  char v8; // al
  __int64 v9; // rbx
  __int64 v10; // rax
  VIDMM_PROCESS *v11; // rcx
  struct _KTHREAD **CpuVisibleBufferAllocator; // rsi
  __int64 v13; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // r8
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rax
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // [rsp+70h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 4);
  v8 = *(_BYTE *)(v5 + 347);
  if ( (v8 & 0x20) != 0 )
    v9 = *(_QWORD *)(v5 + 496);
  else
    v9 = v5 & -(__int64)((v8 & 0x10) != 0);
  if ( !v9 )
    return 3221225473LL;
  v10 = *(_QWORD *)(v9 + 64);
  v11 = v10 ? *(VIDMM_PROCESS **)(v10 + 8) : 0LL;
  CpuVisibleBufferAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v11);
  if ( !CpuVisibleBufferAllocator )
    return 3221225473LL;
  if ( a3 > a2->ByteCount )
    return 3221225485LL;
  v24 = 0LL;
  v17 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          CpuVisibleBufferAllocator,
          a3,
          v13,
          0LL,
          0LL,
          0x1000u,
          &v24);
  if ( v17 >= 0 )
  {
    v20 = *(_BYTE *)(v9 + 347);
    if ( (v20 & 0x20) != 0 )
      v21 = *(_QWORD *)(v9 + 496);
    else
      v21 = v9 & -(__int64)((v20 & 0x10) != 0);
    v22 = v24;
    v23 = v24 + *(_QWORD *)(*(_QWORD *)(v21 + 496) + 216LL);
    v17 = MapChildMmioSpace(v9);
    if ( v17 >= 0 )
      *a5 = v23;
    else
      CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)CpuVisibleBufferAllocator, v22);
  }
  else
  {
    v19 = WdLogNewEntry5_WdAssertion(v16, v15, v18);
    *(_QWORD *)(v19 + 24) = a3;
    WdLogEvent5_WdAssertion(v19);
  }
  return (unsigned int)v17;
}
