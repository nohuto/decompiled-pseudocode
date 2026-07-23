/*
 * XREFs of RtlpQueryReadVirtualMemory @ 0x4B337BF0
 * Callers:
 *     <none>
 * Callees:
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 */

NTSTATUS __stdcall RtlpQueryReadVirtualMemory(HANDLE ProcessHandle, PVOID BaseAddress, PVOID Buffer, SIZE_T BufferSize)
{
  NTSTATUS result; // eax
  ULONG_PTR *v5; // [esp+0h] [ebp-4h]

  result = NtReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, BufferSize, v5);
  if ( result >= 0 )
    return (_DWORD)BufferSize != *(_DWORD *)HIDWORD(BufferSize) ? 0x8000000D : 0;
  *(_DWORD *)HIDWORD(BufferSize) = 0;
  return result;
}
