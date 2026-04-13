/*
 * XREFs of ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180005E3C
 * Callers:
 *     ?SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x18000D5DC (-SetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z @ 0x18000D674 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x18000D7B8 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18000D910 (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z @ 0x18002C5EC (-SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x1800A437C (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00@Z @ 0x1800A44BC (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00@Z.c)
 * Callees:
 *     ?ReportFailure_Win32Msg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K1PEAD@Z @ 0x180005CE8 (-ReportFailure_Win32Msg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Return_Win32Msg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        ...)
{
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  return wil::details::ReportFailure_Win32Msg(
           (__int64)this,
           (unsigned int)a2,
           a3,
           (__int64)a4,
           v7,
           retaddr,
           v8,
           (int)a4,
           a5,
           (char *)&a6);
}
