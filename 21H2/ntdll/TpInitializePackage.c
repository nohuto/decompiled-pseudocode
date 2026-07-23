/*
 * XREFs of TpInitializePackage @ 0x18007D9CC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateTagHeap @ 0x18007DA70 (RtlCreateTagHeap.c)
 *     NtQuerySystemInformation @ 0x18009DCC0 (NtQuerySystemInformation.c)
 */

NTSTATUS TpInitializePackage()
{
  ULONG TagHeap; // eax
  NTSTATUS result; // eax
  struct _PEB *v2; // rax
  _DWORD SystemInformation[262]; // [rsp+20h] [rbp-418h] BYREF
  ULONG ReturnLength; // [rsp+440h] [rbp+8h] BYREF

  TagHeap = RtlCreateTagHeap(NtCurrentPeb()->ProcessHeap, 0, (PWSTR)L"Threadpool!", (PWSTR)L"Cleanup Group");
  ReturnLength = 0;
  TppHeapTag = TagHeap;
  result = NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( ReturnLength < 4 )
    {
      return -1073741595;
    }
    else
    {
      TppNumberNodes = SystemInformation[0] + 1;
      v2 = NtCurrentPeb();
      v2->TppWorkerpListLock = 0LL;
      v2 = (struct _PEB *)((char *)v2 + 912);
      v2->Mutant = v2;
      *(_QWORD *)&v2->InheritedAddressSpace = v2;
      return 0;
    }
  }
  return result;
}
