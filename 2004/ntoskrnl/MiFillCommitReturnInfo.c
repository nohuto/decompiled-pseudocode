/*
 * XREFs of MiFillCommitReturnInfo @ 0x140224310
 * Callers:
 *     MiRemoveVadCharges @ 0x1405F8D70 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1405FA170 (MiDecommitRegion.c)
 * Callees:
 *     <none>
 */

void __fastcall MiFillCommitReturnInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  v3 = a1 - *(_QWORD *)(a2 + 16);
  *a3 = v3;
  a3[1] = v3 - *(_QWORD *)(a2 + 8);
}
