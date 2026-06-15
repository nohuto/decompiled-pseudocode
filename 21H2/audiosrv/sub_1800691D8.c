/*
 * XREFs of sub_1800691D8 @ 0x1800691D8
 * Callers:
 *     sub_18007D200 @ 0x18007D200 (sub_18007D200.c)
 *     sub_1801324A0 @ 0x1801324A0 (sub_1801324A0.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1800691D8(__int64 a1)
{
  bool v1; // zf
  __int64 (__fastcall **v2)(); // rax
  void *v3; // rcx

  v1 = *(_BYTE *)(a1 + 16) == 0;
  v2 = off_18014B0F8;
  *(_QWORD *)a1 = off_18014B0F8;
  if ( !v1 )
  {
    v3 = *(void **)(a1 + 8);
    if ( v3 )
      LODWORD(v2) = HeapDestroy(v3);
  }
  return (int)v2;
}
