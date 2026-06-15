/*
 * XREFs of ?TryRetrieveNotificationDeviceId@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x140027CA4
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140026E00 (-RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x140024C8C (-KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@K.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::TryRetrieveNotificationDeviceId(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this)
{
  struct KSIDENTIFIER v3; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  *(&v3.Alignment + 2) = 0x100000003LL;
  v3.Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
  if ( (int)Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
              (RTL_SRWLOCK *)this,
              &v3,
              24LL,
              (char *)this + 120,
              0x10u,
              &v5) >= 0 )
  {
    if ( v5 < 0x10 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x867,
        (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    *((_BYTE *)this + 136) = 1;
  }
  return 0LL;
}
