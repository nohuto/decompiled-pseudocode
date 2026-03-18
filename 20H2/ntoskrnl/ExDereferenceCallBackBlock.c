/*
 * XREFs of ExDereferenceCallBackBlock @ 0x140233750
 * Callers:
 *     ExCallCallBack @ 0x14062802C (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x14062809C (PspCallProcessNotifyRoutines.c)
 *     PsInvokeWin32Callout @ 0x140628330 (PsInvokeWin32Callout.c)
 *     PsCallImageNotifyRoutines @ 0x140628420 (PsCallImageNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1406285B0 (PspCallThreadNotifyRoutines.c)
 *     ExCallSessionCallBack @ 0x14062BF24 (ExCallSessionCallBack.c)
 *     DbgkLkmdRegisterCallback @ 0x1407903F0 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140790888 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x14088ABD0 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x14088AC74 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x1408E8F10 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14090EC00 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14090ECF0 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ExDereferenceCallBackBlock(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  v2 = *a1;
  if ( ((unsigned __int64)a2 ^ *a1) >= 0xF )
  {
LABEL_4:
    ExReleaseRundownProtection_0(a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64(a1, v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( ((unsigned __int64)a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
