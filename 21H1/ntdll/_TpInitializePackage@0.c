/*
 * XREFs of _TpInitializePackage@0 @ 0x4B2EA4C0
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlCreateTagHeap@16 @ 0x4B2EA550 (_RtlCreateTagHeap@16.c)
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 */

NTSTATUS __stdcall TpInitializePackage()
{
  ULONG TagHeap; // eax
  NTSTATUS result; // eax
  struct _PEB *v2; // eax
  ULONG ReturnLength; // [esp+4h] [ebp-40Ch] BYREF
  _DWORD SystemInformation[258]; // [esp+8h] [ebp-408h] BYREF

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
      v2->TppWorkerpListLock = 0;
      v2 = (struct _PEB *)((char *)v2 + 596);
      v2->Mutant = v2;
      *(_DWORD *)&v2->InheritedAddressSpace = v2;
      return 0;
    }
  }
  return result;
}
