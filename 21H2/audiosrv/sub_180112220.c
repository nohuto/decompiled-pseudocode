/*
 * XREFs of sub_180112220 @ 0x180112220
 * Callers:
 *     <none>
 * Callees:
 *     sub_180100830 @ 0x180100830 (sub_180100830.c)
 */

__int64 __fastcall sub_180112220(__int64 a1)
{
  _QWORD *v1; // rax

  if ( (*(_BYTE *)(a1 + 80) & 2) == 0 )
    return 0LL;
  v1 = (_QWORD *)sub_180100830((_QWORD *)(a1 + 16));
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 40LL))(*v1);
}
