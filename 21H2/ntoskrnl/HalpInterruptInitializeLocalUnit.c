/*
 * XREFs of HalpInterruptInitializeLocalUnit @ 0x1403A3E5C
 * Callers:
 *     HalpInterruptInitializeController @ 0x1403A37A8 (HalpInterruptInitializeController.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1403A3888 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptResetThisProcessor @ 0x1404BC6C0 (HalpInterruptResetThisProcessor.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     HalpInterruptRestoreController @ 0x14038B700 (HalpInterruptRestoreController.c)
 *     HalpInitializeDeferredErrorVector @ 0x1403A4098 (HalpInitializeDeferredErrorVector.c)
 *     HalpInitializeCmciVector @ 0x1403A4108 (HalpInitializeCmciVector.c)
 *     HalpInterruptMarkProcessorStarted @ 0x1403A41FC (HalpInterruptMarkProcessorStarted.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x1404D1CC8 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptInitializeLocalUnit(ULONG_PTR BugCheckParameter3)
{
  __int64 v1; // r14
  int v3; // r15d
  int v4; // eax
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 (__fastcall *v8)(_QWORD); // rax
  int v9; // eax
  char v11; // di
  __int64 (__fastcall *v12)(_QWORD, __int128 *); // rax
  int v13; // eax
  int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(_QWORD, unsigned int *, __int128 *, __int64); // rax
  ULONG_PTR BugCheckParameter4; // r8
  int v20; // eax
  __int128 v21; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+50h] [rbp-28h]
  int v23; // [rsp+70h] [rbp-8h]
  unsigned int v24; // [rsp+80h] [rbp+8h] BYREF

  v24 = 0;
  v21 = 0LL;
  v22 = 0LL;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  _disable();
  v3 = v23 & 0x200;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 32))(
         *(_QWORD *)(BugCheckParameter3 + 16),
         (unsigned int)v1,
         223LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    HalpInterruptLastProblem = 4;
    *(_QWORD *)(BugCheckParameter3 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\intsup.c";
    *(_DWORD *)(BugCheckParameter3 + 292) = 4;
    *(_DWORD *)(BugCheckParameter3 + 296) = v4;
    *(_DWORD *)(BugCheckParameter3 + 312) = 571;
    goto LABEL_13;
  }
  if ( !KeGetPcr()->Prcb.Number )
    HalpInterruptP0LocalId = v24;
  HalpInterruptMarkProcessorStarted(v24);
  if ( *(_DWORD *)(HalpInterruptTargets + 24 * v1) )
  {
    if ( !HalpInterruptPhysicalModeOnly )
    {
      v8 = *(__int64 (__fastcall **)(_QWORD))(BugCheckParameter3 + 80);
      if ( v8 )
      {
        v9 = v8(*(_QWORD *)(BugCheckParameter3 + 16));
        v6 = v9;
        if ( v9 < 0 )
        {
          HalpInterruptSetProblemEx(
            BugCheckParameter3,
            6,
            v9,
            (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
            782);
          KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, BugCheckParameter3, BugCheckParameter4);
        }
      }
    }
    goto LABEL_8;
  }
  v11 = 0;
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_34;
  if ( !HalpInterruptClusterModeForced
    && !HalpInterruptClusterModeEnabled
    && (!HalpInterruptMaxClusterSize || (unsigned int)HalpInterruptProcessorCount <= HalpInterruptLogicalFlatLimit) )
  {
    LODWORD(v21) = 5;
    DWORD2(v21) = 1 << v1;
    goto LABEL_22;
  }
  if ( HalpInterruptNextCluster >= (unsigned int)HalpInterruptMaxCluster
    || (*(_DWORD *)(BugCheckParameter3 + 220) & 8) == 0 )
  {
LABEL_34:
    DWORD2(v21) = v24;
    LODWORD(v21) = 4;
    if ( HalpInterruptPhysicalModeOnly )
      goto LABEL_35;
  }
  else
  {
    v11 = 1;
    DWORD2(v21) = HalpInterruptNextCluster;
    HIDWORD(v21) = 1 << HalpInterruptNextClusterIndex;
    LODWORD(v21) = 6;
  }
LABEL_22:
  v12 = *(__int64 (__fastcall **)(_QWORD, __int128 *))(BugCheckParameter3 + 80);
  if ( v12 )
  {
    v13 = v12(*(_QWORD *)(BugCheckParameter3 + 16), &v21);
    v14 = v21;
LABEL_24:
    v15 = DWORD2(v21);
    goto LABEL_25;
  }
  v18 = *(__int64 (__fastcall **)(_QWORD, unsigned int *, __int128 *, __int64))(BugCheckParameter3 + 144);
  if ( !v18 )
    goto LABEL_35;
  LOBYTE(v7) = 1;
  v11 = 0;
  v13 = v18(*(_QWORD *)(BugCheckParameter3 + 16), &v24, &v21, v7);
  v14 = v21;
  if ( (_DWORD)v21 != 6 )
    goto LABEL_24;
  v15 = DWORD2(v21);
  if ( DWORD2(v21) >= (unsigned int)HalpInterruptMaxCluster )
  {
    v15 = v24;
    v14 = 4;
    LODWORD(v21) = 4;
    v13 = -1073741823;
    DWORD2(v21) = v24;
  }
LABEL_25:
  if ( v13 >= 0 )
  {
    HalpInterruptLogicalMode = 1;
    if ( v14 == 6 )
    {
      HalpInterruptClusterModeEnabled = 1;
      if ( v15 > HalpInterruptNextCluster )
        HalpInterruptNextCluster = v15;
    }
    if ( v11 )
    {
      if ( ++HalpInterruptNextClusterIndex >= (unsigned int)HalpInterruptMaxClusterSize )
      {
        HalpInterruptNextClusterIndex = 0;
        ++HalpInterruptNextCluster;
      }
    }
    v16 = HalpInterruptTargets;
    *(_OWORD *)(HalpInterruptTargets + 24 * v1) = v21;
    *(_QWORD *)(v16 + 24 * v1 + 16) = v22;
    if ( (_DWORD)v21 != 4 )
      goto LABEL_8;
    goto LABEL_36;
  }
LABEL_35:
  v17 = HalpInterruptTargets;
  *(_DWORD *)(HalpInterruptTargets + 24 * v1) = 4;
  *(_DWORD *)(v17 + 24 * v1 + 8) = v24;
LABEL_36:
  KeAddProcessorAffinityEx(&HalpInterruptPhysicalTargets, v1);
LABEL_8:
  v5 = HalpInitializeCmciVector(BugCheckParameter3, v24, v6);
  if ( v5 < 0 )
  {
    *(_DWORD *)(BugCheckParameter3 + 296) = v5;
    HalpInterruptLastProblem = 10;
    *(_DWORD *)(BugCheckParameter3 + 292) = 10;
    *(_QWORD *)(BugCheckParameter3 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\intsup.c";
    *(_DWORD *)(BugCheckParameter3 + 312) = 803;
  }
  else
  {
    v5 = HalpInitializeDeferredErrorVector(BugCheckParameter3, v24);
    if ( v5 < 0 )
    {
      *(_DWORD *)(BugCheckParameter3 + 296) = v5;
      HalpInterruptLastProblem = 38;
      *(_DWORD *)(BugCheckParameter3 + 292) = 38;
      *(_QWORD *)(BugCheckParameter3 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\intsup.c";
      *(_DWORD *)(BugCheckParameter3 + 312) = 816;
    }
    else
    {
      if ( (*(_DWORD *)(BugCheckParameter3 + 220) & 2) != 0 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter3 + 48))(*(_QWORD *)(BugCheckParameter3 + 16), 0LL);
      if ( (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 216) - 3) <= 1
        && (*(_DWORD *)(BugCheckParameter3 + 224) & 1) != 0 )
      {
        v20 = HalpInterruptRestoreController(BugCheckParameter3, 1);
        v5 = v20;
        if ( v20 < 0 )
          KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 4uLL, v20);
      }
    }
  }
LABEL_13:
  if ( v3 )
    _enable();
  return (unsigned int)v5;
}
