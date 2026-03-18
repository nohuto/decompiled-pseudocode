/*
 * XREFs of HvlpStartVirtualProcessor @ 0x1404EE878
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x1404EFA10 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpStartVirtualProcessor(int a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v10, 1, 0LL, 240LL);
  v5 = *((_QWORD *)&v11 + 1);
  *v4 = -1LL;
  *((_DWORD *)v4 + 3) = 0;
  *((_DWORD *)v4 + 2) = a1;
  v4 += 2;
  *(_OWORD *)v4 = *a2;
  *((_OWORD *)v4 + 1) = a2[1];
  *((_OWORD *)v4 + 2) = a2[2];
  *((_OWORD *)v4 + 3) = a2[3];
  *((_OWORD *)v4 + 4) = a2[4];
  *((_OWORD *)v4 + 5) = a2[5];
  *((_OWORD *)v4 + 6) = a2[6];
  v4 += 16;
  v6 = a2[7];
  a2 += 8;
  *((_OWORD *)v4 - 1) = v6;
  *(_OWORD *)v4 = *a2;
  *((_OWORD *)v4 + 1) = a2[1];
  *((_OWORD *)v4 + 2) = a2[2];
  *((_OWORD *)v4 + 3) = a2[3];
  *((_OWORD *)v4 + 4) = a2[4];
  *((_OWORD *)v4 + 5) = a2[5];
  v8 = (unsigned __int16)HvcallInitiateHypercall(153, v5, 0LL, v7) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v10);
  return v8;
}
