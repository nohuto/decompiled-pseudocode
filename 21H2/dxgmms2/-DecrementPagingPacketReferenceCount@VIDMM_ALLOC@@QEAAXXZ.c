/*
 * XREFs of ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x1C002DA4C
 * Callers:
 *     ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C00D4BA0 (--1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_ALLOC::DecrementPagingPacketReferenceCount(VIDMM_ALLOC *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 40, 0xFFFFFFFF) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
    KeSetEvent((PRKEVENT)this + 7, 0, 0);
  }
}
