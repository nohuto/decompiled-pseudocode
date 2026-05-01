/*
 * XREFs of ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x1800012F4
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001184 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180001250 (-RmpQoSWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x180001394 (-RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180076FC8 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpQoSCheckHostsSetTimer(struct _RM_QOS_CONTEXT *a1, unsigned __int64 a2)
{
  struct _RM_QOS_CONTEXT *i; // rbx
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v4; // rax
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // r9
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]

  for ( i = a1; ; a1 = i )
  {
    v4 = RmpQoSGetEarliestHostInfo(a1);
    if ( !v4 || *((_QWORD *)v4 + 15) > a2 )
      break;
    v9 = (char *)v4 - 1168;
    if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B31E0, 25LL) )
    {
      v10 = *((_QWORD *)v9 + 4);
      v16 = 0;
      v11 = v10;
      v15 = 8;
      v14 = &v11;
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009E706, 0, 0, 3u, &v13);
    }
    RmpQoSDisableForHostOnTimerExpiry(i, (struct _RM_ACTIVITY_HOST *)v9);
  }
  v5 = RmpQoSGetEarliestHostInfo(i);
  v6 = *((_QWORD *)i + 2);
  if ( v5 )
  {
    v7 = &v12;
    v8 = *((unsigned int *)i + 7);
    v12 = *((_QWORD *)v5 + 15);
  }
  else
  {
    v8 = 0LL;
    v7 = 0LL;
  }
  TpSetTimer(v6, v7, 0LL, v8);
}
