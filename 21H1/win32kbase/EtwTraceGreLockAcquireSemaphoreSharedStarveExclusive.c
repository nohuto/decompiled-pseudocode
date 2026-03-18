/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x1C00CC150
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0156780 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(int a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz_EtwWriteTransfer(a1, (unsigned int)&LockAcquireSharedStarveExclusive, a3, a2);
  }
  return result;
}
