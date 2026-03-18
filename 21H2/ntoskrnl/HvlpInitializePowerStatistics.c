/*
 * XREFs of HvlpInitializePowerStatistics @ 0x14054A050
 * Callers:
 *     HvlPhase1Initialize @ 0x1403DF080 (HvlPhase1Initialize.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 */

__int64 HvlpInitializePowerStatistics()
{
  __int64 result; // rax
  unsigned int v1; // esi
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  __int128 v4; // [rsp+20h] [rbp-40h] BYREF
  __int64 v5; // [rsp+30h] [rbp-30h]
  __int64 v6; // [rsp+38h] [rbp-28h]
  __int128 v7; // [rsp+40h] [rbp-20h] BYREF
  __int64 v8; // [rsp+50h] [rbp-10h]
  __int64 v9; // [rsp+58h] [rbp-8h]

  result = 0LL;
  v1 = 0;
  v8 = 0LL;
  v7 = 0LL;
  LODWORD(v9) = 0;
  v4 = 0LL;
  v5 = 0LL;
  LODWORD(v6) = 0;
  if ( (HvlEnlightenments & 0x408) != 0 )
  {
    v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v7, 1, 0LL, 8LL);
    v3 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v4, 2, 0LL, 392LL);
    *v2 = 0LL;
    *(_DWORD *)v2 = 4;
    if ( (unsigned __int16)HvcallInitiateHypercall(155) )
    {
      v1 = -1073741823;
    }
    else
    {
      xmmword_140CF7090 = *(_OWORD *)v3;
      xmmword_140CF70A0 = *((_OWORD *)v3 + 1);
      unk_140CF70B0 = *((_OWORD *)v3 + 2);
      qword_140CF70C0 = v3[6];
    }
    HvlpReleaseHypercallPage((__int64)&v4);
    HvlpReleaseHypercallPage((__int64)&v7);
    return v1;
  }
  return result;
}
