/*
 * XREFs of HalpProcInitSystem @ 0x1409A11A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMcUpdateMicrocode @ 0x1403A5C54 (HalpMcUpdateMicrocode.c)
 *     HalpProcGetFeatureBits @ 0x1403AE08C (HalpProcGetFeatureBits.c)
 *     HalMcFinishMicrocode @ 0x1403AE3C0 (HalMcFinishMicrocode.c)
 *     HalpInterruptStartBlockedProcessors @ 0x1404D00EC (HalpInterruptStartBlockedProcessors.c)
 *     HalpMcUpdateInitialize @ 0x1407916B0 (HalpMcUpdateInitialize.c)
 *     HalpProcInitDiscard @ 0x140A45A90 (HalpProcInitDiscard.c)
 *     HalpBlkInitSystem @ 0x140A45AFC (HalpBlkInitSystem.c)
 *     HalpMcInitializeMicrocodeInfo @ 0x140A45B74 (HalpMcInitializeMicrocodeInfo.c)
 */

__int64 __fastcall HalpProcInitSystem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  switch ( (_DWORD)a1 )
  {
    case 4:
      HalpMcUpdateMicrocode(a1, a2, a3);
      return 0LL;
    case 0x13:
      HalpFeatureBits &= HalpProcGetFeatureBits();
      return 0LL;
    case 0xC:
      HalpProcInitDiscard(a3);
      v4 = 12LL;
      goto LABEL_10;
  }
  if ( (_DWORD)a1 != 17 )
  {
    if ( (_DWORD)a1 != 21 )
      return 0LL;
    HalMcFinishMicrocode(a1);
    v4 = 21LL;
LABEL_10:
    HalpBlkInitSystem(v4);
    return 0LL;
  }
  HalpMcUpdateInitialize(a3, 0LL);
  HalpMcInitializeMicrocodeInfo();
  if ( HalpInterruptBlockedProcessors )
    HalpInterruptStartBlockedProcessors(0);
  return 0LL;
}
