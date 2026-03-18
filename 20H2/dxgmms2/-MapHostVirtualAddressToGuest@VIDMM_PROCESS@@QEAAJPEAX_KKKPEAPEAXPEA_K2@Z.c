/*
 * XREFs of ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00BB314
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C00602C0 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F5F8 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     MapChildVaSpace @ 0x1C00222DC (MapChildVaSpace.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0086914 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00BAF10 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00BDF8C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::MapHostVirtualAddressToGuest(
        VIDMM_PROCESS *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        void **a6,
        unsigned __int64 *a7)
{
  struct _KTHREAD **CpuVisibleBufferAllocator; // rsi
  __int64 v11; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+40h] [rbp-28h] BYREF

  CpuVisibleBufferAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetCpuVisibleBufferAllocator(this);
  if ( !CpuVisibleBufferAllocator )
    return 3221225495LL;
  v27 = 0LL;
  v15 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          CpuVisibleBufferAllocator,
          a3,
          v11,
          0LL,
          0LL,
          0x1000u,
          &v27);
  if ( v15 >= 0 )
  {
    v18 = *((_QWORD *)this + 4);
    v19 = *(_BYTE *)(v18 + 347);
    if ( (v19 & 0x20) != 0 )
      v20 = *(_QWORD *)(v18 + 496);
    else
      v20 = v18 & -(__int64)((v19 & 0x10) != 0);
    v21 = v27;
    v22 = v27 + *(_QWORD *)(*(_QWORD *)(v20 + 496) + 216LL);
    v15 = MapChildVaSpace(v18, a2, v22, a3);
    if ( v15 >= 0 )
    {
      *a7 = v22;
    }
    else
    {
      v26 = WdLogNewEntry5_WdAssertion(v24, v23, v25);
      *(_QWORD *)(v26 + 24) = a3;
      *(_QWORD *)(v26 + 32) = 2271LL;
      WdLogEvent5_WdAssertion(v26);
      CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)CpuVisibleBufferAllocator, v21);
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v16);
    *(_QWORD *)(v17 + 24) = a3;
    WdLogEvent5_WdAssertion(v17);
  }
  return (unsigned int)v15;
}
