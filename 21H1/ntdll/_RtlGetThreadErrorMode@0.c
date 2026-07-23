/*
 * XREFs of _RtlGetThreadErrorMode@0 @ 0x4B32E4B0
 * Callers:
 *     _LdrpLogLoadFailureEtwEvent@20 @ 0x4B2EC106 (_LdrpLogLoadFailureEtwEvent@20.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetThreadErrorMode(void)
{
  struct _TEB *v0; // eax
  int WowTebOffset; // ecx
  struct _TEB *v2; // ecx
  int v3; // edx
  bool v4; // zf
  struct _TEB *v5; // eax
  int v6; // ecx

  v0 = NtCurrentTeb();
  WowTebOffset = v0->WowTebOffset;
  if ( WowTebOffset < 0 )
    v0 = (struct _TEB *)((char *)v0 + WowTebOffset);
  v2 = NtCurrentTeb();
  v3 = v2->WowTebOffset;
  if ( v3 < 0 )
    v2 = (struct _TEB *)((char *)v2 + v3);
  v4 = v0 == (struct _TEB *)v2->NtTib.Self;
  v5 = NtCurrentTeb();
  v6 = v5->WowTebOffset;
  if ( v4 )
  {
    if ( v6 < 0 )
      v5 = (struct _TEB *)((char *)v5 + v6);
    return v5->HardErrorMode;
  }
  else
  {
    if ( v6 < 0 )
      v5 = (struct _TEB *)((char *)v5 + v6);
    return v5[1].GdiTebBatch.Buffer[309];
  }
}
