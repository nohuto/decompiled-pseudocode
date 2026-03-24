/*
 * XREFs of ProcgrpSetSystemAffinityThreadEx @ 0x1C0092020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ProcgrpSetSystemAffinityThreadEx(KAFFINITY Affinity)
{
  KeSetSystemAffinityThread(Affinity);
  return 0LL;
}
