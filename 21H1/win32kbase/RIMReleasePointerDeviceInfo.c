/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C0167EC8
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0059C4C (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     rimDestroyDeadzone @ 0x1C01643C0 (rimDestroyDeadzone.c)
 *     RIMFreePointerDevice @ 0x1C01662FC (RIMFreePointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  unsigned int v6; // eax
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a2 + 480);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v5 = *(_QWORD *)(a2 + 464);
  if ( *(_QWORD *)(v2 + 880) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !*(_QWORD *)(v5 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v6 = *(_DWORD *)(v5 + 104);
  if ( !v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v6 = *(_DWORD *)(v5 + 104);
  }
  v7 = Win32AllocPoolZInit(v6, 0x63707352u);
  *(_QWORD *)(v2 + 880) = v7;
  if ( v7 )
  {
    memmove(v7, *(const void **)(v5 + 16), *(unsigned int *)(v5 + 104));
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 3;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v8, 1, 38, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids, 23);
  }
  if ( *(_DWORD *)(v2 + 24) == 5 )
  {
    v10 = *(_QWORD *)(a1 + 856);
    if ( v10 )
    {
      Win32FreePool(v10, v8, v9);
      *(_QWORD *)(a1 + 856) = 0LL;
    }
    rimDestroyDeadzone();
  }
  RIMFreePointerDevice(a1, v2);
  *(_QWORD *)(a2 + 480) = 0LL;
}
