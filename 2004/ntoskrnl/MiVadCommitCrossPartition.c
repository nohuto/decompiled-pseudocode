/*
 * XREFs of MiVadCommitCrossPartition @ 0x140224328
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiRemoveVadCharges @ 0x1405F8D70 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1405FA170 (MiDecommitRegion.c)
 * Callees:
 *     MiIsVadLarge @ 0x140224350 (MiIsVadLarge.c)
 *     MiLocateLockedVadEvent @ 0x14025109C (MiLocateLockedVadEvent.c)
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
