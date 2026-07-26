/*
 * XREFs of NdisMDeregisterInterrupt @ 0x1C00C2390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1C00AAB64 (-ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z.c)
 */

void __stdcall NdisMDeregisterInterrupt(PNDIS_MINIPORT_INTERRUPT Interrupt)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  struct _KINTERRUPT *InterruptObject; // rax
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+30h] [rbp-18h] BYREF

  Miniport = Interrupt->Miniport;
  Parameters = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xEu,
      (struct _GUID *)&WPP_bc716cac3d1e3fa5665a69984d631f86_Traceguids,
      Miniport,
      *(_QWORD *)&Parameters.Version,
      Parameters.ConnectionContext.Generic);
  if ( Interrupt->InterruptObject )
  {
    if ( _InterlockedExchangeAdd(&Miniport->RegisteredInterrupts, 0xFFFFFFFF) == 1 )
      Interrupt->Miniport->Flags |= 0x20u;
    InterruptObject = Interrupt->InterruptObject;
    *(&Parameters.Version + 1) = 0;
    Parameters.ConnectionContext.Generic = InterruptObject;
    Parameters.Version = 1;
    IoDisconnectInterruptEx(&Parameters);
    ndisWaitForDpcCompletion(
      &Interrupt->DpcCount,
      (volatile unsigned __int8 *)&Interrupt->8,
      &Interrupt->DpcsCompletedEvent);
    Interrupt->Miniport->Interrupt = 0LL;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_bc716cac3d1e3fa5665a69984d631f86_Traceguids,
      Interrupt->Miniport);
}
