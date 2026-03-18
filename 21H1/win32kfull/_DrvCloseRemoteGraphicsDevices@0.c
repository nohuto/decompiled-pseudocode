/*
 * XREFs of _DrvCloseRemoteGraphicsDevices@0 @ 0xD26C8
 * Callers:
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
struct tagGRAPHICS_DEVICE *__stdcall DrvCloseRemoteGraphicsDevices()
{
  struct tagGRAPHICS_DEVICE *result; // eax
  struct tagGRAPHICS_DEVICE *v1; // esi
  struct tagGRAPHICS_DEVICE *v2; // ebx
  struct tagGRAPHICS_DEVICE *v3; // edi
  int v4; // eax

  if ( !UserIsUserCritSecIn() )
  {
    v4 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v4);
  }
  result = gpRemoteGraphicsDeviceList;
  v1 = gpRemoteGraphicsDeviceList;
  if ( gpRemoteGraphicsDeviceList )
  {
    v2 = gpRemoteGraphicsDeviceList;
    do
    {
      v3 = (struct tagGRAPHICS_DEVICE *)*((_DWORD *)v1 + 32);
      if ( (*((_DWORD *)v1 + 36) & 0x4000000) != 0 )
      {
        *((_DWORD *)v2 + 32) = v3;
        if ( v2 == v1 )
          v2 = v3;
        if ( gpRemoteGraphicsDeviceList == v1 )
          gpRemoteGraphicsDeviceList = v3;
        if ( gpRemoteGraphicsDeviceListLast == v1 )
          gpRemoteGraphicsDeviceListLast = v2;
        --gcRemoteNextGlobalPhysicalOutputNumber;
        if ( *((_DWORD *)v1 + 64) )
        {
          ((void (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))_gDxgkInterface[50])(
            *((_DWORD *)v1 + 58),
            0,
            *((_DWORD *)v1 + 60),
            *((_DWORD *)v1 + 61));
          *((_DWORD *)v1 + 58) = 0;
          *((_DWORD *)v1 + 62) = 0;
          *((_DWORD *)v1 + 63) = 0;
          *((_DWORD *)v1 + 64) = 0;
        }
        result = (struct tagGRAPHICS_DEVICE *)DrvCleanupOneGraphicsDevice(v1);
      }
      else
      {
        v2 = v1;
      }
      v1 = v3;
    }
    while ( v3 );
  }
  return result;
}
