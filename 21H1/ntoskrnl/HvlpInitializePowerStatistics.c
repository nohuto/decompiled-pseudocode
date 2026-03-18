/*
 * XREFs of HvlpInitializePowerStatistics @ 0x1404F2930
 * Callers:
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlpInitializePowerStatistics()
{
  unsigned int v0; // esi
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r9
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int128 v11; // [rsp+50h] [rbp-18h]

  v0 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( (HvlEnlightenments & 0x408) == 0 )
    return 0LL;
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v10, 1, 0LL, 8LL);
  v3 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v8, 2, 0LL, 392LL);
  v4 = *((_QWORD *)&v9 + 1);
  v5 = v3;
  v6 = *((_QWORD *)&v11 + 1);
  *v2 = 0LL;
  *(_DWORD *)v2 = 4;
  if ( (unsigned __int16)HvcallInitiateHypercall(155, v6, v4, v7) )
  {
    v0 = -1073741823;
  }
  else
  {
    xmmword_140CED2E0 = *(_OWORD *)v5;
    xmmword_140CED2F0 = *((_OWORD *)v5 + 1);
    unk_140CED300 = *((_OWORD *)v5 + 2);
    qword_140CED310 = v5[6];
  }
  HvlpReleaseHypercallPage((__int64)&v8);
  HvlpReleaseHypercallPage((__int64)&v10);
  return v0;
}
