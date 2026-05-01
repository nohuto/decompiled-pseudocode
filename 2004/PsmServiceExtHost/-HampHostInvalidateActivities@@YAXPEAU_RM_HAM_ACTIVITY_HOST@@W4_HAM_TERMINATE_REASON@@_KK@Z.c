/*
 * XREFs of ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180006468
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800058F0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180029908 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x1800042FC (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180004CB8 (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800063F8 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180006444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006990 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampHostInvalidateActivities(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int IsSuspendWaiter; // esi
  struct _HAM_ACTIVITY *i; // rax
  struct _HAM_ACTIVITY *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax

  IsSuspendWaiter = HampHostIsSuspendWaiter(a1, a2);
  for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v10) )
  {
    v10 = i;
    if ( !i )
      break;
    if ( HampActCanBeInvalidated(i) && ((a4 & 1) == 0 || (*((_DWORD *)v10 + 28) & 0x10000) != 0) )
    {
      HampActInvalidateAndNotify(v11, a2);
      v12 = *((_QWORD *)v10 + 9);
      if ( v12 && *(_BYTE *)(v12 + 40) == 2 )
        *((_QWORD *)v10 + 64) = a3;
    }
  }
  HampHostCheckUpdateSuspendWaitState(a1, IsSuspendWaiter);
}
