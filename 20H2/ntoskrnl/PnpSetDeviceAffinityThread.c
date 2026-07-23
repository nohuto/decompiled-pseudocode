/*
 * XREFs of PnpSetDeviceAffinityThread @ 0x1402045F8
 * Callers:
 *     PnpSendIrp @ 0x140204550 (PnpSendIrp.c)
 *     PnpCallAddDevice @ 0x1407394EC (PnpCallAddDevice.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14033D060 (KeSetSystemGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x14033F590 (KeQueryNodeActiveAffinity.c)
 *     KeAndGroupAffinityEx @ 0x140374510 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
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
  KeAndGroupAffinityEx(&KeActiveProcessors, &Affinity, &Affinity);
  if ( !Affinity.Mask )
    return 0LL;
  KeSetSystemGroupAffinityThread(&Affinity, a2);
  return 1LL;
}
