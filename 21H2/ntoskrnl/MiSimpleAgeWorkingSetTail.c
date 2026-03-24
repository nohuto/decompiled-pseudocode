/*
 * XREFs of MiSimpleAgeWorkingSetTail @ 0x14053BFD0
 * Callers:
 *     MiSimpleAgePte @ 0x14053BCC0 (MiSimpleAgePte.c)
 * Callees:
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiProcessVmAccessedInfo @ 0x14053B930 (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x14053BA00 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiSimpleAgeWorkingSetTail(__int64 a1, _KPROCESS *a2)
{
  __int64 i; // rbx
  _DWORD *v4; // rdx

  for ( i = *(_QWORD *)(a1 + 168);
        ;
        MiProcessVmAccessedInfo(
          a1,
          *(_DWORD **)(i + 248),
          (__int64 (__fastcall *)(__int64, _QWORD *, __int64, unsigned __int64, __int64))MiSimpleAgeWorkingSetEPTCallback,
          i) )
  {
    MiFlushTbList(*(_QWORD *)(i + 56), a2);
    v4 = *(_DWORD **)(i + 248);
    if ( !v4 || !*v4 || !(unsigned int)MiQueryEPTAccessedState(a1, v4) )
      break;
  }
  return 0LL;
}
