/*
 * XREFs of HvlpSlowAcknowledgePageRequest @ 0x1404F770C
 * Callers:
 *     HvlSvmAcknowledgePageRequest @ 0x1404F6940 (HvlSvmAcknowledgePageRequest.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1404F7500 (HvlpFastAcknowledgePageRequest.c)
 */

__int64 __fastcall HvlpSlowAcknowledgePageRequest(unsigned int a1, const void *a2, int *a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rcx
  PHYSICAL_ADDRESS v8[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h]

  v3 = a1;
  memset(v8, 0, 32);
  v6 = HvlpAcquireHypercallPage(v8, 5, 0LL, 0LL);
  if ( v6 )
  {
    memmove(v6, a2, 40 * v3);
    v9 = HvcallInitiateHypercall(166);
    HvlpReleaseHypercallPage((__int64)v8);
    *a3 = WORD2(v9) & 0xFFF;
    return (unsigned __int16)v9;
  }
  else
  {
    if ( (unsigned int)v3 >= 2 )
      LODWORD(v3) = 2;
    return HvlpFastAcknowledgePageRequest(v3, (__int64)a2, a3);
  }
}
