/*
 * XREFs of _GetSendMessageReceiver @ 0x1C021ED20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall GetSendMessageReceiver(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax

  v1 = PtiFromThreadId(a1);
  v4 = v1;
  if ( !v1 || (v5 = *(_QWORD *)(gptiCurrent + 448LL), *(_QWORD *)(v1 + 448) != v5) )
  {
    v9 = 87LL;
    goto LABEL_16;
  }
  v6 = *(_QWORD *)(v1 + 416);
  v7 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( (unsigned __int8)Enforced(v5) )
  {
    v8 = (unsigned __int8)CheckAccess(v7 + 880, v6 + 880);
  }
  else
  {
    if ( *(_DWORD *)(v7 + 780) == *(_DWORD *)(v6 + 780) && *(_DWORD *)(v7 + 784) == *(_DWORD *)(v6 + 784) )
      goto LABEL_11;
    v8 = 0;
  }
  if ( v8 )
  {
LABEL_11:
    v10 = *(_QWORD *)(v4 + 496);
    if ( !v10 )
      return 0LL;
    result = *(_QWORD *)(v10 + 112);
    if ( !result )
      return 0LL;
    v2 = *(_QWORD *)(result + 16);
    if ( *(_QWORD *)(v2 + 448) == *(_QWORD *)(gptiCurrent + 448LL) )
      return result;
    goto LABEL_10;
  }
  EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 416LL), *(_QWORD *)(v4 + 416), 0LL, 0LL, 0LL);
LABEL_10:
  v9 = 5LL;
LABEL_16:
  UserSetLastError(v9, v2, v3);
  return 0LL;
}
