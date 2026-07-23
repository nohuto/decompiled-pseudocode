/*
 * XREFs of HalpMemoryErrorDeferredRecovery @ 0x1404D0170
 * Callers:
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x1404C252C (HalpHvMceConsumedMemoryErrorRecovery.c)
 *     HalpGhesMemoryErrorHandler @ 0x1404D0078 (HalpGhesMemoryErrorHandler.c)
 *     HalpMceRecoveryNotRequiredAmd @ 0x1404D07DC (HalpMceRecoveryNotRequiredAmd.c)
 *     HalpMceRecoveryNotRequiredIntel @ 0x1404D08A4 (HalpMceRecoveryNotRequiredIntel.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpHvSetMachineCheckRecoveryState @ 0x1404C2E60 (HalpHvSetMachineCheckRecoveryState.c)
 *     WheaRequestDeferredRecovery @ 0x1405BD2E0 (WheaRequestDeferredRecovery.c)
 */

__int64 __fastcall HalpMemoryErrorDeferredRecovery(
        __int64 a1,
        char a2,
        __int64 a3,
        int a4,
        __int16 a5,
        char a6,
        char a7,
        char a8)
{
  PSLIST_ENTRY v12; // rdi
  int v13; // ebx
  int v14; // eax

  v12 = RtlpInterlockedPopEntrySList(&WheapDrsPoolList);
  if ( v12 )
  {
    if ( !HalpHvWheaEnlightenedCpuManager )
    {
LABEL_12:
      WORD1(v12[4].Next) = a5;
      BYTE4(v12[4].Next) = a6;
      BYTE5(v12[4].Next) = a7;
      *((_QWORD *)&v12[3].Next + 1) = a1;
      BYTE6(v12[4].Next) = a8 & 1;
      LOBYTE(v12[4].Next) = a2;
      *((_QWORD *)&v12[4].Next + 1) = a3;
      LODWORD(v12[5].Next) = a4;
      HIDWORD(v12[5].Next) = 1;
      if ( (unsigned __int8)WheaRequestDeferredRecovery(&v12[1], &v12[3].Next + 1) )
        return 0;
      RtlpInterlockedPushEntrySList(&WheapDrsPoolList, v12);
      return (unsigned int)-1073741757;
    }
    if ( a3 )
    {
      if ( !qword_140C4A240 )
      {
        v13 = -1073741823;
        goto LABEL_10;
      }
      v14 = qword_140C4A240(a3);
    }
    else
    {
      v14 = HalpHvSetMachineCheckRecoveryState(1);
    }
    v13 = v14;
LABEL_10:
    if ( v13 < 0 )
    {
      RtlpInterlockedPushEntrySList(&WheapDrsPoolList, v12);
      return (unsigned int)v13;
    }
    goto LABEL_12;
  }
  return (unsigned int)-1073741757;
}
