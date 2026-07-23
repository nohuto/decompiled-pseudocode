/*
 * XREFs of IopCreateRegistryKeyEx @ 0x14073FF04
 * Callers:
 *     IopCreateSecureDeviceClassSettings @ 0x140739B10 (IopCreateSecureDeviceClassSettings.c)
 *     PipOpenServiceEnumKeys @ 0x140742DAC (PipOpenServiceEnumKeys.c)
 *     PnpBuildCmResourceList @ 0x140751340 (PnpBuildCmResourceList.c)
 *     IopWriteResourceList @ 0x14075272C (IopWriteResourceList.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140767AB8 (PiDevCfgConfigureSoftwareDevices.c)
 *     NtDisableLastKnownGood @ 0x14077D1C0 (NtDisableLastKnownGood.c)
 *     IopUpdateSecureDeviceClassState @ 0x1407BDFC4 (IopUpdateSecureDeviceClassState.c)
 *     IoSetSystemPartition @ 0x140893DD0 (IoSetSystemPartition.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x14089B8D0 (PipHardwareConfigTriggerRespecialize.c)
 *     IopInitializeResourceMap @ 0x140A3B34C (IopInitializeResourceMap.c)
 *     IoReportHalResourceUsage @ 0x140A3B810 (IoReportHalResourceUsage.c)
 *     PiInitFirmwareResources @ 0x140A51E48 (PiInitFirmwareResources.c)
 *     PipHardwareConfigInit @ 0x140A522F4 (PipHardwareConfigInit.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 *     PnpOpenCCSPnpRegKey @ 0x140A54958 (PnpOpenCCSPnpRegKey.c)
 *     PipInitComputerIds @ 0x140A5C730 (PipInitComputerIds.c)
 *     IopStoreSystemPartitionInformation @ 0x140A625B8 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 */

__int64 __fastcall IopCreateRegistryKeyEx(
        _QWORD *a1,
        void *a2,
        UNICODE_STRING *a3,
        ACCESS_MASK a4,
        ULONG CreateOptions,
        ULONG *a6)
{
  _QWORD *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r15
  NTSTATUS v11; // r14d
  wchar_t *Buffer; // rdi
  unsigned int v14; // r12d
  __int64 Length; // rsi
  wchar_t *v16; // rsi
  wchar_t *v17; // rbx
  char v18; // al
  HANDLE Handle[2]; // [rsp+48h] [rbp-51h] BYREF
  __int128 v20; // [rsp+58h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-31h] BYREF
  char v23; // [rsp+F8h] [rbp+5Fh]
  ULONG Disposition; // [rsp+100h] [rbp+67h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+108h] [rbp+6Fh]

  DesiredAccess = a4;
  *(&ObjectAttributes.Length + 1) = 0;
  v6 = a1;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v7 = 0LL;
  *a1 = 0LL;
  Disposition = 0;
  LODWORD(v8) = 1;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = a3;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)Handle = 0LL;
  v20 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwCreateKey(&Handle[1], a4, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  if ( v11 != -1073741772 )
    goto LABEL_2;
  if ( a2 )
  {
    Buffer = a3->Buffer;
    v14 = 0;
    Length = a3->Length;
    Handle[0] = 0LL;
    v16 = (wchar_t *)((char *)Buffer + Length);
    Handle[1] = a2;
    v23 = 1;
    while ( 1 )
    {
      if ( v14 > 1 )
        ZwClose(Handle[v7]);
      v7 = (unsigned int)v8;
      v17 = Buffer;
      v8 = ((_BYTE)v8 - 1) & 1;
      for ( Handle[v8] = 0LL; v17 < v16; ++v17 )
      {
        if ( *v17 == 92 )
          break;
      }
      if ( (_DWORD)v17 == (_DWORD)Buffer )
        break;
      WORD1(v20) = (_WORD)v17 - (_WORD)Buffer;
      LOWORD(v20) = (_WORD)v17 - (_WORD)Buffer;
      ObjectAttributes.RootDirectory = Handle[v7];
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
      *((_QWORD *)&v20 + 1) = Buffer;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwCreateKey(&Handle[v8], DesiredAccess, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
      if ( v11 < 0 )
        goto LABEL_21;
      ++v14;
      if ( v17 == v16 )
        goto LABEL_19;
      Buffer = v17 + 1;
      if ( v17 + 1 == v16 )
        goto LABEL_19;
      v18 = v23;
LABEL_20:
      if ( !v18 )
      {
LABEL_21:
        if ( v14 > 1 )
          ZwClose(Handle[v7]);
        v6 = a1;
LABEL_2:
        if ( v11 >= 0 )
        {
          *v6 = Handle[(unsigned int)v8];
          if ( a6 )
            *a6 = Disposition;
        }
        return (unsigned int)v11;
      }
    }
    v11 = -1073741811;
LABEL_19:
    v18 = 0;
    v23 = 0;
    goto LABEL_20;
  }
  return (unsigned int)v11;
}
