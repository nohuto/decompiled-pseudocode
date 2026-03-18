/*
 * XREFs of VmSetThreadSchedulerAssist @ 0x1405A0D60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetThreadSchedulerAssist @ 0x14051CAE8 (KeSetThreadSchedulerAssist.c)
 */

char __fastcall VmSetThreadSchedulerAssist(struct _KTHREAD *a1, void *a2, __int64 a3, _DWORD *a4)
{
  return KeSetThreadSchedulerAssist(a1, a2, a3, a4);
}
