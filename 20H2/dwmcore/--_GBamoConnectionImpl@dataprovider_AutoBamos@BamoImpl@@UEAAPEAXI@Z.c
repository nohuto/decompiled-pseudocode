/*
 * XREFs of ??_GBamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x180165720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1801655D8 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *__fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::`scalar deleting destructor'(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
