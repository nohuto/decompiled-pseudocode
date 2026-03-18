/*
 * XREFs of NtUserRealInternalGetMessage @ 0x1C0093440
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall NtUserRealInternalGetMessage(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  int Message; // ebx
  __int64 v11; // r8
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  ULONG64 v14; // rcx
  __int128 v17; // [rsp+48h] [rbp-40h] BYREF
  __int128 v18; // [rsp+58h] [rbp-30h]
  __int128 v19; // [rsp+68h] [rbp-20h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL, v7, v8);
    Message = 0;
  }
  else
  {
    Message = xxxRealInternalGetMessage((__int64)&v17, a5, a6);
    HIDWORD(v17) = 0;
    HIDWORD(v19) = 0;
    v12 = v18;
    v13 = v19;
    v14 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v17;
    a1[1] = v12;
    a1[2] = v13;
  }
  UserSessionSwitchLeaveCrit(v14, v9, v11);
  return Message;
}
