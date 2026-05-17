/*
 * XREFs of _RtlDeregisterWait@4 @ 0x4B385450
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeregisterWaitEx@8 @ 0x4B2A8010 (_RtlDeregisterWaitEx@8.c)
 */

int __stdcall RtlDeregisterWait(int a1)
{
  return RtlDeregisterWaitEx(a1, 0);
}
