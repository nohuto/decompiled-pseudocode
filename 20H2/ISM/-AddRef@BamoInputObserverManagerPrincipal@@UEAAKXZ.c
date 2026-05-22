/*
 * XREFs of ?AddRef@BamoInputObserverManagerPrincipal@@UEAAKXZ @ 0x18001BA00
 * Callers:
 *     ?AddRef@BamoResizeControllerClientProxy@@W7EAAKXZ @ 0x18004A680 (-AddRef@BamoResizeControllerClientProxy@@W7EAAKXZ.c)
 *     ?AddRef@InputRedirectionTarget@@WBA@EAAKXZ @ 0x18004A690 (-AddRef@InputRedirectionTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@ControllerProcessor@@WEI@EAAKXZ @ 0x18004C0B0 (-AddRef@ControllerProcessor@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputObserverManagerPrincipal::AddRef(BamoInputObserverManagerPrincipal *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
