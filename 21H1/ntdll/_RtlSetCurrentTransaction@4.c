/*
 * XREFs of _RtlSetCurrentTransaction@4 @ 0x4B2DCA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlSetCurrentTransaction(HANDLE TransactionHandle)
{
  struct _TEB *v1; // ecx
  int WowTebOffset; // eax
  struct _TEB *v3; // eax
  int v4; // edx
  bool v5; // zf
  struct _TEB *v6; // edx
  struct _TEB *v7; // ecx
  int v8; // eax

  if ( TransactionHandle == (HANDLE)-1 )
    return 0;
  NtCurrentTeb()->CurrentTransactionHandle = TransactionHandle;
  v1 = NtCurrentTeb();
  WowTebOffset = v1->WowTebOffset;
  if ( WowTebOffset < 0 )
    v1 = (struct _TEB *)((char *)v1 + WowTebOffset);
  v3 = NtCurrentTeb();
  v4 = v3->WowTebOffset;
  if ( v4 < 0 )
    v3 = (struct _TEB *)((char *)v3 + v4);
  v5 = v1 == (struct _TEB *)v3->NtTib.Self;
  v6 = NtCurrentTeb();
  v7 = v6;
  v8 = v6->WowTebOffset;
  if ( v5 )
  {
    if ( v8 < 0 )
      v7 = (struct _TEB *)((char *)v6 + v8);
    v7->CurrentTransactionHandle = v6->CurrentTransactionHandle;
  }
  else
  {
    if ( v8 < 0 )
      v7 = (struct _TEB *)((char *)v6 + v8);
    *(_QWORD *)&v7[1].Win32ClientInfo[59] = (int)v6->CurrentTransactionHandle;
  }
  return 1;
}
