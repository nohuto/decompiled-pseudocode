/*
 * XREFs of sub_180071D9C @ 0x180071D9C
 * Callers:
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 * Callees:
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_180071DF0 @ 0x180071DF0 (sub_180071DF0.c)
 */

void __fastcall sub_180071D9C(__int64 *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx

  v2 = (_QWORD *)a1[1];
  if ( (_QWORD *)*v2 != v2 )
    sub_180071DF0(v2, *(unsigned int *)(*a1 + 32), *((unsigned int *)a1 + 8), *a1);
  v3 = a1[3];
  if ( *(_DWORD *)(v3 + 40) )
    sub_180071C14(v3, *((_DWORD *)a1 + 9), *(_DWORD *)(*a1 + 32), *a1, 0LL);
}
