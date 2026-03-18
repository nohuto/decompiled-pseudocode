/*
 * XREFs of ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C0088AB8
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0088460 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     GetWindowsDirectoryDevicePath @ 0x1C0088D30 (GetWindowsDirectoryDevicePath.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1C00CC08C (_wcsnicmp.c)
 */

void *__fastcall ConvertHandleAndVerifyLoc(HANDLE Handle)
{
  PVOID v2; // rbx
  WCHAR *v3; // rsi
  NTSTATUS v4; // eax
  const WCHAR *v5; // rdx
  WCHAR *v6; // rdx
  WCHAR *v7; // rcx
  NTSTATUS v8; // eax
  void *v9; // rdx
  __int16 ProcessMachine; // ax
  struct _UNICODE_STRING Destination_8; // [rsp+68h] [rbp-A0h] BYREF
  void *FileHandle; // [rsp+78h] [rbp-90h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp-88h] BYREF
  PVOID Object; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-38h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+E8h] [rbp-20h] BYREF

  FileHandle = 0LL;
  ReturnLength = 0;
  v2 = 0LL;
  Destination_8 = 0LL;
  v3 = (WCHAR *)Win32AllocPool(520LL, 0x626B7355u);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( !v3 )
    return FileHandle;
  if ( Handle )
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
    v2 = Object;
    if ( v4 >= 0 && ObQueryNameString(Object, &ObjectNameInfo, 0x218u, &ReturnLength) >= 0 )
    {
      Destination_8.Buffer = v3;
      *(_DWORD *)&Destination_8.Length = 34078720;
      if ( (int)GetWindowsDirectoryDevicePath(&Destination_8) >= 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x100) == 0 )
        {
LABEL_7:
          v5 = L"\\system32\\";
          goto LABEL_8;
        }
        ProcessMachine = PsWow64GetProcessMachine(**((_QWORD **)gptiCurrent + 53));
        if ( ProcessMachine == 332 )
        {
          v5 = L"\\SysWoW64\\";
        }
        else
        {
          if ( ProcessMachine != 452 )
            goto LABEL_7;
          v5 = L"\\SysArm32\\";
        }
LABEL_8:
        RtlAppendUnicodeToString(&Destination_8, v5);
        if ( !wcsnicmp(ObjectNameInfo.Name.Buffer, Destination_8.Buffer, (unsigned __int64)Destination_8.Length >> 1) )
        {
          v6 = &ObjectNameInfo.Name.Buffer[(unsigned __int64)Destination_8.Length >> 1];
          v7 = &v6[(unsigned int)((ObjectNameInfo.Name.Length - (unsigned __int64)Destination_8.Length) >> 1)];
          while ( v6 < v7 )
          {
            if ( *v6 == 92 )
              goto LABEL_16;
            ++v6;
          }
          RtlInitUnicodeString(&DestinationString, ObjectNameInfo.Name.Buffer);
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 512;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v8 = ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0);
          v9 = FileHandle;
          if ( v8 < 0 )
            v9 = 0LL;
          FileHandle = v9;
        }
      }
    }
  }
LABEL_16:
  Win32FreePool((__int64)v3);
  if ( v2 )
    ObfDereferenceObject(v2);
  return FileHandle;
}
