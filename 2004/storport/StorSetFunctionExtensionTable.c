/*
 * XREFs of StorSetFunctionExtensionTable @ 0x1C00395C8
 * Callers:
 *     RaCreateDriver @ 0x1C0078C4C (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_1C0068670 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_1C0068670 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_1C0068680 = StorExtFreePool;
  *((_QWORD *)&xmmword_1C0068680 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_1C0068690 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_1C0068690 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_1C00686A0 = StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_1C00686A0 + 1) = StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_1C00686B0 = (__int64)StorExtGetOriginalMdl;
  return result;
}
