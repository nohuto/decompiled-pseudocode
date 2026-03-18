/*
 * XREFs of NtUserHardErrorControl @ 0x1C01FD960
 * Callers:
 *     <none>
 * Callees:
 *     xxxHardErrorControl @ 0x1C0242CAC (xxxHardErrorControl.c)
 */

__int64 __fastcall NtUserHardErrorControl(unsigned int a1, __int64 a2, ULONG64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edi
  _BYTE *v13; // rdx
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v7, v6, v8) == gpepCSRSS )
  {
    if ( a3 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = (_BYTE *)a3;
      if ( a3 >= MmUserProbeAddress )
        v13 = (_BYTE *)MmUserProbeAddress;
      *v13 = *v13;
      v13[15] = v13[15];
      v15 = *(_OWORD *)a3;
    }
    v12 = xxxHardErrorControl(a1, a2, (unsigned __int64)&v15 & -(__int64)(a3 != 0));
    if ( a3 )
      *(_OWORD *)a3 = v15;
  }
  else
  {
    v12 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v12;
}
