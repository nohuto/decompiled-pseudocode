/*
 * XREFs of RtlpFcWnfCallback @ 0x180101C80
 * Callers:
 *     <none>
 * Callees:
 *     TpPostWork @ 0x1800128C0 (TpPostWork.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005C7DC (RtlpFcUpdateLocalConfiguration.c)
 */

__int64 __fastcall RtlpFcWnfCallback(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  volatile signed __int64 *v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  __int64 *i; // rbx

  RtlpFcUpdateLocalConfiguration(a4, MEMORY[0x7FFE0710], 1);
  v5 = (volatile signed __int64 *)(a4 + 208);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a4 + 208), v6, v7, v8);
  v11 = a4 + 216;
  for ( i = *(__int64 **)(a4 + 216); i != (__int64 *)v11; i = (__int64 *)*i )
    TpPostWork((_PEB_LDR_DATA *)i[5], v9, v10);
  RtlReleaseSRWLockShared(v5);
  return 0LL;
}
