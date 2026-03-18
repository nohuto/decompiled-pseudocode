/*
 * XREFs of ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x180196BA0
 * Callers:
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801970B4 (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180026A28 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180026A5C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180196B30 (-DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180196E4C (-EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAPEAVBamoStubImpl@23@1@Z @ 0x180197424 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAPEAVBamoStubImpl@23@1@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct Microsoft::BamoImpl::ConnectionIndirector **a2,
        struct Microsoft::BamoImpl::ConnectionIndirector **a3,
        struct Microsoft::BamoImpl::BamoStubImpl **a4)
{
  struct Microsoft::BamoImpl::ConnectionIndirector *v8; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v13; // r9
  struct Microsoft::BamoImpl::ConnectionIndirector *v14; // rbx
  struct Microsoft::BamoImpl::BamoStubImpl *i; // rdi
  struct Microsoft::BamoImpl::ConnectionIndirector *v16; // rcx
  int v17; // eax
  struct Microsoft::BamoImpl::ConnectionIndirector *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct Microsoft::BamoImpl::BamoStubImpl *v20; // [rsp+70h] [rbp+8h] BYREF
  struct Microsoft::BamoImpl::BamoStubImpl *v21; // [rsp+78h] [rbp+10h] BYREF
  Microsoft::BamoImpl::BamoImplObject *v22; // [rsp+80h] [rbp+18h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v22, this[12]);
  v8 = this[8];
  *a2 = v8;
  (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = this[14];
  *a4 = 0LL;
  *a3 = v9;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisableLockDrops(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)this,
    v10,
    v11,
    v12);
  v14 = this[14];
  for ( i = 0LL; v14; i = v21 )
  {
    v16 = this[8];
    this[14] = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)v14 + 8);
    LOBYTE(v13) = 1;
    v17 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *, _QWORD, _QWORD, __int64))(*(_QWORD *)v16 + 72LL))(
            v16,
            *((unsigned int *)v14 + 9),
            0LL,
            v13);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        949LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v17,
        (int)Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectProxyAtShutdown);
    Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(v14, 1, &v20, &v21);
    if ( *a4 )
      *((_QWORD *)i + 7) = v20;
    else
      *a4 = v20;
    v14 = this[14];
  }
  v18 = this[8];
  this[8] = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v18 + 16LL))(v18);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::EnableLockDrops((Microsoft::BamoImpl::BaseBamoConnectionImpl *)this);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v22);
}
