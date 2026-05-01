/*
 * XREFs of ?RmpHostSubscriptionCleanup@@YAXPEAU_RM_HOST_SUBSCRIPTION@@K@Z @ 0x1800353B4
 * Callers:
 *     ?RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z @ 0x1800352F8 (-RmpActivatorUnsubscribeFromNotifications@@YAJPEAU_RM_ACTIVATOR@@_K@Z.c)
 *     ?RmpHostSubscriptionDeleteForRtlTree@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006AD08 (-RmpHostSubscriptionDeleteForRtlTree@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x1800087D8 (CempListEntryIsNull.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpHostSubscriptionCleanup(struct _RM_HOST_SUBSCRIPTION *a1, char a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rax
  char *v7; // rcx

  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a1 + 1) )
  {
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
  v7 = (char *)*((_QWORD *)a1 + 6);
  if ( v7 )
    RmpObjectRelease(v7);
  if ( (a2 & 1) == 0 && *((_QWORD *)a1 + 5) != -1LL )
    RtlRbRemoveNode(*((_QWORD *)a1 + 7) + 40LL, (char *)a1 + 24);
}
