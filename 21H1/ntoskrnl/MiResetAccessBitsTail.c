/*
 * XREFs of MiResetAccessBitsTail @ 0x14039A060
 * Callers:
 *     MiResetAccessBitPte @ 0x1403982D0 (MiResetAccessBitPte.c)
 * Callees:
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiProcessVmAccessedInfo @ 0x140535E10 (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x140535EE0 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiResetAccessBitsTail(__int64 a1, _KPROCESS *a2)
{
  __int64 i; // rbx
  __int64 v4; // rcx
  _DWORD *v5; // rdx

  for ( i = *(_QWORD *)(a1 + 168); ; MiProcessVmAccessedInfo(a1, *(_QWORD *)(i + 16), MiResetAccessBitsEPTCallback, i) )
  {
    v4 = *(_QWORD *)(i + 8);
    if ( v4 )
      MiFlushTbList(v4, a2);
    v5 = *(_DWORD **)(i + 16);
    if ( !v5 || !*v5 || !(unsigned int)MiQueryEPTAccessedState(a1, v5, *(_QWORD *)(i + 8) != 0LL) )
      break;
  }
  return 0LL;
}
