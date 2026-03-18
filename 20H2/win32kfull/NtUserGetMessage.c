/*
 * XREFs of NtUserGetMessage @ 0x1C004FCA0
 * Callers:
 *     <none>
 * Callees:
 *     ClientGetMessageMPH @ 0x1C004EEB8 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetMessage(_OWORD *a1, __int64 a2, int a3, int a4)
{
  int MessageMPH; // eax
  int v9; // edi
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  ULONG64 v12; // rcx
  int v14; // [rsp+20h] [rbp-68h]
  __int128 v15; // [rsp+48h] [rbp-40h] BYREF
  __int128 v16; // [rsp+58h] [rbp-30h]
  __int128 v17; // [rsp+68h] [rbp-20h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( ((a4 | a3) & 0xFFFE0000) != 0 )
  {
    v9 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    v14 = 1;
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL) > 0 )
      MessageMPH = ClientGetMessageMPH(&v15, a2, a3, a4, 1, 1);
    else
      MessageMPH = xxxRealInternalGetMessage((__int64)&v15, v14, 1);
    v9 = MessageMPH;
    HIDWORD(v15) = 0;
    HIDWORD(v17) = 0;
    v10 = v16;
    v11 = v17;
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v15;
    a1[1] = v10;
    a1[2] = v11;
  }
  UserSessionSwitchLeaveCrit(v12);
  return v9;
}
