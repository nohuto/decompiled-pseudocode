/*
 * XREFs of HvlLpReadCpuid @ 0x1404EFBD0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpReadCpuid(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v10; // rbx
  _DWORD *v11; // rdi
  __int16 v12; // ax
  _OWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-20h] BYREF

  memset(v15, 0, sizeof(v15));
  memset(v14, 0, sizeof(v14));
  v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v15, 1, 0LL, 16LL);
  v11 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v14, 2, 0LL, 16LL);
  v10[3] = 0;
  *v10 = a1;
  v10[1] = 0x10000;
  v10[2] = a2;
  v12 = HvcallInitiateHypercall(136);
  *a3 = *v11;
  *a4 = v11[1];
  LODWORD(v10) = v12 != 0 ? 0xC0000001 : 0;
  *a5 = v11[2];
  *a6 = v11[3];
  HvlpReleaseHypercallPage((__int64)v14);
  HvlpReleaseHypercallPage((__int64)v15);
  return (unsigned int)v10;
}
