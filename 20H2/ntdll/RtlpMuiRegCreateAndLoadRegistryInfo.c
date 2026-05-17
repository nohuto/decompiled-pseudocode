/*
 * XREFs of RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006F050
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18006ED10 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18006EFD0 (RtlpInitializeLangRegistryInfo.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006F1B0 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006F2A0 (RtlpMuiRegFreeRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F4B4 (OpenGlobalizationUserSettingsKey.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18006F520 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegDeserializeRegistryInfo @ 0x18006F7D0 (_RtlpMuiRegDeserializeRegistryInfo.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenKey @ 0x18009D2F0 (NtOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x18009EF60 (ZwGetMUIRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1801047A0 (RtlpMuiRegCreateRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiRegCreateAndLoadRegistryInfo(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 Heap; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  int v6; // edi
  __int64 RegistryInfo; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+30h] [rbp-30h] BYREF
  HANDLE v11; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+48h] [rbp-18h]
  __int128 v14; // [rsp+50h] [rbp-10h]
  unsigned int v15; // [rsp+90h] [rbp+30h] BYREF
  __int64 v16; // [rsp+98h] [rbp+38h] BYREF
  HANDLE v17; // [rsp+A0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+48h] BYREF

  v1 = 0LL;
  v16 = 0LL;
  if ( !a1 || *a1 )
  {
    v6 = -1073741811;
    goto LABEL_16;
  }
  v15 = 0;
  if ( (int)ZwGetMUIRegistryInfo(0LL, &v15, 0LL) < 0 )
  {
LABEL_20:
    RegistryInfo = RtlpMuiRegCreateRegistryInfo();
    v16 = RegistryInfo;
    v1 = RegistryInfo;
    if ( RegistryInfo )
    {
      v6 = RtlpMuiRegLoadRegistryInfo(RegistryInfo, 4095LL);
      if ( v6 >= 0 )
      {
        v6 = 0;
        *(_DWORD *)(v1 + 12) = MEMORY[0x7FFE03A4];
      }
      else
      {
        RtlpMuiRegFreeRegistryInfo(v1, 4095LL);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16);
        v1 = 0LL;
      }
      goto LABEL_16;
    }
LABEL_18:
    v6 = -1073741801;
    goto LABEL_16;
  }
  if ( v15 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v15);
    v1 = v16;
    v4 = Heap;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    goto LABEL_18;
  if ( (int)ZwGetMUIRegistryInfo(0LL, &v15, v4) < 0
    || (int)RtlpMuiRegDeserializeRegistryInfo(v4, v15, &v16) < 0
    || (v1 = v16, v6 = RtlpMuiRegAddNeutralToInstalled(v16), v6 < 0) )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    goto LABEL_20;
  }
  if ( *(_QWORD *)(v1 + 40) && (int)OpenGlobalizationUserSettingsKey(0x2000000LL, v5, &Handle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
    v17 = 0LL;
    v11 = Handle;
    v10 = 48;
    p_DestinationString = &DestinationString;
    v13 = 64;
    v14 = 0LL;
    if ( (int)NtOpenKey(&v17, 131097LL, &v10) >= 0 )
    {
      RtlpMuiRegLoadRegistryInfo(v1, 4LL);
      NtClose(v17);
    }
    NtClose(Handle);
  }
  RtlpMuiRegLoadRegistryInfo(v1, 568LL);
LABEL_16:
  *a1 = v1;
  return (unsigned int)v6;
}
