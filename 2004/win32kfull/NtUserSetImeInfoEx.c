/*
 * XREFs of NtUserSetImeInfoEx @ 0x1C00C2D70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     SetImeInfoEx @ 0x1C00C2E7C (SetImeInfoEx.c)
 *     _GetProcessWindowStation @ 0x1C00C40D0 (_GetProcessWindowStation.c)
 */

__int64 __fastcall NtUserSetImeInfoEx(_OWORD *a1)
{
  __int64 v2; // r8
  _OWORD *v3; // rax
  __int64 v4; // rcx
  __int64 ProcessWindowStation; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  _BYTE v11[360]; // [rsp+30h] [rbp-168h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v3 = v11;
    v4 = 2LL;
    do
    {
      *v3 = *a1;
      v3[1] = a1[1];
      v3[2] = a1[2];
      v3[3] = a1[3];
      v3[4] = a1[4];
      v3[5] = a1[5];
      v3[6] = a1[6];
      v3 += 8;
      *(v3 - 1) = a1[7];
      a1 += 8;
      --v4;
    }
    while ( v4 );
    *v3 = *a1;
    v3[1] = a1[1];
    v3[2] = a1[2];
    v3[3] = a1[3];
    v3[4] = a1[4];
    v3[5] = a1[5];
    ProcessWindowStation = GetProcessWindowStation(0LL);
    v8 = SetImeInfoEx(ProcessWindowStation, v11);
  }
  else
  {
    UserSetLastError(120LL, gpsi, v2);
    v8 = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9);
  return v8;
}
