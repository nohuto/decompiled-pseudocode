/*
 * XREFs of HalpAcpiIsCachedTableCompromised @ 0x14021655C
 * Callers:
 *     HalpAcpiGetTableWork @ 0x1402163C0 (HalpAcpiGetTableWork.c)
 * Callees:
 *     HalpAcpiGetTableFromBios @ 0x1402166F0 (HalpAcpiGetTableFromBios.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     HalpUnmapVirtualAddress @ 0x1403BBA00 (HalpUnmapVirtualAddress.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 */

bool __fastcall HalpAcpiIsCachedTableCompromised(__int64 a1, int a2, char *a3, char *a4, void *Buf2)
{
  const char *v5; // r10
  int v7; // eax
  bool v8; // bl
  unsigned int *TableFromBios; // rax
  unsigned int *v11; // rdi
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0LL;
  v5 = "SLIC";
  LODWORD(NumberOfBytes) = 0;
  v7 = 0;
  v8 = 1;
  do
  {
    if ( a2 == *(_DWORD *)v5 )
      break;
    ++v7;
    v5 += 4;
  }
  while ( !v7 );
  if ( v7 == 1 )
    return 0;
  TableFromBios = (unsigned int *)HalpAcpiGetTableFromBios(a1, a2, a3, a4, (__int64)&NumberOfBytes, (__int64)&v13);
  v11 = TableFromBios;
  if ( TableFromBios )
  {
    v8 = memcmp(TableFromBios, Buf2, TableFromBios[1]) != 0;
    if ( a1 )
      HalpUnmapVirtualAddress(
        v11,
        (((unsigned __int16)v11 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12,
        0LL);
    else
      MmUnmapIoSpace(v11, (unsigned int)NumberOfBytes);
  }
  return v8;
}
