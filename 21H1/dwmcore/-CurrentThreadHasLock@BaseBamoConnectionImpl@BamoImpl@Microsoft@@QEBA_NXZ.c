/*
 * XREFs of ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800B2114
 * Callers:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800B2064 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800B20D8 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x180169EE8 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  return *((_DWORD *)this + 42) == GetCurrentThreadId();
}
