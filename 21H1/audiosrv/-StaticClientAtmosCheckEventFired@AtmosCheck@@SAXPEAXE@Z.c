/*
 * XREFs of ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x18005F5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18005F618 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 */

void __fastcall AtmosCheck::StaticClientAtmosCheckEventFired(AtmosCheck *a1)
{
  AtmosCheck::Trace(a1, "Global\\Client_Atmos_Check_Event is signaled", 0);
  *((_DWORD *)a1 + 46) = 8;
  AtmosCheck::PerformLicenseCheck(a1, 1);
}
