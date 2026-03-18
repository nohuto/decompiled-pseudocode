/*
 * XREFs of ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0236C40
 * Callers:
 *     xxxMNButtonDown @ 0x1C0237C4C (xxxMNButtonDown.c)
 *     xxxMNMouseMove @ 0x1C023A0CC (xxxMNMouseMove.c)
 * Callees:
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxMNHideNextHierarchy(__int64 *a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)*a1 + 24LL) )
    return 0LL;
  v2 = *a1;
  v9[2] = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)v2 + 24LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v9;
  v9[1] = v3;
  HMLockObject(v3);
  if ( v3 != *(_QWORD *)(*(_QWORD *)*a1 + 56LL) )
    xxxSendMessage(v3, 0x1E4u, 0LL, 0LL);
  xxxSendMessage(v3, 0x1E5u, 0xFFFFFFFFFFFFFFFFuLL, 0LL);
  ThreadUnlock1(v6, v5, v7);
  return 1LL;
}
