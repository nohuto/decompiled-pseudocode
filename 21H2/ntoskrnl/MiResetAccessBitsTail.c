/*
 * XREFs of MiResetAccessBitsTail @ 0x1403CA3D0
 * Callers:
 *     MiResetAccessBitPte @ 0x1403C48E0 (MiResetAccessBitPte.c)
 * Callees:
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiProcessVmAccessedInfo @ 0x14045BBD4 (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x14045BCA2 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiResetAccessBitsTail(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rcx
  _DWORD *v4; // rdx

  for ( i = *(_QWORD *)(a1 + 168); ; MiProcessVmAccessedInfo(a1, *(_QWORD *)(i + 16), MiResetAccessBitsEPTCallback, i) )
  {
    v3 = *(_QWORD *)(i + 8);
    if ( v3 )
      MiFlushTbList(v3);
    v4 = *(_DWORD **)(i + 16);
    if ( !v4 || !*v4 || !(unsigned int)MiQueryEPTAccessedState(a1, v4, *(_QWORD *)(i + 8) != 0LL) )
      break;
  }
  return 0LL;
}
