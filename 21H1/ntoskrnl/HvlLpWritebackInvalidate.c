/*
 * XREFs of HvlLpWritebackInvalidate @ 0x1404EFF00
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpWritebackInvalidate(int a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v7, 1, 0LL, 32LL);
  v2[1] = 0LL;
  v2[2] = 0LL;
  v2[3] = 0LL;
  v3 = *((_QWORD *)&v8 + 1);
  *(_DWORD *)v2 = a1;
  *((_DWORD *)v2 + 1) = 65538;
  v5 = (unsigned __int16)HvcallInitiateHypercall(137, v3, 0LL, v4) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v7);
  return v5;
}
