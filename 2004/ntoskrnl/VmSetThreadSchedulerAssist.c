/*
 * XREFs of VmSetThreadSchedulerAssist @ 0x14059D2C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetThreadSchedulerAssist @ 0x140519118 (KeSetThreadSchedulerAssist.c)
 */

char __fastcall VmSetThreadSchedulerAssist(struct _KTHREAD *a1, void *a2, __int64 a3, _DWORD *a4)
{
  return KeSetThreadSchedulerAssist(a1, a2, a3, a4);
}
