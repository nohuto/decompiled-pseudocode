/*
 * XREFs of _NtUserSetThreadLayoutHandles@8 @ 0x169E09
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserSetThreadLayoutHandles(int a1, unsigned int a2)
{
  int v2; // esi
  int v3; // ecx
  int v4; // ecx

  v2 = 0;
  EnterCrit(0, 1);
  v3 = *(_DWORD *)(_gptiCurrent + 240);
  if ( (!v3 || *(_DWORD *)(v3 + 20) == a2) && HKLtoPKL(_gptiCurrent, a1) )
  {
    v4 = HIWORD(a2) & 0xF000;
    if ( ((_WORD)v4 == 0xE000) != ((HIWORD(a1) & 0xF000) == 0xE000) )
      *(_DWORD *)(_gptiCurrent + 444) = a2;
    HMAssignmentLock(v4, (HIWORD(a1) & 0xF000) == 0xE000);
    v2 = 1;
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
