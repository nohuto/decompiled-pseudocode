/*
 * XREFs of ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x180167388
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180168330 (-OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801803D0 (-OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180180510 (-OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?RemovePrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x180180748 (-RemovePrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 *     ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180183BC0 (-OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800D3198 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800D31D4 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

Microsoft::BamoImpl::ConditionalDropAndReacquireLock *__fastcall Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
        Microsoft::BamoImpl::ConditionalDropAndReacquireLock *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2)
{
  *(_QWORD *)this = 0LL;
  if ( a2 && Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(a2) && !*((_DWORD *)a2 + 43) )
  {
    *(_QWORD *)this = a2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(a2);
  }
  return this;
}
