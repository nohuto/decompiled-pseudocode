/*
 * XREFs of ?DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C013D468
 * Callers:
 *     DestroyBaseWindow @ 0x1C013D580 (DestroyBaseWindow.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DeleteMinWindowProperties(struct tagBWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbx

  v5 = *((_QWORD *)a1 + 10);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v5 + 4);
    v7 = v5 + 8;
    if ( *(_DWORD *)(v5 + 4) )
    {
      do
      {
        if ( (*(_WORD *)(v7 + 10) & 0x8001) == 0x8001 )
          (***(void (__fastcall ****)(_QWORD))v7)(*(_QWORD *)v7);
        else
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3, a4);
        v7 += 16LL;
        --v6;
      }
      while ( v6 );
      v5 = *((_QWORD *)a1 + 10);
    }
    Win32FreePool(v5);
    *((_QWORD *)a1 + 10) = 0LL;
  }
}
