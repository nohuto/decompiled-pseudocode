/*
 * XREFs of _RtlSetThreadErrorMode@8 @ 0x4B2AB560
 * Callers:
 *     _RtlpCheckRelativeDrive@4 @ 0x4B32D619 (_RtlpCheckRelativeDrive@4.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlSetThreadErrorMode(unsigned int a1, unsigned int *a2)
{
  struct _TEB *v2; // eax
  int WowTebOffset; // edx
  unsigned int HardErrorMode; // esi

  if ( (a1 & 0xFFFFFF8F) != 0 )
    return -1073741585;
  v2 = NtCurrentTeb();
  WowTebOffset = v2->WowTebOffset;
  if ( WowTebOffset < 0 )
    v2 = (struct _TEB *)((char *)v2 + WowTebOffset);
  if ( a2 )
  {
    if ( v2 == (struct _TEB *)v2->NtTib.Self )
      HardErrorMode = v2->HardErrorMode;
    else
      HardErrorMode = v2[1].GdiTebBatch.Buffer[309];
    *a2 = HardErrorMode;
  }
  if ( v2 == (struct _TEB *)v2->NtTib.Self )
    v2->HardErrorMode = a1;
  else
    v2[1].GdiTebBatch.Buffer[309] = a1;
  return 0;
}
