/*
 * XREFs of HvlLpReadMultipleMsr @ 0x1404EFCD0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpReadMultipleMsr(int a1, unsigned int a2, int *a3, _QWORD *a4)
{
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 *v10; // r14
  __int64 v11; // rax
  _DWORD *v12; // rdx
  int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  _QWORD *v17; // [rsp+28h] [rbp-48h]
  __int128 v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+40h] [rbp-30h]
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  __int128 v21; // [rsp+60h] [rbp-10h]

  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( 16 * a2 > 0x1000 )
    return 3221225485LL;
  v8 = a2;
  v17 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v20, 1, 0LL, 16LL * a2);
  v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v18, 2, 0LL, 16LL * a2);
  if ( a2 )
  {
    v11 = a2;
    v12 = v17 + 1;
    do
    {
      *(v12 - 2) = a1;
      *(v12 - 1) = 65537;
      v13 = *a3++;
      *v12 = v13;
      v12 += 4;
      --v11;
    }
    while ( v11 );
  }
  v14 = (unsigned __int16)HvcallInitiateHypercall(136, *((__int64 *)&v21 + 1), *((__int64 *)&v19 + 1), v9) != 0
      ? 0xC0000001
      : 0;
  if ( a2 )
  {
    do
    {
      v15 = *v10;
      v10 += 2;
      *a4++ = v15;
      --v8;
    }
    while ( v8 );
  }
  HvlpReleaseHypercallPage((__int64)&v18);
  HvlpReleaseHypercallPage((__int64)&v20);
  return v14;
}
