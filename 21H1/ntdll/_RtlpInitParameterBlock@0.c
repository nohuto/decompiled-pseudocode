/*
 * XREFs of _RtlpInitParameterBlock@0 @ 0x4B2EA5B7
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlpInitParameterBlock()
{
  struct _PEB *v0; // ebx
  int v1; // edi
  _RTL_USER_PROCESS_PARAMETERS *Heap; // eax
  _RTL_USER_PROCESS_PARAMETERS *v3; // esi
  wchar_t *Buffer; // eax
  char *v5; // ecx
  wchar_t *v6; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  SIZE_T v15; // [esp-4h] [ebp-18h]
  size_t v16; // [esp-4h] [ebp-18h]
  ULONG_PTR RegionSize; // [esp+Ch] [ebp-8h] BYREF

  v0 = NtCurrentPeb();
  HIDWORD(RegionSize) = v0->ProcessParameters;
  v1 = *(_DWORD *)(HIDWORD(RegionSize) + 4);
  LODWORD(v15) = v1;
  Heap = (_RTL_USER_PROCESS_PARAMETERS *)RtlAllocateHeap(v0->ProcessHeap, 0, v15);
  v3 = Heap;
  if ( !Heap )
    return -1073741670;
  LODWORD(v16) = v1;
  memcpy(Heap, (const void *)HIDWORD(RegionSize), v16);
  Buffer = v3->CurrentDirectory.DosPath.Buffer;
  v5 = (char *)v3 - HIDWORD(RegionSize);
  if ( Buffer )
    v3->CurrentDirectory.DosPath.Buffer = (wchar_t *)((char *)Buffer + (_DWORD)v5);
  v6 = v3->DllPath.Buffer;
  if ( v6 )
    v3->DllPath.Buffer = (wchar_t *)((char *)v6 + (_DWORD)v5);
  v7 = v3->ImagePathName.Buffer;
  if ( v7 )
    v3->ImagePathName.Buffer = (wchar_t *)((char *)v7 + (_DWORD)v5);
  v8 = v3->CommandLine.Buffer;
  if ( v8 )
    v3->CommandLine.Buffer = (wchar_t *)((char *)v8 + (_DWORD)v5);
  v9 = v3->WindowTitle.Buffer;
  if ( v9 )
    v3->WindowTitle.Buffer = (wchar_t *)((char *)v9 + (_DWORD)v5);
  v10 = v3->DesktopInfo.Buffer;
  if ( v10 )
    v3->DesktopInfo.Buffer = (wchar_t *)((char *)v10 + (_DWORD)v5);
  v11 = v3->ShellInfo.Buffer;
  if ( v11 )
    v3->ShellInfo.Buffer = (wchar_t *)((char *)v11 + (_DWORD)v5);
  v12 = v3->RuntimeData.Buffer;
  if ( v12 )
    v3->RuntimeData.Buffer = (wchar_t *)((char *)v12 + (_DWORD)v5);
  v13 = v3->RedirectionDllName.Buffer;
  if ( v13 )
    v3->RedirectionDllName.Buffer = (wchar_t *)((char *)v13 + (_DWORD)v5);
  v0->ProcessParameters = v3;
  LODWORD(RegionSize) = 0;
  NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize + 1, &RegionSize, 0x8000u);
  return 0;
}
