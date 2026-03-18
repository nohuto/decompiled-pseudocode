/*
 * XREFs of _NtUserGetAtomName@8 @ 0xA212C
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetAtomName(int a1, ULONG a2)
{
  int *v2; // ecx
  volatile void *v3; // esi
  int AtomName; // esi
  int v6; // [esp+44h] [ebp+Ch]

  EnterSharedCrit(0, 1);
  v2 = (int *)a2;
  if ( a2 >= _MmUserProbeAddress )
    v2 = (int *)_MmUserProbeAddress;
  v6 = *v2;
  v3 = (volatile void *)v2[1];
  ProbeForWrite(v3, HIWORD(*v2), 1u);
  AtomName = UserGetAtomName(a1, v3, HIWORD(v6) >> 1);
  UserSessionSwitchLeaveCrit();
  return AtomName;
}
