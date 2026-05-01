/*
 * XREFs of ?HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180008D20
 * Callers:
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x180008C14 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180008C90 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampDepGroupIsCurrentThreadWorker(struct _HAM_DEPENDENCY_GROUP *a1)
{
  return *((_DWORD *)a1 + 32) == GetCurrentThreadId();
}
