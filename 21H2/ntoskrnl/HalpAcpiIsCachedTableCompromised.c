/*
 * XREFs of HalpAcpiIsCachedTableCompromised @ 0x140213C5C
 * Callers:
 *     HalpAcpiGetTableWork @ 0x140213AC0 (HalpAcpiGetTableWork.c)
 * Callees:
 *     HalpAcpiGetTableFromBios @ 0x140214F98 (HalpAcpiGetTableFromBios.c)
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     HalpUnmapVirtualAddress @ 0x1403BF310 (HalpUnmapVirtualAddress.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

char __fastcall HalpAcpiIsCachedTableCompromised(__int64 a1, int a2, char *a3, char *a4, void *Buf2)
{
  bool v6; // bl
  unsigned int *TableFromBios; // rax
  unsigned int *v9; // rdi
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v11 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  if ( a2 != HalpAcpiVerifiedTable )
    return 0;
  TableFromBios = (unsigned int *)HalpAcpiGetTableFromBios(a1, a2, a3, a4, (__int64)&NumberOfBytes, (__int64)&v11);
  v9 = TableFromBios;
  if ( !TableFromBios )
    return 1;
  v6 = memcmp(TableFromBios, Buf2, TableFromBios[1]) != 0;
  if ( a1 )
    HalpUnmapVirtualAddress(
      v9,
      (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12,
      0LL);
  else
    MmUnmapIoSpace(v9, (unsigned int)NumberOfBytes);
  return v6;
}
