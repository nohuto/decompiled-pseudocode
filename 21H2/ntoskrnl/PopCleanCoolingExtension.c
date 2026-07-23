/*
 * XREFs of PopCleanCoolingExtension @ 0x1408E2C1C
 * Callers:
 *     PopAssociateThermalRequest @ 0x140791FD0 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408E2D48 (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14037F780 (PnpUnregisterPlugPlayNotification.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
