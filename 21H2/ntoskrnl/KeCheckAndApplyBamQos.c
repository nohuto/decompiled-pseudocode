/*
 * XREFs of KeCheckAndApplyBamQos @ 0x14051E6E0
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1402C0590 (PsImpersonateContainerOfThread.c)
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x1402CBED0 (KiUpdateRunTime.c)
 *     SwapContext @ 0x1404069A0 (SwapContext.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E808 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KeUpdatePendingQosRequest @ 0x14051F0A0 (KeUpdatePendingQosRequest.c)
 *     PoSetProcessorQoS @ 0x14056E79C (PoSetProcessorQoS.c)
 */

__int64 __fastcall KeCheckAndApplyBamQos(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebp
  unsigned int v8; // ebx
  __int16 v9; // [rsp+20h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( KeHeteroSystemQos )
  {
    _disable();
    result = *(unsigned int *)(a1 + 236);
    v4 = (unsigned __int8)*(_DWORD *)(a2 + 512);
    if ( v4 != (unsigned __int8)result )
    {
      v5 = *(unsigned __int8 *)(a1 + 209);
      v6 = *(_QWORD *)(a1 + 192);
      if ( v4 - 1 > 1 )
        _interlockedbittestandreset64((volatile signed __int32 *)(v6 + 368), v5);
      else
        _interlockedbittestandset64((volatile signed __int32 *)(v6 + 368), v5);
      v7 = *(_DWORD *)(a1 + 236) & 0x300;
      if ( (unsigned __int8)PoSetProcessorQoS(a1, v4) )
        v8 = *(_DWORD *)(a1 + 236) & 0xFFFFFCFF;
      else
        v8 = *(_DWORD *)(a1 + 236) & 0xFFFFFCFF | ((v4 & 3) << 8);
      *(_DWORD *)(a1 + 236) = v8;
      result = v7 != 0;
      if ( (_DWORD)result != ((v8 & 0x300) != 0) )
        result = KeUpdatePendingQosRequest(a1);
    }
    if ( (v9 & 0x200) != 0 )
      _enable();
  }
  return result;
}
