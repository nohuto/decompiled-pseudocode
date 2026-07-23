/*
 * XREFs of KiInitializeKernel @ 0x14099E6F0
 * Callers:
 *     KiSystemStartup @ 0x140990010 (KiSystemStartup.c)
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x140269420 (KeCountSetBitsAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     KeCompactServiceTable @ 0x14039F284 (KeCompactServiceTable.c)
 *     HvlEnlightenProcessor @ 0x1403A7AE8 (HvlEnlightenProcessor.c)
 *     KiSetHardwareSpeculationControlFeatures @ 0x1403ADD20 (KiSetHardwareSpeculationControlFeatures.c)
 *     HviGetHypervisorFeatures @ 0x1403AE350 (HviGetHypervisorFeatures.c)
 *     KeGetXSaveFeatureFlags @ 0x1403AE470 (KeGetXSaveFeatureFlags.c)
 *     KiConfigureInitialNodes @ 0x1403B5BAC (KiConfigureInitialNodes.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403FE0B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1403FF6D0 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiFatalFilter @ 0x140514D70 (KiFatalFilter.c)
 *     KeInitializeProcess @ 0x1406AD59C (KeInitializeProcess.c)
 *     HvlPhase0Initialize @ 0x140796EFC (HvlPhase0Initialize.c)
 *     KiDetectFpuLeakage @ 0x1409902A0 (KiDetectFpuLeakage.c)
 *     KiSetPageAttributesTable @ 0x14099A66C (KiSetPageAttributesTable.c)
 *     KiCheckMicrocode @ 0x14099C100 (KiCheckMicrocode.c)
 *     KiEnableXSave @ 0x14099C204 (KiEnableXSave.c)
 *     HalpInitSystemPhase1 @ 0x14099D08C (HalpInitSystemPhase1.c)
 *     KiCompleteKernelInit @ 0x14099F010 (KiCompleteKernelInit.c)
 *     KiInitializeIdleThread @ 0x14099F354 (KiInitializeIdleThread.c)
 *     KiSetControlEnforcement @ 0x14099F500 (KiSetControlEnforcement.c)
 *     PoInitializePrcb @ 0x14099F5B0 (PoInitializePrcb.c)
 *     KiSetCacheInformation @ 0x14099F66C (KiSetCacheInformation.c)
 *     KiConfigureProcessorBlock @ 0x1409A0554 (KiConfigureProcessorBlock.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     KiInitSystem @ 0x140A689D0 (KiInitSystem.c)
 */

__int64 __fastcall KiInitializeKernel(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, int a5, __int64 a6)
{
  unsigned int v7; // r13d
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // r11
  unsigned int *v10; // r12
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // r9d
  int v14; // ecx
  int v15; // r10d
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  ULONG_PTR v19; // r15
  char v20; // al
  ULONG_PTR v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // r15d
  ULONG_PTR v25; // rbx
  char XSaveFeatureFlags; // al
  ULONG_PTR v27; // rbx
  ULONG_PTR v28; // r8
  __int64 v29; // r15
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 result; // rax
  int v33; // eax
  unsigned __int64 v34; // rax
  ULONG_PTR v35; // rbx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  int v38; // eax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  bool v47; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v50; // [rsp+30h] [rbp-2D8h]
  char v51; // [rsp+31h] [rbp-2D7h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-2D0h] BYREF
  int v53; // [rsp+40h] [rbp-2C8h]
  int v54; // [rsp+44h] [rbp-2C4h]
  ULONG_PTR v55; // [rsp+48h] [rbp-2C0h]
  unsigned int v56; // [rsp+50h] [rbp-2B8h]
  int v57; // [rsp+54h] [rbp-2B4h]
  int v58; // [rsp+58h] [rbp-2B0h]
  int v59; // [rsp+5Ch] [rbp-2ACh]
  __int64 v60; // [rsp+60h] [rbp-2A8h]
  __int64 v61; // [rsp+68h] [rbp-2A0h]
  __int64 v62; // [rsp+70h] [rbp-298h]
  __int128 v63; // [rsp+78h] [rbp-290h] BYREF
  ULONG_PTR v64; // [rsp+88h] [rbp-280h]
  __int64 v65; // [rsp+90h] [rbp-278h]
  __int64 v66; // [rsp+98h] [rbp-270h]
  __int64 v67; // [rsp+A0h] [rbp-268h]
  ULONG_PTR v68; // [rsp+A8h] [rbp-260h]
  __int64 v69; // [rsp+B0h] [rbp-258h]
  __int128 v70; // [rsp+B8h] [rbp-250h] BYREF
  _DWORD v71[128]; // [rsp+D0h] [rbp-238h] BYREF

  v65 = a3;
  v66 = a2;
  v61 = a1;
  v67 = a2;
  v68 = a4;
  v62 = a6;
  v69 = a6;
  v63 = 0LL;
  v70 = 0LL;
  v7 = a5;
  if ( !a5 )
  {
    HvlPhase0Initialize(a6);
    if ( KiSystemCallSelector == 1 && (HvlEnlightenments & 0x80000) != 0 )
      MEMORY[0xFFFFF78000000308] = 1;
  }
  v8 = *(_QWORD *)(a4 + 34208);
  BugCheckParameter1 = v8;
  if ( (unsigned __int8)(*(_BYTE *)(a4 + 141) - 1) <= 2u )
    KiSetHardwareSpeculationControlFeatures(a4, v8);
  KiCheckMicrocode(a4);
  memset(v71, 0, sizeof(v71));
  _fxsave(v71);
  if ( a5 )
  {
    if ( KiFpuLeakage )
      BugCheckParameter1 = v8 | 0x20000000000LL;
    KiSetPageAttributesTable();
    *(_DWORD *)(a4 + 33680) = 1310721;
    *(_DWORD *)(a4 + 33684) = 0;
    memset((void *)(a4 + 33688), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 33680), a5);
    v9 = a4;
    v55 = a4;
    v10 = (unsigned int *)(a4 + 156);
    if ( *(_QWORD *)(a4 + 152) == 0x100000001LL )
    {
      *(_QWORD *)(a4 + 33880) = *(_QWORD *)(a4 + 200);
      *(_DWORD *)(a4 + 33848) = *(_DWORD *)(a4 + 212);
    }
    else
    {
      v11 = *v10;
      v12 = *v10 * *(_DWORD *)(a4 + 152);
      v56 = v12;
      v13 = ~(v12 - 1);
      v57 = v13;
      v14 = *(_DWORD *)(a4 + 212);
      v15 = v13 & v14;
      v58 = v13 & v14;
      *(_DWORD *)(a4 + 33848) = v13 & v14;
      v59 = ~(v11 - 1);
      v53 = v59 & v14;
      v16 = *(_QWORD *)(a4 + 200);
      v60 = v16;
      v50 = 0;
      v17 = 0LL;
      v54 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v18 = v53;
        do
        {
          v64 = v9;
          v51 = v50;
          v19 = KiProcessorBlock[v17];
          if ( (*(_DWORD *)(v19 + 212) & v13) == v15 )
          {
            KeAddProcessorAffinityEx((_WORD *)(a4 + 33680), v17);
            KeAddProcessorAffinityEx((_WORD *)(v19 + 33680), a5);
            v20 = v50;
            if ( !v50 )
              v20 = 1;
            v50 = v20;
            v21 = v19;
            if ( v51 )
              v21 = v64;
            v55 = v21;
            v22 = KeCountSetBitsAffinityEx((unsigned __int16 *)(v19 + 33680));
            v12 = v56;
            if ( v22 > v56 )
              KeBugCheckEx(0x3Eu, v19, v22, *(unsigned int *)(v19 + 152), *(unsigned int *)(v19 + 156));
            LODWORD(v17) = v54;
            v16 = v60;
            v18 = v53;
            v13 = v57;
            v15 = v58;
            v9 = v55;
          }
          if ( (*(_DWORD *)(v19 + 212) & v59) == v18 && *(_QWORD *)(v19 + 192) == *(_QWORD *)(a4 + 192) )
          {
            v16 |= *(_QWORD *)(v19 + 200);
            v60 = v16;
            *(_QWORD *)(v19 + 33880) |= v16;
          }
          v17 = (unsigned int)(v17 + 1);
          v54 = v17;
        }
        while ( (unsigned int)v17 < (unsigned int)KeNumberProcessors_0 );
      }
      v23 = KeCountSetBitsAffinityEx((unsigned __int16 *)(a4 + 33680));
      if ( v23 > v12 )
        KeBugCheckEx(0x3Eu, a4, v23, *(unsigned int *)(a4 + 152), *v10);
      *(_QWORD *)(a4 + 33880) = v60;
    }
    v7 = a5;
    v24 = 65471;
  }
  else
  {
    KiDetectFpuLeakage();
    KiFpuLeakage = v33;
    if ( v33 )
      v8 |= 0x20000000000uLL;
    if ( KiFlushPcid )
    {
      v34 = __readcr3();
      __writecr3(v34);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v41 = __readcr4();
      if ( (v41 & 0x20080) != 0 )
      {
        __writecr4(v41 ^ 0x80);
        __writecr4(v41);
      }
      else
      {
        v42 = __readcr3();
        __writecr3(v42);
      }
    }
    KiSetPageAttributesTable();
    if ( MEMORY[0xFFFFF78000000280] )
      v35 = v8 | 0x80000000;
    else
      v35 = v8 & 0xFFFFFFFF3FFFFFFFuLL | 0x40000000;
    BugCheckParameter1 = v35;
    v36 = __readcr4();
    __writecr4(v36 | 0x18);
    if ( KiFlushPcid )
    {
      v37 = __readcr3();
      __writecr3(v37);
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
    KiConfigureInitialNodes(a4);
    KiConfigureProcessorBlock(a4);
    v10 = (unsigned int *)(a4 + 156);
    *(_DWORD *)(a4 + 33848) = -(*(_DWORD *)(a4 + 152) * *(_DWORD *)(a4 + 156)) & *(_DWORD *)(a4 + 212);
    *(_DWORD *)(a4 + 33680) = 1310721;
    *(_DWORD *)(a4 + 33684) = 0;
    memset((void *)(a4 + 33688), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 33680), 0);
    *(_QWORD *)(a4 + 33880) = *(_QWORD *)(a4 + 200);
    v55 = a4;
    v24 = 65471;
    v38 = 65471;
    if ( v71[7] )
      v38 = v71[7];
    KiMxCsrMask = v38;
    KeCompactServiceTable(
      (ULONG_PTR)KiServiceTable,
      (unsigned __int8 *)KiArgumentTable,
      KiServiceLimit,
      0LL,
      0x40000000);
  }
  KiSetCacheInformation();
  PoInitializePrcb((PVOID)a4);
  *(_QWORD *)(a4 + 33944) = 0LL;
  *(_QWORD *)(a4 + 33952) = a4 + 33952;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v25 = BugCheckParameter1 | 0x800000;
    BugCheckParameter1 |= 0x800000uLL;
    XSaveFeatureFlags = KeGetXSaveFeatureFlags();
    if ( (XSaveFeatureFlags & 8) != 0 )
    {
      v25 |= 0x8000uLL;
      BugCheckParameter1 = v25;
    }
    if ( (XSaveFeatureFlags & 0x10) != 0 )
      BugCheckParameter1 = v25 | 0x4000000000LL;
  }
  KiSetControlEnforcement(a4, &BugCheckParameter1);
  v27 = BugCheckParameter1;
  if ( v7 )
  {
    if ( v71[7] )
      v24 = v71[7];
    v28 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    if ( (BugCheckParameter1 & 0x8000000) == 0 )
      v28 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *(_BYTE *)(a4 + 141) == 2 && *(_BYTE *)(a4 + 64) == 6 && *(_BYTE *)(a4 + 67) == 23 && *(_BYTE *)(a4 + 66) == 10 )
    {
      v27 = BugCheckParameter1 & 0xFFFFFFFFFFEFFFFFuLL;
      BugCheckParameter1 &= ~0x100000uLL;
      if ( (*(_DWORD *)(v55 + 34208) & 0x100000) != 0 )
      {
        v27 |= 0x100000uLL;
        BugCheckParameter1 = v27;
      }
    }
    if ( v27 != v28
      || v24 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 232) != *(_DWORD *)(a4 + 232)
      || *(_DWORD *)(KiProcessorBlock[0] + 152) != *(_DWORD *)(a4 + 152)
      || *(_DWORD *)(KiProcessorBlock[0] + 156) != *v10 )
    {
      KeBugCheckEx(0x3Eu, v27, v28, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v47 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
      SchedulerAssist[5] &= 0xFFFF0007;
      if ( v47 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      v27 = BugCheckParameter1;
    }
    __writecr8(2uLL);
    HvlEnlightenProcessor(0);
    v29 = v61;
  }
  else
  {
    KeProcessorArchitecture = 9;
    KeProcessorLevel = *(char *)(a4 + 64);
    KeProcessorRevision = *(_WORD *)(a4 + 66);
    KeFeatureBits = BugCheckParameter1;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v45 = KeGetCurrentPrcb();
      v46 = v45->SchedulerAssist;
      v47 = (v46[5] & 0xFFFF0003) == 0;
      v46[5] &= 0xFFFF0003;
      if ( v47 )
        KiRemoveSystemWorkPriorityKick((__int64)v45);
      v27 = BugCheckParameter1;
    }
    __writecr8(1uLL);
    KiFreezeExecutionLock = 0LL;
    KiInitSystem();
    qword_140C31C08 = (__int64)&KiProcessListHead;
    KiProcessListHead = (__int64)&KiProcessListHead;
    *((_QWORD *)&v63 + 1) = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    *(_QWORD *)&v63 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    v29 = v61;
    KeInitializeProcess(v61, 0, (__int64 *)&v63, 0LL, 0LL, 1);
    *(_BYTE *)(v29 + 641) = 127;
    v39 = __rdtsc();
    KiWaitNever = __ROR8__(v39 ^ __ROL8__(v39, 43), v39 & 0xF);
    v40 = __rdtsc();
    KiWaitAlways = __ROL8__(__ROR8__(v40, 47) ^ v40, v40 & 0xF);
    HviGetHypervisorFeatures(&v70);
    if ( (WORD6(v70) & 0x1000) != 0 )
      KiNPIEPEnabled = 1;
  }
  if ( KiNPIEPEnabled )
    __writemsr(0x40000040u, 0xFuLL);
  KiEnableXSave();
  MEMORY[0xFFFFF780000002F8] = 195LL;
  MEMORY[0xFFFFF78000000276] = 1;
  MEMORY[0xFFFFF78000000277] = 1;
  MEMORY[0xFFFFF7800000027A] = 1;
  MEMORY[0xFFFFF7800000027C] = 1;
  MEMORY[0xFFFFF7800000027D] = 1;
  MEMORY[0xFFFFF7800000027E] = 1;
  MEMORY[0xFFFFF78000000282] = 1;
  if ( (v27 & 0x80000) != 0 )
    MEMORY[0xFFFFF78000000281] = 1;
  if ( (v27 & 0x4000) != 0 )
    MEMORY[0xFFFFF7800000027B] = 1;
  if ( (v27 & 0x800000) != 0 )
    MEMORY[0xFFFFF78000000285] = 1;
  if ( (v27 & 0x10000000) != 0 )
    MEMORY[0xFFFFF7800000028A] = 1;
  if ( (v27 & 0x4000000) != 0 )
    MEMORY[0xFFFFF78000000288] = 1;
  if ( (v27 & 0x8000000) != 0 )
    MEMORY[0xFFFFF78000000289] = 1;
  if ( (v27 & 0x100000000LL) != 0 )
    MEMORY[0xFFFFF78000000290] = 1;
  if ( (v27 & 0x400000000LL) != 0 )
    MEMORY[0xFFFFF78000000294] = 1;
  if ( (v27 & 0x800000000000LL) != 0 )
    MEMORY[0xFFFFF78000000298] = 1;
  if ( (v27 & 0x1000000000000LL) != 0 )
    MEMORY[0xFFFFF78000000299] = 1;
  if ( (v27 & 0x2000000000000LL) != 0 )
    MEMORY[0xFFFFF7800000029A] = 1;
  if ( (MEMORY[0xFFFFF780000003D8] & 4) != 0 && (v27 & 0x4000000000000LL) != 0 )
    MEMORY[0xFFFFF7800000029B] = 1;
  if ( (MEMORY[0xFFFFF780000003D8] & 4) != 0 && (v27 & 0x8000000000000LL) != 0 )
    MEMORY[0xFFFFF7800000029C] = 1;
  if ( (v27 & 0x10000000000000LL) != 0 && (MEMORY[0xFFFFF780000003D8] & 0xE0) != 0 )
    MEMORY[0xFFFFF7800000029D] = 1;
  MEMORY[0xFFFFF780000002ED] = KiVirtFlags;
  v30 = v66;
  KiInitializeIdleThread(v66, v65, v29, a4);
  if ( v7 )
  {
    if ( !HalpInitSystemPhase1() )
      KeBugCheck(0x5Cu);
    v31 = v62;
  }
  else
  {
    v31 = v62;
    InitBootProcessor(v62);
  }
  result = KiCompleteKernelInit(a4, v30, v7);
  *(_QWORD *)(v31 + 136) = 0LL;
  return result;
}
