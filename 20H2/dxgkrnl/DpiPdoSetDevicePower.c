/*
 * XREFs of DpiPdoSetDevicePower @ 0x1C0170D9C
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C001F8F0 (DpiPdoDispatchPower.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01630D0 (DpiPdoDispatchInternalIoctl.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0172494 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C011DFA0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C011E21C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0170390 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0170410 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C01715B4 (DpiDxgkDdiSetPowerState.c)
 */

__int64 __fastcall DpiPdoSetDevicePower(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rdx
  struct _KEVENT *v11; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v8 = *(_QWORD *)(v3 + 40);
  v9 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  if ( *(_DWORD *)(v3 + 284) != a2 )
  {
    *(_DWORD *)(v3 + 284) = a2;
    if ( (*(_BYTE *)(v9 + 3905) & 4) == 0 )
    {
      v4 = DpiAcquireCoreSyncAccessSafe(a1, 1);
      if ( v4 >= 0 )
      {
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 3896), 1LL);
        DpiDxgkDdiSetPowerState(v8, *(_QWORD *)(v3 + 48), *(_DWORD *)(v3 + 504), a2, a3);
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v9 + 3896), v10);
        DpiReleaseCoreSyncAccessSafe(a1, 1);
        v4 = 0;
      }
    }
    v11 = (struct _KEVENT *)(v3 + 984);
    if ( a2 == 1 )
    {
      KeClearEvent(v11);
      KeSetEvent((PRKEVENT)(v3 + 1008), 0, 0);
    }
    else
    {
      KeSetEvent(v11, 0, 0);
      KeClearEvent((PRKEVENT)(v3 + 1008));
    }
  }
  return (unsigned int)v4;
}
