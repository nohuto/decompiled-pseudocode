/*
 * XREFs of NtUserGetClassName @ 0x1C00E8610
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClassName(__int64 a1, int a2, ULONG64 a3)
{
  unsigned int AtomName; // edi
  __int64 v7; // rcx
  __int64 v8; // r14
  volatile void *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v14; // [rsp+28h] [rbp-50h]

  AtomName = 0;
  EnterSharedCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v14 = *(_DWORD *)a3;
    v9 = *(volatile void **)(a3 + 8);
    ProbeForWrite(v9, (unsigned __int16)HIWORD(*(_DWORD *)a3), 2u);
    v10 = *(_QWORD *)(*(_QWORD *)(v8 + 136) + 8LL);
    v11 = *(unsigned __int16 *)(v10 + 2);
    if ( a2 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF) != 0 )
      {
        v12 = (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFFu) - 666;
        if ( (unsigned int)v12 < 0x1F )
        {
          _mm_lfence();
          if ( byte_1C02E9A20[v12] == 25 )
            v11 = *(unsigned __int16 *)(v10 + 2);
          else
            v11 = *(unsigned __int16 *)(gpsi + 2LL * byte_1C02E9A20[v12] + 868);
        }
      }
    }
    AtomName = UserGetAtomName(v11, v9, HIWORD(v14) >> 1);
  }
  UserSessionSwitchLeaveCrit(v7);
  return AtomName;
}
