/*
 * XREFs of ??_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x180196770
 * Callers:
 *     ?OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801979F0 (-OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1ConnectionIndirector@BamoImpl@Microsoft@@MEAA@XZ @ 0x1801964D0 (--1ConnectionIndirector@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

Microsoft::BamoImpl::ConnectionIndirector *__fastcall Microsoft::BamoImpl::ConnectionIndirector::`scalar deleting destructor'(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        char a2)
{
  Microsoft::BamoImpl::ConnectionIndirector::~ConnectionIndirector(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
