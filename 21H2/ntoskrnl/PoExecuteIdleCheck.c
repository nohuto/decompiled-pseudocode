/*
 * XREFs of PoExecuteIdleCheck @ 0x1402CC750
 * Callers:
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     KiUpdateTime @ 0x1402CC030 (KiUpdateTime.c)
 * Callees:
 *     HalRequestIpi @ 0x140268E40 (HalRequestIpi.c)
 *     KiEnumerateNextProcessorNumber @ 0x1402CCDF0 (KiEnumerateNextProcessorNumber.c)
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     PpmGetIdleConstrainedMask @ 0x140390910 (PpmGetIdleConstrainedMask.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PpmEventIdleDurationExpiration @ 0x140579BF4 (PpmEventIdleDurationExpiration.c)
 */

__int64 __fastcall PoExecuteIdleCheck(unsigned __int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  struct _KPRCB *Prcb; // rax
  int v5; // [rsp+20h] [rbp-198h] BYREF
  _QWORD v6[2]; // [rsp+28h] [rbp-190h] BYREF
  __int16 v7; // [rsp+38h] [rbp-180h]
  int v8; // [rsp+3Ah] [rbp-17Eh]
  __int16 v9; // [rsp+3Eh] [rbp-17Ah]
  _DWORD v10[44]; // [rsp+40h] [rbp-178h] BYREF
  _QWORD v11[22]; // [rsp+F0h] [rbp-C8h] BYREF

  v8 = 0;
  v9 = 0;
  memset(v11, 0, 0xA8uLL);
  memset(&v10[2], 0, 0xA0uLL);
  result = PpmIdleDurationExpirationTimeout;
  if ( PpmIdleDurationExpirationTimeout )
  {
    if ( PpmIdleDurationExpirationTimeout + PpmIdleLastIdleDurationExpirationTime < a1 )
    {
      result = PpmGetIdleConstrainedMask(v11);
      if ( (_BYTE)result )
      {
        PpmIdleLastIdleDurationExpirationTime = a1;
        v10[0] = 1310721;
        memset(&v10[1], 0, 0xA4uLL);
        v6[1] = v11[1];
        v6[0] = v11;
        v7 = 0;
        while ( 1 )
        {
          v5 = 0;
          if ( (int)KiEnumerateNextProcessorNumber(&v5, v6) < 0 )
            break;
          v3 = KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v5 + BYTE2(v5)];
          Prcb = (struct _KPRCB *)KeGetPrcb(v3);
          if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= a1 )
            KeAddProcessorAffinityEx(v10, v3);
        }
        result = KeIsEmptyAffinityEx(v10);
        if ( !(_DWORD)result )
        {
          PpmEventIdleDurationExpiration(v10);
          return HalRequestIpi(0, (__int64)v10);
        }
      }
    }
  }
  return result;
}
