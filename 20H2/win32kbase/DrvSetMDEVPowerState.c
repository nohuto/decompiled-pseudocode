/*
 * XREFs of DrvSetMDEVPowerState @ 0x1C00CB560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DrvSetMDEVPowerState(__int64 a1, int a2)
{
  unsigned int i; // r9d
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // eax

  for ( i = 0; i < *(_DWORD *)(a1 + 20); *(_DWORD *)(v3 + 160) = v5 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(56LL * i + a1 + 40) + 2576LL);
    v4 = *(_DWORD *)(v3 + 160);
    if ( a2 )
      v5 = v4 & 0x7FFFFFFF;
    else
      v5 = v4 | 0x80000000;
    ++i;
  }
}
