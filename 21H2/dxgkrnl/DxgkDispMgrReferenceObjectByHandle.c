/*
 * XREFs of DxgkDispMgrReferenceObjectByHandle @ 0x1C02B1E30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C01660F4 (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrReferenceObjectByHandle(void *a1, ACCESS_MASK a2, _QWORD *a3)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v4 = ObReferenceObjectByHandleWithTag(a1, a2, g_pDxgkDisplayManagerObjectType, 1, 0x4B677844u, (PVOID *)&v12, 0LL);
  v7 = v4;
  if ( v4 >= 0 )
  {
    v9 = v12;
    if ( *v12 )
    {
      v12 = 0LL;
      LODWORD(v7) = 0;
      *a3 = v9;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v10 + 24) = 1130LL;
      WdLogEvent5_WdError(v10);
      LODWORD(v7) = -1073741811;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
  }
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>((void **)&v12);
  return (unsigned int)v7;
}
