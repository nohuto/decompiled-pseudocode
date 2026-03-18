/*
 * XREFs of ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0271E94
 * Callers:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0272090 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 * Callees:
 *     ?ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AEAAJPEADKPEBGK@Z @ 0x1C02718B0 (-ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AEAAJPEADKPEBGK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromRegistry(PDEVICE_OBJECT *this)
{
  char *v1; // rsi
  char *PoolWithTag; // rdi
  int v4; // ebx
  NTSTATUS v5; // eax
  ULONG Length; // ebx
  unsigned int v7; // r14d
  char *v8; // rax
  CPhysicalMonitorHandle *v9; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+30h] BYREF
  ULONG v13; // [rsp+78h] [rbp+38h] BYREF
  void *DeviceRegKey; // [rsp+80h] [rbp+40h] BYREF

  DeviceRegKey = 0LL;
  v1 = 0LL;
  PoolWithTag = 0LL;
  v4 = IoOpenDeviceRegistryKey(this[2], 2u, 1u, &DeviceRegKey);
  if ( v4 < 0 )
    return (unsigned int)v4;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"CapabilitiesString");
  ResultLength = 0;
  v5 = ZwQueryValueKey(DeviceRegKey, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v4 = v5;
  if ( v5 != -1073741789 )
  {
    if ( v5 < 0 )
    {
      if ( v5 != -1073741822 && v5 != -1073741816 && v5 != -1073741811 && v5 != -1073741801 && v5 != -1073741790 )
        v4 = 1612644351;
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  Length = ResultLength + 16;
  if ( ResultLength + 16 < ResultLength )
  {
    v4 = -1073741675;
    goto LABEL_20;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, Length, 0x63326947u);
  if ( !PoolWithTag )
    goto LABEL_5;
  v13 = 0;
  v4 = ZwQueryValueKey(DeviceRegKey, &DestinationString, KeyValuePartialInformation, PoolWithTag, Length, &v13);
  if ( v4 < 0 )
    goto LABEL_20;
  if ( *((_DWORD *)PoolWithTag + 1) != 1 )
  {
LABEL_19:
    v4 = -1073741823;
    goto LABEL_20;
  }
  v7 = *((_DWORD *)PoolWithTag + 2) >> 1;
  v8 = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x63326947u);
  v1 = v8;
  if ( v8 )
  {
    v4 = CPhysicalMonitorHandle::ConvertUnicodeDDCCICapabilitiesStringToASCIIString(v9, v8, v7, PoolWithTag + 12, v7);
    if ( v4 >= 0 )
    {
      this[10] = (PDEVICE_OBJECT)v1;
      v1 = 0LL;
      *((_DWORD *)this + 22) = v7;
    }
    goto LABEL_20;
  }
LABEL_5:
  v4 = -1073741801;
LABEL_20:
  ZwClose(DeviceRegKey);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63326947u);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x63326947u);
  return (unsigned int)v4;
}
