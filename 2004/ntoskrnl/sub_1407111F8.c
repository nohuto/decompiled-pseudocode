/*
 * XREFs of sub_1407111F8 @ 0x1407111F8
 * Callers:
 *     sub_14061954C @ 0x14061954C (sub_14061954C.c)
 * Callees:
 *     sub_140619BB0 @ 0x140619BB0 (sub_140619BB0.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407111F8(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_140619BB0(a1, (__int64)a2, -1);
    if ( v3 >= 0 )
    {
      v4 = (void *)a2[3];
      if ( v4 )
        ExFreePoolWithTag(v4, 0x42524157u);
      ExFreePoolWithTag(a2, 0x42524157u);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v3;
}
