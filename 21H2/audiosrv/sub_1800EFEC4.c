/*
 * XREFs of sub_1800EFEC4 @ 0x1800EFEC4
 * Callers:
 *     sub_1800F0195 @ 0x1800F0195 (sub_1800F0195.c)
 *     sub_1800F0384 @ 0x1800F0384 (sub_1800F0384.c)
 *     sub_1800F0860 @ 0x1800F0860 (sub_1800F0860.c)
 *     sub_1800F1548 @ 0x1800F1548 (sub_1800F1548.c)
 *     sub_1800F16AC @ 0x1800F16AC (sub_1800F16AC.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800F070C @ 0x1800F070C (sub_1800F070C.c)
 */

BOOL __fastcall sub_1800EFEC4(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  void *v4; // rdi
  BOOL result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = (void *)*v3;
      if ( *v3 )
      {
        sub_1800F070C(*v3);
        result = sub_18006A148(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
