/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x14036B334
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14036B270 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140728E04 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     IopQueueWorkItemProlog @ 0x140297A0C (IopQueueWorkItemProlog.c)
 *     IoAllocateWorkItem @ 0x140341360 (IoAllocateWorkItem.c)
 *     ExQueueWorkItemFromIo @ 0x140342A58 (ExQueueWorkItemFromIo.c)
 */

__int64 __fastcall PnpDeviceCompletionRequestDestroy(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    result = (__int64)IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 16) + 32LL));
    if ( result )
    {
      v3 = (_QWORD *)IopQueueWorkItemProlog(result, (__int64)&PnpDeviceCompletionRequestDestroyWorkItem, a1);
      return ExQueueWorkItemFromIo(v3, 1);
    }
  }
  return result;
}
