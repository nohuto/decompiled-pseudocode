/*
 * XREFs of VidSchResetGPUTimeout @ 0x1C00F2D0C
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C00978E0 (VidSchiCheckHwProgress.c)
 *     VidSchRestartAdapter @ 0x1C00F5200 (VidSchRestartAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchResetGPUTimeout(__int64 a1)
{
  unsigned int i; // edx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  for ( i = 0; i < *(_DWORD *)(a1 + 80); *(_DWORD *)(*(_QWORD *)v4 + 480LL) = 0 )
  {
    v2 = *(_QWORD *)(a1 + 632);
    if ( i < *(_DWORD *)(a1 + 704) )
      v2 += 8LL * i;
    *(_DWORD *)(*(_QWORD *)v2 + 440LL) = 0;
    v3 = *(_QWORD *)(a1 + 632);
    if ( i < *(_DWORD *)(a1 + 704) )
      v3 += 8LL * i;
    *(_DWORD *)(*(_QWORD *)v3 + 444LL) = 0;
    v4 = *(_QWORD *)(a1 + 632);
    if ( i < *(_DWORD *)(a1 + 704) )
      v4 += 8LL * i;
    ++i;
  }
}
