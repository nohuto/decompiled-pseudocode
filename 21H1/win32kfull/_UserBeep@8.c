/*
 * XREFs of _UserBeep@8 @ 0x17DF0D
 * Callers:
 *     _EditionInitiateMouseEventProcessing@4 @ 0x9C4BC (_EditionInitiateMouseEventProcessing@4.c)
 *     _EditionUserBeep@8 @ 0xF3F14 (_EditionUserBeep@8.c)
 *     ?xxxHandleVolumeUpDownCombo@@YGXXZ @ 0x155F5F (-xxxHandleVolumeUpDownCombo@@YGXXZ.c)
 *     _xxxOldMessageBeep@0 @ 0x178FE8 (_xxxOldMessageBeep@0.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 *     _xxxSoundSentry@0 @ 0x1782B3 (_xxxSoundSentry@0.c)
 */

int __fastcall UserBeep(NTSTATUS a1, int a2)
{
  int v2; // esi
  NTSTATUS v4; // eax
  NTSTATUS v6; // edi
  void *Handle; // [esp+Ch] [ebp-44h] BYREF
  NTSTATUS v8; // [esp+10h] [ebp-40h]
  int v9; // [esp+14h] [ebp-3Ch] BYREF
  NTSTATUS InputBuffer; // [esp+18h] [ebp-38h] BYREF
  int v11; // [esp+1Ch] [ebp-34h]
  union _LARGE_INTEGER Interval; // [esp+20h] [ebp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+30h] [ebp-20h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+38h] [ebp-18h] BYREF

  v2 = 0;
  v8 = a1;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  InputBuffer = 0;
  v11 = 0;
  Handle = 0;
  Interval.QuadPart = 0LL;
  if ( _gProtocolType )
  {
    if ( !_gpRemoteBeepDevice )
      return 0;
    v4 = ObOpenObjectByPointer(_gpRemoteBeepDevice, 0, 0, (ACCESS_MASK)&loc_1F0002 + 1, 0, 0, &Handle);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\Device\\Beep");
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    v4 = ZwCreateFile(&Handle, 3u, &ObjectAttributes, &IoStatusBlock, 0, 0, 3u, 3u, 0, 0, 0);
  }
  if ( v4 < 0 )
    return 0;
  v6 = v8;
  if ( (v8 || a2) && (unsigned int)(v8 - 37) > 0x7FDA )
  {
    v8 = -1073741811;
  }
  else
  {
    InputBuffer = v8;
    v11 = a2;
    v8 = ZwDeviceIoControlFile(Handle, 0, 0, 0, &IoStatusBlock, 0x10000u, &InputBuffer, 8u, 0, 0);
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
  xxxSoundSentry();
  if ( !v9 )
    UserSessionSwitchLeaveCrit();
  if ( v8 >= 0 )
  {
    if ( a2 != -1 && (v6 || a2) )
    {
      Interval.QuadPart = -10000LL * a2;
      KeDelayExecutionThread(1, 0, &Interval);
    }
    v2 = 1;
  }
  ZwClose(Handle);
  return v2;
}
