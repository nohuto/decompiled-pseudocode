/*
 * XREFs of DpiPdoRemovePdoObjects @ 0x1C0397E38
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C01FBF08 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0389018 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoDestroyPendingPdoObjects @ 0x1C0397590 (DpiPdoDestroyPendingPdoObjects.c)
 *     DpiPdoRemovePdo @ 0x1C0397BD4 (DpiPdoRemovePdo.c)
 */

__int64 __fastcall DpiPdoRemovePdoObjects(__int64 a1, char a2)
{
  __int64 v2; // rbx
  struct _ERESOURCE *v5; // r15
  char v6; // si
  _QWORD *v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  v5 = (struct _ERESOURCE *)(v2 + 3304);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v2 + 3304), 1u);
  v6 = (int)DpiAcquireCoreSyncAccessSafe(a1, 1) >= 0;
  v7 = (_QWORD *)(v2 + 3464);
  v8 = *(_QWORD **)(v2 + 3464);
  while ( v8 != v7 )
  {
    v9 = (__int64)(v8 - 4);
    v8 = (_QWORD *)*v8;
    v10 = *(_QWORD *)(v9 + 48);
    if ( v10 )
    {
      if ( a2 )
        *(_BYTE *)(*(_QWORD *)(v10 + 64) + 509LL) = 0;
      DpiPdoRemovePdo(a1, v9, v6);
    }
  }
  if ( a2 )
    DpiPdoDestroyPendingPdoObjects(a1);
  if ( v6 )
    DpiReleaseCoreSyncAccessSafe(a1, 1);
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
  return 0LL;
}
