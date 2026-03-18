/*
 * XREFs of MiVadCommitCrossPartition @ 0x14023029C
 * Callers:
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiRemoveVadCharges @ 0x1406247E0 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x140625BE0 (MiDecommitRegion.c)
 * Callees:
 *     MiIsVadLarge @ 0x1402302C4 (MiIsVadLarge.c)
 *     MiLocateLockedVadEvent @ 0x1402506EC (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiVadCommitCrossPartition(__int64 a1)
{
  __int64 v1; // rcx
  __int64 LockedVadEvent; // rax
  int v4; // edx

  if ( (*(_DWORD *)(a1 + 48) & 0x100000) != 0
    && (unsigned int)MiIsVadLarge()
    && (LockedVadEvent = MiLocateLockedVadEvent(v1, 16LL)) != 0
    && *(_QWORD *)(LockedVadEvent + 24) )
  {
    return (unsigned int)(v4 - 15);
  }
  else
  {
    return 0LL;
  }
}
