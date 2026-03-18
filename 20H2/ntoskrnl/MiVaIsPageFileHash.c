/*
 * XREFs of MiVaIsPageFileHash @ 0x14034D29C
 * Callers:
 *     MiLockStealSystemVm @ 0x140321C88 (MiLockStealSystemVm.c)
 *     MiActivePageClaimCandidate @ 0x14034C9A0 (MiActivePageClaimCandidate.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVaIsPageFileHash(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r11d
  int v3; // r10d
  __int64 i; // r9
  unsigned __int64 v5; // rcx

  v2 = *(_DWORD *)(a1 + 6936);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  for ( i = a1 + 6944; ; i += 8LL )
  {
    v5 = *(_QWORD *)(*(_QWORD *)i + 216LL);
    if ( v5 )
    {
      if ( a2 >= v5 && a2 < v5 + 4LL * *(_QWORD *)(*(_QWORD *)i + 8LL) )
        break;
    }
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return *(_QWORD *)i;
}
