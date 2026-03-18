/*
 * XREFs of MiPfCompleteInPageSupport @ 0x14025AD4C
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x1402634D4 (MiPfCompletePrefetchIos.c)
 *     MiPfCompleteCoalescedIo @ 0x140533BBC (MiPfCompleteCoalescedIo.c)
 * Callees:
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiInitializePageFaultPacket @ 0x14025ACC0 (MiInitializePageFaultPacket.c)
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(__int64 a1, char *AnyMultiplexedVm)
{
  unsigned int v4; // edx
  int v6; // ecx
  __int64 v7; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v8[18]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v8, 0, 0x88uLL);
  v7 = 0LL;
  v4 = *(_DWORD *)(a1 + 192);
  if ( AnyMultiplexedVm == (char *)1 )
  {
    v6 = ((v4 >> 1) & 3) - 1;
    if ( ((v4 >> 1) & 3) != 1 )
    {
      switch ( (v4 >> 1) & 3 )
      {
        case 2u:
          v6 = 2;
          break;
        case 3u:
          v6 = 1;
          break;
        case 5u:
          v6 = 4;
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
  MiInitializePageFaultPacket(0LL, 0LL, 0, 0LL, (__int64)v8);
  v8[7] = AnyMultiplexedVm;
  MiWaitForInPageComplete(v8, a1, &v7);
  return MiFinishHardFault((__int64)v8, 0LL, a1, 0LL);
}
