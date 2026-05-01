/*
 * XREFs of HamRpcSrvCreateAutoRestartActivity @ 0x1800847B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@@Z @ 0x180084D2C (-ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@.c)
 */

__int64 __fastcall HamRpcSrvCreateAutoRestartActivity(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        union _HAM_RESTART_PROPERTIES *a9)
{
  struct _ACTIVITY_RESTARTER *v12; // rbx
  __int64 result; // rax

  RtlAcquireSRWLockShared(&ArGlobalLock);
  v12 = ArGlobals;
  RtlReleaseSRWLockShared(&ArGlobalLock);
  if ( !v12 )
    return 3221225659LL;
  result = ArSrvCreateActivity(a2, a3, a4, a5, a6, a7, a8, a9, v12);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
