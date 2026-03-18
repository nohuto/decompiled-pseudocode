/*
 * XREFs of AcpiPccWatchdog @ 0x1C005A220
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccCommandComplete @ 0x1C00599F0 (AcpiPccCommandComplete.c)
 */

void __fastcall AcpiPccWatchdog(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  if ( *((_DWORD *)DeferredContext + 108) )
  {
    if ( (**((_WORD **)DeferredContext + 7) & 1) == 0 )
    {
      if ( ++*((_DWORD *)DeferredContext + 158) <= 0xAu )
      {
        KeSetTimer((PKTIMER)(DeferredContext + 440), (LARGE_INTEGER)-10000LL, (PKDPC)(DeferredContext + 504));
        return;
      }
      ++*((_DWORD *)DeferredContext + 159);
    }
    AcpiPccCommandComplete((__int64)DeferredContext);
  }
}
