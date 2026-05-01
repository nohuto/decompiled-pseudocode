/*
 * XREFs of CemRcObjectCleanup @ 0x180034980
 * Callers:
 *     ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800347A8 (-HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x180034958 (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 *     ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003C420 (-HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003C660 (-HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800806D0 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CempRcTableRemoveObject @ 0x1800349C0 (CempRcTableRemoveObject.c)
 */

__int64 __fastcall CemRcObjectCleanup(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[3] )
    NT_ASSERT("Object->ReferenceCount == 0");
  if ( a1[2] != -1LL )
    result = CempRcTableRemoveObject(a1[4] & 0xFFFFFFFFFFFFFFFCuLL, a1);
  a1[4] |= 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
