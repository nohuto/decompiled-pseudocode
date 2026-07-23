/*
 * XREFs of MiFillCommitReturnInfo @ 0x140322F74
 * Callers:
 *     MiRemoveVadCharges @ 0x1407045D0 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1407059D0 (MiDecommitRegion.c)
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
