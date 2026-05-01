/*
 * XREFs of ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x180008C14
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180005204 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180006A2C (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000DF20 (-HampDepGroupStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A7B8 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180008D20 (-HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupTryEnterStateChange(struct _HAM_DEPENDENCY_GROUP *a1, unsigned __int64 *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rax

  v2 = 0;
  v3 = *((_QWORD *)a1 + 14) + 1LL;
  *((_QWORD *)a1 + 14) = v3;
  if ( a2 )
    *a2 = v3;
  if ( !*((_DWORD *)a1 + 32) )
  {
    v2 = 1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 12) <= 1 )
      __fastfail(0xEu);
    *((_DWORD *)a1 + 32) = GetCurrentThreadId();
  }
  if ( v2 != HampDepGroupIsCurrentThreadWorker(a1) )
    __int2c();
  return v2;
}
