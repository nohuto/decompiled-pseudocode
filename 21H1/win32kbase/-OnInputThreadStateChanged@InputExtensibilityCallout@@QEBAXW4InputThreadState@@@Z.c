/*
 * XREFs of ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C0038A88
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0036888 (UserActivateMITInputProcessing.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::OnInputThreadStateChanged(__int64 a1, int a2)
{
  InputExtensibilityCallout *v2; // rbp
  CInputThread *v4; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rcx
  _BYTE *v9; // rsi
  char *v10; // rbx
  __int64 v11; // rcx
  char *v12; // rdi
  char *v13; // rbp
  __int64 v14; // xmm1_8
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rbx
  _BYTE v17[464]; // [rsp+20h] [rbp-1E8h] BYREF

  v2 = gpInputExtensibilityCallout;
  v4 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v4 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 != v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( !a2 )
  {
    memset(v17, 0, 0x1C8uLL);
    v9 = v17;
    v10 = (char *)v2 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 0LL);
    if ( !*((_QWORD *)v2 + 3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
    v12 = (char *)v2 + 32;
    v13 = (char *)v2 + 792;
    while ( v12 != v13 )
    {
      if ( *(_QWORD *)v12 && (*((_DWORD *)v12 + 4) & 2) != 0 )
      {
        v14 = *((_QWORD *)v12 + 4);
        *(_OWORD *)v9 = *((_OWORD *)v12 + 1);
        *((_QWORD *)v9 + 2) = v14;
        v9 += 24;
        if ( (unsigned __int64)((v9 - v17) / 24) > 0x13 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9 - v17);
      }
      v12 += 40;
    }
    ExReleasePushLockSharedEx(v10, 0LL);
    KeLeaveCriticalRegion();
    if ( v17 < v9 )
    {
      v15 = &v17[16];
      v16 = (v9 - v17 - 1) / 0x18uLL + 1;
      do
      {
        ((void (__fastcall *)(__int64, _QWORD))*(v15 - 1))(2LL, *v15);
        v15 += 3;
        --v16;
      }
      while ( v16 );
    }
  }
}
