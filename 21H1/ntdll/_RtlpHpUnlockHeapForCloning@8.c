/*
 * XREFs of _RtlpHpUnlockHeapForCloning@8 @ 0x4B379A6D
 * Callers:
 *     _RtlpUnlockHeapManagerForCloning@8 @ 0x4B359836 (_RtlpUnlockHeapManagerForCloning@8.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpLfhContextLockUnlock@8 @ 0x4B3766A8 (_RtlpHpLfhContextLockUnlock@8.c)
 *     _RtlpHpHeapUnlock@12 @ 0x4B379185 (_RtlpHpHeapUnlock@12.c)
 */

void __fastcall RtlpHpUnlockHeapForCloning(_RTL_SRWLOCK *a1, int a2)
{
  int v4; // ecx

  RtlpHpLfhContextLockUnlock((int)&a1[176], 2 * (a2 != 0) + 1);
  if ( a2 )
    a1[45].Value = 1;
  RtlReleaseSRWLockExclusive(a1 + 45);
  if ( a2 )
  {
    a1[86].Value = 1;
    a1[118].Value = 1;
  }
  RtlReleaseSRWLockExclusive(a1 + 86);
  RtlReleaseSRWLockExclusive(a1 + 118);
  RtlpHpHeapUnlock((int)a1, a2, v4);
}
