/*
 * XREFs of ??$_Uninitialized_move@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@QEAU12@0PEAU12@AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x1800F1DA4
 * Callers:
 *     ??$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAPEAUAttachedInputObjectEntry@InputSite@@QEAU23@$$QEAU23@@Z @ 0x18000A6D0 (--$_Emplace_reallocate@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedInputObjectEntry@InputSite@@0AEAV?$allocator@UAttachedInputObjectEntry@InputSite@@@0@@Z @ 0x180001F08 (--$_Destroy_range@V-$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@YAXPEAUAttachedI.c)
 */

char *__fastcall std::_Uninitialized_move<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *,std::allocator<InputSite::AttachedInputObjectEntry>>(
        char *a1,
        char *a2,
        _QWORD *a3)
{
  char *v3; // rbx
  _QWORD *v4; // r8
  signed __int64 v5; // r9
  _QWORD *v6; // rcx

  v3 = (char *)a3;
  if ( a1 != a2 )
  {
    v4 = a3 + 1;
    v5 = a1 - v3;
    do
    {
      v6 = (_QWORD *)((char *)v4 + v5);
      *(_QWORD *)v3 = *(_QWORD *)((char *)v4 + v5 - 8);
      *v4 = 0LL;
      if ( v4 != (_QWORD *)((char *)v4 + v5) )
      {
        *v4 = *v6;
        *v6 = 0LL;
      }
      v4 += 2;
      v3 += 16;
    }
    while ( (char *)v4 + v5 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<InputSite::AttachedInputObjectEntry>>((__int64)v3, (__int64)v3);
  return v3;
}
