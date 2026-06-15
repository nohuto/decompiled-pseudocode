/*
 * XREFs of sub_18004B970 @ 0x18004B970
 * Callers:
 *     sub_18004B850 @ 0x18004B850 (sub_18004B850.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18004B970(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *a1 - *a2;
  if ( *a1 == *a2 )
    v2 = a1[1] - a2[1];
  return v2 == 0;
}
