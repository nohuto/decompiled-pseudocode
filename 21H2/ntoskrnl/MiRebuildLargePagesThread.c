/*
 * XREFs of MiRebuildLargePagesThread @ 0x1403CA190
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     MiRebuildLargeZeroPage @ 0x1403581E0 (MiRebuildLargeZeroPage.c)
 */

NTSTATUS __fastcall MiRebuildLargePagesThread(__int64 a1)
{
  NTSTATUS result; // eax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 12);
  Object[0] = (PVOID)(a1 + 104);
  Object[1] = (PVOID)(a1 + 15920);
  while ( 1 )
  {
    result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    if ( !result )
      break;
    if ( result == 1 )
      MiRebuildLargeZeroPage(a1);
  }
  return result;
}
