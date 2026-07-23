/*
 * XREFs of _RtlpHpLfhContextCompact@8 @ 0x4B37653C
 * Callers:
 *     _RtlpHpHeapCompact@8 @ 0x4B378991 (_RtlpHpHeapCompact@8.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlpHpLfhOwnerCompact@12 @ 0x4B376814 (_RtlpHpLfhOwnerCompact@12.c)
 */

void __fastcall RtlpHpLfhContextCompact(_RTL_SRWLOCK *a1, int a2)
{
  unsigned int *v3; // edi
  int v4; // ecx
  int v5; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+14h] [ebp-4h]

  v5 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 17);
  v3 = (unsigned int *)&a1[32];
  v4 = 129;
  v7 = 129;
  do
  {
    if ( (*v3 & 1) == 0 )
    {
      RtlpHpLfhOwnerCompact(a2 | 1);
      v4 = v7;
    }
    ++v3;
    v7 = --v4;
  }
  while ( v4 );
  if ( !v5 )
    RtlReleaseSRWLockShared(a1 + 17);
}
