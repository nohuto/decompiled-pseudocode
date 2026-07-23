/*
 * XREFs of IopWaitForLockAlertable @ 0x1402FB8F0
 * Callers:
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IopWaitForLockAlertable(PVOID Object, char a2, char a3)
{
  KPROCESSOR_MODE v6; // di
  BOOLEAN v7; // r9
  NTSTATUS result; // eax
  int v9; // eax

  v6 = a3 != 0 ? a2 : 0;
  while ( 1 )
  {
    v7 = a3 || a2 == 1;
    result = KeWaitForSingleObject(Object, Executive, v6, v7, 0LL);
    if ( result != 257 )
      break;
    v9 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 2);
    if ( a3 )
      return (v9 & 1) != 0 ? -1073741749 : -1073741536;
    if ( (v9 & 1) != 0 )
      return -1073741749;
  }
  return result;
}
