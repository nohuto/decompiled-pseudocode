/*
 * XREFs of ?ReleaseStreamConnection@@YAJPEAX@Z @ 0x1800DCBC0
 * Callers:
 *     AudioServerReleaseStreamConnection @ 0x1800E0180 (AudioServerReleaseStreamConnection.c)
 *     STREAMCONNECTION_rundown @ 0x1800E11D0 (STREAMCONNECTION_rundown.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052730 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ReleaseStreamConnection(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax
  std::_Ref_count_base *v3; // rcx

  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  *a1 = 0LL;
  v3 = 0LL;
  if ( v1 )
  {
    std::_Ref_count_base::_Decref(v1);
    v3 = (std::_Ref_count_base *)a1[1];
  }
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  operator delete(a1, (const struct std::nothrow_t *)0x10);
  return 0LL;
}
