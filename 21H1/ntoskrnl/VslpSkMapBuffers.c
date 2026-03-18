/*
 * XREFs of VslpSkMapBuffers @ 0x14088C518
 * Callers:
 *     VslpSkStartProfiling @ 0x14088C5E0 (VslpSkStartProfiling.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x140390BD4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140390C28 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 VslpSkMapBuffers()
{
  int v0; // ebx
  _QWORD v2[14]; // [rsp+30h] [rbp-88h] BYREF

  memset(v2, 0, 0x68uLL);
  v0 = VslpLockPagesForTransfer(
         (__int64)&VslpProfilingTransfer,
         (struct _MDL *)VslpEventLog,
         *((_DWORD *)VslpEventLog + 3),
         1,
         0);
  if ( v0 >= 0 )
  {
    v2[1] = VslpProfilingTransfer;
    v2[2] = qword_140CF5248;
    v0 = VslpEnterIumSecureMode(2u, 75, 0, (__int64)v2);
    if ( v0 < 0 )
    {
      VslpUnlockPagesForTransfer((__int64 **)&VslpProfilingTransfer);
      memset(&VslpProfilingTransfer, 0, 0x48uLL);
    }
  }
  return (unsigned int)v0;
}
