/*
 * XREFs of PnpDereferenceNotify @ 0x14078D340
 * Callers:
 *     PnpUnregisterPlugPlayNotification @ 0x14025AA04 (PnpUnregisterPlugPlayNotification.c)
 *     PnpProcessDeferredRegistrations @ 0x14070A064 (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078B7C4 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x14078D5D8 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14094488C (PnpNotifyHwProfileChange.c)
 *     PipKsrNotifyDrivers @ 0x140958B94 (PipKsrNotifyDrivers.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDereferenceNotify(PVOID **P)
{
  PVOID *v3; // rax
  PVOID *v4; // rcx
  PVOID *v5; // rcx
  PVOID *v6; // rcx

  if ( (*((_WORD *)P + 28))-- == 1 )
  {
    v3 = *P;
    if ( (*P)[1] != P || (v4 = P[1], *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    ObfDereferenceObject(P[6]);
    if ( *((_DWORD *)P + 4) == 3 )
    {
      v6 = P[11];
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        P[11] = 0LL;
      }
    }
    v5 = P[3];
    if ( v5 )
    {
      ZwClose(v5);
      P[3] = 0LL;
    }
    ExDeleteResourceLite((PERESOURCE)P[9]);
    ExFreePoolWithTag(P[9], 0x56706E50u);
    ExFreePoolWithTag(P, 0);
  }
}
