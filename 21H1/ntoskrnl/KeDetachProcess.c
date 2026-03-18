/*
 * XREFs of KeDetachProcess @ 0x14031CEB0
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x14025E8F0 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  __int64 v0; // r8
  _DWORD *v1; // r9
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((__int64 *)&CurrentThread->600, 0LL, v0, v1);
}
