/*
 * XREFs of ValidateLocalCookies @ 0x4B2F6860
 * Callers:
 *     __except_handler4_common @ 0x4B2F68B0 (__except_handler4_common.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __cdecl ValidateLocalCookies(void (__thiscall *a1)(int), _DWORD *a2, int a3)
{
  if ( *a2 != -2 )
    a1(*(_DWORD *)(*a2 + a3) ^ (a3 + a2[1]));
  return ((int (__thiscall *)(int))a1)(*(_DWORD *)(a2[2] + a3) ^ (a3 + a2[3]));
}
