/*
 * XREFs of ?Release@BamoDataProviderRegistrarPrincipal@@UEAAKXZ @ 0x1800D4350
 * Callers:
 *     ?Release@BamoDataSourceProxy@@W7EAAKXZ @ 0x1800ECE20 (-Release@BamoDataSourceProxy@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataProviderRegistrarPrincipal::Release(BamoDataProviderRegistrarPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
