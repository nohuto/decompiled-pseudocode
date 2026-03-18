/*
 * XREFs of ?AddRef@BamoDataProviderRegistrarPrincipal@@UEAAKXZ @ 0x1800F8E10
 * Callers:
 *     ?AddRef@BamoDataProviderRegistrarPrincipal@@W7EAAKXZ @ 0x180106C90 (-AddRef@BamoDataProviderRegistrarPrincipal@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataProviderRegistrarPrincipal::AddRef(BamoDataProviderRegistrarPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
