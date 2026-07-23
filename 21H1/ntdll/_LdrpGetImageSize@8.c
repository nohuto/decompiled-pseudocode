/*
 * XREFs of _LdrpGetImageSize@8 @ 0x4B33F62D
 * Callers:
 *     _LdrpAccessResourceData@16 @ 0x4B2BD414 (_LdrpAccessResourceData@16.c)
 * Callees:
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _LdrpGetFileSizeFromLoadAsDataTable@4 @ 0x4B2BE66C (_LdrpGetFileSizeFromLoadAsDataTable@4.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 */

NTSTATUS __fastcall LdrpGetImageSize(unsigned int a1, int *a2)
{
  NTSTATUS VirtualMemory; // esi
  int SizeOfImage; // edi
  PIMAGE_NT_HEADERS v5; // eax
  WORD Magic; // cx
  ULONG_PTR *v8; // [esp+0h] [ebp-30h]
  char MemoryInformation[12]; // [esp+Ch] [ebp-24h] BYREF
  int v10; // [esp+18h] [ebp-18h]
  int *v11; // [esp+28h] [ebp-8h]
  PVOID BaseAddress; // [esp+2Ch] [ebp-4h]

  v11 = a2;
  VirtualMemory = 0;
  SizeOfImage = 0;
  BaseAddress = (PVOID)(a1 & 0xFFFFFFFC);
  v5 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFC));
  if ( !v5 )
    goto LABEL_10;
  if ( (a1 & 1) == 0 )
  {
    Magic = v5->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
    {
      SizeOfImage = v5->OptionalHeader.SizeOfImage;
      goto LABEL_11;
    }
LABEL_10:
    VirtualMemory = -1073741701;
    goto LABEL_11;
  }
  SizeOfImage = LdrpGetFileSizeFromLoadAsDataTable((void *)a1);
  if ( !SizeOfImage )
  {
    VirtualMemory = NtQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFF,
                      BaseAddress,
                      MemoryRegionInformation,
                      MemoryInformation,
                      0x1CuLL,
                      v8);
    if ( VirtualMemory < 0 )
      VirtualMemory = -1073741793;
    else
      SizeOfImage = v10;
  }
LABEL_11:
  *v11 = SizeOfImage;
  return VirtualMemory;
}
