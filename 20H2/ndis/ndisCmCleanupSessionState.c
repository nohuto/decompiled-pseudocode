/*
 * XREFs of ndisCmCleanupSessionState @ 0x1C00B0C68
 * Callers:
 *     ndisCmCleanupWorkRoutine @ 0x1C0126430 (ndisCmCleanupWorkRoutine.c)
 * Callees:
 *     <none>
 */

void ndisCmCleanupSessionState()
{
  KIRQL v0; // al
  unsigned int v1; // r8d
  __int64 i; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E4B20);
  v1 = dword_1C00E6190;
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    if ( *((_QWORD *)P + 3 * i + 1) )
    {
      KeReleaseSpinLock(&qword_1C00E4B20, v0);
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E4B20);
      v1 = dword_1C00E6190;
    }
  }
  KeReleaseSpinLock(&qword_1C00E4B20, v0);
}
