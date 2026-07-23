/*
 * XREFs of HvlLpReadMultipleMsr @ 0x1404F56B0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpReadMultipleMsr(int a1, unsigned int a2, int *a3, _QWORD *a4)
{
  __int64 v8; // r15
  __int64 *v9; // r14
  __int64 v10; // rax
  _DWORD *v11; // rdx
  int v12; // ecx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  _QWORD *v16; // [rsp+28h] [rbp-48h]
  _OWORD v17[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v18[2]; // [rsp+50h] [rbp-20h] BYREF

  memset(v18, 0, sizeof(v18));
  memset(v17, 0, sizeof(v17));
  if ( 16 * a2 > 0x1000 )
    return 3221225485LL;
  v8 = a2;
  v16 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v18, 1, 0LL, 16LL * a2);
  v9 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v17, 2, 0LL, 16LL * a2);
  if ( a2 )
  {
    v10 = a2;
    v11 = v16 + 1;
    do
    {
      *(v11 - 2) = a1;
      *(v11 - 1) = 65537;
      v12 = *a3++;
      *v11 = v12;
      v11 += 4;
      --v10;
    }
    while ( v10 );
  }
  v13 = (unsigned __int16)HvcallInitiateHypercall(136) != 0 ? 0xC0000001 : 0;
  if ( a2 )
  {
    do
    {
      v14 = *v9;
      v9 += 2;
      *a4++ = v14;
      --v8;
    }
    while ( v8 );
  }
  HvlpReleaseHypercallPage((__int64)v17);
  HvlpReleaseHypercallPage((__int64)v18);
  return v13;
}
