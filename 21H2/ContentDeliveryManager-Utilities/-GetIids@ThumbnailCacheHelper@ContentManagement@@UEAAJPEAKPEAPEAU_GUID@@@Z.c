/*
 * XREFs of ?GetIids@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000EC30
 * Callers:
 *     ?GetIids@ThumbnailCacheHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180024390 (-GetIids@ThumbnailCacheHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ThumbnailCacheHelper::GetIids(
        ContentManagement::ThumbnailCacheHelper *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::GetIids(
           this,
           a2,
           a3);
}
