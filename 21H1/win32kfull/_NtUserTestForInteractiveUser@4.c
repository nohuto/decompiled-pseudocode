/*
 * XREFs of _NtUserTestForInteractiveUser@4 @ 0x16AAB4
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserTestForInteractiveUser(unsigned int a1)
{
  int v1; // esi
  int *v2; // ecx
  int v3; // edx
  int v4; // ecx

  v1 = 0;
  EnterSharedCrit(0, 1);
  v2 = (int *)a1;
  if ( a1 + 8 < a1 || a1 + 8 > _MmUserProbeAddress )
    v2 = (int *)_MmUserProbeAddress;
  v3 = *v2;
  v4 = v2[1];
  if ( v3 != *(_DWORD *)(_grpWinStaList + 100) || v4 != *(_DWORD *)(_grpWinStaList + 104) )
    v1 = -1073741790;
  UserSessionSwitchLeaveCrit();
  return v1;
}
