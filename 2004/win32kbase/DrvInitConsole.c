/*
 * XREFs of DrvInitConsole @ 0x1C002B6A4
 * Callers:
 *     InitVideo @ 0x1C002B12C (InitVideo.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00B4AA0 (DrvUpdateGraphicsDeviceList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvInitConsole()
{
  int v0; // edi
  _DWORD *v1; // rbx
  unsigned int v2; // eax
  unsigned __int64 i; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int8 *v6; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  DestinationString = 0LL;
  KeyHandle = 0LL;
  v0 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !gProtocolType )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ResultLength = 0;
      RtlInitUnicodeString(&DestinationString, L"SystemStartOptions");
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789
        && ResultLength > 0x10 )
      {
        v1 = (_DWORD *)PALLOCMEM2(ResultLength);
        if ( v1 )
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 v1,
                 ResultLength,
                 &ResultLength) >= 0 )
          {
            v2 = v1[2];
            if ( v2 >= 0x12 )
            {
              for ( i = (unsigned __int64)(v1 + 3); i <= (unsigned __int64)v1 + v2 - 6; i += 2LL )
              {
                v4 = *(_QWORD *)i - 0x45005300410042LL;
                if ( *(_QWORD *)i == 0x45005300410042LL )
                {
                  v4 = *(_QWORD *)(i + 8) - 0x45004400490056LL;
                  if ( *(_QWORD *)(i + 8) == 0x45004400490056LL )
                    v4 = *(unsigned __int16 *)(i + 16) - 79LL;
                }
                if ( !v4 )
                {
                  v0 = 1;
                  break;
                }
              }
            }
          }
          Win32FreePool(v1);
        }
      }
      ZwClose(KeyHandle);
    }
  }
  v5 = WdLogNewEntry5_WdTrace();
  WdLogEvent5_WdTrace(v5);
  gbBaseVideo = v0;
  LODWORD(gcMaximumAdapterCount) = ((__int64 (*)(void))qword_1C024C870)();
  gpAdapterLuids = (struct _LUID *)PALLOCMEM2((unsigned int)(8 * gcMaximumAdapterCount));
  v6 = (unsigned __int8 *)PALLOCMEM2((unsigned int)gcMaximumAdapterCount);
  gpDevicesPerLuid = v6;
  if ( !gpAdapterLuids || !v6 )
    return 3221225495LL;
  DrvUpdateGraphicsDeviceList(1LL);
  return 0LL;
}
