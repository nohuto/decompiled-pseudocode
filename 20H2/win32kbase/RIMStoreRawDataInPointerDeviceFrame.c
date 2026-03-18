/*
 * XREFs of RIMStoreRawDataInPointerDeviceFrame @ 0x1C0171650
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0177428 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01783B8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C017863C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C017A4CC (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C0077A78 (rimFindHoldingFrame.c)
 *     rimStoreRawDataBlock @ 0x1C0172358 (rimStoreRawDataBlock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMStoreRawDataInPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx

  *a5 = 0;
  result = rimFindHoldingFrame(a1, a2);
  v12 = result;
  if ( result )
  {
    if ( !*((_DWORD *)result + 4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
    return (_QWORD *)rimStoreRawDataBlock(v9, v8, a3, a4, v12, a5);
  }
  return result;
}
