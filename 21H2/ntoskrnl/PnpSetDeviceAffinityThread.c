/*
 * XREFs of PnpSetDeviceAffinityThread @ 0x1402F7538
 * Callers:
 *     PnpSendIrp @ 0x1402F7490 (PnpSendIrp.c)
 *     PnpCallAddDevice @ 0x14073EAEC (PnpCallAddDevice.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1402942D0 (KeQueryNodeActiveAffinity.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     KeAndGroupAffinityEx @ 0x1403741F0 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall PnpSetDeviceAffinityThread(__int64 a1, _GROUP_AFFINITY *a2)
{
  unsigned int v3; // r8d
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-28h] BYREF

  Affinity = 0LL;
  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( !a1 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 660);
  if ( v3 > 0xFFFFFFFD )
    return 0LL;
  if ( v3 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  KeQueryNodeActiveAffinity(*(_WORD *)(a1 + 660), &Affinity, 0LL);
  KeAndGroupAffinityEx(KeActiveProcessors, &Affinity, &Affinity);
  if ( !Affinity.Mask )
    return 0LL;
  KeSetSystemGroupAffinityThread(&Affinity, a2);
  return 1LL;
}
