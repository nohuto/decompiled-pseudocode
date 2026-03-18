/*
 * XREFs of KiInitializeTimer2 @ 0x1402C06EC
 * Callers:
 *     KeInitializeTimer2 @ 0x1402C06D0 (KeInitializeTimer2.c)
 *     ExAllocateTimerInternal2 @ 0x14035BCD0 (ExAllocateTimerInternal2.c)
 *     KeInitializeIRTimer @ 0x14037E760 (KeInitializeIRTimer.c)
 *     MiStoreEvictThread @ 0x1403BD300 (MiStoreEvictThread.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403C41D8 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     PopPowerAggregatorInitialize @ 0x140A3CE18 (PopPowerAggregatorInitialize.c)
 *     PopSleepstudyInitialize @ 0x140A3D094 (PopSleepstudyInitialize.c)
 *     ExInitializeTimeRefresh @ 0x140A537D4 (ExInitializeTimeRefresh.c)
 *     HalpBlkWdInitialize @ 0x140A8C2E0 (HalpBlkWdInitialize.c)
 * Callees:
 *     PsTimerResolutionActive @ 0x1402FF9E0 (PsTimerResolutionActive.c)
 */

char __fastcall KiInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r10
  __int64 v6; // rdx
  char v7; // r11
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
  v6 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 120) = v6;
  v7 = a4 & 0xE;
  if ( (a4 & 0xE) == 0
    && !KeGetPcr()->Prcb.NestingLevel
    && (unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process, v6, a3) )
  {
    v7 = 16;
  }
  *(_BYTE *)(a1 + 129) = v7;
  for ( i = KiTimer2Combinations; *i != v7; i += 3 )
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
