/*
 * XREFs of MiUpdateOldWorkingSetPagesTail @ 0x14053C9C0
 * Callers:
 *     MiUpdateOldPte @ 0x14053C7F0 (MiUpdateOldPte.c)
 * Callees:
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MiProcessVmAccessedInfo @ 0x14053BB70 (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x14053BC40 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiUpdateOldWorkingSetPagesTail(__int64 a1)
{
  __int64 i; // rbx
  _DWORD *v3; // rdx

  for ( i = *(_QWORD *)(a1 + 168);
        ;
        MiProcessVmAccessedInfo(
          a1,
          *(_DWORD **)(i + 208),
          (__int64 (__fastcall *)(__int64, _QWORD *, __int64, unsigned __int64, __int64))MiUpdateOldPagesEPTCallback,
          i) )
  {
    if ( *(_DWORD *)(i + 36) )
      MiFreeWsleList(*(_QWORD *)(a1 + 24), i + 24, 0);
    v3 = *(_DWORD **)(i + 208);
    if ( !v3 || !*v3 || !(unsigned int)MiQueryEPTAccessedState(a1, v3) )
      break;
  }
  return 0LL;
}
