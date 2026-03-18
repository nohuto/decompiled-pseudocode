/*
 * XREFs of ??_GBufferingMessageCallHost@BamoImpl@Microsoft@@UEAAPEAXI@Z @ 0x180196730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1BufferingMessageCallHost@BamoImpl@Microsoft@@UEAA@XZ @ 0x180196474 (--1BufferingMessageCallHost@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

Microsoft::BamoImpl::BufferingMessageCallHost *__fastcall Microsoft::BamoImpl::BufferingMessageCallHost::`scalar deleting destructor'(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        char a2)
{
  Microsoft::BamoImpl::BufferingMessageCallHost::~BufferingMessageCallHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
