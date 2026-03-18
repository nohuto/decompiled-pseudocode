/*
 * XREFs of sub_1403D8780 @ 0x1403D8780
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x140324204 (KeExitRetpoline.c)
 *     _guard_check_icall @ 0x1403FE990 (_guard_check_icall.c)
 */

__int64 __fastcall sub_1403D8780(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64); // rbx

  v1 = a1[2];
  v2 = v1 ^ a1[1];
  v3 = (__int64 (__fastcall *)(__int64))(v1 ^ a1[3]);
  if ( (*(_DWORD *)(v2 + 0x994) & 0x100000) != 0 )
    KeExitRetpoline();
  else
    _mm_lfence();
  return v3(v2);
}
