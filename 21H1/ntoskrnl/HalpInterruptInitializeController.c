/*
 * XREFs of HalpInterruptInitializeController @ 0x1403A0138
 * Callers:
 *     HalpInterruptSelectController @ 0x1403A5D08 (HalpInterruptSelectController.c)
 *     HalpInterruptResetThisProcessor @ 0x1404B6EC0 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptPowerChange @ 0x1404CC554 (HalpInterruptPowerChange.c)
 *     HalpInterruptReinitialize @ 0x1409915D8 (HalpInterruptReinitialize.c)
 *     HalpInitializeInterrupts @ 0x140A3667C (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpInterruptInitializeLocalUnit @ 0x1403A07EC (HalpInterruptInitializeLocalUnit.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpInterruptInitializeController(ULONG_PTR BugCheckParameter3)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  int v7; // ecx
  int v8; // eax

  if ( (*(_DWORD *)(BugCheckParameter3 + 224) & 1) != 0 )
    return 0LL;
  v2 = *(_DWORD *)(BugCheckParameter3 + 220);
  if ( (v2 & 1) == 0 )
    goto LABEL_3;
  if ( !HalpInterruptMaxClusterSize || (unsigned int)HalpInterruptMaxClusterSize > *(_DWORD *)(BugCheckParameter3 + 280) )
    HalpInterruptMaxClusterSize = *(_DWORD *)(BugCheckParameter3 + 280);
  if ( !(_DWORD)HalpInterruptMaxCluster || (unsigned int)HalpInterruptMaxCluster > *(_DWORD *)(BugCheckParameter3 + 284) )
    LODWORD(HalpInterruptMaxCluster) = *(_DWORD *)(BugCheckParameter3 + 284);
  v7 = v2 & 0x400;
  if ( HalpInterruptDirectedEoiModeDetermined )
  {
    if ( !v7 )
    {
      if ( !HalpInterruptDirectedEoiModeEnabled )
        goto LABEL_14;
LABEL_20:
      v3 = -1073741811;
      *(_DWORD *)(BugCheckParameter3 + 312) = 471;
      v8 = 25;
LABEL_22:
      HalpInterruptLastProblem = v8;
      *(_DWORD *)(BugCheckParameter3 + 292) = v8;
      *(_QWORD *)(BugCheckParameter3 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\intsup.c";
      *(_DWORD *)(BugCheckParameter3 + 296) = v3;
      goto LABEL_4;
    }
    if ( !HalpInterruptDirectedEoiModeEnabled )
      goto LABEL_20;
  }
LABEL_14:
  v3 = HalpInterruptInitializeLocalUnit(BugCheckParameter3);
  if ( v3 < 0 )
    goto LABEL_4;
LABEL_3:
  v3 = (*(__int64 (__fastcall **)(_QWORD))(BugCheckParameter3 + 40))(*(_QWORD *)(BugCheckParameter3 + 16));
  if ( v3 < 0 )
  {
    v8 = 5;
    *(_DWORD *)(BugCheckParameter3 + 312) = 496;
    goto LABEL_22;
  }
LABEL_4:
  v4 = *(_DWORD *)(BugCheckParameter3 + 224);
  if ( v3 < 0 )
    v5 = v4 & 0xFFFFFFFC | 2;
  else
    v5 = v4 & 0xFFFFFFFC | 1;
  *(_DWORD *)(BugCheckParameter3 + 224) = v5;
  return (unsigned int)v3;
}
