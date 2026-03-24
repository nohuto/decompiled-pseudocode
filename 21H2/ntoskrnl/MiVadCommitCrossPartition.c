/*
 * XREFs of MiVadCommitCrossPartition @ 0x14031823C
 * Callers:
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MiRemoveVadCharges @ 0x1406ED1F0 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1406EE5F0 (MiDecommitRegion.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1402FE3CC (MiLocateLockedVadEvent.c)
 *     MiIsVadLarge @ 0x140318264 (MiIsVadLarge.c)
 */

__int64 __fastcall MiVadCommitCrossPartition(__int64 a1)
{
  __int64 v1; // rcx
  __int64 **LockedVadEvent; // rax
  int v4; // edx

  if ( (*(_DWORD *)(a1 + 48) & 0x100000) != 0
    && (unsigned int)MiIsVadLarge(a1)
    && (LockedVadEvent = MiLocateLockedVadEvent(v1, 16)) != 0LL
    && LockedVadEvent[3] )
  {
    return (unsigned int)(v4 - 15);
  }
  else
  {
    return 0LL;
  }
}
