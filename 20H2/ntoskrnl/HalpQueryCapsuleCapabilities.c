/*
 * XREFs of HalpQueryCapsuleCapabilities @ 0x1404D5BF0
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14033CF00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14033D060 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     HalEfiQueryCapsuleCapabilities @ 0x1404C20D8 (HalEfiQueryCapsuleCapabilities.c)
 */

__int64 __fastcall HalpQueryCapsuleCapabilities(__int64 a1)
{
  char v3; // bl
  unsigned int v4; // edx
  unsigned int CapsuleCapabilities; // edi
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalFirmwareTypeEfi )
    return 3221225474LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v3 = 0;
  }
  else
  {
    v3 = 1;
    v4 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v4 >> 6);
    Affinity.Mask = 1LL << (v4 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  CapsuleCapabilities = HalEfiQueryCapsuleCapabilities(a1);
  if ( v3 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return CapsuleCapabilities;
}
