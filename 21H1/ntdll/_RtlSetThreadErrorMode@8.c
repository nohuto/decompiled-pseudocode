/*
 * XREFs of _RtlSetThreadErrorMode@8 @ 0x4B2AB560
 * Callers:
 *     _RtlpCheckRelativeDrive@4 @ 0x4B32D619 (_RtlpCheckRelativeDrive@4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetThreadErrorMode(ULONG NewMode, PULONG OldMode)
{
  struct _TEB *v2; // eax
  int WowTebOffset; // edx
  ULONG HardErrorMode; // esi

  if ( (NewMode & 0xFFFFFF8F) != 0 )
    return -1073741585;
  v2 = NtCurrentTeb();
  WowTebOffset = v2->WowTebOffset;
  if ( WowTebOffset < 0 )
    v2 = (struct _TEB *)((char *)v2 + WowTebOffset);
  if ( OldMode )
  {
    if ( v2 == (struct _TEB *)v2->NtTib.Self )
      HardErrorMode = v2->HardErrorMode;
    else
      HardErrorMode = v2[1].GdiTebBatch.Buffer[309];
    *OldMode = HardErrorMode;
  }
  if ( v2 == (struct _TEB *)v2->NtTib.Self )
    v2->HardErrorMode = NewMode;
  else
    v2[1].GdiTebBatch.Buffer[309] = NewMode;
  return 0;
}
