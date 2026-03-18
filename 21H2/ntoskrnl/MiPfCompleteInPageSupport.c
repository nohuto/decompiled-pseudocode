/*
 * XREFs of MiPfCompleteInPageSupport @ 0x14027938C
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x1402792E0 (MiPfCompletePrefetchIos.c)
 *     MiPfCompleteCoalescedIo @ 0x140594698 (MiPfCompleteCoalescedIo.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiFillPteHierarchy @ 0x140352E50 (MiFillPteHierarchy.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(__int64 a1, char *a2)
{
  char *AnyMultiplexedVm; // rbx
  bool v3; // zf
  unsigned int v5; // edx
  int v7; // ecx
  __int64 v8; // [rsp+20h] [rbp-59h] BYREF
  _QWORD v9[18]; // [rsp+30h] [rbp-49h] BYREF

  v8 = 0LL;
  AnyMultiplexedVm = a2;
  v3 = a2 == (char *)1;
  v5 = *(_DWORD *)(a1 + 192);
  if ( v3 )
  {
    v7 = ((v5 >> 1) & 3) - 1;
    if ( ((v5 >> 1) & 3) != 1 )
    {
      switch ( (v5 >> 1) & 3 )
      {
        case 2u:
          v7 = 2;
          break;
        case 3u:
          v7 = 1;
          break;
        case 5u:
          v7 = 4;
          break;
        default:
          goto LABEL_5;
      }
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v7);
LABEL_5:
    v5 &= 0xFFFFFFF9;
  }
  *(_DWORD *)(a1 + 192) = v5 | 0x1000000;
  memset(v9, 0, 0x88uLL);
  MiFillPteHierarchy(0LL, &v9[3]);
  memset(v9, 0, 24);
  LODWORD(v9[10]) &= ~0x40u;
  v9[7] = AnyMultiplexedVm;
  MiWaitForInPageComplete(v9, a1, &v8);
  return MiFinishHardFault(v9, 0LL, a1, 0LL, v8);
}
