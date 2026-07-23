/*
 * XREFs of _RtlpTpRevertCapture@8 @ 0x4B2B1FBA
 * Callers:
 *     _RtlDeregisterWaitEx@8 @ 0x4B2A8010 (_RtlDeregisterWaitEx@8.c)
 *     _RtlDeleteTimerQueueEx@8 @ 0x4B2A8AC0 (_RtlDeleteTimerQueueEx@8.c)
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 *     _RtlCreateTimerQueue@4 @ 0x4B2A8F60 (_RtlCreateTimerQueue@4.c)
 *     _RtlCreateTimer@28 @ 0x4B2AA4F0 (_RtlCreateTimer@28.c)
 *     _RtlRegisterWait@24 @ 0x4B2B2020 (_RtlRegisterWait@24.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 *     _RtlUpdateTimer@16 @ 0x4B385200 (_RtlUpdateTimer@16.c)
 *     _RtlSetIoCompletionCallback@12 @ 0x4B385470 (_RtlSetIoCompletionCallback@12.c)
 * Callees:
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenThreadToken@16 @ 0x4B2F2BC0 (_NtOpenThreadToken@16.c)
 */

NTSTATUS __fastcall RtlpTpRevertCapture(PHANDLE TokenHandle, int a2)
{
  struct _TEB *v2; // eax
  NTSTATUS result; // eax
  NTSTATUS v5; // edi
  int ThreadInformation; // [esp+Ch] [ebp-4h] BYREF

  v2 = NtCurrentTeb();
  *TokenHandle = 0;
  if ( !v2->IsImpersonating )
    return 0;
  result = NtOpenThreadToken((HANDLE)0xFFFFFFFE, 2 * (a2 != 0) + 4, 1u, TokenHandle);
  if ( result >= 0 )
  {
    ThreadInformation = 0;
    v5 = ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadImpersonationToken, &ThreadInformation, 4u);
    if ( v5 < 0 )
    {
      NtClose(*TokenHandle);
      *TokenHandle = 0;
      return v5;
    }
    return 0;
  }
  return result;
}
