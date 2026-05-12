/*
 * XREFs of RaidUnitGetDeviceParameters @ 0x1C00744D4
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00747FC (RaUnitStartDeviceIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 *     WPP_SF_q @ 0x1C0033368 (WPP_SF_q.c)
 *     WPP_SF_qddd @ 0x1C0033810 (WPP_SF_qddd.c)
 */

int __fastcall RaidUnitGetDeviceParameters(__int64 a1)
{
  __int64 v2; // rdx
  _DWORD *v3; // rdi
  _DWORD *v4; // rsi
  int v5; // eax
  int *v6; // r14
  int v7; // ecx
  int v8; // eax
  struct _DEVICE_OBJECT *v9; // rcx
  PDEVICE_OBJECT *v10; // rax
  int v11; // r8d
  __int64 v13; // [rsp+20h] [rbp-E0h]
  void *DeviceRegKey; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v18[50]; // [rsp+90h] [rbp-70h] BYREF

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x42u,
      (__int64)&WPP_af1ac7e2487a3dc41c42fd4890c580b6_Traceguids,
      a1);
  }
  v2 = *(_QWORD *)(a1 + 24);
  v3 = (_DWORD *)(a1 + 1800);
  *(_DWORD *)(a1 + 1800) = 20;
  v4 = (_DWORD *)(a1 + 1808);
  v5 = *(_DWORD *)(a1 + 1800);
  v6 = (int *)(a1 + 1804);
  v7 = *(_DWORD *)(v2 + 5780);
  *(_DWORD *)(a1 + 1808) = 250;
  *(_DWORD *)(a1 + 1804) = 25;
  if ( v7 )
    v5 = v7;
  *v3 = v5;
  v8 = *v4;
  if ( *(_DWORD *)(v2 + 5784) )
    v8 = *(_DWORD *)(v2 + 5784);
  v9 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  *(_DWORD *)(a1 + 1812) = 0;
  *(_DWORD *)(a1 + 1820) = -1;
  *v4 = v8;
  LODWORD(v10) = IoOpenDeviceRegistryKey(v9, 1u, 0x20019u, &DeviceRegKey);
  if ( (int)v10 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Storport");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(v10) = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( (int)v10 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x43u,
          (__int64)&WPP_af1ac7e2487a3dc41c42fd4890c580b6_Traceguids,
          a1);
      }
      memset(v18, 0, 0x188uLL);
      v18[2] = L"QueueFullWaitIoPercentage";
      LODWORD(v18[4]) = 67108868;
      LODWORD(v18[1]) = 288;
      LODWORD(v18[6]) = 4;
      v18[9] = L"BusyPauseTime";
      LODWORD(v18[8]) = 288;
      v18[16] = L"BusyRetryCount";
      v18[23] = L"EnableLogoETW";
      v18[30] = L"DisableIdlePowerManagement";
      v18[31] = a1 + 1816;
      v18[33] = a1 + 1816;
      LODWORD(v18[11]) = 67108868;
      LODWORD(v18[13]) = 4;
      LODWORD(v18[15]) = 288;
      LODWORD(v18[18]) = 67108868;
      LODWORD(v18[20]) = 4;
      LODWORD(v18[22]) = 288;
      LODWORD(v18[25]) = 67108868;
      LODWORD(v18[27]) = 4;
      LODWORD(v18[29]) = 288;
      LODWORD(v18[32]) = 67108868;
      LODWORD(v18[34]) = 4;
      LODWORD(v18[36]) = 288;
      LODWORD(v18[39]) = 67108868;
      LODWORD(v18[41]) = 4;
      v18[37] = L"MinimumIdleTimeoutInMS";
      v18[3] = a1 + 1804;
      v18[5] = a1 + 1804;
      v18[10] = a1 + 1808;
      v18[12] = a1 + 1808;
      v18[17] = a1 + 1800;
      v18[19] = a1 + 1800;
      v18[24] = a1 + 1812;
      v18[26] = a1 + 1812;
      v18[38] = a1 + 1820;
      v18[40] = a1 + 1820;
      RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v18, 0LL, 0LL);
      v11 = *v6;
      if ( (unsigned int)*v6 > 0x64 )
      {
        v11 = 25;
        *v6 = 25;
      }
      v10 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        LODWORD(v10) = HIDWORD(WPP_GLOBAL_Control->Timer);
        if ( ((unsigned __int8)v10 & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          LODWORD(v13) = *v3;
          LODWORD(v10) = WPP_SF_qddd(
                           (__int64)WPP_GLOBAL_Control->AttachedDevice,
                           0x44u,
                           (__int64)&WPP_af1ac7e2487a3dc41c42fd4890c580b6_Traceguids,
                           a1,
                           v13,
                           *v4,
                           v11);
        }
      }
    }
  }
  if ( DeviceRegKey )
    LODWORD(v10) = ZwClose(DeviceRegKey);
  if ( KeyHandle )
    LODWORD(v10) = ZwClose(KeyHandle);
  return (int)v10;
}
