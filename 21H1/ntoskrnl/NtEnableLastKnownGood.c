/*
 * XREFs of NtEnableLastKnownGood @ 0x140767A50
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwDeleteFile @ 0x1403F3D70 (ZwDeleteFile.c)
 *     ZwDeleteKey @ 0x1403F3D90 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x1403F3DF0 (ZwDeleteValueKey.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14061750C (_PnpCtxGetCachedContextBaseKey.c)
 *     IopGetRegistryValue @ 0x140728128 (IopGetRegistryValue.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140767D18 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS NtEnableLastKnownGood(void)
{
  NTSTATUS CachedContextBaseKey; // ebx
  char v1; // bl
  UNICODE_STRING ValueName; // [rsp+20h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES v4; // [rsp+30h] [rbp-79h] BYREF
  PVOID P; // [rsp+60h] [rbp-49h] BYREF
  UNICODE_STRING SourceString; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING v7; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-21h] BYREF
  UNICODE_STRING v9; // [rsp+98h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+110h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+118h] [rbp+6Fh] BYREF
  HANDLE v13; // [rsp+120h] [rbp+77h] BYREF
  void *v14; // [rsp+128h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  v9 = 0LL;
  v7 = 0LL;
  memset(&v4, 0, sizeof(v4));
  ValueName = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v14);
    if ( CachedContextBaseKey >= 0 )
    {
      *(&ObjectAttributes.Length + 1) = 0;
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      ValueName.Buffer = (wchar_t *)L"Control\\Pnp";
      ObjectAttributes.RootDirectory = v14;
      *(_DWORD *)&ValueName.Length = 1572886;
      ObjectAttributes.ObjectName = &ValueName;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      CachedContextBaseKey = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      if ( CachedContextBaseKey >= 0 )
      {
        v1 = 0;
        if ( IopGetRegistryValue(KeyHandle, L"DisableLKG", 0, &P) < 0 )
          goto LABEL_25;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
          v1 = *((_BYTE *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(P, 0);
        if ( v1 )
        {
          *(_DWORD *)&ValueName.Length = 1441812;
          ValueName.Buffer = L"DisableLKG";
          CachedContextBaseKey = ZwDeleteValueKey(KeyHandle, &ValueName);
          if ( CachedContextBaseKey >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood");
            v4.RootDirectory = 0LL;
            v4.ObjectName = &DestinationString;
            v4.Length = 48;
            v4.Attributes = 576;
            *(_OWORD *)&v4.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&Handle, 0xF003Fu, &v4) >= 0 )
              ZwDeleteKey(Handle);
            RtlInitUnicodeString(&v9, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood.Tmp");
            v4.RootDirectory = 0LL;
            v4.ObjectName = &v9;
            v4.Length = 48;
            v4.Attributes = 576;
            *(_OWORD *)&v4.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&v13, 0xF003Fu, &v4) >= 0 )
              ZwDeleteKey(v13);
            RtlInitUnicodeString(&SourceString, L"\\SystemRoot\\LastGood");
            IopFileUtilWalkDirectoryTreeBottomUp(&SourceString);
            v4.RootDirectory = 0LL;
            v4.ObjectName = &SourceString;
            v4.Length = 48;
            v4.Attributes = 64;
            *(_OWORD *)&v4.SecurityDescriptor = 0LL;
            ZwDeleteFile(&v4);
            RtlInitUnicodeString(&v7, L"\\SystemRoot\\LastGood.Tmp");
            IopFileUtilWalkDirectoryTreeBottomUp(&v7);
            v4.RootDirectory = 0LL;
            v4.ObjectName = &v7;
            v4.Length = 48;
            *(_OWORD *)&v4.SecurityDescriptor = 0LL;
            v4.Attributes = 64;
            ZwDeleteFile(&v4);
            CachedContextBaseKey = 0;
          }
        }
        else
        {
LABEL_25:
          CachedContextBaseKey = -1073741823;
        }
      }
    }
  }
  else
  {
    CachedContextBaseKey = -1073741727;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v13 )
    ZwClose(v13);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return CachedContextBaseKey;
}
