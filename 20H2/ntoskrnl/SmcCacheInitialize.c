/*
 * XREFs of SmcCacheInitialize @ 0x14092FCF4
 * Callers:
 *     SmcProcessCreateRequest @ 0x14092D010 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     ExInitializePushLock @ 0x1402D6A50 (ExInitializePushLock.c)
 *     memset @ 0x140411300 (memset.c)
 *     StEtaInitialize @ 0x14059B994 (StEtaInitialize.c)
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
