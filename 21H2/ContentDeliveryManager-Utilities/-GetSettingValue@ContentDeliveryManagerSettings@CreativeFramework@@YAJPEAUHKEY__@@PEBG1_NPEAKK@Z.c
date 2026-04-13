/*
 * XREFs of ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x18002C408
 * Callers:
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18002DF70 (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18004646C (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800A581C (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180005DFC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::GetSettingValue(
        CreativeFramework::ContentDeliveryManagerSettings *this,
        const WCHAR *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  _DWORD *v6; // rsi
  LSTATUS ValueW; // eax
  unsigned int v10; // ebx
  const WCHAR *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v14; // [rsp+68h] [rbp+20h] BYREF

  v6 = a5;
  v14 = 4;
  *a5 = 0;
  ValueW = RegGetValueW((HKEY)this, a2, a3, 0x10u, 0LL, &a6, &v14);
  v10 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v10 = ValueW;
  if ( (v10 & 0x80000000) == 0 )
  {
    *v6 = (_DWORD)a6;
    return 0;
  }
  if ( v10 == -2147024894 )
    return 0;
  v11 = &Src;
  if ( a3 )
    v11 = a3;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x4F,
    (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
    (const char *)v10,
    (__int64)"RegKey: %ws %ws",
    (const char *)a2,
    v11);
  return v10;
}
