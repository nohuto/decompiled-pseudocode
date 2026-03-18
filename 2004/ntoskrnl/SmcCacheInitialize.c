/*
 * XREFs of SmcCacheInitialize @ 0x140929ECC
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409271E8 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExInitializePushLock @ 0x140267800 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x14040A280 (memset.c)
 *     StEtaInitialize @ 0x140597EF4 (StEtaInitialize.c)
 */

void __fastcall SmcCacheInitialize(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rdi

  memset(a1, 0, 0x428uLL);
  StEtaInitialize((__int64)&a1[13]);
  a1[20].Count = 0LL;
  v2 = a1 + 21;
  v3 = v2 + 48;
  if ( v2 < &v2[48] )
  {
    v4 = v2 + 2;
    do
    {
      LODWORD(v2->Count) = -1;
      ExInitializePushLock(&v4->Count);
      ExWaitForRundownProtectionRelease(v4);
      v2 += 3;
      v4 += 3;
    }
    while ( v2 < v3 );
  }
}
