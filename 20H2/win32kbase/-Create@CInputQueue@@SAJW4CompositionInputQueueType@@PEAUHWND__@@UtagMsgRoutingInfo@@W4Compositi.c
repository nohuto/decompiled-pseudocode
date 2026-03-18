/*
 * XREFs of ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4CompositionInputFlags@@PEAPEAV1@@Z @ 0x1C00994C4
 * Callers:
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x1C0099420 (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEA.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C00995C0 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputQueue::Create(int a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int128 v11; // xmm1
  int v12; // edi
  _OWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]

  *a5 = 0LL;
  v9 = Win32AllocPool(88LL, 0x71684D49u);
  v10 = v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_OWORD *)(v9 + 40) = 0LL;
    *(_QWORD *)v9 = &CInputQueue::`vftable';
    *(_OWORD *)(v9 + 56) = 0LL;
    v15 = 0LL;
    *(_QWORD *)(v9 + 72) = 0LL;
    *(_DWORD *)(v9 + 8) = 1;
    *(_DWORD *)(v9 + 12) = a1;
    *(_DWORD *)(v9 + 80) = a4;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11 = *(_OWORD *)(a3 + 16);
    v14[0] = *(_OWORD *)a3;
    v15 = *(_QWORD *)(a3 + 32);
    v14[1] = v11;
    v12 = CInputQueue::Initialize(v10, a2, v14);
    if ( v12 < 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    else
      *a5 = v10;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v12;
}
