/*
 * XREFs of sub_1800725E0 @ 0x1800725E0
 * Callers:
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800725E0(_DWORD *a1, int a2, int a3)
{
  int v5; // eax
  int v6; // ecx
  unsigned __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 )
  {
    v5 = a1[333];
    if ( (v5 & 0x10) == 0 )
    {
      a1[333] = v5 | 0x10;
      RtlQueryUnbiasedInterruptTime(&v7);
      a1[441] = v7 / 0x2710;
    }
  }
  if ( a3 )
  {
    v6 = a1[333];
    if ( (v6 & 0x20) == 0 )
    {
      a1[333] = v6 | 0x20;
      RtlQueryUnbiasedInterruptTime(&v7);
      a1[442] = v7 / 0x2710;
    }
  }
}
