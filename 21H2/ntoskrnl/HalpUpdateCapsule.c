/*
 * XREFs of HalpUpdateCapsule @ 0x1404D78E0
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HalEfiUpdateCapsule @ 0x1404C4128 (HalEfiUpdateCapsule.c)
 */

__int64 HalpUpdateCapsule()
{
  char v1; // di
  unsigned int v2; // edx
  unsigned int updated; // ebx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalFirmwareTypeEfi )
    return 3221225474LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v1 = 0;
  }
  else
  {
    v1 = 1;
    v2 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
    Affinity.Mask = 1LL << (v2 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  updated = HalEfiUpdateCapsule();
  if ( v1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return updated;
}
