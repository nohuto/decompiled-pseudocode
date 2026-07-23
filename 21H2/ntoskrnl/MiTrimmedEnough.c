/*
 * XREFs of MiTrimmedEnough @ 0x14053C674
 * Callers:
 *     MiTrimWorkingSetTail @ 0x1402551F0 (MiTrimWorkingSetTail.c)
 *     MiTrimWorkingSetEPTCallback @ 0x14053C500 (MiTrimWorkingSetEPTCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiTrimmedEnough(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 8);
  return v2 == v3
      || (*(_DWORD *)a2 & 0x400) != 0
      && ((*(_DWORD *)a2 & 0x800) != 0 && v2 >= 0x100
       || *(_QWORD *)(a1 + 136) <= (unsigned __int64)(*(_QWORD *)(a2 + 48) - v3));
}
