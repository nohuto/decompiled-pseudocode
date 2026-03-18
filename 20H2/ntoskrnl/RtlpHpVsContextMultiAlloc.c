/*
 * XREFs of RtlpHpVsContextMultiAlloc @ 0x14023BAA4
 * Callers:
 *     ExAllocateHeapPool @ 0x140212080 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpVsContextAllocateInternal @ 0x1402147E0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14023BB80 (RtlpHpReleaseQueuedLockExclusive.c)
 */

__int64 __fastcall RtlpHpVsContextMultiAlloc(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        char **a5,
        char **a6)
{
  char *v6; // rsi
  char *v7; // rbx
  unsigned int v8; // edi
  char *v13; // rax
  __int64 result; // rax
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+90h] [rbp+18h] BYREF

  v17 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v16 = 0LL;
  v15 = 0LL;
  if ( a3 )
  {
    do
    {
      v13 = RtlpHpVsContextAllocateInternal(a1, a2, a2, a4, (__int64)&v15, &v17);
      if ( !v13 )
        break;
      *(_QWORD *)v13 = v6;
      v6 = v13;
      if ( !v7 )
        v7 = v13;
      ++v8;
    }
    while ( v8 < a3 );
    if ( v17 && (a4 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), &v15);
  }
  result = v8;
  *a5 = v6;
  *a6 = v7;
  return result;
}
