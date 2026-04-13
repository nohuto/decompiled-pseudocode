/*
 * XREFs of ?GetIids@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180012530
 * Callers:
 *     ?GetIids@PhoneShellNamespaceHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180024420 (-GetIids@PhoneShellNamespaceHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::GetIids(
        ContentManagement::PhoneShellNamespaceHelper *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IPhoneShellNamespaceHelper>::GetIids(
           this,
           a2,
           a3);
}
