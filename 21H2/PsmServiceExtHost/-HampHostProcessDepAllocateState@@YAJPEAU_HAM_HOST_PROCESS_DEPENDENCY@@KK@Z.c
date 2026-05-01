/*
 * XREFs of ?HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z @ 0x180008F78
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000B1C8 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180009DA8 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 */

__int64 __fastcall HampHostProcessDepAllocateState(void **a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  result = RmpSystemOpenProcess(a1 + 8, 0x100000u, a2);
  if ( (int)result >= 0 )
  {
    result = RmpSystemOpenProcess(a1 + 9, 0x100000u, a3);
    if ( (int)result >= 0 )
    {
      result = TpAllocWait(a1 + 10, HampHostDepProcessExitCallback, a1, 0LL);
      if ( (int)result >= 0 )
      {
        result = TpAllocWait(a1 + 11, HampHostDepProcessExitCallback, a1, 0LL);
        if ( (int)result >= 0 )
          return 0LL;
      }
    }
  }
  return result;
}
