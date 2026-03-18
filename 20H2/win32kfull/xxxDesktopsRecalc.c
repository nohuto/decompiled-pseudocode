/*
 * XREFs of xxxDesktopsRecalc @ 0x1C010667C
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C0106440 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     xxxDesktopRecalc @ 0x1C01066F8 (xxxDesktopRecalc.c)
 */

__int64 __fastcall xxxDesktopsRecalc(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD **)(a1 + 16);
  result = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  while ( v1 )
  {
    PushW32ThreadLock((__int64)v1, &v3, UserDereferenceObject);
    ObfReferenceObject(v1);
    xxxDesktopRecalc((ShellWindowManagement *)v1);
    v1 = (_QWORD *)v1[4];
    result = PopAndFreeW32ThreadLock((__int64)&v3);
  }
  return result;
}
