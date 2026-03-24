/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x14036F8E4
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14036F820 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140746AF0 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     IopQueueWorkItemProlog @ 0x140206670 (IopQueueWorkItemProlog.c)
 *     IoAllocateWorkItem @ 0x1402B54E0 (IoAllocateWorkItem.c)
 *     ExQueueWorkItemFromIo @ 0x1402B6418 (ExQueueWorkItemFromIo.c)
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
