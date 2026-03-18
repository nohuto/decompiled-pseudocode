/*
 * XREFs of ?Release@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800D2920
 * Callers:
 *     ?Release@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x1800EEB30 (-Release@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ.c)
 *     ?Release@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ @ 0x1800EEB40 (-Release@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::Release(
        Microsoft::BamoImpl::BufferingMessageCallHost *this)
{
  return Microsoft::BamoImpl::BamoImplObject::Release(this);
}
