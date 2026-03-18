/*
 * XREFs of ??_EBamoPeer@dataprovider_AutoBamos@@UEAAPEAXI@Z @ 0x1801966A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x180196428 (--1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ.c)
 */

dataprovider_AutoBamos::BamoPeer *__fastcall dataprovider_AutoBamos::BamoPeer::`vector deleting destructor'(
        dataprovider_AutoBamos::BamoPeer *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // bl

  v5 = a2;
  Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(
    (dataprovider_AutoBamos::BamoPeer *)((char *)this + 8),
    a2,
    a3,
    a4);
  if ( (v5 & 1) != 0 )
    operator delete(this);
  return this;
}
