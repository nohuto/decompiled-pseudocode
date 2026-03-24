/*
 * XREFs of ExIsSafeWorkItem @ 0x1403DBD20
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x1405A83C0 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_1403DCBC0;
}
