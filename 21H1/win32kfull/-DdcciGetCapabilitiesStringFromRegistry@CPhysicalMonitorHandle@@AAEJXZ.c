/*
 * XREFs of ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF484
 * Callers:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF5FC (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AAEJXZ.c)
 * Callees:
 *     ?ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AAEJPADKPBGK@Z @ 0x1CF01C (-ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AAEJPADKPBGK@Z.c)
 *     ?RtlULongAdd@@YGJKKPAK@Z @ 0x1CFF0E (-RtlULongAdd@@YGJKKPAK@Z.c)
 */

NTSTATUS __thiscall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromRegistry(PDEVICE_OBJECT *this)
{
  char *v1; // ebx
  unsigned __int16 *PoolWithTag; // edi
  NTSTATUS v3; // esi
  NTSTATUS v4; // eax
  SIZE_T v5; // esi
  PDEVICE_OBJECT *v6; // ecx
  SIZE_T v7; // eax
  unsigned int v9; // [esp+0h] [ebp-28h]
  unsigned int *v10; // [esp+4h] [ebp-24h]
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-1Ch] BYREF
  PDEVICE_OBJECT *v12; // [esp+14h] [ebp-14h]
  ULONG v13; // [esp+18h] [ebp-10h] BYREF
  ULONG ResultLength; // [esp+1Ch] [ebp-Ch] BYREF
  SIZE_T NumberOfBytes; // [esp+20h] [ebp-8h] BYREF
  void *DeviceRegKey; // [esp+24h] [ebp-4h] BYREF

  DeviceRegKey = 0;
  v12 = this;
  v1 = 0;
  PoolWithTag = 0;
  v3 = IoOpenDeviceRegistryKey(this[2], 2u, 1u, &DeviceRegKey);
  if ( v3 < 0 )
    return v3;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, L"CapabilitiesString");
  ResultLength = 0;
  v4 = ZwQueryValueKey(DeviceRegKey, &DestinationString, KeyValuePartialInformation, 0, 0, &ResultLength);
  v3 = v4;
  if ( v4 != -1073741789 )
  {
    if ( v4 < 0 )
    {
      if ( v4 != -1073741822 && v4 != -1073741816 && v4 != -1073741811 && v4 != -1073741801 && v4 != -1073741790 )
        v3 = 1612644351;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  NumberOfBytes = 0;
  v3 = RtlULongAdd((unsigned int)&NumberOfBytes, v9, v10);
  if ( v3 >= 0 )
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x63326947u);
    if ( !PoolWithTag )
    {
LABEL_5:
      v3 = -1073741801;
      goto LABEL_19;
    }
    v13 = 0;
    v3 = ZwQueryValueKey(DeviceRegKey, &DestinationString, KeyValuePartialInformation, PoolWithTag, NumberOfBytes, &v13);
    if ( v3 < 0 )
      goto LABEL_19;
    if ( *((_DWORD *)PoolWithTag + 1) == 1 )
    {
      NumberOfBytes = *((_DWORD *)PoolWithTag + 2) >> 1;
      v5 = NumberOfBytes;
      v1 = (char *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x63326947u);
      if ( v1 )
      {
        v3 = CPhysicalMonitorHandle::ConvertUnicodeDDCCICapabilitiesStringToASCIIString(
               (unsigned __int16)v1,
               v1,
               v5,
               PoolWithTag + 6,
               v5);
        if ( v3 >= 0 )
        {
          v6 = v12;
          v7 = NumberOfBytes;
          v12[11] = (PDEVICE_OBJECT)v1;
          v1 = 0;
          v6[12] = (PDEVICE_OBJECT)v7;
        }
        goto LABEL_19;
      }
      goto LABEL_5;
    }
LABEL_18:
    v3 = -1073741823;
  }
LABEL_19:
  ZwClose(DeviceRegKey);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63326947u);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x63326947u);
  return v3;
}
