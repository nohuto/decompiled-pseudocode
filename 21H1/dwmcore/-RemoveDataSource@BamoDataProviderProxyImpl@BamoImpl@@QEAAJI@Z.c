/*
 * XREFs of ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180197C9C
 * Callers:
 *     ?Thunk_RemoveDataSource_5@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180198180 (-Thunk_RemoveDataSource_5@-$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SA.c)
 * Callees:
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x1800B1EAC (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800B1EF4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800B1FFC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::RemoveDataSource(
        BamoImpl::BamoDataProviderProxyImpl *this,
        unsigned int a2)
{
  __int64 v2; // r9
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v4; // rbp
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rdi
  char *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  unsigned int v12; // esi
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  v4 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v2 + 24) + 32LL);
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(v4, *(unsigned int *)(v2 + 36), a2);
  v6 = Item;
  if ( Item )
    v7 = (char *)Item - 16;
  else
    v7 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v14, v4);
  v8 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this - 2) + 72LL))((char *)this - 16, v7);
  v11 = v14;
  v12 = v8;
  if ( v14 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 128));
    *(_DWORD *)(v11 + 168) = GetCurrentThreadId();
  }
  if ( v6 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6, v9, v10);
  return v12;
}
