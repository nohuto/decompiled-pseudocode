/*
 * XREFs of HalpMemoryErrorDeferredRecovery @ 0x1404CFF30
 * Callers:
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x1404C22EC (HalpHvMceConsumedMemoryErrorRecovery.c)
 *     HalpGhesMemoryErrorHandler @ 0x1404CFE38 (HalpGhesMemoryErrorHandler.c)
 *     HalpMceRecoveryNotRequiredAmd @ 0x1404D059C (HalpMceRecoveryNotRequiredAmd.c)
 *     HalpMceRecoveryNotRequiredIntel @ 0x1404D0664 (HalpMceRecoveryNotRequiredIntel.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140407930 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     HalpHvSetMachineCheckRecoveryState @ 0x1404C2C20 (HalpHvSetMachineCheckRecoveryState.c)
 *     WheaRequestDeferredRecovery @ 0x1405BD0B0 (WheaRequestDeferredRecovery.c)
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
      if ( !qword_140C4A200 )
      {
        v13 = -1073741823;
        goto LABEL_10;
      }
      v14 = qword_140C4A200(a3);
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
