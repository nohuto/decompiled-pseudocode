/*
 * XREFs of ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C0007434
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0005888 (UserActivateMITInputProcessing.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::OnInputThreadStateChanged(__int64 a1, int a2)
{
  InputExtensibilityCallout *v2; // rbp
  CInputThread *v4; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE *v12; // rsi
  char *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rdi
  char *v19; // rbp
  __int64 v20; // xmm1_8
  _QWORD *v21; // rdi
  unsigned __int64 v22; // rbx
  _BYTE v23[464]; // [rsp+20h] [rbp-1E8h] BYREF

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
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  if ( !a2 )
  {
    memset(v23, 0, 0x1C8uLL);
    v12 = v23;
    v13 = (char *)v2 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 0LL);
    if ( !*((_QWORD *)v2 + 3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16, v17);
    v18 = (char *)v2 + 32;
    v19 = (char *)v2 + 792;
    while ( v18 != v19 )
    {
      if ( *(_QWORD *)v18 && (*((_DWORD *)v18 + 4) & 2) != 0 )
      {
        v20 = *((_QWORD *)v18 + 4);
        *(_OWORD *)v12 = *((_OWORD *)v18 + 1);
        *((_QWORD *)v12 + 2) = v20;
        v12 += 24;
        if ( (unsigned __int64)((v12 - v23) / 24) > 0x13 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12 - v23, (v12 - v23) / 24, v16, v17);
      }
      v18 += 40;
    }
    ExReleasePushLockSharedEx(v13, 0LL);
    KeLeaveCriticalRegion();
    if ( v23 < v12 )
    {
      v21 = &v23[16];
      v22 = (v12 - v23 - 1) / 0x18uLL + 1;
      do
      {
        ((void (__fastcall *)(__int64, _QWORD))*(v21 - 1))(2LL, *v21);
        v21 += 3;
        --v22;
      }
      while ( v22 );
    }
  }
}
