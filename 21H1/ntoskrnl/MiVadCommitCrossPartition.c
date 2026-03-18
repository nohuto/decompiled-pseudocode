/*
 * XREFs of MiVadCommitCrossPartition @ 0x14027D378
 * Callers:
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiRemoveVadCharges @ 0x14062DDB0 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x14062F1B0 (MiDecommitRegion.c)
 * Callees:
 *     MiIsVadLarge @ 0x14027D3A0 (MiIsVadLarge.c)
 *     MiLocateLockedVadEvent @ 0x1402AA0CC (MiLocateLockedVadEvent.c)
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
