/*
 * XREFs of HalpAcpiCopyBiosTable @ 0x1403BEFA8
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140213908 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x140213AC0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403BED70 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiTableCacheInit @ 0x140AF9A94 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpAcpiValidateAcpiTable @ 0x1403BF030 (HalpAcpiValidateAcpiTable.c)
 *     HalpAcpiAllocateMemory @ 0x1403BF088 (HalpAcpiAllocateMemory.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char *__fastcall HalpAcpiCopyBiosTable(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // esi
  _QWORD *Memory; // rax
  _QWORD *v7; // rbp
  char *v8; // rbx

  v4 = a2[1] + 24;
  Memory = (_QWORD *)HalpAcpiAllocateMemory(a1, v4);
  v7 = Memory;
  if ( !Memory )
    return 0LL;
  memset(Memory, 0, v4);
  v7[2] = a3;
  v8 = (char *)(v7 + 3);
  memmove(v7 + 3, a2, a2[1]);
  if ( (int)HalpAcpiValidateAcpiTable(a2) < 0 )
    KeBugCheckEx(0xA5u, 0x1000BuLL, *a2, (ULONG_PTR)a2, 0LL);
  return v8;
}
