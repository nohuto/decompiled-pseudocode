/*
 * XREFs of ?HampDepHostStackPop@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18007F16C
 * Callers:
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007E664 (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 * Callees:
 *     <none>
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampDepHostStackPop(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  if ( (v1 & 1) != 0 )
  {
    if ( v1 == 1 )
      v2 = 0LL;
    else
      v2 = v1 ^ (a1 | 1);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 8);
  }
  RtlRbRemoveNode(a1, v2);
  *(_QWORD *)(v2 + 16) = -1LL;
  return (struct _RM_HAM_ACTIVITY_HOST *)(v2 - 744);
}
