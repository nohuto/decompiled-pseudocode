/*
 * XREFs of ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x180073964
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007E90 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012B44 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180073CE8 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 * Callees:
 *     ?CheckSetWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAA_NXZ @ 0x1800736A0 (-CheckSetWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAA_NXZ.c)
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x1800738A8 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::Revoke(ExecutionModel::ExternalResourceSet *this, char a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 321);
  if ( (v2 & 1) == 0 )
  {
    *((_DWORD *)this + 321) = v2 | 1;
    *((_DWORD *)this + 338) ^= ((unsigned __int8)*((_DWORD *)this + 338) ^ (unsigned __int8)(*((_DWORD *)this + 338) | (2 * a2))) & 2;
    if ( ExecutionModel::ExternalResourceSet::CheckSetWatchdogTimer(this) )
      ExecutionModel::ExternalResourceSet::QueueMessage((__int64)this, 1);
  }
}
