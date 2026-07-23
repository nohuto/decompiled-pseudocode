/*
 * XREFs of PipDmgFlushQueueAndRestartDevices @ 0x1408B15C8
 * Callers:
 *     PipDmgConsoleUnlockCallback @ 0x1408B1510 (PipDmgConsoleUnlockCallback.c)
 *     PipDmgReevaluateQueue @ 0x1408B168C (PipDmgReevaluateQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1408B16C8 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PiDmaGuardQueueFlush @ 0x1408B92B4 (PiDmaGuardQueueFlush.c)
 *     PipDgqFreeEntry @ 0x1408B93B8 (PipDgqFreeEntry.c)
 */

PVOID *PipDmgFlushQueueAndRestartDevices()
{
  PVOID *v0; // rbx
  PVOID v1; // rcx
  PVOID *result; // rax
  _QWORD *v3; // rax
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF

  if ( !PipDmaGuardPolicy || PipDmaGuardPolicy == 3 )
    KeBugCheckEx(0xCAu, 0x11uLL, 0LL, 0LL, 0LL);
  P[1] = P;
  P[0] = P;
  PiDmaGuardQueueFlush(P);
  v0 = (PVOID *)P[0];
  if ( P[0] == P )
    goto LABEL_6;
  do
  {
    v1 = v0[2];
    v0 = (PVOID *)*v0;
    PipDmgRequestRestartOnBlockedDevice(v1);
  }
  while ( v0 != P );
  while ( 1 )
  {
    v0 = (PVOID *)P[0];
LABEL_6:
    result = P;
    if ( v0 == P )
      break;
    if ( v0[1] != P || (v3 = *v0, *((PVOID **)*v0 + 1) != v0) )
      __fastfail(3u);
    P[0] = *v0;
    v3[1] = P;
    PipDgqFreeEntry(v0);
  }
  return result;
}
