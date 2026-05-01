/*
 * XREFs of ?HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x180081A40
 * Callers:
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007E664 (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampTerminateDepShouldInvalidate(struct _HAM_TERMINATE_DEPENDENCY *a1)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)a1 + 7);
  return *(_QWORD *)(v1 + 800) > *((_QWORD *)a1 + 9)
      || (HIWORD(*(_DWORD *)(v1 + 648)) & 3u) >= (unsigned __int64)*((int *)a1 + 21);
}
