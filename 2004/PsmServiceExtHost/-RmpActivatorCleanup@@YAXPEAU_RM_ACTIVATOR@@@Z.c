/*
 * XREFs of ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18006A214
 * Callers:
 *     ?RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z @ 0x180042B24 (-RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z.c)
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x180042BC4 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x180042CC4 (-RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x180063124 (-Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z.c)
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800637C4 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x180069D40 (RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     RmCoreRpcSrvDisconnectFromRmServer @ 0x180069DF0 (RmCoreRpcSrvDisconnectFromRmServer.c)
 * Callees:
 *     CempListEntryIsNull @ 0x180008768 (CempListEntryIsNull.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x1800273A4 (RmpWnfCleanupPendingCallbackList.c)
 *     ?RmpHostSubscriptionDeleteForRtlTree@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006A338 (-RmpHostSubscriptionDeleteForRtlTree@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall RmpActivatorCleanup(struct _RM_ACTIVATOR *a1)
{
  unsigned __int64 v1; // rbx
  bool v3; // zf
  struct _RTL_BALANCED_NODE *v4; // rcx
  char v5; // al
  int v6; // ebp
  struct _RTL_BALANCED_NODE *v7; // rdx
  unsigned __int64 v8; // rax
  struct _RTL_BALANCED_NODE *v9; // rdx
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax

  v1 = (unsigned __int64)a1 + 40;
  v3 = (*((_BYTE *)a1 + 48) & 1) == 0;
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 5);
  if ( !v3 && v4 )
    v4 = (struct _RTL_BALANCED_NODE *)(v1 ^ (unsigned __int64)v4);
  v5 = *(_BYTE *)(v1 + 8);
  v6 = v5 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v4->Children[0] )
        {
          v7 = v4;
          if ( v6 )
            v4 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v4->Children[0] ^ (unsigned __int64)v4);
          else
            v4 = v4->Children[0];
          v7->Children[0] = 0LL;
        }
        v8 = (unsigned __int64)v4->Children[1];
        if ( !v8 )
          break;
        v9 = v4;
        if ( v6 )
          v4 = (struct _RTL_BALANCED_NODE *)(v8 ^ (unsigned __int64)v4);
        else
          v4 = v4->Children[1];
        v9->Children[1] = 0LL;
      }
      v10 = v4->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v6 && v10 )
        v10 ^= (unsigned __int64)v4;
      RmpHostSubscriptionDeleteForRtlTree(v4, (void *)1);
      if ( !v10 )
        break;
      v4 = (struct _RTL_BALANCED_NODE *)v10;
    }
    v5 = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v5 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v11 = (_QWORD *)*((_QWORD *)a1 + 4);
  if ( v11 )
    RmpWnfCleanupPendingCallbackList(v11);
  if ( *((_DWORD *)a1 + 6) || *((_DWORD *)a1 + 7) )
    NtDeleteWnfStateName((char *)a1 + 24);
  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a1 + 1) )
  {
    v13 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v14 = (_QWORD *)v12[1], (_QWORD *)*v14 != v12) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
  }
}
