/*
 * XREFs of MiTrimmedEnough @ 0x140597478
 * Callers:
 *     MiTrimWorkingSetTail @ 0x1403737D0 (MiTrimWorkingSetTail.c)
 *     MiTrimWorkingSetEPTCallback @ 0x140597390 (MiTrimWorkingSetEPTCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiTrimmedEnough(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r9

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 8);
  return v2 == v3
      || (*(_DWORD *)a2 & 0x4000) != 0
      && ((*(_DWORD *)a2 & 0x8000) != 0 && v2 >= 0x100
       || *(_QWORD *)(a1 + 144) <= (unsigned __int64)(*(_QWORD *)(a2 + 56) - v3));
}
