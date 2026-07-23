/*
 * XREFs of _LdrpRelocateImage@16 @ 0x4B2ED3BF
 * Callers:
 *     _LdrpCompleteMapModule@12 @ 0x4B2D14E4 (_LdrpCompleteMapModule@12.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpLogDllRelocationEtwEvent@16 @ 0x4B32FD0F (_LdrpLogDllRelocationEtwEvent@16.c)
 *     _LdrpIsILOnlyImage@4 @ 0x4B331085 (_LdrpIsILOnlyImage@4.c)
 *     _LdrpProtectAndRelocateImage@20 @ 0x4B3310B1 (_LdrpProtectAndRelocateImage@20.c)
 */

int __fastcall LdrpRelocateImage(PVOID BaseOfImage, int a2, int a3, int a4)
{
  int v6; // esi
  int v8; // [esp-Ch] [ebp-1Ch]
  int v9; // [esp-8h] [ebp-18h]
  int v10; // [esp-4h] [ebp-14h]
  ULONG Size; // [esp+Ch] [ebp-4h] BYREF

  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrmap.c", 353, "LdrpRelocateImage", 3, "DLL name: %wZ\n", a4);
  if ( ((*(_BYTE *)(a3 + 22) & 1) != 0 || RtlImageDirectoryEntryToData(BaseOfImage, 1u, 5u, &Size) && Size)
    && !(unsigned __int8)LdrpIsILOnlyImage(BaseOfImage) )
  {
    LdrpLogDllRelocationEtwEvent(BaseOfImage, a2);
    v6 = LdrpProtectAndRelocateImage(v8, v9, v10);
  }
  else
  {
    v6 = 0;
  }
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrmap.c", 393, "LdrpRelocateImage", 4, "Status: 0x%08lx\n", v6);
  return v6;
}
