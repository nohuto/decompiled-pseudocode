/*
 * XREFs of ?AddRef@BamoDataProviderProxy@@UEAAKXZ @ 0x1800F8DB0
 * Callers:
 *     ?AddRef@BamoCompObjectDiagnosticsRootProxy@@W7EAAKXZ @ 0x180106D50 (-AddRef@BamoCompObjectDiagnosticsRootProxy@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataProviderProxy::AddRef(BamoDataProviderProxy *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
