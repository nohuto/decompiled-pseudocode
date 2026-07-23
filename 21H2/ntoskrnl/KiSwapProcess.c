/*
 * XREFs of KiSwapProcess @ 0x1402ABB30
 * Callers:
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x1402AC2D0 (KiSetAddressPolicy.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404FACE0 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiSwapProcess(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 GroupIndex; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  GroupIndex = CurrentPrcb->GroupIndex;
  v5 = 8LL * CurrentPrcb->Group + 376;
  _interlockedbittestandset64((volatile signed __int32 *)(v5 + a1), GroupIndex);
  v6 = *(_QWORD *)(a1 + 40);
  if ( KiKvaShadow )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( (v6 & 2) != 0 )
      v7 = v6 | 0x8000000000000000uLL;
    __writegsqword(0x9000u, v7);
    KiSetAddressPolicy(*(unsigned __int8 *)(a1 + 912));
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    result = HvlSwitchVirtualAddressSpace(v6);
  else
    __writecr3(v6);
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v9 = __readcr4();
    if ( (v9 & 0x20080) != 0 )
    {
      result = v9 ^ 0x80;
      __writecr4(v9 ^ 0x80);
      __writecr4(v9);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)(v5 + a2), GroupIndex);
  return result;
}
