/*
 * XREFs of ?HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x18007F000
 * Callers:
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007F034 (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 * Callees:
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x18007EF9C (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 */

struct _HAM_HOST_DEPENDENCY *__fastcall HampDepGroupGetNextDependencyForHost(struct _HAM_HOST_DEPENDENCY *a1)
{
  struct _HAM_HOST_DEPENDENCY *result; // rax
  __int64 v2; // r10

  result = HampDepGroupGetNextDependency(a1);
  if ( result )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 8) + 24LL) != *(_QWORD *)(*((_QWORD *)result + 1) + 24LL) )
      return 0LL;
  }
  return result;
}
