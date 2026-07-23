/*
 * XREFs of RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006EF50
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18006EC10 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18006EED0 (RtlpInitializeLangRegistryInfo.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006F0B0 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006F1A0 (RtlpMuiRegFreeRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F3B4 (OpenGlobalizationUserSettingsKey.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18006F420 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegDeserializeRegistryInfo @ 0x18006F6D0 (_RtlpMuiRegDeserializeRegistryInfo.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x18009ECC0 (ZwGetMUIRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x180104290 (RtlpMuiRegCreateRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiRegCreateAndLoadRegistryInfo(_QWORD *a1)
{
  _DWORD *v1; // rbx
  PVOID Heap; // rax
  void *v4; // rsi
  int v5; // edi
  void *RegistryInfo; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  ULONG DataSize; // [rsp+90h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+48h]

  v1 = 0LL;
  BaseAddress = 0LL;
  if ( !a1 || *a1 )
  {
    v5 = -1073741811;
    goto LABEL_16;
  }
  DataSize = 0;
  if ( ZwGetMUIRegistryInfo(0, &DataSize, 0LL) < 0 )
  {
LABEL_20:
    RegistryInfo = (void *)RtlpMuiRegCreateRegistryInfo();
    BaseAddress = RegistryInfo;
    v1 = RegistryInfo;
    if ( RegistryInfo )
    {
      v5 = RtlpMuiRegLoadRegistryInfo(RegistryInfo, 4095LL);
      if ( v5 >= 0 )
      {
        v5 = 0;
        v1[3] = MEMORY[0x7FFE03A4];
      }
      else
      {
        RtlpMuiRegFreeRegistryInfo(v1, 4095LL);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        v1 = 0LL;
      }
      goto LABEL_16;
    }
LABEL_18:
    v5 = -1073741801;
    goto LABEL_16;
  }
  if ( DataSize )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, DataSize);
    v1 = BaseAddress;
    v4 = Heap;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    goto LABEL_18;
  if ( ZwGetMUIRegistryInfo(0, &DataSize, v4) < 0
    || (int)RtlpMuiRegDeserializeRegistryInfo(v4, DataSize, &BaseAddress) < 0
    || (v1 = BaseAddress, v5 = RtlpMuiRegAddNeutralToInstalled(BaseAddress), v5 < 0) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    goto LABEL_20;
  }
  if ( *((_QWORD *)v1 + 5) && (int)OpenGlobalizationUserSettingsKey(0x2000000u) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlpMuiRegLoadRegistryInfo(v1, 4LL);
      NtClose(KeyHandle);
    }
    NtClose(Handle);
  }
  RtlpMuiRegLoadRegistryInfo(v1, 568LL);
LABEL_16:
  *a1 = v1;
  return (unsigned int)v5;
}
