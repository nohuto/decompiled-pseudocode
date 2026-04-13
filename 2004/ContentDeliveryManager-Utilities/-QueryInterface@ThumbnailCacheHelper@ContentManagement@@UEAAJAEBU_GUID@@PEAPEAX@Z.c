/*
 * XREFs of ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000ECA0
 * Callers:
 *     ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024040 (-QueryInterface@ThumbnailCacheHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800240B0 (-QueryInterface@ThumbnailCacheHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800243D0 (-QueryInterface@ThumbnailCacheHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ThumbnailCacheHelper::QueryInterface(
        ContentManagement::ThumbnailCacheHelper *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::QueryInterface(
           this,
           a2,
           a3);
}
