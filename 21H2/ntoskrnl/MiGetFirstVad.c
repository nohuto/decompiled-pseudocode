/*
 * XREFs of MiGetFirstVad @ 0x1402D75D4
 * Callers:
 *     MiLockVadRange @ 0x1406F7D78 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x1406F7F40 (MiUnlockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 *     MiCommitInitialVadMetadataBits @ 0x140755920 (MiCommitInitialVadMetadataBits.c)
 *     MiHotPatchProcess @ 0x1409736EC (MiHotPatchProcess.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiGetFirstVad(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *result; // rax

  v1 = *(_QWORD **)(a1 + 2008);
  if ( !v1 )
    return 0LL;
  do
  {
    result = v1;
    v1 = (_QWORD *)*v1;
  }
  while ( v1 );
  return result;
}
