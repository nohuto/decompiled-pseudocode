/*
 * XREFs of HvlLpWriteMultipleMsr @ 0x1405473F0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlLpWriteMultipleMsr(int a1, unsigned int a2, int *a3, __int64 *a4)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r9
  _QWORD *v11; // rax
  _DWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int128 v16; // [rsp+28h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]

  v6 = a2;
  v7 = 32LL * a2;
  v16 = 0LL;
  v17 = 0LL;
  LODWORD(v18) = 0;
  if ( v7 > 0x1000 )
    return 3221225485LL;
  v11 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v16, 1, 0LL, v7);
  if ( a2 )
  {
    v12 = v11 + 1;
    do
    {
      *(v12 - 2) = a1;
      *(v12 - 1) = 65537;
      v13 = *a3++;
      *v12 = v13;
      v12 += 8;
      v14 = *a4++;
      *((_QWORD *)v12 - 3) = v14;
      --v6;
    }
    while ( v6 );
  }
  v15 = (unsigned __int16)HvcallInitiateHypercall(137) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v16);
  return v15;
}
