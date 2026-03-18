/*
 * XREFs of IopCreateRegistryKeyEx @ 0x14067A8B0
 * Callers:
 *     PipOpenServiceEnumKeys @ 0x14067B470 (PipOpenServiceEnumKeys.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140697B34 (PiDevCfgConfigureSoftwareDevices.c)
 *     IopCreateSecureDeviceClassSettings @ 0x1407444A8 (IopCreateSecureDeviceClassSettings.c)
 *     NtDisableLastKnownGood @ 0x14080BFE0 (NtDisableLastKnownGood.c)
 *     PnpBuildCmResourceList @ 0x14082071C (PnpBuildCmResourceList.c)
 *     IopWriteResourceList @ 0x140821F5C (IopWriteResourceList.c)
 *     IopUpdateSecureDeviceClassState @ 0x14084D3DC (IopUpdateSecureDeviceClassState.c)
 *     IoSetSystemPartition @ 0x140936570 (IoSetSystemPartition.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x140940320 (PipHardwareConfigTriggerRespecialize.c)
 *     IoReportHalResourceUsage @ 0x140AF7620 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x140AF7DC8 (IopInitializeResourceMap.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     IopStoreSystemPartitionInformation @ 0x140B0E88C (IopStoreSystemPartitionInformation.c)
 *     PipInitComputerIds @ 0x140B0F20C (PipInitComputerIds.c)
 *     PnpOpenCCSPnpRegKey @ 0x140B23340 (PnpOpenCCSPnpRegKey.c)
 *     PipHardwareConfigInit @ 0x140B28AB0 (PipHardwareConfigInit.c)
 *     PiInitFirmwareResources @ 0x140B30F30 (PiInitFirmwareResources.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 */

__int64 __fastcall IopCreateRegistryKeyEx(
        _QWORD *a1,
        void *a2,
        UNICODE_STRING *a3,
        ACCESS_MASK a4,
        ULONG CreateOptions,
        ULONG *a6)
{
  _QWORD *v6; // r14
  __int64 v7; // r13
  NTSTATUS v10; // esi
  unsigned int v12; // r14d
  __int64 Length; // r15
  char v14; // r12
  wchar_t *Buffer; // rbx
  wchar_t *v16; // r15
  __int64 v17; // rcx
  wchar_t *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // [rsp+40h] [rbp-59h]
  HANDLE Handle[2]; // [rsp+48h] [rbp-51h] BYREF
  __int128 v22; // [rsp+58h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-31h] BYREF
  int v25; // [rsp+F8h] [rbp+5Fh]
  ULONG Disposition; // [rsp+100h] [rbp+67h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+108h] [rbp+6Fh]

  DesiredAccess = a4;
  ObjectAttributes.RootDirectory = a2;
  *a1 = 0LL;
  v6 = a1;
  ObjectAttributes.ObjectName = a3;
  LODWORD(v7) = 1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  Disposition = 0;
  v25 = 0;
  *(_OWORD *)Handle = 0LL;
  v22 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwCreateKey(&Handle[1], a4, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  if ( v10 == -1073741772 )
  {
    if ( !a2 )
      return (unsigned int)v10;
    Handle[0] = 0LL;
    v12 = 0;
    Length = a3->Length;
    v14 = 1;
    Handle[1] = a2;
    Buffer = a3->Buffer;
    v16 = (wchar_t *)((char *)Buffer + Length);
    while ( 1 )
    {
      if ( v12 > 1 )
        ZwClose(Handle[v25]);
      v17 = (unsigned int)v7;
      v25 = v7;
      v7 = ((_BYTE)v7 - 1) & 1;
      v18 = Buffer;
      for ( Handle[v7] = 0LL; v18 < v16; ++v18 )
      {
        if ( *v18 == 92 )
          break;
      }
      if ( (_DWORD)v18 == (_DWORD)Buffer )
        break;
      WORD1(v22) = (_WORD)v18 - (_WORD)Buffer;
      LOWORD(v22) = (_WORD)v18 - (_WORD)Buffer;
      ObjectAttributes.RootDirectory = Handle[v17];
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
      v20 = v17;
      *((_QWORD *)&v22 + 1) = Buffer;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v10 = ZwCreateKey(&Handle[v7], DesiredAccess, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
      if ( v10 < 0 )
      {
        v19 = v20;
        goto LABEL_23;
      }
      ++v12;
      if ( v18 == v16 || (Buffer = v18 + 1, v18 + 1 == v16) )
        v14 = 0;
      if ( !v14 )
      {
        LODWORD(v17) = v25;
        goto LABEL_22;
      }
    }
    v10 = -1073741811;
LABEL_22:
    v19 = (unsigned int)v17;
LABEL_23:
    if ( v12 > 1 )
      ZwClose(Handle[v19]);
    v6 = a1;
  }
  if ( v10 >= 0 )
  {
    *v6 = Handle[(unsigned int)v7];
    if ( a6 )
      *a6 = Disposition;
  }
  return (unsigned int)v10;
}
