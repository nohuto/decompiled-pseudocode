/*
 * XREFs of sub_1406E38DC @ 0x1406E38DC
 * Callers:
 *     sub_14065F0A0 @ 0x14065F0A0 (sub_14065F0A0.c)
 * Callees:
 *     sub_14065F704 @ 0x14065F704 (sub_14065F704.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406E38DC(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = sub_14065F704(a1, (__int64)a2, -1);
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
