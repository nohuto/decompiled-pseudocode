/*
 * XREFs of PopShutdownSystem @ 0x1409AE954
 * Callers:
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x1404B8BE0 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1404EBD8C (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x1404F74E4 (VslNotifyShutdown.c)
 *     DbgUnLoadImageSymbols @ 0x14057FB50 (DbgUnLoadImageSymbols.c)
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x1409AD1DC (PopSetMemoryOverwriteRequestAction.c)
 *     PopNotifyShutdownListener @ 0x1409AE8F0 (PopNotifyShutdownListener.c)
 */

void __fastcall __noreturn PopShutdownSystem(int a1)
{
  int v2; // ebx
  int v3; // ebx

  PopNotifyShutdownListener();
  VslNotifyShutdown(0);
  HvlConfigureMemoryZeroingOnReset(0);
  PopSetMemoryOverwriteRequestAction();
  DbgUnLoadImageSymbols(0LL, -1LL, 0LL);
  if ( (PopSimulate & 0x800) != 0 && ((a1 - 4) & 0xFFFFFFFD) == 0 )
    a1 = 5;
  v2 = a1 - 4;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
    {
      PopInvokeSystemStateHandler(5, 0LL);
      goto LABEL_12;
    }
    if ( v3 != 1 )
LABEL_12:
      HalReturnToFirmware(3);
  }
  else if ( PopShutdownPowerOffPolicy )
  {
    qword_140C23FA8 = (__int64)PopShutdownHandler;
  }
  PopInvokeSystemStateHandler(4, 0LL);
  HalReturnToFirmware(1);
}
