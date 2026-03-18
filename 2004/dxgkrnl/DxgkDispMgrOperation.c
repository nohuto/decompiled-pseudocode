/*
 * XREFs of DxgkDispMgrOperation @ 0x1C0160D50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C0161144 (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAX@@QEAA@XZ @ 0x1C016117C (--1-$NT_OBJECT_REFERENCE@PEAX@@QEAA@XZ.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01611B0 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkDispMgrOperation(_OWORD *a1)
{
  ULONG64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 CurrentProcess; // rax
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h]
  HANDLE v33[2]; // [rsp+50h] [rbp-18h]
  PVOID v34; // [rsp+78h] [rbp+10h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  v2 = (ULONG64)(a1 + 2);
  if ( v2 < (unsigned __int64)a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *a1;
  *(_OWORD *)v33 = a1[1];
  Object = 0LL;
  LODWORD(v5) = ObReferenceObjectByHandleWithTag(
                  Handle[1],
                  0x20000u,
                  g_pDxgkDisplayManagerObjectType,
                  1,
                  0x4B677844u,
                  &Object,
                  0LL);
  if ( (int)v5 < 0 )
  {
    v24 = WdLogNewEntry5_WdWarning(v4, v3, v6);
    *(HANDLE *)(v24 + 24) = Handle[1];
    WdLogEvent5_WdWarning(v24);
    goto LABEL_17;
  }
  if ( !*(_QWORD *)Object )
  {
    v25 = WdLogNewEntry5_WdWarning(v4, v3, v6);
    *(_QWORD *)(v25 + 24) = 856LL;
    WdLogEvent5_WdWarning(v25);
    goto LABEL_21;
  }
  if ( LODWORD(Handle[0]) != 1 )
  {
LABEL_21:
    LODWORD(v5) = -1073741811;
    goto LABEL_17;
  }
  v34 = 0LL;
  v7 = ObReferenceObjectByHandleWithTag(v33[0], 0x1F0001u, LpcPortObjectType, 1, 0x4B677844u, &v34, 0LL);
  v5 = v7;
  if ( v7 < 0 )
  {
    v26 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(HANDLE *)(v26 + 24) = v33[0];
    *(_QWORD *)(v26 + 32) = v5;
    WdLogEvent5_WdWarning(v26);
  }
  else if ( LODWORD(v33[1]) )
  {
    v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9, v8) + 102);
    if ( v13 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    Current = DXGPROCESS::GetCurrent(v12, v11);
    if ( !Current
      || !SessionDataForSpecifiedSession
      || !*((_BYTE *)Current + 346) && !*((_BYTE *)SessionDataForSpecifiedSession + 18492) )
    {
      v27 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v27 + 24) = 880LL;
      WdLogEvent5_WdWarning(v27);
      NT_OBJECT_REFERENCE<void *>::~NT_OBJECT_REFERENCE<void *>(&v34);
      LODWORD(v5) = -1073741790;
      goto LABEL_17;
    }
    v20 = DXGSESSIONDATA::ConnectSessionDisplayBroker(SessionDataForSpecifiedSession);
    v5 = v20;
    if ( v20 < 0 )
    {
      v28 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v28 + 24) = v5;
      CurrentProcess = PsGetCurrentProcess(v30, v29);
      *(_QWORD *)(v28 + 32) = (unsigned int)PsGetProcessSessionId(CurrentProcess);
      WdLogEvent5_WdError(v28);
    }
  }
  NT_OBJECT_REFERENCE<void *>::~NT_OBJECT_REFERENCE<void *>(&v34);
LABEL_17:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)v5;
}
