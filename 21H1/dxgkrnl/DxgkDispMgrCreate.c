/*
 * XREFs of DxgkDispMgrCreate @ 0x1C012B480
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001A27C (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ??0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z @ 0x1C012B694 (--0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z.c)
 */

__int64 __fastcall DxgkDispMgrCreate(ULONG64 a1)
{
  ULONG64 v2; // rcx
  DXGDISPLAYMANAGEROBJECT *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  DXGDISPLAYMANAGEROBJECT *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  PVOID v13; // r14
  NTSTATUS inserted; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  ACCESS_MASK DesiredAccess[4]; // [rsp+50h] [rbp-28h]
  HANDLE Handle; // [rsp+60h] [rbp-18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  ReferenceCounted *v27; // [rsp+90h] [rbp+18h] BYREF

  v2 = a1 + 24;
  if ( v2 < a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)DesiredAccess = *(_OWORD *)a1;
  Handle = *(HANDLE *)(a1 + 16);
  v3 = (DXGDISPLAYMANAGEROBJECT *)operator new[](0x98uLL, 0x4B677844u, PagedPool);
  if ( v3 )
    v8 = DXGDISPLAYMANAGEROBJECT::DXGDISPLAYMANAGEROBJECT(v3, DesiredAccess[3] & 1);
  else
    v8 = 0LL;
  v27 = v8;
  if ( !v8 || !*((_QWORD *)v8 + 2) || !*((_BYTE *)v8 + 24) )
  {
    v23 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
    *(_QWORD *)(v23 + 24) = 773LL;
    WdLogEvent5_WdLowResource(v23);
    LODWORD(v12) = -1073741801;
    goto LABEL_20;
  }
  Object = 0LL;
  LOBYTE(v7) = 1;
  LOBYTE(v5) = 1;
  v9 = ObCreateObject(v5, g_pDxgkDisplayManagerObjectType, *(_QWORD *)DesiredAccess, v7, 0LL, 16, 168, 0, &Object);
  v12 = v9;
  if ( v9 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v20 + 24) = v12;
    WdLogEvent5_WdError(v20);
LABEL_20:
    auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v27, 0LL);
    return (unsigned int)v12;
  }
  *(_OWORD *)Object = 0LL;
  v13 = Object;
  if ( *((_QWORD *)v8 + 4) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v21 + 24) = 558LL;
    WdLogEvent5_WdAssertion(v21);
  }
  *((_QWORD *)v8 + 4) = v13;
  v27 = 0LL;
  *(_QWORD *)Object = v8;
  inserted = ObInsertObject(Object, 0LL, DesiredAccess[2], 0, 0LL, &Handle);
  v17 = inserted;
  if ( inserted < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v22 + 24) = v17;
    WdLogEvent5_WdError(v22);
    LODWORD(v12) = v17;
    goto LABEL_20;
  }
  v18 = (_QWORD *)(a1 + 16);
  if ( a1 + 16 >= MmUserProbeAddress )
    v18 = (_QWORD *)MmUserProbeAddress;
  *v18 = Handle;
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v27, 0LL);
  return (unsigned int)v17;
}
