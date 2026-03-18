/*
 * XREFs of NtUserGetImeInfoEx @ 0x1C00C3D90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     GetImeInfoEx @ 0x1C00C3F94 (GetImeInfoEx.c)
 *     _GetProcessWindowStation @ 0x1C00C40D0 (_GetProcessWindowStation.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall NtUserGetImeInfoEx(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  _BYTE *v5; // rdx
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 ProcessWindowStation; // rax
  __int64 v11; // rdx
  int ImeInfo; // edi
  __int64 v13; // r8
  _OWORD *v14; // rcx
  _BYTE v16[352]; // [rsp+40h] [rbp-178h] BYREF

  memset(v16, 0, sizeof(v16));
  EnterSharedCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (_BYTE *)MmUserProbeAddress;
    *v5 = *v5;
    v5[351] = v5[351];
    v6 = a1;
    v7 = v16;
    v8 = 2LL;
    v9 = 2LL;
    do
    {
      *v7 = *v6;
      v7[1] = v6[1];
      v7[2] = v6[2];
      v7[3] = v6[3];
      v7[4] = v6[4];
      v7[5] = v6[5];
      v7[6] = v6[6];
      v7 += 8;
      *(v7 - 1) = v6[7];
      v6 += 8;
      --v9;
    }
    while ( v9 );
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    ProcessWindowStation = GetProcessWindowStation(0LL);
    ImeInfo = GetImeInfoEx(ProcessWindowStation, v16, a2);
    v14 = v16;
    do
    {
      *a1 = *v14;
      a1[1] = v14[1];
      a1[2] = v14[2];
      a1[3] = v14[3];
      a1[4] = v14[4];
      a1[5] = v14[5];
      a1[6] = v14[6];
      a1 += 8;
      *(a1 - 1) = v14[7];
      v14 += 8;
      --v8;
    }
    while ( v8 );
    *a1 = *v14;
    a1[1] = v14[1];
    a1[2] = v14[2];
    a1[3] = v14[3];
    a1[4] = v14[4];
    a1[5] = v14[5];
  }
  else
  {
    UserSetLastError(120LL, v4, gpsi);
    ImeInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v14, v11, v13);
  return ImeInfo;
}
