/*
 * XREFs of PopCleanCoolingExtension @ 0x1408E2ABC
 * Callers:
 *     PopAssociateThermalRequest @ 0x140790A20 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408E2BE8 (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14037FC30 (PnpUnregisterPlugPlayNotification.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PopCleanCoolingExtension(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[7];
  if ( v2 )
    PnpUnregisterPlugPlayNotification(v2, 1);
  if ( *((_BYTE *)P + 64) )
    ((void (__fastcall *)(_QWORD))P[14])(P[12]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
