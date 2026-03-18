/*
 * XREFs of NtUserGetMessage @ 0x1C0093FD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ClientGetMessageMPH @ 0x1C00931E8 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall NtUserGetMessage(_OWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int MessageMPH; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // edi
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  ULONG64 v16; // rcx
  int v18; // [rsp+20h] [rbp-68h]
  __int128 v19; // [rsp+48h] [rbp-40h] BYREF
  __int128 v20; // [rsp+58h] [rbp-30h]
  __int128 v21; // [rsp+68h] [rbp-20h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( ((a4 | a3) & 0xFFFE0000) != 0 )
  {
    v13 = 0;
    UserSetLastError(87LL, v8, v9);
  }
  else
  {
    v18 = 1;
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 440LL) + 20LL) > 0 )
      MessageMPH = ClientGetMessageMPH(&v19, a2, a3, a4, 1, 1);
    else
      MessageMPH = xxxRealInternalGetMessage((__int64)&v19, v18, 1);
    v13 = MessageMPH;
    HIDWORD(v19) = 0;
    HIDWORD(v21) = 0;
    v14 = v20;
    v15 = v21;
    v16 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v19;
    a1[1] = v14;
    a1[2] = v15;
  }
  UserSessionSwitchLeaveCrit(v16, v11, v12);
  return v13;
}
