/*
 * XREFs of _RtlGetCurrentTransaction@0 @ 0x4B2E08C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE RtlGetCurrentTransaction(void)
{
  struct _TEB *v0; // eax
  int WowTebOffset; // ecx
  struct _TEB *v2; // ecx
  int v3; // edx
  bool v4; // zf
  struct _TEB *v5; // eax
  int v6; // ecx
  void *CurrentTransactionHandle; // ecx

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
    CurrentTransactionHandle = v5->CurrentTransactionHandle;
  }
  else
  {
    if ( v6 < 0 )
      v5 = (struct _TEB *)((char *)v5 + v6);
    CurrentTransactionHandle = (void *)v5[1].Win32ClientInfo[59];
  }
  NtCurrentTeb()->CurrentTransactionHandle = CurrentTransactionHandle;
  return NtCurrentTeb()->CurrentTransactionHandle;
}
