/*
 * XREFs of RaidAdapterGetFirstUnit @ 0x1C002CA50
 * Callers:
 *     StorpMarkDeviceFailed @ 0x1C003C5F8 (StorpMarkDeviceFailed.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00059E8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005B6C (RaidAdapterReleaseInterruptLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidAdapterGetFirstUnit(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int i; // r14d
  _QWORD **v5; // rsi
  _QWORD *j; // r15
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  char (__fastcall *v9)(__int64 *, __int64); // [rsp+28h] [rbp-20h]

  v1 = 0LL;
  v8 = 0LL;
  v9 = RaidpAdapterEnumerateUnit;
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 704) )
    CurrentIrql = RaidAdapterAcquireInterruptLock(a1);
  for ( i = 0; i < *(_DWORD *)(a1 + 164); ++i )
  {
    v5 = (_QWORD **)(*(_QWORD *)(a1 + 176) + 16LL * i);
    for ( j = *v5; j != v5; j = (_QWORD *)*j )
    {
      if ( !v9(&v8, (__int64)j) )
        goto LABEL_9;
    }
  }
LABEL_9:
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 704) )
    RaidAdapterReleaseInterruptLock(a1, CurrentIrql);
  if ( v8 )
    return v8 - 72;
  return v1;
}
