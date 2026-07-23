/*
 * XREFs of HvlLpWriteMultipleMsr @ 0x1404F57F0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpWriteMultipleMsr(int a1, unsigned int a2, int *a3, __int64 *a4)
{
  unsigned __int64 v6; // r9
  __int64 v8; // rsi
  _QWORD *v11; // rax
  _DWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // ebx
  PHYSICAL_ADDRESS v16[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = 32LL * a2;
  v8 = a2;
  memset(v16, 0, 32);
  if ( v6 > 0x1000 )
    return 3221225485LL;
  v11 = HvlpAcquireHypercallPage(v16, 1, 0LL, v6);
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
      --v8;
    }
    while ( v8 );
  }
  v15 = (unsigned __int16)HvcallInitiateHypercall(137) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v16);
  return v15;
}
