/*
 * XREFs of NtUserGetAtomName @ 0x1C00FEC40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAtomName(unsigned __int16 a1, ULONG64 a2)
{
  unsigned int AtomName; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+38h] [rbp-20h]
  volatile void *v10; // [rsp+40h] [rbp-18h]

  EnterSharedCrit(0LL, 1LL);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v9 = *(_DWORD *)a2;
  v10 = *(volatile void **)(a2 + 8);
  ProbeForWrite(v10, (unsigned __int16)HIWORD(*(_DWORD *)a2), 2u);
  AtomName = UserGetAtomName(a1, v10, HIWORD(v9) >> 1);
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return AtomName;
}
