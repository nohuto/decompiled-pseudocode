/*
 * XREFs of HalpInterruptSetLineState @ 0x1403B07C8
 * Callers:
 *     HalpTimerEnableHypervisorTimer @ 0x1403916B0 (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x1403AEA08 (HalpTimerConfigureInterrupt.c)
 *     HalEnableInterrupt @ 0x1403B02C0 (HalEnableInterrupt.c)
 *     HalpInterruptEnableNmi @ 0x1403B043C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B0670 (HalpInterruptEnablePerformanceEvents.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x140251FD8 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindBestRouting @ 0x140252050 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptFindLines @ 0x1402520D4 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140252134 (HalpInterruptLookupController.c)
 *     HalpInterruptDestinationToTarget @ 0x140252164 (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptApplyOverrides @ 0x140252258 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGetPriority @ 0x1403B0D74 (HalpInterruptGetPriority.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
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
  ULONG_PTR v8; // r15
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // r13
  ULONG_PTR *v12; // rax
  __int64 v13; // rdi
  _QWORD *Lines; // rax
  _QWORD *v15; // r14
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int128 v18; // xmm10
  __int64 v19; // rbx
  bool v20; // zf
  __int64 v21; // xmm0_8
  __int128 v22; // xmm6
  __int128 v23; // xmm7
  __int128 v24; // xmm8
  __int64 v25; // xmm9_8
  int BestRouting; // r8d
  int v28; // r8d
  int Priority; // eax
  char v30; // cl
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  int v34; // ecx
  signed __int32 v35[8]; // [rsp+8h] [rbp-B9h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-99h]
  _QWORD v37[3]; // [rsp+30h] [rbp-91h]
  __int128 v38; // [rsp+48h] [rbp-79h]
  __int128 v39; // [rsp+58h] [rbp-69h]
  __int64 v40; // [rsp+68h] [rbp-59h]
  __int64 v41; // [rsp+108h] [rbp+47h] BYREF
  char v42; // [rsp+118h] [rbp+57h]
  int v43; // [rsp+120h] [rbp+5Fh] BYREF

  v43 = a4;
  v42 = a3;
  a8 = 0;
  v8 = a2;
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
  v41 = *a1;
  HalpInterruptApplyOverrides(&v41, &a5, &v43);
  LODWORD(v10) = v41;
  v11 = a7;
  while ( 1 )
  {
    v12 = HalpInterruptLookupController(v10);
    v13 = (__int64)v12;
    if ( !v12 )
      break;
    if ( (v12[29] & 2) != 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, (ULONG_PTR)v12, 0x7931847uLL);
    Lines = HalpInterruptFindLines((unsigned int *)&v41);
    v15 = Lines;
    if ( !Lines )
    {
      LODWORD(BugCheckParameter4) = 2252;
      v33 = 18;
      v34 = v13;
      goto LABEL_35;
    }
    v16 = a8;
    v17 = Lines[6];
    if ( *(_BYTE *)(v17 + 16LL * a8) )
    {
      HalpInterruptSetProblemEx(v13, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2265);
      return (unsigned int)-1073741811;
    }
    v18 = *(_OWORD *)(v17 + 16LL * a8);
    v19 = v15[5] + 56LL * a8;
    v20 = *(_BYTE *)(v17 + 16LL * a8 + 12) == 0;
    v21 = *(_QWORD *)(v19 + 48);
    v22 = *(_OWORD *)v19;
    v23 = *(_OWORD *)(v19 + 16);
    v24 = *(_OWORD *)(v19 + 32);
    *(_OWORD *)&v37[1] = *(_OWORD *)v19;
    v38 = v23;
    v39 = v24;
    v25 = v21;
    v40 = v21;
    if ( v20 )
    {
      v28 = HalpInterruptDestinationToTarget(a8, a6, v19 + 24);
      if ( v28 < 0 )
      {
        HalpInterruptSetProblemEx(
          v13,
          22,
          v28,
          (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
          2342);
        goto LABEL_30;
      }
      BestRouting = HalpInterruptFindBestRouting((unsigned int *)&v41, *(_QWORD *)v11);
      if ( BestRouting < 0 )
        goto LABEL_30;
      *(_DWORD *)v19 = a5;
      *(_DWORD *)(v19 + 8) = v43;
      *(_BYTE *)(v19 + 4) = v9;
      *(_DWORD *)(v19 + 12) = 16;
      *(_DWORD *)(v19 + 48) = v8;
      Priority = HalpInterruptGetPriority(v13, (unsigned int)v8);
      v30 = v42;
      *(_DWORD *)(v19 + 52) = Priority;
      *((_BYTE *)&HalpHwToSwIrqlMap + ((unsigned __int64)(unsigned __int8)v8 >> 4)) = v30;
    }
    else
    {
      if ( !HalpHvPresent
        && (*(_DWORD *)(v19 + 48) != (_DWORD)v8
         || *(_DWORD *)(v19 + 8) != v43
         || *(_DWORD *)v19 != a5
         || *(_BYTE *)(v19 + 4) != v9) )
      {
        HalpInterruptSetProblemEx(v13, 32, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2307);
        KeBugCheckEx(0x5Cu, 0x202uLL, v19, *(unsigned int *)(v19 + 48), v8);
      }
      *(_DWORD *)(v19 + 12) |= 0x10u;
    }
    _InterlockedOr(v35, 0);
    BestRouting = HalpInterruptSetLineStateInternal(v13, (__int64)&v41, v19);
    if ( BestRouting < 0 )
    {
      v25 = v40;
      v24 = v39;
      v16 = a8;
      v23 = v38;
      v22 = *(_OWORD *)&v37[1];
LABEL_30:
      v31 = v15[5];
      v32 = 56LL * v16;
      *(_OWORD *)(v32 + v31) = v22;
      *(_OWORD *)(v32 + v31 + 16) = v23;
      *(_OWORD *)(v32 + v31 + 32) = v24;
      *(_QWORD *)(v32 + v31 + 48) = v25;
      *(_OWORD *)(v15[6] + 16LL * v16) = v18;
      return (unsigned int)BestRouting;
    }
    if ( *(_DWORD *)(v19 + 20) == *(_DWORD *)(v11 + 4) && *(_DWORD *)(v19 + 16) == *(_DWORD *)v11 )
      return 0;
    v10 = *(_QWORD *)(v19 + 16);
    v41 = v10;
  }
  LODWORD(BugCheckParameter4) = 2228;
  v33 = 17;
  v34 = 0;
LABEL_35:
  HalpInterruptSetProblemEx(
    v34,
    v33,
    0,
    (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
    BugCheckParameter4);
  return (unsigned int)-1073741275;
}
