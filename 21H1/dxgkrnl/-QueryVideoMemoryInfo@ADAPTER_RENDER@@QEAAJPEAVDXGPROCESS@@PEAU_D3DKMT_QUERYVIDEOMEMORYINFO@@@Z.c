/*
 * XREFs of ?QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C00D6A9C
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00D6710 (DxgkQueryVideoMemoryInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::QueryVideoMemoryInfo(
        ADAPTER_RENDER *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_QUERYVIDEOMEMORYINFO *a3)
{
  __int64 v3; // rsi
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx

  v3 = *((_QWORD *)this + 81);
  v4 = *((_QWORD *)this + 80);
  v5 = *((_QWORD *)a2 + 8);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)v4 - 1));
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, UINT64 *, UINT64 *, UINT64 *, UINT64 *))(*(_QWORD *)(v4 + 8) + 1048LL))(
           v3,
           v6,
           a3->PhysicalAdapterIndex,
           (unsigned int)a3->MemorySegmentGroup,
           &a3->Budget,
           &a3->CurrentUsage,
           &a3->AvailableForReservation,
           &a3->CurrentReservation);
}
