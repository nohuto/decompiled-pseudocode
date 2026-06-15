/*
 * XREFs of sub_1800B8EB0 @ 0x1800B8EB0
 * Callers:
 *     sub_1800BA458 @ 0x1800BA458 (sub_1800BA458.c)
 * Callees:
 *     sub_1800B8EE4 @ 0x1800B8EE4 (sub_1800B8EE4.c)
 */

char __fastcall sub_1800B8EB0(__int64 a1, int a2, int a3)
{
  if ( *(_QWORD *)a1 )
    return sub_1800B8EE4(*(_QWORD *)a1, a2, *(_DWORD *)(a1 + 8), a3);
  else
    return 0;
}
