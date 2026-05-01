/*
 * XREFs of ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180006E44
 * Callers:
 *     ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180006D1C (-HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B090 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18007E858 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 * Callees:
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180006EB8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampRmContextStopActivity@@YAXPEAX@Z @ 0x180007028 (-HampRmContextStopActivity@@YAXPEAX@Z.c)
 *     ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18000705C (-HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BB00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x1800222F0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x1800380C0 (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 */

__int64 __fastcall HampActStop(struct _HAM_ACTIVITY *a1, __int64 a2)
{
  __int64 result; // rax
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  unsigned int v5; // edx
  void *v6; // rcx

  LOBYTE(a2) = 1;
  result = HampActBeginStateChange(a1, a2);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a1 + 136) &= 0xFFFFFF3F;
    HampActCancelExpirationTimer(a1);
    v4 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
    *((_DWORD *)a1 + 136) &= ~0x20u;
    HampHostUpdateActivityState(v4);
    HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), v5);
    HampRmContextStopActivity(*((void **)a1 + 11));
    v6 = (void *)*((_QWORD *)a1 + 63);
    if ( v6 )
    {
      HampSystemActivationClientDeactivate(v6);
      *((_QWORD *)a1 + 63) = 0LL;
    }
    HampActEndStateChange(a1, 0);
    return 0LL;
  }
  return result;
}
