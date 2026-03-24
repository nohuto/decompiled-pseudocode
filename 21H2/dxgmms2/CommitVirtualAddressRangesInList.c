/*
 * XREFs of CommitVirtualAddressRangesInList @ 0x1C005D0E0
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006ECA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C0001C88 (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006FD28 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 */

__int64 __fastcall CommitVirtualAddressRangesInList(_QWORD *a1, __int64 ***a2)
{
  __int64 **v2; // r15
  __int64 **v4; // r13
  int v5; // esi
  _QWORD *v6; // rdi
  bool v8; // zf
  __int64 *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // dl
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // [rsp+80h] [rbp+8h]

  v2 = *a2;
  v4 = a2[1];
  v5 = 0;
  v6 = (_QWORD *)*a1;
  v8 = *a1 == (_QWORD)a1;
  v9 = v4[11];
  v10 = ***a2;
  v18 = v10;
  while ( !v8 )
  {
    if ( (v6[5] & 0x400) == 0 && (v9[5117] & 2) != 0 )
    {
      v5 = CVirtualAddressAllocator::CommitVirtualAddressRange(
             v4,
             v6 - 3,
             *(_DWORD *)(v10 + 76) & 0x3F,
             *((unsigned int *)a2 + 6),
             (char *)a2[4] + v6[6],
             a2[5],
             0,
             a2 + 6,
             0LL);
      if ( v5 < 0 )
      {
        v16 = WdLogNewEntry5_WdWarning(v12, v11);
        *(_QWORD *)(v16 + 24) = v2;
        *(_QWORD *)(v16 + 32) = 17588LL;
        WdLogEvent5_WdWarning(v16);
        if ( v5 == -1073741267 )
          *((_BYTE *)a2 + 56) = 1;
        return (unsigned int)v5;
      }
      if ( (*(_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps((ADAPTER_RENDER *)v9[2], (*((_DWORD *)v6 + 10) >> 4) & 0x3F) & 0x400) == 0 )
      {
        v14 = (unsigned __int64)a2[8];
        *((_DWORD *)a2 + 15) |= 1 << v13;
        if ( v14 >= v6[9] )
          v14 = v6[9];
        a2[8] = (__int64 **)v14;
        v15 = (unsigned __int64)a2[9];
        if ( v15 <= v6[10] )
          v15 = v6[10];
        a2[9] = (__int64 **)v15;
      }
      v10 = v18;
    }
    v6 = (_QWORD *)*v6;
    v8 = v6 == a1;
  }
  return (unsigned int)v5;
}
