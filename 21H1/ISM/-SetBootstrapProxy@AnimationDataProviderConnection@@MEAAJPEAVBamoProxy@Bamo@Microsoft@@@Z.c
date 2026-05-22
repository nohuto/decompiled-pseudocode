/*
 * XREFs of ?SetBootstrapProxy@AnimationDataProviderConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180038B00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180038B24 (-SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 */

__int64 __fastcall AnimationDataProviderConnection::SetBootstrapProxy(
        AnimationDataProviderConnection *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  AnimationDataProvider *v2; // rcx

  v2 = (AnimationDataProvider *)*((_QWORD *)this + 23);
  if ( v2 )
    AnimationDataProvider::SetBootstrapProxy(v2, a2);
  return 0LL;
}
