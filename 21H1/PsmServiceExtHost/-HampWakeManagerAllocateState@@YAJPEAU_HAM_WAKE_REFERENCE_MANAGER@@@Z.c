/*
 * XREFs of ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180041778
 * Callers:
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800416DC (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000932C (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 */

__int64 __fastcall HampWakeManagerAllocateState(struct _HAM_WAKE_REFERENCE_MANAGER *a1)
{
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+60h] [rbp-18h] BYREF

  v2[0] = HampWakeManagerActivityCallback;
  v2[1] = 0LL;
  result = HampClientCreate(
             *(_QWORD *)a1,
             0,
             0LL,
             0LL,
             0,
             0,
             0,
             (__int64)v2,
             (__int64)a1,
             0LL,
             (struct _HAM_CLIENT_CONTEXT **)a1 + 1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
