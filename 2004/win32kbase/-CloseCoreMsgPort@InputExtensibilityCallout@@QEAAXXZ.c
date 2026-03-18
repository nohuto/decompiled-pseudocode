/*
 * XREFs of ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C000785C
 * Callers:
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0007810 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     xxxUserProcessCallout @ 0x1C0072150 (xxxUserProcessCallout.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 */

void __fastcall InputExtensibilityCallout::CloseCoreMsgPort(InputExtensibilityCallout *this)
{
  InputExtensibilityCallout *v1; // rdi
  void *v2; // rcx

  v1 = gpInputExtensibilityCallout;
  RIMLockExclusive((char *)gpInputExtensibilityCallout + 8);
  v2 = (void *)*((_QWORD *)v1 + 3);
  if ( v2 )
  {
    ZwClose(v2);
    *((_QWORD *)v1 + 3) = 0LL;
  }
  *((_QWORD *)v1 + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 8, 0LL);
  KeLeaveCriticalRegion();
}
