/*
 * XREFs of ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C0033870
 * Callers:
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4CompositionInputFlags@@PEAPEAV1@@Z @ 0x1C0033774 (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4Compositi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     UserFindBaseWindowHandle @ 0x1C013DAF4 (UserFindBaseWindowHandle.c)
 */

__int64 __fastcall CInputQueue::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // ecx
  char v8; // si
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int64 result; // rax
  __int64 v14; // xmm0_8
  __int64 BaseWindowHandle; // rax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(a1 + 12);
  v16 = 0LL;
  v8 = 1;
  if ( (unsigned int)(v5 - 2) <= 1 )
  {
    if ( v5 == 3 )
    {
      BaseWindowHandle = UserFindBaseWindowHandle(a2, a3);
      if ( BaseWindowHandle )
        *(_QWORD *)(a1 + 32) = BaseWindowHandle;
      else
        v8 = 0;
    }
    if ( qword_1C0252D40 )
      v9 = qword_1C0252D40();
    else
      v9 = -1073741637;
    if ( v9 >= 0 && v8 )
    {
      v10 = a2;
      if ( *(_QWORD *)(a1 + 32) )
        v10 = *(_QWORD *)(a1 + 32);
      if ( qword_1C0252D50 )
        v3 = qword_1C0252D50(v10, a1, &v16);
      else
        v3 = -1073741637;
    }
  }
  v11 = v16;
  v12 = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)a3;
  *(_QWORD *)(a1 + 24) = v11;
  result = v3;
  v14 = *(_QWORD *)(a3 + 32);
  *(_OWORD *)(a1 + 56) = v12;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 72) = v14;
  return result;
}
