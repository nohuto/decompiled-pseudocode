/*
 * XREFs of _DrvOpenLocalGraphicsDevices@0 @ 0xD25E0
 * Callers:
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 * Callees:
 *     <none>
 */

int __stdcall DrvOpenLocalGraphicsDevices()
{
  NTSTATUS DeviceObjectPointer; // edi
  int v1; // ebx
  struct tagGRAPHICS_DEVICE *v2; // esi
  _DWORD *v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp-24h] [ebp-4Ch]
  _DWORD v8[5]; // [esp+8h] [ebp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+1Ch] [ebp-Ch] BYREF
  int v10; // [esp+24h] [ebp-4h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  DeviceObjectPointer = 0;
  v1 = 0;
  if ( !DrvUpdateGraphicsDeviceList(1) )
    return -1073741823;
  v2 = gpLocalGraphicsDeviceList;
  if ( !gpLocalGraphicsDeviceList )
    return 0;
  do
  {
    v3 = (_DWORD *)((char *)v2 + 196);
    if ( !*((_DWORD *)v2 + 49) )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v2);
      DeviceObjectPointer = IoGetDeviceObjectPointer(
                              &DestinationString,
                              0,
                              (PFILE_OBJECT *)v2 + 49,
                              (PDEVICE_OBJECT *)v2 + 33);
      if ( DeviceObjectPointer >= 0 )
      {
        if ( bSetDeviceSessionUsage(v2, 1) )
        {
          v3 = (_DWORD *)((char *)v2 + 196);
          goto LABEL_4;
        }
        ObfDereferenceObject(*((PVOID *)v2 + 49));
        *((_DWORD *)v2 + 33) = 0;
        *((_DWORD *)v2 + 49) = 0;
        DeviceObjectPointer = -1073741790;
        v5 = WdLogNewEntry5_WdEvent();
      }
      else
      {
        v5 = WdLogNewEntry5_WdEvent();
        *(_DWORD *)(v5 + 12) = DeviceObjectPointer;
      }
      WdLogEvent5_WdEvent(v5);
      goto LABEL_8;
    }
LABEL_4:
    v1 = 1;
    if ( (*((_BYTE *)v2 + 144) & 8) == 0 && *v3 )
    {
      v8[1] = VideoPortCallout;
      memset(&v8[2], 0, 12);
      v7 = *((_DWORD *)v2 + 33);
      v10 = 0;
      v8[0] = v2;
      DeviceObjectPointer = GreGdoDeviceIoControlEx(v7, (char *)&loc_23201E + 1, v8, 20, v8, 20, &v10, 1);
      if ( DeviceObjectPointer < 0 )
      {
        v6 = WdLogNewEntry5_WdEvent();
        *(_DWORD *)(v6 + 12) = DeviceObjectPointer;
        WdLogEvent5_WdEvent(v6);
        v1 = 1;
      }
    }
LABEL_8:
    v2 = (struct tagGRAPHICS_DEVICE *)*((_DWORD *)v2 + 32);
  }
  while ( v2 );
  if ( v1 )
    return 0;
  else
    return DeviceObjectPointer;
}
