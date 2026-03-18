/*
 * XREFs of BvgaNotifyDisplayOwnershipLost @ 0x1404FA340
 * Callers:
 *     BvgaNotifyDisplayOwnershipChange @ 0x1404FA2E0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BvgaAcquireLock @ 0x1404FA0B0 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x1404FA3B0 (BvgaReleaseLock.c)
 */

__int64 __fastcall BvgaNotifyDisplayOwnershipLost(__int64 (__fastcall *a1)(_QWORD))
{
  __int64 result; // rax

  if ( BvgaBootDriverInstalled )
  {
    BvgaAcquireLock();
    if ( BvgaDisplayState != 2 )
      VidCleanUp();
    BvgaDisplayState = 2;
    BvgaResetDisplayParameters = a1;
    return BvgaReleaseLock();
  }
  else
  {
    BvgaDisplayState = 2;
    BvgaResetDisplayParameters = a1;
  }
  return result;
}
