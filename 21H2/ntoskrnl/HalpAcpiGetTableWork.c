/*
 * XREFs of HalpAcpiGetTableWork @ 0x140213AC0
 * Callers:
 *     HalpAcpiGetTable @ 0x140213A40 (HalpAcpiGetTable.c)
 *     HalpAcpiGetTableFromBios @ 0x140214F98 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiGetFacsMapping @ 0x1403B8198 (HalpAcpiGetFacsMapping.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403BED70 (HalpAcpiGetAllTablesWork.c)
 * Callees:
 *     HalpAcpiGetCachedTable @ 0x140213BD4 (HalpAcpiGetCachedTable.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140213C5C (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetTableFromBios @ 0x140214F98 (HalpAcpiGetTableFromBios.c)
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     HalpAcpiCacheTable @ 0x1403BEF40 (HalpAcpiCacheTable.c)
 *     HalpAcpiCopyBiosTable @ 0x1403BEFA8 (HalpAcpiCopyBiosTable.c)
 *     HalpUnmapVirtualAddress @ 0x1403BF310 (HalpUnmapVirtualAddress.c)
 */

void *__fastcall HalpAcpiGetTableWork(__int64 a1, unsigned int a2, char *a3, char *a4)
{
  void *Buf2; // rax
  void *v9; // rbx
  __int64 TableFromBios; // rax
  __int64 v12; // rdi
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h] BYREF

  v14 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  Buf2 = (void *)HalpAcpiGetCachedTable(a2, a3, a4);
  v9 = Buf2;
  if ( !Buf2 || (unsigned __int8)HalpAcpiIsCachedTableCompromised(a1, a2, (int)a3, (int)a4, Buf2) )
  {
    TableFromBios = HalpAcpiGetTableFromBios(a1, a2, a3, a4, (__int64)&NumberOfBytes, (__int64)&v14);
    v9 = (void *)TableFromBios;
    if ( TableFromBios )
    {
      v12 = HalpAcpiCopyBiosTable(a1, TableFromBios, v14);
      if ( a1 )
        HalpUnmapVirtualAddress(
          v9,
          (((unsigned __int16)v9 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12,
          0LL);
      else
        MmUnmapIoSpace(v9, (unsigned int)NumberOfBytes);
      if ( v12 )
      {
        HalpAcpiCacheTable(a1, v12);
        return (void *)v12;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return v9;
}
