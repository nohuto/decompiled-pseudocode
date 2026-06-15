/*
 * XREFs of sub_180033834 @ 0x180033834
 * Callers:
 *     ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z @ 0x1800337C0 (--_Gcritical_section@Concurrency@@QEAAPEAXI@Z.c)
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 *     unknown_libname_32 @ 0x18003CE94 (unknown_libname_32.c)
 *     sub_18003CEA6 @ 0x18003CEA6 (sub_18003CEA6.c)
 * Callees:
 *     sub_1800361E8 @ 0x1800361E8 (sub_1800361E8.c)
 */

__int64 __fastcall sub_180033834(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &off_18003F648;
  v2 = 0LL;
  v3 = a1[3];
  if ( v3 )
  {
    sub_1800361E8(v3, a1[4]);
    _o_free(a1[3]);
    a1[3] = 0LL;
  }
  a1[4] = 0LL;
  a1[5] = 0LL;
  _o_free(a1[1]);
  a1[1] = 0LL;
  v4 = a1[3];
  if ( v4 )
  {
    sub_1800361E8(v4, a1[4]);
    _o_free(a1[3]);
    v2 = a1[1];
  }
  *a1 = &off_18003F6B0;
  return _o_free(v2);
}
