/*
 * XREFs of KiInitializeKernel @ 0x140A580F0
 * Callers:
 *     KiSystemStartup @ 0x140A47010 (KiSystemStartup.c)
 * Callees:
 *     KeCompactServiceTable @ 0x14024B47C (KeCompactServiceTable.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     HvlEnlightenProcessor @ 0x1403B6B58 (HvlEnlightenProcessor.c)
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     KiSetHardwareSpeculationControlFeatures @ 0x1403BFD14 (KiSetHardwareSpeculationControlFeatures.c)
 *     KeGetXSaveFeatureFlags @ 0x1403C1DC0 (KeGetXSaveFeatureFlags.c)
 *     KiAddProcessorToCoreControlBlock @ 0x1403C1EDC (KiAddProcessorToCoreControlBlock.c)
 *     KiConfigureInitialNodes @ 0x1403C2FF8 (KiConfigureInitialNodes.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x140420AD0 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiFatalFilter @ 0x14056AA7C (KiFatalFilter.c)
 *     HvlPhase0Initialize @ 0x140824AA0 (HvlPhase0Initialize.c)
 *     KiDetectFpuLeakage @ 0x140A472F0 (KiDetectFpuLeakage.c)
 *     KiSetPageAttributesTable @ 0x140A53954 (KiSetPageAttributesTable.c)
 *     KiCheckMicrocode @ 0x140A54238 (KiCheckMicrocode.c)
 *     KiEnableXSave @ 0x140A5433C (KiEnableXSave.c)
 *     HalpInitSystemPhase1 @ 0x140A56C0C (HalpInitSystemPhase1.c)
 *     KiCompleteKernelInit @ 0x140A58CF8 (KiCompleteKernelInit.c)
 *     KiInitializeIdleThread @ 0x140A590DC (KiInitializeIdleThread.c)
 *     KiSetControlEnforcement @ 0x140A595E0 (KiSetControlEnforcement.c)
 *     PoInitializePrcb @ 0x140A59654 (PoInitializePrcb.c)
 *     KiSetCacheInformation @ 0x140A59724 (KiSetCacheInformation.c)
 *     KiConfigureProcessorBlock @ 0x140A59D28 (KiConfigureProcessorBlock.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     KiInitSystem @ 0x140B1B2C0 (KiInitSystem.c)
 *     KiIsKernelCfgActive @ 0x140B315A4 (KiIsKernelCfgActive.c)
 *     KeInitializeClockOtherProcessors @ 0x140B50F64 (KeInitializeClockOtherProcessors.c)
 *     RtlInitKernelModeSpecialMachineFrameEntries @ 0x140B53490 (RtlInitKernelModeSpecialMachineFrameEntries.c)
 */

__int64 __fastcall KiInitializeKernel(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // r15
  ULONG_PTR v8; // rbx
  _WORD *v9; // rbx
  ULONG_PTR v10; // rdx
  int v11; // eax
  unsigned int v12; // ecx
  char v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  int v16; // r13d
  ULONG_PTR v17; // r15
  char v18; // al
  ULONG_PTR v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // r13d
  ULONG_PTR v26; // rbx
  char XSaveFeatureFlags; // al
  ULONG_PTR v28; // rbx
  ULONG_PTR v29; // r8
  int v30; // r8d
  __int64 v31; // rbx
  __int64 result; // rax
  unsigned int v33; // eax
  int v34; // eax
  unsigned __int64 v35; // rax
  ULONG_PTR v36; // rbx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned int v39; // edx
  int v40; // eax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  struct _KPRCB *v47; // rdx
  _DWORD *v48; // rcx
  bool v49; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v52; // [rsp+30h] [rbp-2F8h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-2F0h] BYREF
  char v54; // [rsp+40h] [rbp-2E8h]
  int v55; // [rsp+44h] [rbp-2E4h]
  unsigned int v56; // [rsp+48h] [rbp-2E0h]
  int v57; // [rsp+4Ch] [rbp-2DCh]
  unsigned int v58; // [rsp+50h] [rbp-2D8h]
  unsigned int v59; // [rsp+54h] [rbp-2D4h]
  unsigned int v60; // [rsp+58h] [rbp-2D0h]
  ULONG_PTR v61; // [rsp+60h] [rbp-2C8h]
  int v62; // [rsp+68h] [rbp-2C0h]
  int v63; // [rsp+6Ch] [rbp-2BCh]
  int v64; // [rsp+70h] [rbp-2B8h]
  int v65; // [rsp+74h] [rbp-2B4h]
  unsigned int v66; // [rsp+78h] [rbp-2B0h]
  ULONG_PTR v67; // [rsp+80h] [rbp-2A8h]
  unsigned __int64 v68; // [rsp+88h] [rbp-2A0h]
  unsigned __int64 v69; // [rsp+90h] [rbp-298h]
  __int64 v70; // [rsp+98h] [rbp-290h]
  __int64 v71; // [rsp+A0h] [rbp-288h]
  __int64 v72; // [rsp+A8h] [rbp-280h]
  __int64 v73; // [rsp+B0h] [rbp-278h]
  __int64 v74; // [rsp+B8h] [rbp-270h]
  ULONG_PTR v75; // [rsp+C0h] [rbp-268h]
  __int64 v76; // [rsp+C8h] [rbp-260h]
  __int128 v77; // [rsp+D0h] [rbp-258h] BYREF
  _DWORD v78[128]; // [rsp+E0h] [rbp-248h] BYREF

  v72 = a3;
  v73 = a2;
  v71 = a1;
  v74 = a2;
  v75 = a4;
  v7 = a6;
  v70 = a6;
  v76 = a6;
  v77 = 0LL;
  if ( !a5 )
  {
    HvlPhase0Initialize(a6);
    if ( KiSystemCallSelector == 1 && (HvlEnlightenments & 0x80000) != 0 )
      MEMORY[0xFFFFF78000000308] = 1;
  }
  v8 = *(_QWORD *)(a4 + 35232);
  BugCheckParameter1 = v8;
  if ( (unsigned __int8)(*(_BYTE *)(a4 + 141) - 1) <= 2u )
    KiSetHardwareSpeculationControlFeatures(a4, v8);
  KiCheckMicrocode(a4);
  memset(v78, 0, sizeof(v78));
  _fxsave(v78);
  if ( a5 )
  {
    if ( KiFpuLeakage )
      BugCheckParameter1 = v8 | 0x20000000000LL;
    KiSetPageAttributesTable();
    *(_QWORD *)(a4 + 34576) = 2097153LL;
    memset((void *)(a4 + 34584), 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)(a4 + 34576), a5);
    *(_QWORD *)(a4 + 38720) = 2097153LL;
    memset((void *)(a4 + 38728), 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)(a4 + 38720), a5);
    *(_QWORD *)(a4 + 34936) = *(_QWORD *)(a4 + 200);
    *(_QWORD *)(a4 + 39056) = 2097153LL;
    memset((void *)(a4 + 39064), 0, 0x100uLL);
    v9 = (_WORD *)(a4 + 39056);
    KeAddProcessorAffinityEx((unsigned __int16 *)(a4 + 39056), a5);
    *(_QWORD *)(a4 + 34912) = *(_QWORD *)(a4 + 200);
    v10 = a4;
    v61 = a4;
    v11 = *(_DWORD *)(a4 + 156);
    v58 = *(_DWORD *)(a4 + 152) * v11;
    v62 = ~(v58 - 1);
    v12 = *(_DWORD *)(a4 + 212);
    v56 = v12;
    v63 = v62 & v12;
    *(_DWORD *)(a4 + 34840) = v62 & v12;
    v64 = ~(v11 - 1);
    v65 = v64 & v12;
    v13 = 0;
    v52 = 0;
    v59 = v11 * *(_DWORD *)(a4 + 38984);
    v14 = ((v59 - 1 - (((unsigned __int64)(v59 - 1) >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v59 - 1 - (((unsigned __int64)(v59 - 1) >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    v68 = (0x101010101010101LL * ((v14 + (v14 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    v55 = ~(v59 - 1);
    v66 = (v55 & v56) >> v68;
    *(_DWORD *)(a4 + 34844) = v66;
    v60 = *(_DWORD *)(a4 + 38988);
    v15 = ((v60 - 1 - (((unsigned __int64)(v60 - 1) >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v60 - 1 - (((unsigned __int64)(v60 - 1) >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    v69 = (0x101010101010101LL * ((v15 + (v15 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    v57 = ~(v60 - 1);
    v56 = (v57 & v56) >> v69;
    v16 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      while ( 1 )
      {
        v67 = v10;
        v54 = v13;
        v17 = KiProcessorBlock[v16];
        if ( (v62 & *(_DWORD *)(v17 + 212)) == v63 )
        {
          KeAddProcessorAffinityEx((unsigned __int16 *)(a4 + 34576), v16);
          KeAddProcessorAffinityEx((unsigned __int16 *)(v17 + 34576), a5);
          v18 = v52;
          if ( !v52 )
            v18 = 1;
          v52 = v18;
          v19 = v17;
          if ( v54 )
            v19 = v67;
          v61 = v19;
          v20 = KeCountSetBitsAffinityEx((_WORD *)(v17 + 34576));
          if ( v20 > v58 )
            KeBugCheckEx(0x3Eu, v17, v20, *(unsigned int *)(v17 + 152), *(unsigned int *)(v17 + 156));
        }
        if ( (v64 & *(_DWORD *)(v17 + 212)) == v65 )
        {
          if ( *(_QWORD *)(a4 + 192) == *(_QWORD *)(v17 + 192) )
          {
            *(_QWORD *)(a4 + 34912) |= *(_QWORD *)(v17 + 200);
            *(_QWORD *)(v17 + 34912) |= *(_QWORD *)(a4 + 200);
          }
          KiAddProcessorToCoreControlBlock(*(unsigned __int8 **)(v17 + 34904), a4);
        }
        if ( ((unsigned int)v55 & *(_DWORD *)(v17 + 212)) >> v68 == v66 )
        {
          KeAddProcessorAffinityEx((unsigned __int16 *)(a4 + 38720), v16);
          KeAddProcessorAffinityEx((unsigned __int16 *)(v17 + 38720), a5);
          v21 = KeCountSetBitsAffinityEx((_WORD *)(v17 + 38720));
          if ( v21 > v59 )
            KeBugCheckEx(0x3Eu, v17, v21, *(unsigned int *)(v17 + 38984), *(unsigned int *)(v17 + 156));
        }
        if ( ((unsigned int)v57 & *(_DWORD *)(v17 + 212)) >> v69 == v56 )
        {
          KeAddProcessorAffinityEx((unsigned __int16 *)(a4 + 39056), v16);
          KeAddProcessorAffinityEx((unsigned __int16 *)(v17 + 39056), a5);
          if ( *(_QWORD *)(a4 + 192) == *(_QWORD *)(v17 + 192) )
          {
            *(_QWORD *)(a4 + 34936) |= *(_QWORD *)(v17 + 200);
            *(_QWORD *)(v17 + 34936) |= *(_QWORD *)(a4 + 200);
          }
          v33 = KeCountSetBitsAffinityEx((_WORD *)(v17 + 39056));
          if ( v33 > v60 )
            KeBugCheckEx(0x3Eu, v17, v33, *(unsigned int *)(v17 + 38988), 1uLL);
        }
        if ( ++v16 >= (unsigned int)KeNumberProcessors_0 )
          break;
        v10 = v61;
        v13 = v52;
      }
      v7 = v70;
      v9 = (_WORD *)(a4 + 39056);
    }
    if ( !*(_QWORD *)(a4 + 34904) )
      KiAddProcessorToCoreControlBlock((unsigned __int8 *)(a4 + 39320), a4);
    v22 = KeCountSetBitsAffinityEx((_WORD *)(a4 + 34576));
    if ( v22 > v58 )
      KeBugCheckEx(0x3Eu, a4, v22, *(unsigned int *)(a4 + 152), *(unsigned int *)(a4 + 156));
    v23 = KeCountSetBitsAffinityEx((_WORD *)(a4 + 38720));
    if ( v23 > v59 )
      KeBugCheckEx(0x3Eu, a4, v23, *(unsigned int *)(a4 + 38984), *(unsigned int *)(a4 + 156));
    v24 = KeCountSetBitsAffinityEx(v9);
    if ( v24 > v60 )
      KeBugCheckEx(0x3Eu, a4, v24, *(unsigned int *)(a4 + 38988), 1uLL);
    v25 = 65471;
  }
  else
  {
    KiDetectFpuLeakage();
    KiFpuLeakage = v34;
    if ( v34 )
      v8 |= 0x20000000000uLL;
    if ( KiFlushPcid )
    {
      v35 = __readcr3();
      __writecr3(v35);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v43 = __readcr4();
      if ( (v43 & 0x20080) != 0 )
      {
        __writecr4(v43 ^ 0x80);
        __writecr4(v43);
      }
      else
      {
        v44 = __readcr3();
        __writecr3(v44);
      }
    }
    KiSetPageAttributesTable();
    if ( MEMORY[0xFFFFF78000000280] )
      v36 = v8 | 0x80000000;
    else
      v36 = v8 & 0xFFFFFFFF3FFFFFFFuLL | 0x40000000;
    BugCheckParameter1 = v36;
    v37 = __readcr4();
    __writecr4(v37 | 0x18);
    if ( KiFlushPcid )
    {
      v38 = __readcr3();
      __writecr3(v38);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v45 = __readcr4();
      if ( (v45 & 0x20080) != 0 )
      {
        __writecr4(v45 ^ 0x80);
        __writecr4(v45);
      }
      else
      {
        v46 = __readcr3();
        __writecr3(v46);
      }
    }
    KiConfigureInitialNodes(a4);
    KiConfigureProcessorBlock(a4);
    *(_DWORD *)(a4 + 34840) = *(_DWORD *)(a4 + 212) & -(*(_DWORD *)(a4 + 152) * *(_DWORD *)(a4 + 156));
    *(_QWORD *)(a4 + 34576) = 2097153LL;
    memset((void *)(a4 + 34584), 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)(a4 + 34576), 0);
    *(_QWORD *)(a4 + 34912) = *(_QWORD *)(a4 + 200);
    KiAddProcessorToCoreControlBlock((unsigned __int8 *)(a4 + 39320), a4);
    v61 = a4;
    v39 = *(_DWORD *)(a4 + 156) * *(_DWORD *)(a4 + 38984) - 1;
    *(_DWORD *)(a4 + 34844) = (*(_DWORD *)(a4 + 212) & ~v39) >> ((0x101010101010101LL
                                                                * ((((v39
                                                                    - (((unsigned __int64)v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                                  + (((v39
                                                                     - (((unsigned __int64)v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                                  + ((((v39
                                                                      - (((unsigned __int64)v39 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                                    + (((v39
                                                                       - (((unsigned __int64)v39 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56);
    *(_QWORD *)(a4 + 38720) = 2097153LL;
    memset((void *)(a4 + 38728), 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)(a4 + 38720), 0);
    *(_QWORD *)(a4 + 34936) = *(_QWORD *)(a4 + 200);
    *(_QWORD *)(a4 + 39056) = 2097153LL;
    memset((void *)(a4 + 39064), 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)(a4 + 39056), 0);
    v25 = 65471;
    v40 = 65471;
    if ( v78[7] )
      v40 = v78[7];
    KiMxCsrMask = v40;
    KeCompactServiceTable(
      (ULONG_PTR)KiServiceTable,
      (unsigned __int8 *)&KiArgumentTable,
      KiServiceLimit,
      0LL,
      0x40000000);
  }
  KiSetCacheInformation();
  PoInitializePrcb((PVOID)a4);
  *(_QWORD *)(a4 + 34968) = 0LL;
  *(_QWORD *)(a4 + 34976) = a4 + 34976;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v26 = BugCheckParameter1 | 0x800000;
    BugCheckParameter1 |= 0x800000uLL;
    XSaveFeatureFlags = KeGetXSaveFeatureFlags();
    if ( (XSaveFeatureFlags & 8) != 0 )
    {
      v26 |= 0x8000uLL;
      BugCheckParameter1 = v26;
    }
    if ( (XSaveFeatureFlags & 0x10) != 0 )
    {
      v26 |= 0x4000000000uLL;
      BugCheckParameter1 = v26;
    }
    if ( (XSaveFeatureFlags & 0x40) != 0 )
      BugCheckParameter1 = v26 | 0x80000000000000LL;
  }
  KiSetControlEnforcement(a4, &BugCheckParameter1);
  v28 = BugCheckParameter1;
  if ( a5 )
  {
    if ( v78[7] )
      v25 = v78[7];
    v29 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    if ( (BugCheckParameter1 & 0x8000000) == 0 )
      v29 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *(_BYTE *)(a4 + 141) == 2 && *(_BYTE *)(a4 + 64) == 6 && *(_BYTE *)(a4 + 67) == 23 && *(_BYTE *)(a4 + 66) == 10 )
    {
      v28 = BugCheckParameter1 & 0xFFFFFFFFFFEFFFFFuLL;
      BugCheckParameter1 &= ~0x100000uLL;
      if ( (*(_DWORD *)(v61 + 35232) & 0x100000) != 0 )
      {
        v28 |= 0x100000uLL;
        BugCheckParameter1 = v28;
      }
    }
    if ( v28 != v29
      || v25 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 232) != *(_DWORD *)(a4 + 232)
      || *(_DWORD *)(KiProcessorBlock[0] + 152) != *(_DWORD *)(a4 + 152)
      || *(_DWORD *)(KiProcessorBlock[0] + 156) != *(_DWORD *)(a4 + 156) )
    {
      KeBugCheckEx(0x3Eu, v28, v29, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v49 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
      SchedulerAssist[5] &= 0xFFFF0007;
      if ( v49 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      v28 = BugCheckParameter1;
    }
    __writecr8(2uLL);
    HvlEnlightenProcessor(0);
  }
  else
  {
    KeProcessorArchitecture = 9;
    KeProcessorLevel = *(char *)(a4 + 64);
    KeProcessorRevision = *(_WORD *)(a4 + 66);
    KeFeatureBits = BugCheckParameter1;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v47 = KeGetCurrentPrcb();
      v48 = v47->SchedulerAssist;
      v49 = (v48[5] & 0xFFFF0003) == 0;
      v48[5] &= 0xFFFF0003;
      if ( v49 )
        KiRemoveSystemWorkPriorityKick((__int64)v47);
      v28 = BugCheckParameter1;
    }
    __writecr8(1uLL);
    KiFreezeExecutionLock = 0LL;
    KiInitSystem(v71);
    v41 = __rdtsc();
    KiWaitNever = __ROR8__(v41 ^ __ROL8__(v41, 43), v41 & 0xF);
    v42 = __rdtsc();
    KiWaitAlways = __ROL8__(__ROR8__(v42, 47) ^ v42, v42 & 0xF);
    HviGetHypervisorFeatures(&v77);
    if ( (WORD6(v77) & 0x1000) != 0 )
      KiNPIEPEnabled = 1;
    if ( (unsigned int)KiIsKernelCfgActive() )
      RtlInitKernelModeSpecialMachineFrameEntries();
  }
  if ( KiNPIEPEnabled )
    __writemsr(0x40000040u, 0xFuLL);
  KiEnableXSave(0LL);
  MEMORY[0xFFFFF780000002F8] = 195LL;
  MEMORY[0xFFFFF78000000276] = 1;
  MEMORY[0xFFFFF78000000277] = 1;
  MEMORY[0xFFFFF7800000027A] = 1;
  MEMORY[0xFFFFF7800000027C] = 1;
  MEMORY[0xFFFFF7800000027D] = 1;
  MEMORY[0xFFFFF7800000027E] = 1;
  MEMORY[0xFFFFF78000000282] = 1;
  if ( (v28 & 0x80000) != 0 )
    MEMORY[0xFFFFF78000000281] = 1;
  if ( (v28 & 0x4000) != 0 )
    MEMORY[0xFFFFF7800000027B] = 1;
  if ( (v28 & 0x800000) != 0 )
    MEMORY[0xFFFFF78000000285] = 1;
  if ( (v28 & 0x10000000) != 0 )
    MEMORY[0xFFFFF7800000028A] = 1;
  if ( (v28 & 0x4000000) != 0 )
    MEMORY[0xFFFFF78000000288] = 1;
  if ( (v28 & 0x8000000) != 0 )
    MEMORY[0xFFFFF78000000289] = 1;
  if ( (v28 & 0x100000000LL) != 0 )
    MEMORY[0xFFFFF78000000290] = 1;
  if ( (v28 & 0x400000000LL) != 0 )
    MEMORY[0xFFFFF78000000294] = 1;
  if ( (v28 & 0x800000000000LL) != 0 )
    MEMORY[0xFFFFF78000000298] = 1;
  if ( (v28 & 0x1000000000000LL) != 0 )
    MEMORY[0xFFFFF78000000299] = 1;
  if ( (v28 & 0x2000000000000LL) != 0 )
    MEMORY[0xFFFFF7800000029A] = 1;
  if ( (MEMORY[0xFFFFF780000003D8] & 4) != 0 && (v28 & 0x4000000000000LL) != 0 )
    MEMORY[0xFFFFF7800000029B] = 1;
  if ( (MEMORY[0xFFFFF780000003D8] & 4) != 0 && (v28 & 0x8000000000000LL) != 0 )
    MEMORY[0xFFFFF7800000029C] = 1;
  if ( (v28 & 0x10000000000000LL) != 0 && (MEMORY[0xFFFFF780000003D8] & 0xE0) != 0 )
    MEMORY[0xFFFFF7800000029D] = 1;
  if ( (v28 & 0x40000000000000LL) != 0 )
    MEMORY[0xFFFFF7800000029E] = 1;
  MEMORY[0xFFFFF780000002ED] = KiVirtFlags;
  v31 = v73;
  KiInitializeIdleThread(v73, v72, v30, a4, v7);
  if ( a5 )
  {
    if ( !HalpInitSystemPhase1() )
      KeBugCheck(0x5Cu);
  }
  else
  {
    InitBootProcessor(v7);
  }
  KiCompleteKernelInit(a4, v31, a5);
  *(_QWORD *)(v7 + 136) = 0LL;
  while ( 1 )
  {
    result = (unsigned int)KiBarrierWait;
    if ( !KiBarrierWait )
      break;
    _mm_pause();
  }
  if ( KiClockTimerPerCpuTickScheduling )
  {
    if ( a5 )
      return KeInitializeClockOtherProcessors(a4);
  }
  return result;
}
