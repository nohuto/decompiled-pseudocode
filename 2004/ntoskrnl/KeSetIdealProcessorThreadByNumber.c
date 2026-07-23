/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x140378944
 * Callers:
 *     KeSetIdealProcessorThread @ 0x1403788F0 (KeSetIdealProcessorThread.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x1406889F0 (NtQueryInformationThread.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x1402981D0 (KeGetProcessorIndexFromNumber.c)
 *     KeSetIdealProcessorThreadEx @ 0x1402DF608 (KeSetIdealProcessorThreadEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x1402FDDF0 (KeGetProcessorNumberFromIndex.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadByNumber(struct _KTHREAD *a1, _PROCESSOR_NUMBER *a2, _PROCESSOR_NUMBER *a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  _DWORD *v6; // r9
  unsigned int v7; // eax
  ULONG IdealProcessor; // ecx
  unsigned int v9; // edi
  ULONG ProcIndex; // [rsp+48h] [rbp+20h] BYREF

  ProcIndex = 0;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a2);
  if ( ProcessorIndexFromNumber == -1 )
  {
    v9 = -1073741811;
    if ( a1 == KeGetCurrentThread() )
      IdealProcessor = a1->IdealProcessor;
    else
      IdealProcessor = a1->UserIdealProcessor;
  }
  else
  {
    v7 = KeSetIdealProcessorThreadEx((__int64)a1, ProcessorIndexFromNumber, (__int64)&ProcIndex, v6);
    IdealProcessor = ProcIndex;
    v9 = v7;
  }
  KeGetProcessorNumberFromIndex(IdealProcessor, a3);
  return v9;
}
