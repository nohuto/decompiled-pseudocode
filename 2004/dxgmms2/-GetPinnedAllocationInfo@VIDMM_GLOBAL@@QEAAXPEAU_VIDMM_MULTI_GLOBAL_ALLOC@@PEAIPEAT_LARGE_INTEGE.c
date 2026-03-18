/*
 * XREFs of ?GetPinnedAllocationInfo@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1C00B142C
 * Callers:
 *     VidMmGetPinnedAllocationInfo @ 0x1C00229E0 (VidMmGetPinnedAllocationInfo.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001194 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 */

void __fastcall VIDMM_GLOBAL::GetPinnedAllocationInfo(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4,
        unsigned __int64 *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax

  v8 = *(unsigned int *)(*((_QWORD *)a2 + 62) + 12LL);
  if ( !(_DWORD)v8 && (**((_DWORD **)a2 + 62) & 0x40000000) == 0 )
  {
    v9 = WdLogNewEntry5_WdCriticalError(v8, a2);
    *(_QWORD *)(v9 + 24) = 270LL;
    *(_QWORD *)(v9 + 32) = 10LL;
    *(_QWORD *)(v9 + 40) = a2;
    *(_OWORD *)(v9 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  *a3 = VIDMM_SEGMENT::DriverId(*((VIDMM_SEGMENT **)a2 + 16));
  a4->QuadPart = *((_QWORD *)a2 + 17) + *(_QWORD *)(*((_QWORD *)a2 + 16) + 24LL);
  if ( a5 )
    *a5 = *((_QWORD *)a2 + 17);
}
