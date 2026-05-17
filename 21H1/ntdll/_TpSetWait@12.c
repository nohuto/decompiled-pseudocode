/*
 * XREFs of _TpSetWait@12 @ 0x4B2B7A90
 * Callers:
 *     <none>
 * Callees:
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 */

int __stdcall TpSetWait(int a1, int a2, int a3)
{
  return TpSetWaitEx(a1, a2, a3, 0);
}
