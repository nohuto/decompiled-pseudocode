/*
 * XREFs of ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027BA0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018A00 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampHostCleanup(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  void *v2; // rcx
  _QWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx

  v2 = (void *)*((_QWORD *)a1 + 72);
  if ( v2 )
    NtClose(v2);
  v3 = (_QWORD *)*((_QWORD *)a1 + 130);
  if ( v3 )
    CemRcObjectDereference(v3);
  if ( *((_QWORD *)a1 + 99) )
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 176LL))();
  v4 = *((_QWORD *)a1 + 103);
  if ( v4 )
    TpReleaseTimer(v4);
  v5 = *((_QWORD *)a1 + 79);
  if ( v5 )
    TpReleaseWork(v5);
  v6 = *((_QWORD *)a1 + 78);
  if ( v6 )
    TpReleaseWork(v6);
  v7 = (_QWORD *)*((_QWORD *)a1 + 73);
  if ( v7 )
    CemRcObjectDereference(v7);
  v8 = (_QWORD *)*((_QWORD *)a1 + 97);
  if ( v8 )
    CemRcObjectDereference(v8);
}
