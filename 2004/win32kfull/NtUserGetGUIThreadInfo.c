/*
 * XREFs of NtUserGetGUIThreadInfo @ 0x1C00F4990
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _GetGUIThreadInfo @ 0x1C00F4AD4 (_GetGUIThreadInfo.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall NtUserGetGUIThreadInfo(unsigned int a1, ULONG64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  _BYTE *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  _OWORD v14[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v14, 0, 0x48uLL);
  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    v5 = PtiFromThreadId(a1);
    if ( !v5 )
    {
      UserSetLastError(87LL, v12, v13);
      goto LABEL_12;
    }
  }
  else
  {
    v5 = 0LL;
  }
  if ( PsGetCurrentProcessWow64Process(v4) )
    v6 = 0LL;
  else
    v6 = 3LL;
  if ( (v6 & a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = (_BYTE *)a2;
  if ( a2 >= MmUserProbeAddress )
    v7 = (_BYTE *)MmUserProbeAddress;
  *v7 = *v7;
  v7[71] = v7[71];
  LODWORD(v14[0]) = *(_DWORD *)a2;
  LODWORD(v5) = GetGUIThreadInfo(v5, v14);
  if ( (_DWORD)v5 )
  {
    *(_OWORD *)a2 = v14[0];
    *(_OWORD *)(a2 + 16) = v14[1];
    *(_OWORD *)(a2 + 32) = v14[2];
    *(_OWORD *)(a2 + 48) = v14[3];
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v14[4];
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return (int)v5;
}
