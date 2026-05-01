/*
 * XREFs of ?RmpEnforcerContextCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180071994
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180064434 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpEnforcerContextCleanup(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *((_QWORD *)a1 + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)a1 + 6);
  if ( v3 )
    TpReleaseTimer(v3);
  v4 = *((_QWORD *)a1 + 16);
  if ( v4 )
    TpReleaseTimer(v4);
  v5 = *((_QWORD *)a1 + 20);
  if ( v5 )
    TpReleaseTimer(v5);
  v6 = *((_QWORD *)a1 + 24);
  if ( v6 )
    TpReleaseTimer(v6);
}
