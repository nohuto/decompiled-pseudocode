/*
 * XREFs of PopDirectedDripsUmDirectedFxSetMode @ 0x1408F4068
 * Callers:
 *     PopDirectedDripsUmPowerInformationInternal @ 0x1408F423C (PopDirectedDripsUmPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopDirectedDripsUmDirectedFxSetMode(unsigned int a1, __int64 a2)
{
  unsigned int v3; // ebx

  if ( a1 >= 0xC )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopDirectedDripsUmLock);
    v3 = 0;
    PopDirectedDripsUmTestPermissive = *(_BYTE *)(a2 + 8) != 0;
    PopReleaseRwLock((ULONG_PTR)&PopDirectedDripsUmLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
