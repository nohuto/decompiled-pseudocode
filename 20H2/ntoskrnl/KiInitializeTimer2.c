/*
 * XREFs of KiInitializeTimer2 @ 0x14035682C
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x14033CA90 (ExAllocateTimerInternal2.c)
 *     KeInitializeTimer2 @ 0x140356810 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x140380E80 (KeInitializeIRTimer.c)
 *     MiStoreEvictThread @ 0x1403C07B0 (MiStoreEvictThread.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403C7B38 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     PopPowerAggregatorInitialize @ 0x140A42D10 (PopPowerAggregatorInitialize.c)
 *     PopSleepstudyInitialize @ 0x140A42F8C (PopSleepstudyInitialize.c)
 *     ExInitializeTimeRefresh @ 0x140A59BC0 (ExInitializeTimeRefresh.c)
 *     HalpBlkWdInitialize @ 0x140A91588 (HalpBlkWdInitialize.c)
 * Callees:
 *     PsTimerResolutionActive @ 0x140247924 (PsTimerResolutionActive.c)
 */

char __fastcall KiInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r10
  char v6; // r11
  char *i; // rax
  char result; // al

  v5 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)a1 = (a4 >= 0) + 24;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 96) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a2 ^ KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 104) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a3 ^ KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 112) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 120) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  v6 = a4 & 0xE;
  if ( (a4 & 0xE) == 0
    && !KeGetPcr()->Prcb.NestingLevel
    && PsTimerResolutionActive((__int64)KeGetCurrentThread()->ApcState.Process) )
  {
    v6 = 16;
  }
  *(_BYTE *)(a1 + 129) = v6;
  for ( i = KiTimer2Combinations; *i != v6; i += 3 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 6 )
      __fastfail(5u);
  }
  *(_BYTE *)(a1 + 130) = KiTimer2Combinations[3 * v5 + 1];
  result = KiTimer2Combinations[3 * v5 + 2];
  *(_BYTE *)(a1 + 131) = result;
  return result;
}
