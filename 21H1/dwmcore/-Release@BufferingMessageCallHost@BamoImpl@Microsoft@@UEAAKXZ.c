/*
 * XREFs of ?Release@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800B1A10
 * Callers:
 *     ?Release@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x1800EBED0 (-Release@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ.c)
 *     ?Release@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ @ 0x1800EBEE0 (-Release@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::Release(
        Microsoft::BamoImpl::BufferingMessageCallHost *this)
{
  return Microsoft::BamoImpl::BamoImplObject::Release(this);
}
