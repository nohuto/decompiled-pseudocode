/*
 * XREFs of NtUserGetClassName @ 0x1C00EBFC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClassName(__int64 a1, int a2, ULONG64 a3)
{
  unsigned int AtomName; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  volatile void *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v16; // [rsp+28h] [rbp-50h]

  AtomName = 0;
  EnterSharedCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v16 = *(_DWORD *)a3;
    v11 = *(volatile void **)(a3 + 8);
    ProbeForWrite(v11, (unsigned __int16)HIWORD(*(_DWORD *)a3), 2u);
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 136) + 8LL);
    v13 = *(unsigned __int16 *)(v12 + 2);
    if ( a2 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) & 0x3FFF) != 0 )
      {
        v14 = (*(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) & 0x3FFFu) - 666;
        if ( (unsigned int)v14 < 0x1F )
        {
          _mm_lfence();
          if ( byte_1C02EA958[v14] == 25 )
            v13 = *(unsigned __int16 *)(v12 + 2);
          else
            v13 = *(unsigned __int16 *)(gpsi + 2LL * byte_1C02EA958[v14] + 868);
        }
      }
    }
    AtomName = UserGetAtomName(v13, v11, HIWORD(v16) >> 1);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return AtomName;
}
