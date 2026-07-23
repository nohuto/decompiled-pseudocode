/*
 * XREFs of HalpInterruptSetLineState @ 0x1403A3C48
 * Callers:
 *     HalEnableInterrupt @ 0x140377680 (HalEnableInterrupt.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140386ADC (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A26D4 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403A38BC (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A3AF0 (HalpInterruptEnablePerformanceEvents.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x1403786FC (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindBestRouting @ 0x140378770 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptFindLines @ 0x1403787F0 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140378850 (HalpInterruptLookupController.c)
 *     HalpInterruptDestinationToTarget @ 0x140378880 (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptApplyOverrides @ 0x140378974 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGetPriority @ 0x1403A41CC (HalpInterruptGetPriority.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpInterruptSetProblemEx @ 0x1404D1CC8 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetLineState(
        __int64 *a1,
        unsigned int a2,
        char a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  ULONG_PTR BugCheckParameter4; // r12
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // r13
  ULONG_PTR *v12; // rax
  __int64 v13; // rbx
  _QWORD *Lines; // rax
  _QWORD *v15; // r14
  __int64 v16; // rax
  char v17; // r15
  __int64 v18; // rdi
  bool v19; // zf
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  int BestRouting; // r8d
  int Priority; // eax
  char v25; // cl
  __int64 v27; // rax
  __int128 v28; // xmm1
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int128 v31; // xmm0
  __int128 v32; // xmm0
  signed __int32 v33[8]; // [rsp+0h] [rbp-80h] BYREF
  __int128 v34; // [rsp+30h] [rbp-50h]
  __int128 v35; // [rsp+40h] [rbp-40h]
  __int128 v36; // [rsp+50h] [rbp-30h]
  __int128 v37; // [rsp+60h] [rbp-20h]
  __int64 v38; // [rsp+70h] [rbp-10h]
  __int64 v39; // [rsp+C0h] [rbp+40h] BYREF
  char v40; // [rsp+D0h] [rbp+50h]
  int v41; // [rsp+D8h] [rbp+58h] BYREF

  v41 = a4;
  v40 = a3;
  a8 = 0;
  BugCheckParameter4 = a2;
  if ( a5 == 3 )
  {
    v9 = 1;
    a5 = 2;
  }
  else if ( a5 == 4 )
  {
    v9 = 1;
    a5 = 1;
  }
  else
  {
    v9 = 0;
  }
  v39 = *a1;
  HalpInterruptApplyOverrides((unsigned int *)&v39, &a5, &v41);
  LODWORD(v10) = v39;
  v11 = a7;
  while ( 1 )
  {
    v12 = HalpInterruptLookupController(v10);
    v13 = (__int64)v12;
    if ( !v12 )
    {
      HalpInterruptLastProblem = 17;
      return (unsigned int)-1073741275;
    }
    if ( (v12[28] & 2) != 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, (ULONG_PTR)v12, 0x7931847uLL);
    Lines = HalpInterruptFindLines((unsigned int *)&v39);
    v15 = Lines;
    if ( !Lines )
    {
      *(_DWORD *)(v13 + 296) = 0;
      *(_QWORD *)(v13 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      HalpInterruptLastProblem = 18;
      *(_DWORD *)(v13 + 292) = 18;
      *(_DWORD *)(v13 + 312) = 2232;
      return (unsigned int)-1073741275;
    }
    v16 = Lines[6];
    if ( *(_BYTE *)(v16 + 16LL * a8) )
    {
      *(_DWORD *)(v13 + 296) = 0;
      *(_QWORD *)(v13 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      HalpInterruptLastProblem = 19;
      BestRouting = -1073741811;
      *(_DWORD *)(v13 + 292) = 19;
      *(_DWORD *)(v13 + 312) = 2245;
      return (unsigned int)BestRouting;
    }
    v17 = 1;
    v18 = v15[5] + 56LL * a8;
    v19 = *(_BYTE *)(v16 + 16LL * a8 + 12) == 0;
    v20 = *(_OWORD *)(v18 + 16);
    v35 = *(_OWORD *)v18;
    v21 = *(_OWORD *)(v18 + 32);
    v36 = v20;
    *(_QWORD *)&v20 = *(_QWORD *)(v18 + 48);
    v37 = v21;
    v22 = *(_OWORD *)(v16 + 16LL * a8);
    v38 = v20;
    v34 = v22;
    if ( v19 )
    {
      BestRouting = HalpInterruptDestinationToTarget(a8, a6, v18 + 24);
      if ( BestRouting < 0 )
      {
        *(_DWORD *)(v13 + 296) = BestRouting;
        HalpInterruptLastProblem = 22;
        *(_DWORD *)(v13 + 292) = 22;
        *(_QWORD *)(v13 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
        *(_DWORD *)(v13 + 312) = 2322;
        goto LABEL_17;
      }
      BestRouting = HalpInterruptFindBestRouting((unsigned int *)&v39, *(_QWORD *)v11);
      if ( BestRouting < 0 )
        goto LABEL_31;
      *(_DWORD *)v18 = a5;
      *(_DWORD *)(v18 + 8) = v41;
      *(_BYTE *)(v18 + 4) = v9;
      *(_DWORD *)(v18 + 12) = 16;
      *(_DWORD *)(v18 + 48) = BugCheckParameter4;
      Priority = HalpInterruptGetPriority(v13, (unsigned int)BugCheckParameter4);
      v25 = v40;
      *(_DWORD *)(v18 + 52) = Priority;
      *((_BYTE *)&HalpHwToSwIrqlMap + ((unsigned __int64)(unsigned __int8)BugCheckParameter4 >> 4)) = v25;
    }
    else
    {
      if ( !HalpHvPresent
        && (*(_DWORD *)(v18 + 48) != (_DWORD)BugCheckParameter4
         || *(_DWORD *)(v18 + 8) != v41
         || *(_DWORD *)v18 != a5
         || *(_BYTE *)(v18 + 4) != v9) )
      {
        HalpInterruptSetProblemEx(v13, 32, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2287);
        KeBugCheckEx(0x5Cu, 0x202uLL, v18, *(unsigned int *)(v18 + 48), BugCheckParameter4);
      }
      *(_DWORD *)(v18 + 12) |= 0x10u;
    }
    _InterlockedOr(v33, 0);
    BestRouting = HalpInterruptSetLineStateInternal(v13, (__int64)&v39, v18);
    if ( BestRouting < 0 )
      goto LABEL_31;
    v17 = 0;
    if ( *(_DWORD *)(v18 + 20) == *(_DWORD *)(v11 + 4) && *(_DWORD *)(v18 + 16) == *(_DWORD *)v11 )
      break;
    v10 = *(_QWORD *)(v18 + 16);
    v39 = v10;
  }
  BestRouting = 0;
LABEL_17:
  if ( BestRouting < 0 && v17 )
  {
LABEL_31:
    v27 = v15[5];
    v28 = v36;
    v29 = 56LL * a8;
    v30 = 2LL * a8;
    *(_OWORD *)(v29 + v27) = v35;
    v31 = v37;
    *(_OWORD *)(v29 + v27 + 16) = v28;
    *(_QWORD *)&v28 = v38;
    *(_OWORD *)(v29 + v27 + 32) = v31;
    v32 = v34;
    *(_QWORD *)(v29 + v27 + 48) = v28;
    *(_OWORD *)(v15[6] + 8 * v30) = v32;
  }
  return (unsigned int)BestRouting;
}
