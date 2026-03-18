/*
 * XREFs of ExpExpirationThread @ 0x140947020
 * Callers:
 *     <none>
 * Callees:
 *     PsTerminateSystemThread @ 0x1406EA510 (PsTerminateSystemThread.c)
 *     ExRaiseHardError @ 0x1409517E0 (ExRaiseHardError.c)
 */

void __fastcall ExpExpirationThread(__int64 a1)
{
  NTSTATUS v1; // eax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    v1 = ExRaiseHardError(a1, 0, 0, 0, 1, (__int64)&v2);
    PsTerminateSystemThread(v1);
  }
}
