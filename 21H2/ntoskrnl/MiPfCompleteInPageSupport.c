/*
 * XREFs of MiPfCompleteInPageSupport @ 0x1403078E8
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x140307850 (MiPfCompletePrefetchIos.c)
 *     MiPfCompleteCoalescedIo @ 0x1405392CC (MiPfCompleteCoalescedIo.c)
 * Callees:
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiInitializePageFaultPacket @ 0x1403079C8 (MiInitializePageFaultPacket.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(__int64 a1, __int64 AnyMultiplexedVm)
{
  unsigned int v4; // edx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v8[18]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v8, 0, 0x88uLL);
  v7 = 0LL;
  v4 = *(_DWORD *)(a1 + 192);
  if ( AnyMultiplexedVm == 1 )
  {
    v6 = ((v4 >> 1) & 3) - 1;
    if ( ((v4 >> 1) & 3) != 1 )
    {
      switch ( (v4 >> 1) & 3 )
      {
        case 2u:
          v6 = 2LL;
          break;
        case 3u:
          v6 = 1LL;
          break;
        case 5u:
          v6 = 4LL;
          break;
        default:
          goto LABEL_5;
      }
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v6);
LABEL_5:
    v4 &= 0xFFFFFFF9;
  }
  *(_DWORD *)(a1 + 192) = v4 | 0x1000000;
  MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v8);
  v8[7] = AnyMultiplexedVm;
  MiWaitForInPageComplete(v8, a1, &v7);
  return MiFinishHardFault((__int64)v8, 0LL, a1, 0LL);
}
