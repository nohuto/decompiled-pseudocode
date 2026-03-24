/*
 * XREFs of HalpProcInitSystem @ 0x14099B4C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMcUpdateMicrocode @ 0x1403A6514 (HalpMcUpdateMicrocode.c)
 *     HalpProcGetFeatureBits @ 0x1403A803C (HalpProcGetFeatureBits.c)
 *     HalMcFinishMicrocode @ 0x1403A8370 (HalMcFinishMicrocode.c)
 *     HalpInterruptStartBlockedProcessors @ 0x1404D1ABC (HalpInterruptStartBlockedProcessors.c)
 *     HalpMcUpdateInitialize @ 0x140790E20 (HalpMcUpdateInitialize.c)
 *     HalpProcInitDiscard @ 0x140A394E4 (HalpProcInitDiscard.c)
 *     HalpBlkInitSystem @ 0x140A39550 (HalpBlkInitSystem.c)
 *     HalpMcInitializeMicrocodeInfo @ 0x140A395C8 (HalpMcInitializeMicrocodeInfo.c)
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
