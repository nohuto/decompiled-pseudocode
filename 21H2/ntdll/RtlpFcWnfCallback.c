/*
 * XREFs of RtlpFcWnfCallback @ 0x180101FF0
 * Callers:
 *     <none>
 * Callees:
 *     TpPostWork @ 0x1800128C0 (TpPostWork.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005DD5C (RtlpFcUpdateLocalConfiguration.c)
 */

__int64 __fastcall RtlpFcWnfCallback(__int64 a1, __int64 a2, __int64 a3, _RTL_SRWLOCK *a4)
{
  _RTL_SRWLOCK *v5; // rsi
  _RTL_SRWLOCK *v6; // rdi
  unsigned __int64 i; // rbx

  RtlpFcUpdateLocalConfiguration(a4, MEMORY[0x7FFE0710], 1);
  v5 = a4 + 26;
  RtlAcquireSRWLockShared(a4 + 26);
  v6 = a4 + 27;
  for ( i = a4[27].Value; (_RTL_SRWLOCK *)i != v6; i = *(_QWORD *)i )
    TpPostWork(*(PTP_WORK *)(i + 40));
  RtlReleaseSRWLockShared(v5);
  return 0LL;
}
