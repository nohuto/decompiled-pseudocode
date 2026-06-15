/*
 * XREFs of sub_180068BD0 @ 0x180068BD0
 * Callers:
 *     sub_180057CD4 @ 0x180057CD4 (sub_180057CD4.c)
 *     sub_180104DB8 @ 0x180104DB8 (sub_180104DB8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180068BD0(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD, void *, _QWORD *); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, void *, _QWORD *))&dwCreationFlags;
  *a1 = 0LL;
  if ( v2 )
    (**v2)(v2, &unk_18015D220, a1);
  return a1;
}
