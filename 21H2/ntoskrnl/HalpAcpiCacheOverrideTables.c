/*
 * XREFs of HalpAcpiCacheOverrideTables @ 0x140A8D800
 * Callers:
 *     HalpAcpiTableCacheInit @ 0x140A65690 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpAcpiCacheTable @ 0x1403BB830 (HalpAcpiCacheTable.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

unsigned __int64 __fastcall HalpAcpiCacheOverrideTables(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned __int64 result; // rax
  __int64 v10; // rbp
  unsigned int v11; // esi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  while ( a5 >= 0x24 )
  {
    v10 = a4[1];
    v11 = (v10 + 31) & 0xFFFFFFF8;
    if ( a3 < v11 || a5 < (unsigned int)v10 )
      break;
    *(_QWORD *)(a2 + 16) = 0LL;
    memmove((void *)(a2 + 24), a4, (unsigned int)v10);
    HalpAcpiCacheTable(a1, a2 + 24);
    result = v11;
    a3 -= v11;
    a2 += v11;
    a5 -= v10;
    a4 = (unsigned int *)((char *)a4 + v10);
  }
  return result;
}
