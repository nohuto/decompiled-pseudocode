/*
 * XREFs of ndisReportTimeoutWaitingForExternalDriver @ 0x1C0121C88
 * Callers:
 *     ndisFindSomeoneToBlame @ 0x1C0121B04 (ndisFindSomeoneToBlame.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005E4F0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisLiveBugCheck@@YAX_K000@Z @ 0x1C005E51C (-ndisLiveBugCheck@@YAX_K000@Z.c)
 *     ?ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z @ 0x1C005E564 (-ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z.c)
 *     ndisGetMiniportFromObject @ 0x1C0121C54 (ndisGetMiniportFromObject.c)
 */

void __fastcall ndisReportTimeoutWaitingForExternalDriver(unsigned int a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rsi
  struct _NDIS_MINIPORT_BLOCK *MiniportFromObject; // rbx
  bool v5; // dl
  char v6; // cl
  ULONG VerifierFlags; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  MiniportFromObject = (struct _NDIS_MINIPORT_BLOCK *)ndisGetMiniportFromObject(*(_QWORD *)(a2 + 16));
  v5 = 0;
  if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
  {
    VerifierFlags = 0;
    if ( MmIsVerifierEnabled(&VerifierFlags) < 0 || (VerifierFlags & 0x400000) == 0 )
      v5 = 1;
  }
  v6 = v5;
  if ( MiniportFromObject )
  {
    if ( MiniportFromObject->AoAc
      && MiniportFromObject->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi
      && !ndisWatchdogForceBugCheckForWDI )
    {
LABEL_15:
      ndisBugCheckEx(0x25uLL, v2, a2, *(_QWORD *)(a2 + 40));
    }
    if ( (_DWORD)v2 == 39 && MiniportFromObject->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi )
    {
      v6 = v5;
      if ( !ndisBugCheckOnReenumerationTimeout )
        v6 = 1;
    }
  }
  if ( v6 )
    goto LABEL_15;
  if ( (_BYTE)KdDebuggerNotPresent )
  {
    if ( !MiniportFromObject || (_DWORD)v2 == 34 )
      ndisLiveBugCheck(37LL, v2, a2, *(_QWORD *)(a2 + 40));
    else
      ndisMLiveBugCheck(MiniportFromObject, 37LL, v2, a2, *(_QWORD *)(a2 + 40));
  }
}
