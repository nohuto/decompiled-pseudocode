/*
 * XREFs of ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180043380
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CF64 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18007BE20 (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18007C128 (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18007DE7C (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 */

__int64 __fastcall HampOplockCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        char *a5,
        unsigned int a6)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // edi
  int v11; // ebx
  DWORD v12; // edi
  unsigned int *v14; // rsi
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  __int64 v16; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v17; // rbx
  unsigned __int64 v18; // rbx
  char v19[4]; // [rsp+30h] [rbp-F8h] BYREF
  int v20; // [rsp+34h] [rbp-F4h] BYREF
  char v21[144]; // [rsp+40h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+D0h] [rbp-58h] BYREF
  int *v23; // [rsp+F0h] [rbp-38h]
  int v24; // [rsp+F8h] [rbp-30h]
  int v25; // [rsp+FCh] [rbp-2Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A0618,
      0LL,
      0LL,
      2u,
      &v22);
  LOBYTE(v8) = 4;
  v9 = 0LL;
  while ( a1 != HamOplockWatchStateNames[v9] )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 4 )
      goto LABEL_9;
  }
  LOBYTE(v8) = v9;
LABEL_9:
  v10 = (unsigned __int8)v8 | 0x1000;
  if ( !a5 || a6 < 4 || (a6 & 3) != 0 )
  {
    v11 = -1073741584;
    goto LABEL_12;
  }
  v14 = (unsigned int *)(a5 + 4);
  if ( *(_DWORD *)a5 )
  {
    if ( *(_DWORD *)a5 == -1 )
    {
      for ( i = HampHostEnumerateHostsInNode((struct _HAM_RC_TREE_NODE *)(a4 + 128), 0, 0LL);
            ;
            i = HampManagerGetNextHost(v17) )
      {
        v17 = i;
        if ( !i )
          break;
        HampHostTerminateIfSuspended(i, v16, v10, v19);
      }
    }
    else
    {
      v18 = *(unsigned int *)a5;
      if ( v18 > ((unsigned __int64)a6 >> 2) - 1 )
      {
        v11 = -1073741583;
        goto LABEL_12;
      }
      if ( *(_DWORD *)a5 )
      {
        do
        {
          HampManagerTerminateHostIfSuspended(a4, *v14++, v8, v10, 0LL);
          --v18;
        }
        while ( v18 );
      }
    }
  }
  v11 = 0;
LABEL_12:
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
  {
    v25 = 0;
    v23 = &v20;
    v20 = v11;
    v24 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A06A4,
      0LL,
      0LL,
      3u,
      &v22);
  }
  return 0LL;
}
