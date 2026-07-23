/*
 * XREFs of RtlpHpLfhContextLockUnlock @ 0x18010E1D0
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x1800F2854 (RtlLockHeapManagerForCloning.c)
 *     RtlpHpUnlockHeapForCloning @ 0x18010E640 (RtlpHpUnlockHeapForCloning.c)
 * Callees:
 *     RtlpHpLfhOwnerLockUnlock @ 0x18010E2C4 (RtlpHpLfhOwnerLockUnlock.c)
 */

__int64 __fastcall RtlpHpLfhContextLockUnlock(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 i; // r8

  v3 = (__int64 *)(a1 + 128);
  v5 = 129LL;
  do
  {
    result = *v3;
    if ( (*v3 & 1) == 0 )
    {
      v7 = *v3;
      if ( (a2 & 2) != 0 )
      {
        for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(a1 + 56); i = (unsigned int)(i + 1) )
          *(_BYTE *)(i + *(_QWORD *)(v7 + 88)) = 0;
      }
      result = RtlpHpLfhOwnerLockUnlock(v7, a2);
    }
    ++v3;
    --v5;
  }
  while ( v5 );
  return result;
}
