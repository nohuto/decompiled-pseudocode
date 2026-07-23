/*
 * XREFs of HvlpInitializePowerStatistics @ 0x1404F8310
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CFCC8 (HvlPhase1Initialize.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlpInitializePowerStatistics()
{
  unsigned int v0; // esi
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  PHYSICAL_ADDRESS v4[4]; // [rsp+20h] [rbp-48h] BYREF
  PHYSICAL_ADDRESS v5[5]; // [rsp+40h] [rbp-28h] BYREF

  v0 = 0;
  memset(v5, 0, 32);
  memset(v4, 0, sizeof(v4));
  if ( (HvlEnlightenments & 0x408) == 0 )
    return 0LL;
  v2 = HvlpAcquireHypercallPage(v5, 1, 0LL, 8LL);
  v3 = HvlpAcquireHypercallPage(v4, 2, 0LL, 392LL);
  *v2 = 0LL;
  *(_DWORD *)v2 = 4;
  if ( (unsigned __int16)HvcallInitiateHypercall(155) )
  {
    v0 = -1073741823;
  }
  else
  {
    xmmword_140CED590 = *(_OWORD *)v3;
    xmmword_140CED5A0 = *((_OWORD *)v3 + 1);
    unk_140CED5B0 = *((_OWORD *)v3 + 2);
    qword_140CED5C0 = v3[6];
  }
  HvlpReleaseHypercallPage((__int64)v4);
  HvlpReleaseHypercallPage((__int64)v5);
  return v0;
}
