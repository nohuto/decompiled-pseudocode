/*
 * XREFs of HalpInterruptInitializeController @ 0x1403AE924
 * Callers:
 *     HalpInterruptSelectController @ 0x1403B8DA0 (HalpInterruptSelectController.c)
 *     HalpInterruptResetThisProcessor @ 0x140508F00 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptPowerChange @ 0x14051DF24 (HalpInterruptPowerChange.c)
 *     HalpInterruptReinitialize @ 0x140A505D4 (HalpInterruptReinitialize.c)
 *     HalpInitializeInterrupts @ 0x140AF82A8 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpInterruptInitializeLocalUnit @ 0x1403B0A04 (HalpInterruptInitializeLocalUnit.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptInitializeController(ULONG_PTR BugCheckParameter3)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // ecx
  unsigned int v5; // ecx
  int v7; // ecx

  if ( (*(_DWORD *)(BugCheckParameter3 + 232) & 1) == 0 )
  {
    v2 = *(_DWORD *)(BugCheckParameter3 + 228);
    if ( (v2 & 1) == 0 )
    {
LABEL_3:
      v3 = (*(__int64 (__fastcall **)(_QWORD))(BugCheckParameter3 + 40))(*(_QWORD *)(BugCheckParameter3 + 16));
      if ( v3 >= 0 )
        goto LABEL_4;
      HalpInterruptSetProblemEx(
        BugCheckParameter3,
        5,
        v3,
        (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
        520);
LABEL_22:
      v4 = *(_DWORD *)(BugCheckParameter3 + 232);
      goto LABEL_23;
    }
    if ( !HalpInterruptMaxClusterSize
      || (unsigned int)HalpInterruptMaxClusterSize > *(_DWORD *)(BugCheckParameter3 + 288) )
    {
      HalpInterruptMaxClusterSize = *(_DWORD *)(BugCheckParameter3 + 288);
    }
    if ( !(_DWORD)HalpInterruptMaxCluster
      || (unsigned int)HalpInterruptMaxCluster > *(_DWORD *)(BugCheckParameter3 + 292) )
    {
      LODWORD(HalpInterruptMaxCluster) = *(_DWORD *)(BugCheckParameter3 + 292);
    }
    v7 = v2 & 0x400;
    if ( HalpInterruptDirectedEoiModeDetermined )
    {
      if ( !v7 )
      {
        if ( !HalpInterruptDirectedEoiModeEnabled )
          goto LABEL_14;
LABEL_20:
        HalpInterruptSetProblemEx(
          BugCheckParameter3,
          25,
          -1073741811,
          (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
          495);
        goto LABEL_22;
      }
      if ( !HalpInterruptDirectedEoiModeEnabled )
        goto LABEL_20;
    }
LABEL_14:
    v3 = HalpInterruptInitializeLocalUnit(BugCheckParameter3);
    if ( v3 < 0 )
    {
LABEL_4:
      v4 = *(_DWORD *)(BugCheckParameter3 + 232);
      if ( v3 >= 0 )
      {
        v5 = v4 & 0xFFFFFFFC | 1;
LABEL_6:
        *(_DWORD *)(BugCheckParameter3 + 232) = v5;
        return (unsigned int)v3;
      }
LABEL_23:
      v5 = v4 & 0xFFFFFFFC | 2;
      goto LABEL_6;
    }
    goto LABEL_3;
  }
  return 0LL;
}
