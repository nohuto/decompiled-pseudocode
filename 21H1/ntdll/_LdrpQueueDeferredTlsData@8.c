/*
 * XREFs of _LdrpQueueDeferredTlsData@8 @ 0x4B2EB699
 * Callers:
 *     _LdrpHandleTlsData@4 @ 0x4B2D0CD1 (_LdrpHandleTlsData@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __fastcall LdrpQueueDeferredTlsData(int a1, unsigned int a2)
{
  int v2; // edi
  int v3; // ebx

  v2 = a1 - 8;
  *(_DWORD *)(a1 - 8) = a2;
  v3 = (a2 >> 2) & 0xF;
  RtlAcquireSRWLockExclusive(&stru_4B3A6724 + 2 * v3);
  *(_DWORD *)(v2 + 4) = LdrpDelayedTlsReclaimTable[2 * v3];
  LdrpDelayedTlsReclaimTable[2 * v3] = v2;
  RtlReleaseSRWLockExclusive(&stru_4B3A6724 + 2 * v3);
}
