/*
 * XREFs of sub_1800C4FF4 @ 0x1800C4FF4
 * Callers:
 *     sub_1800C55D0 @ 0x1800C55D0 (sub_1800C55D0.c)
 *     sub_1800CA170 @ 0x1800CA170 (sub_1800CA170.c)
 *     sub_18011D4F8 @ 0x18011D4F8 (sub_18011D4F8.c)
 *     sub_180121150 @ 0x180121150 (sub_180121150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C4FF4(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax

  v2 = 0;
  if ( *(_DWORD *)(a1 + 16) == *(_DWORD *)(a2 + 16) )
  {
    v3 = *(_QWORD *)a1 - *(_QWORD *)a2;
    if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
      v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)(a2 + 8);
    if ( !v3 )
      return 1;
  }
  return v2;
}
