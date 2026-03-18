/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C0161B78
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0063E6C (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     rimDestroyDeadzone @ 0x1C015E070 (rimDestroyDeadzone.c)
 *     RIMFreePointerDevice @ 0x1C015FFAC (RIMFreePointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdi
  unsigned int v8; // eax
  void *v9; // rax
  int v10; // edx
  __int64 v11; // rcx

  v4 = *(_QWORD *)(a2 + 480);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v7 = *(_QWORD *)(a2 + 464);
  if ( *(_QWORD *)(v4 + 880) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !*(_QWORD *)(v7 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v8 = *(_DWORD *)(v7 + 104);
  if ( !v8 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v8 = *(_DWORD *)(v7 + 104);
  }
  v9 = Win32AllocPoolZInit(v8, 1668313938LL);
  *(_QWORD *)(v4 + 880) = v9;
  if ( v9 )
  {
    memmove(v9, *(const void **)(v7 + 16), *(unsigned int *)(v7 + 104));
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v10, 1, 38, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids, 23);
  }
  if ( *(_DWORD *)(v4 + 24) == 5 )
  {
    v11 = *(_QWORD *)(a1 + 856);
    if ( v11 )
    {
      Win32FreePool(v11);
      *(_QWORD *)(a1 + 856) = 0LL;
    }
    rimDestroyDeadzone();
  }
  RIMFreePointerDevice(a1, v4);
  *(_QWORD *)(a2 + 480) = 0LL;
}
