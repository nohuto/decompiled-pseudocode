/*
 * XREFs of ?RmpQoSEnableWatchdogForHost@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x180001498
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001174 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpQoSEnableWatchdogForHost(
        struct _RM_QOS_CONTEXT *a1,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned __int64 a3)
{
  struct _RM_QOS_CONTEXT **v4; // rax
  struct _RM_QOS_CONTEXT *v5; // rcx
  __int64 v6; // rax

  if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 2) <= 1 )
    __fastfail(0xEu);
  v4 = (struct _RM_QOS_CONTEXT **)*((_QWORD *)a1 + 1);
  v5 = (struct _RM_ACTIVITY_HOST *)((char *)a2 + 1256);
  if ( *v4 != a1 )
    __fastfail(3u);
  *((_QWORD *)a2 + 158) = v4;
  *(_QWORD *)v5 = a1;
  *v4 = v5;
  *((_QWORD *)a1 + 1) = v5;
  v6 = -1LL;
  if ( a3 + 10000LL * *((unsigned int *)a1 + 6) >= a3 )
    v6 = a3 + 10000LL * *((unsigned int *)a1 + 6);
  *((_QWORD *)a2 + 161) = v6;
}
