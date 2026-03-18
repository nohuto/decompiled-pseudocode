/*
 * XREFs of UserBeep @ 0x1C021A6B8
 * Callers:
 *     EditionInitiateMouseEventProcessing @ 0x1C01038D0 (EditionInitiateMouseEventProcessing.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01EB28C (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     xxxOldMessageBeep @ 0x1C0214B78 (xxxOldMessageBeep.c)
 *     EditionUserBeep @ 0x1C021A6A0 (EditionUserBeep.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0026584 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxSoundSentry @ 0x1C014FB00 (xxxSoundSentry.c)
 */

__int64 __fastcall UserBeep(unsigned int a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  NTSTATUS v5; // eax
  NTSTATUS v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 InputBuffer; // [rsp+60h] [rbp-19h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+17h] BYREF
  int v19; // [rsp+F0h] [rbp+77h] BYREF
  void *FileHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0;
  v3 = a2;
  InputBuffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileHandle = 0LL;
  Interval.QuadPart = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( gProtocolType )
  {
    if ( !gpRemoteBeepDevice )
      return 0LL;
    v5 = ObOpenObjectByPointer(gpRemoteBeepDevice, 0, 0LL, 0x1F0003u, 0LL, 0, &FileHandle);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\Device\\Beep");
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateFile(&FileHandle, 3u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 3u, 3u, 0, 0LL, 0);
  }
  if ( v5 < 0 )
    return 0LL;
  if ( (a1 || (_DWORD)v3) && a1 - 37 > 0x7FDA )
  {
    v7 = -1073741811;
  }
  else
  {
    InputBuffer = __PAIR64__(v3, a1);
    v7 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x10000u, &InputBuffer, 8u, 0LL, 0);
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  xxxSoundSentry(v9, v8, v10);
  if ( !v19 )
    UserSessionSwitchLeaveCrit(v12, v11, v13);
  if ( v7 >= 0 )
  {
    if ( (_DWORD)v3 != -1 && (a1 || (_DWORD)v3) )
    {
      Interval.QuadPart = -10000 * v3;
      KeDelayExecutionThread(1, 0, &Interval);
    }
    v2 = 1;
  }
  ZwClose(FileHandle);
  return v2;
}
