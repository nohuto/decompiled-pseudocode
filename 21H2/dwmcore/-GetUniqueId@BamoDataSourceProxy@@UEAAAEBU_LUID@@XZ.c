/*
 * XREFs of ?GetUniqueId@BamoDataSourceProxy@@UEAAAEBU_LUID@@XZ @ 0x1801BCA10
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800F4A7C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct _LUID *__fastcall BamoDataSourceProxy::GetUniqueId(BamoDataSourceProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const struct _LUID *)((char *)this + 40);
}
