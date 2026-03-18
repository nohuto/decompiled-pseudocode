/*
 * XREFs of NtUserRealInternalGetMessage @ 0x1C004F110
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserRealInternalGetMessage(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int Message; // ebx
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  ULONG64 v10; // rcx
  __int128 v13; // [rsp+48h] [rbp-40h] BYREF
  __int128 v14; // [rsp+58h] [rbp-30h]
  __int128 v15; // [rsp+68h] [rbp-20h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL);
    Message = 0;
  }
  else
  {
    Message = xxxRealInternalGetMessage((__int64)&v13, a5, a6);
    HIDWORD(v13) = 0;
    HIDWORD(v15) = 0;
    v8 = v14;
    v9 = v15;
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v13;
    a1[1] = v8;
    a1[2] = v9;
  }
  UserSessionSwitchLeaveCrit(v10);
  return Message;
}
