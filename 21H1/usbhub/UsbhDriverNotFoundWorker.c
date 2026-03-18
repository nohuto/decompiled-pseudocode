/*
 * XREFs of UsbhDriverNotFoundWorker @ 0x1C0042430
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSshSetPortsBusyState @ 0x1C000FE00 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C0011C40 (UsbhEnableTimerObject.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     UsbhUnlatchPdo @ 0x1C00171A0 (UsbhUnlatchPdo.c)
 *     UsbhDisablePort @ 0x1C0037200 (UsbhDisablePort.c)
 */

__int64 __fastcall UsbhDriverNotFoundWorker(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  int v7; // eax
  __int64 PortData; // rax

  v6 = PdoExt(a3);
  KeWaitForSingleObject(v6 + 724, Executive, 0, 0, 0LL);
  if ( PdoExt(a3)[280] == 100 )
  {
    v7 = v6[355];
    if ( (v7 & 0x18000000) != 0 )
    {
      if ( (v7 & 0x10000000) != 0 )
        UsbhEnableTimerObject(
          a1,
          (__int64)(v6 + 426),
          10000,
          *((unsigned __int16 *)v6 + 714),
          *((_QWORD *)v6 + 105),
          0x77464E44u);
    }
    else
    {
      v6[355] = v7 | 0x8000000;
      PortData = UsbhGetPortData(a1, a2);
      UsbhDisablePort(a1, PortData);
      UsbhSshSetPortsBusyState(a1, a2, 1, 0);
    }
  }
  KeSetEvent((PRKEVENT)(v6 + 724), 0, 0);
  UsbhUnlatchPdo(a1, a3, 0LL, 0x444E4654u);
  return 0LL;
}
