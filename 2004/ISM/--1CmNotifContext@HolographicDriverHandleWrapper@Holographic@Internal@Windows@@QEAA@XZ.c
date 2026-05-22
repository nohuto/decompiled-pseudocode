/*
 * XREFs of ??1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ @ 0x1801577DC
 * Callers:
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x1801578B4 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 *     ??4?$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180157FA8 (--4-$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U-$.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAAJXZ @ 0x1801613E4 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAAJXZ.c)
 *     ?UnregisterAsyncCallback@CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1801666B0 (-UnregisterAsyncCallback@CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Wind.c)
 *     ?UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z @ 0x1801666E0 (-UnregisterCmNotif@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAX_N@Z.c)
 * Callees:
 *     ?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAXPEAU_TP_WORK@@@Z @ 0x18015B1A4 (-Destroy@-$DestroyThreadPoolWork@$01@details@wil@@SAXPEAU_TP_WORK@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x180167D34 (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::~CmNotifContext(
        struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE *p_OwningThread; // rsi
  __int64 v3; // rdx
  struct _TP_WORK *v4; // rbp
  DWORD LastError; // ebx
  struct _TP_WORK *v6; // rcx

  p_OwningThread = &this[1].OwningThread;
  wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
    &this[1].OwningThread,
    0LL);
  v4 = *(struct _TP_WORK **)&this[1].LockCount;
  if ( v4 )
  {
    LastError = GetLastError();
    wil::details::DestroyThreadPoolWork<2>::Destroy(v4);
    SetLastError(LastError);
  }
  *(_QWORD *)&this[1].LockCount = 0LL;
  v6 = 0LL;
  if ( *p_OwningThread )
  {
    CM_Unregister_Notification(*p_OwningThread, v3);
    v6 = *(struct _TP_WORK **)&this[1].LockCount;
  }
  if ( v6 )
    wil::details::DestroyThreadPoolWork<2>::Destroy(v6);
  DeleteCriticalSection(this);
}
