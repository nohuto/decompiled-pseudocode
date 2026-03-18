/*
 * XREFs of RawClose @ 0x1405D8C7C
 * Callers:
 *     RawDispatch @ 0x1405D8820 (RawDispatch.c)
 * Callees:
 *     RawInitiateDeleteVolume @ 0x140202FEC (RawInitiateDeleteVolume.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 */

__int64 __fastcall RawClose(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_PagingIoResource; // rsi

  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 48) + 80LL) & 0x100) == 0 )
  {
    p_PagingIoResource = (struct _FAST_MUTEX *)&AdvancedHeader[2].PagingIoResource;
    ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].PagingIoResource);
    --*(_DWORD *)&AdvancedHeader[1].Flags;
    --LODWORD(AdvancedHeader[1].Resource);
    if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 0) )
      KeReleaseGuardedMutex(p_PagingIoResource);
  }
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
