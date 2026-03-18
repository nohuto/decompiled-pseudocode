/*
 * XREFs of NtUserSetImeInfoEx @ 0x1C000E310
 * Callers:
 *     <none>
 * Callees:
 *     SetImeInfoEx @ 0x1C000E41C (SetImeInfoEx.c)
 *     _GetProcessWindowStation @ 0x1C000FF00 (_GetProcessWindowStation.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetImeInfoEx(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int64 v3; // rcx
  __int64 ProcessWindowStation; // rax
  int v5; // ebx
  _BYTE v7[360]; // [rsp+30h] [rbp-168h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v2 = v7;
    v3 = 2LL;
    do
    {
      *v2 = *a1;
      v2[1] = a1[1];
      v2[2] = a1[2];
      v2[3] = a1[3];
      v2[4] = a1[4];
      v2[5] = a1[5];
      v2[6] = a1[6];
      v2 += 8;
      *(v2 - 1) = a1[7];
      a1 += 8;
      --v3;
    }
    while ( v3 );
    *v2 = *a1;
    v2[1] = a1[1];
    v2[2] = a1[2];
    v2[3] = a1[3];
    v2[4] = a1[4];
    v2[5] = a1[5];
    ProcessWindowStation = GetProcessWindowStation(0LL, 128LL);
    v5 = SetImeInfoEx(ProcessWindowStation, v7);
  }
  else
  {
    UserSetLastError(120LL);
    v5 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
