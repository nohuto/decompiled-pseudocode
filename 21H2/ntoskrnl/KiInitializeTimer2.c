/*
 * XREFs of KiInitializeTimer2 @ 0x14029A5CC
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x14026E680 (ExAllocateTimerInternal2.c)
 *     KeInitializeTimer2 @ 0x14029A5B0 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x140380F30 (KeInitializeIRTimer.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403B48C0 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     MiStoreEvictThread @ 0x1403C1430 (MiStoreEvictThread.c)
 *     PopPowerAggregatorInitialize @ 0x140A41878 (PopPowerAggregatorInitialize.c)
 *     PopSleepstudyInitialize @ 0x140A41C80 (PopSleepstudyInitialize.c)
 *     ExInitializeTimeRefresh @ 0x140A5C1EC (ExInitializeTimeRefresh.c)
 *     HalpBlkWdInitialize @ 0x140A8F3E8 (HalpBlkWdInitialize.c)
 * Callees:
 *     PsTimerResolutionActive @ 0x1402818E4 (PsTimerResolutionActive.c)
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
