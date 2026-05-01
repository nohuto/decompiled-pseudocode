/*
 * XREFs of CemRcTableGetNext @ 0x180027194
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180023D00 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180024330 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180025C78 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800270D4 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800272F8 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180081D04 (-HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180081D54 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180083B4C (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180083D0C (-ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     CempRcTableGetFirstActiveObject @ 0x180024D60 (CempRcTableGetFirstActiveObject.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 */

unsigned __int64 __fastcall CemRcTableGetNext(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 i; // rcx
  _QWORD *v6; // rdx
  unsigned __int64 FirstActiveObject; // rbx

  v2 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  RtlAcquireSRWLockShared(v2 + 16);
  v3 = (_QWORD *)a1[1];
  v4 = a1;
  if ( v3 )
  {
    v6 = (_QWORD *)*v3;
    if ( *v3 )
    {
      do
      {
        v3 = v6;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 );
    }
  }
  else
  {
    for ( i = a1[2]; ; i = v3[2] )
    {
      v3 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v3 || (_QWORD *)*v3 == v4 )
        break;
      v4 = v3;
    }
  }
  FirstActiveObject = CempRcTableGetFirstActiveObject((unsigned __int64)v3);
  RtlReleaseSRWLockShared(v2 + 16);
  CemRcObjectDereference(a1);
  return FirstActiveObject;
}
