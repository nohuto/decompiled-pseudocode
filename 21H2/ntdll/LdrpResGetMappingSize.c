/*
 * XREFs of LdrpResGetMappingSize @ 0x1800578D0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     LdrResSearchResource @ 0x1800554B0 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180055BD4 (LdrpResSearchResourceMappedFile.c)
 *     LdrResGetRCConfig @ 0x1800580E0 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180033AE4 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     ZwQueryVirtualMemory @ 0x18009DA60 (ZwQueryVirtualMemory.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E1754 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetMappingSize(__int64 a1, unsigned __int64 *a2, int a3, char a4)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 FileSizeFromLoadAsDataTable; // rdi
  NTSTATUS VirtualMemory; // ebx
  unsigned __int64 SizeOfImage; // rsi
  bool v14; // r12
  int v16; // [rsp+30h] [rbp-98h]
  unsigned __int64 v17; // [rsp+40h] [rbp-88h]
  PVOID BaseAddress[2]; // [rsp+48h] [rbp-80h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp-70h] BYREF
  int v20; // [rsp+60h] [rbp-68h] BYREF
  const wchar_t *v21; // [rsp+68h] [rbp-60h]
  _BYTE MemoryInformation[16]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp-48h]

  LODWORD(BaseAddress[0]) = 3670070;
  BaseAddress[1] = L"LdrpResGetMappingSize Enter";
  v20 = 3538996;
  v21 = L"LdrpResGetMappingSize Exit";
  v6 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v8 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v9 = 2147353476LL;
    LdrpTraceLoadMUIDll(BaseAddress, *(unsigned __int8 *)v9);
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( a1 && a2 )
  {
    v10 = 0LL;
    v17 = 0LL;
    if ( (a3 & 0x80000) != 0 )
    {
      FileSizeFromLoadAsDataTable = *a2;
      VirtualMemory = 0;
      v16 = 0;
      goto LABEL_39;
    }
    if ( (a3 & 0x20000) != 0 )
      v17 = *a2;
    *a2 = 0LL;
    FileSizeFromLoadAsDataTable = 0LL;
    SizeOfImage = 0LL;
    v14 = 0;
    if ( (a3 & 0x100) != 0 )
      v14 = (a1 & 1) == 0;
    BaseAddress[0] = (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
    VirtualMemory = RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
    v16 = VirtualMemory;
    if ( VirtualMemory >= 0 )
    {
      if ( OutHeaders->OptionalHeader.Magic == 267 || OutHeaders->OptionalHeader.Magic == 523 )
      {
        SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
      }
      else
      {
        SizeOfImage = 0LL;
        VirtualMemory = -1073741701;
        v16 = -1073741701;
      }
    }
    if ( VirtualMemory < 0 )
      return (unsigned int)VirtualMemory;
    if ( !v14 || !SizeOfImage )
    {
      if ( !a4 )
        FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
      if ( FileSizeFromLoadAsDataTable )
      {
        VirtualMemory = 0;
        v16 = 0;
      }
      else
      {
        VirtualMemory = ZwQueryVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          BaseAddress[0],
                          MemoryRegionInformation,
                          MemoryInformation,
                          0x30uLL,
                          0LL);
        v16 = VirtualMemory;
        if ( VirtualMemory >= 0 )
          FileSizeFromLoadAsDataTable = v23;
      }
      if ( FileSizeFromLoadAsDataTable || !SizeOfImage )
        goto LABEL_37;
      VirtualMemory = 0;
      v16 = 0;
    }
    FileSizeFromLoadAsDataTable = SizeOfImage;
LABEL_37:
    if ( VirtualMemory < 0 )
    {
LABEL_43:
      if ( RtlGetCurrentServiceSessionId() )
      {
        v6 = (__int64)NtCurrentPeb()->SharedData + 555;
        VirtualMemory = v16;
      }
      if ( (*(_BYTE *)v6 & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
        {
          v8 = (__int64)NtCurrentPeb()->SharedData + 554;
          VirtualMemory = v16;
        }
        LdrpTraceLoadMUIDll(&v20, *(unsigned __int8 *)v8);
      }
      return (unsigned int)VirtualMemory;
    }
    v10 = v17;
LABEL_39:
    if ( v10 && v10 < FileSizeFromLoadAsDataTable )
    {
      VirtualMemory = -1073741793;
      v16 = -1073741793;
    }
    else
    {
      *a2 = FileSizeFromLoadAsDataTable;
    }
    goto LABEL_43;
  }
  return 3221225485LL;
}
