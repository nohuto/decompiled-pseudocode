/*
 * XREFs of sub_1403DC250 @ 0x1403DC250
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x1403599C8 (KeExitRetpoline.c)
 *     _guard_check_icall @ 0x140405EF0 (_guard_check_icall.c)
 */

__int64 __fastcall sub_1403DC250(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64); // rbx

  v2 = a1[2];
  v3 = v2 ^ a1[1];
  v4 = (__int64 (__fastcall *)(__int64))(v2 ^ a1[3]);
  if ( (*(_DWORD *)(v3 + 0x994) & 0x100000) != 0 )
    KeExitRetpoline(a1, a2);
  else
    _mm_lfence();
  return v4(v3);
}
