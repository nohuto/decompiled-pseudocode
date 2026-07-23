/*
 * XREFs of MiVaIsPageFileHash @ 0x14030DD4C
 * Callers:
 *     MiLockStealSystemVm @ 0x1402150E4 (MiLockStealSystemVm.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiActivePageClaimCandidate @ 0x14030D450 (MiActivePageClaimCandidate.c)
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
