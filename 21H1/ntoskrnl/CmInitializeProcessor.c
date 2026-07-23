/*
 * XREFs of CmInitializeProcessor @ 0x14086E54C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408B625C (KiStartDynamicProcessor.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateKey @ 0x1403F26D0 (ZwCreateKey.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14078DF60 (CmpAddProcessorConfigurationEntry.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall CmInitializeProcessor(__int64 a1)
{
  int v1; // ebx
  NTSTATUS result; // eax
  unsigned int v4; // ecx
  HANDLE KeyHandle; // [rsp+48h] [rbp-9h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+Fh] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp+3Fh] BYREF

  v1 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    CmpConfigurationData = ExAllocatePoolWithTag(PagedPool, (unsigned int)CmpConfigurationAreaSize, 0x20204D43u);
    if ( CmpConfigurationData )
    {
      v4 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      Affinity.Mask = 1LL << (v4 & 0x3F);
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v4 >> 6);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      CmpAddProcessorConfigurationEntry(a1, *(_DWORD *)(a1 + 36), (int)KeyHandle);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      ExFreePoolWithTag(CmpConfigurationData, 0);
      CmpConfigurationData = 0LL;
    }
    else
    {
      v1 = -1073741670;
    }
    ZwClose(KeyHandle);
    return v1;
  }
  return result;
}
