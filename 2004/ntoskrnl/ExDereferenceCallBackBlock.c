/*
 * XREFs of ExDereferenceCallBackBlock @ 0x14024CAA0
 * Callers:
 *     ExCallCallBack @ 0x1406027CC (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x14060283C (PspCallProcessNotifyRoutines.c)
 *     PsInvokeWin32Callout @ 0x140602AD0 (PsInvokeWin32Callout.c)
 *     PsCallImageNotifyRoutines @ 0x140602BC0 (PsCallImageNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x140602D50 (PspCallThreadNotifyRoutines.c)
 *     ExCallSessionCallBack @ 0x1406A507C (ExCallSessionCallBack.c)
 *     DbgkLkmdRegisterCallback @ 0x1407822D0 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140782768 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140885080 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140885124 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x1408E30D0 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140908FE0 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1409090D0 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
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
