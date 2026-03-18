/*
 * XREFs of HalpAcpiGetTableWork @ 0x1402F87C0
 * Callers:
 *     HalpAcpiGetTable @ 0x1402F8740 (HalpAcpiGetTable.c)
 *     HalpAcpiGetTableFromBios @ 0x1402F8AF0 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiGetFacsMapping @ 0x1403B64F8 (HalpAcpiGetFacsMapping.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403B7224 (HalpAcpiGetAllTablesWork.c)
 * Callees:
 *     HalpAcpiGetCachedTable @ 0x1402F88D4 (HalpAcpiGetCachedTable.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x1402F895C (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetTableFromBios @ 0x1402F8AF0 (HalpAcpiGetTableFromBios.c)
 *     MmUnmapIoSpace @ 0x1402FA3B0 (MmUnmapIoSpace.c)
 *     HalpAcpiCacheTable @ 0x1403B73F0 (HalpAcpiCacheTable.c)
 *     HalpAcpiCopyBiosTable @ 0x1403B7458 (HalpAcpiCopyBiosTable.c)
 *     HalpUnmapVirtualAddress @ 0x1403B75C0 (HalpUnmapVirtualAddress.c)
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
