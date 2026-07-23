/*
 * XREFs of LdrpGetImageSize @ 0x18003376C
 * Callers:
 *     LdrpAccessResourceData @ 0x180021500 (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180033848 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180033AE4 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     ZwQueryVirtualMemory @ 0x18009D510 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpGetImageSize(__int64 a1, __int64 *a2)
{
  NTSTATUS VirtualMemory; // ebx
  void *v5; // rbp
  __int64 SizeOfImage; // rdi
  _BYTE MemoryInformation[16]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+40h] [rbp-38h]
  PIMAGE_NT_HEADERS v10; // [rsp+80h] [rbp+8h] BYREF

  VirtualMemory = 0;
  v10 = 0LL;
  v5 = (void *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  SizeOfImage = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &v10);
  if ( !v10 )
    goto LABEL_11;
  if ( (a1 & 1) == 0 )
  {
    if ( v10->OptionalHeader.Magic == 267 || v10->OptionalHeader.Magic == 523 )
    {
      SizeOfImage = v10->OptionalHeader.SizeOfImage;
      goto LABEL_6;
    }
LABEL_11:
    VirtualMemory = -1073741701;
    goto LABEL_6;
  }
  SizeOfImage = LdrpGetFileSizeFromLoadAsDataTable(a1);
  if ( !SizeOfImage )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v5,
                      MemoryRegionInformation,
                      MemoryInformation,
                      0x30uLL,
                      0LL);
    if ( VirtualMemory < 0 )
      VirtualMemory = -1073741793;
    else
      SizeOfImage = v9;
  }
LABEL_6:
  *a2 = SizeOfImage;
  return (unsigned int)VirtualMemory;
}
