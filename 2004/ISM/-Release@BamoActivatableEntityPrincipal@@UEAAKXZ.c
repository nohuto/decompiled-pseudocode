/*
 * XREFs of ?Release@BamoActivatableEntityPrincipal@@UEAAKXZ @ 0x18000D4A0
 * Callers:
 *     ?Release@BamoActivatableEntityPrincipal@@W7EAAKXZ @ 0x18004B660 (-Release@BamoActivatableEntityPrincipal@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoActivatableEntityPrincipal::Release(BamoActivatableEntityPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
