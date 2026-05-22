/*
 * XREFs of GetConfigurationFlag @ 0x1800CB86C
 * Callers:
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800CBE80 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 * Callees:
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18003A830 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 */

bool __fastcall GetConfigurationFlag(wchar_t *a1)
{
  return (unsigned int)RegistryHelpers::GetDwordWithDefault(
                         (RegistryHelpers *)a1,
                         (const WCHAR *)&stru_1801C32F0,
                         a1,
                         0LL) == 1;
}
