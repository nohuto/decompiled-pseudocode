/*
 * XREFs of RtlpHpLfhContextCompact @ 0x180006E1C
 * Callers:
 *     RtlpHpHeapCompact @ 0x180006AE4 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpLfhOwnerCompact @ 0x180006EAC (RtlpHpLfhOwnerCompact.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall RtlpHpLfhContextCompact(__int64 a1, int a2)
{
  int v4; // esi
  __int64 *v5; // rdi
  __int64 v6; // rbp
  __int64 result; // rax

  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 72);
  v5 = (__int64 *)(a1 + 128);
  v6 = 129LL;
  do
  {
    result = *v5;
    if ( (*v5 & 1) == 0 )
      result = RtlpHpLfhOwnerCompact(a1, *v5, a2 | 1u);
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( !v4 )
    return RtlReleaseSRWLockShared(a1 + 72);
  return result;
}
