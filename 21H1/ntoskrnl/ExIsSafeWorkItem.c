/*
 * XREFs of ExIsSafeWorkItem @ 0x1403D78E0
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x1405A2800 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_1403D8780;
}
