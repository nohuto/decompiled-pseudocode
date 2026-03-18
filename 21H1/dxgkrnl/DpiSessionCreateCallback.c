/*
 * XREFs of DpiSessionCreateCallback @ 0x1C015A9A8
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C015A8A0 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     DpiLdaValidateSystemChainStatus @ 0x1C01867F4 (DpiLdaValidateSystemChainStatus.c)
 *     DpiFdoStartAdapterThread @ 0x1C0188D20 (DpiFdoStartAdapterThread.c)
 */

__int64 DpiSessionCreateCallback()
{
  __int64 v0; // rbx
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax

  LODWORD(v0) = 0;
  if ( !byte_1C00AFA14 )
  {
    byte_1C00AFA14 = 1;
    v2 = KeWaitForSingleObject(&stru_1C00AFA60, Executive, 0, 0, 0LL);
    v0 = v2;
    if ( v2 )
    {
      v5 = WdLogNewEntry5_WdError(v4, v3);
      *(_QWORD *)(v5 + 24) = v0;
      WdLogEvent5_WdError(v5);
      LODWORD(v0) = 0;
    }
    DpiFdoStartAdapterThread(0LL);
    DpiLdaValidateSystemChainStatus();
  }
  return (unsigned int)v0;
}
