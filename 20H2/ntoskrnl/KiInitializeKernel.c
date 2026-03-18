/*
 * XREFs of KiInitializeKernel @ 0x14099FB00
 * Callers:
 *     KiSystemStartup @ 0x140992010 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287E00 (KeAddProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402EADD0 (KeCountSetBitsAffinityEx.c)
 *     KeCompactServiceTable @ 0x14039F4F4 (KeCompactServiceTable.c)
 *     HvlEnlightenProcessor @ 0x1403A70D8 (HvlEnlightenProcessor.c)
 *     KiSetHardwareSpeculationControlFeatures @ 0x1403A8060 (KiSetHardwareSpeculationControlFeatures.c)
 *     HviGetHypervisorFeatures @ 0x1403A8520 (HviGetHypervisorFeatures.c)
 *     KeGetXSaveFeatureFlags @ 0x1403A8640 (KeGetXSaveFeatureFlags.c)
 *     KiConfigureInitialNodes @ 0x1403B43BC (KiConfigureInitialNodes.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403FBC80 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1403FD230 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140411300 (memset.c)
 *     KiFatalFilter @ 0x140512FF0 (KiFatalFilter.c)
 *     KeInitializeProcess @ 0x1406A71A0 (KeInitializeProcess.c)
 *     HvlPhase0Initialize @ 0x14078C780 (HvlPhase0Initialize.c)
 *     KiDetectFpuLeakage @ 0x1409922A0 (KiDetectFpuLeakage.c)
 *     KiSetPageAttributesTable @ 0x14099C0F0 (KiSetPageAttributesTable.c)
 *     KiCheckMicrocode @ 0x14099DB80 (KiCheckMicrocode.c)
 *     KiEnableXSave @ 0x14099DC84 (KiEnableXSave.c)
 *     HalpInitSystemPhase1 @ 0x14099E76C (HalpInitSystemPhase1.c)
 *     KiCompleteKernelInit @ 0x1409A0420 (KiCompleteKernelInit.c)
 *     KiInitializeIdleThread @ 0x1409A0764 (KiInitializeIdleThread.c)
 *     KiSetControlEnforcement @ 0x1409A0910 (KiSetControlEnforcement.c)
 *     PoInitializePrcb @ 0x1409A09C0 (PoInitializePrcb.c)
 *     KiSetCacheInformation @ 0x1409A0A7C (KiSetCacheInformation.c)
 *     KiConfigureProcessorBlock @ 0x1409A1D50 (KiConfigureProcessorBlock.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     KiInitSystem @ 0x140A6A460 (KiInitSystem.c)
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
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  struct _KPRCB *v48; // rcx
  _DWORD *v49; // rdx
  bool v50; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v53; // [rsp+30h] [rbp-2D8h]
  char v54; // [rsp+31h] [rbp-2D7h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-2D0h] BYREF
  int v56; // [rsp+40h] [rbp-2C8h]
  int v57; // [rsp+44h] [rbp-2C4h]
  ULONG_PTR v58; // [rsp+48h] [rbp-2C0h]
  unsigned int v59; // [rsp+50h] [rbp-2B8h]
  int v60; // [rsp+54h] [rbp-2B4h]
  int v61; // [rsp+58h] [rbp-2B0h]
  int v62; // [rsp+5Ch] [rbp-2ACh]
  __int64 v63; // [rsp+60h] [rbp-2A8h]
  __int64 v64; // [rsp+68h] [rbp-2A0h]
  __int64 v65; // [rsp+70h] [rbp-298h]
  __int128 v66; // [rsp+78h] [rbp-290h] BYREF
  ULONG_PTR v67; // [rsp+88h] [rbp-280h]
  __int64 v68; // [rsp+90h] [rbp-278h]
  __int64 v69; // [rsp+98h] [rbp-270h]
  __int64 v70; // [rsp+A0h] [rbp-268h]
  ULONG_PTR v71; // [rsp+A8h] [rbp-260h]
  __int64 v72; // [rsp+B0h] [rbp-258h]
  __int128 v73; // [rsp+B8h] [rbp-250h] BYREF
  _DWORD v74[128]; // [rsp+D0h] [rbp-238h] BYREF

  v68 = a3;
  v69 = a2;
  v64 = a1;
  v70 = a2;
  v71 = a4;
  v65 = a6;
  v72 = a6;
  v66 = 0LL;
  v73 = 0LL;
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
  memset(v74, 0, sizeof(v74));
  _fxsave(v74);
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
    v58 = a4;
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
      v59 = v12;
      v13 = ~(v12 - 1);
      v60 = v13;
      v14 = *(_DWORD *)(a4 + 212);
      v15 = v13 & v14;
      v61 = v13 & v14;
      *(_DWORD *)(a4 + 33848) = v13 & v14;
      v62 = ~(v11 - 1);
      v56 = v62 & v14;
      v16 = *(_QWORD *)(a4 + 200);
      v63 = v16;
      v53 = 0;
      v17 = 0LL;
      v57 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v18 = v56;
        do
        {
          v67 = v9;
          v54 = v53;
          v19 = KiProcessorBlock[v17];
          if ( (*(_DWORD *)(v19 + 212) & v13) == v15 )
          {
            KeAddProcessorAffinityEx((_WORD *)(a4 + 33680), v17);
            KeAddProcessorAffinityEx((_WORD *)(v19 + 33680), a5);
            v20 = v53;
            if ( !v53 )
              v20 = 1;
            v53 = v20;
            v21 = v19;
            if ( v54 )
              v21 = v67;
            v58 = v21;
            v22 = KeCountSetBitsAffinityEx((unsigned __int16 *)(v19 + 33680));
            v12 = v59;
            if ( v22 > v59 )
              KeBugCheckEx(0x3Eu, v19, v22, *(unsigned int *)(v19 + 152), *(unsigned int *)(v19 + 156));
            LODWORD(v17) = v57;
            v16 = v63;
            v18 = v56;
            v13 = v60;
            v15 = v61;
            v9 = v58;
          }
          if ( (*(_DWORD *)(v19 + 212) & v62) == v18 && *(_QWORD *)(v19 + 192) == *(_QWORD *)(a4 + 192) )
          {
            v16 |= *(_QWORD *)(v19 + 200);
            v63 = v16;
            *(_QWORD *)(v19 + 33880) |= v16;
          }
          v17 = (unsigned int)(v17 + 1);
          v57 = v17;
        }
        while ( (unsigned int)v17 < (unsigned int)KeNumberProcessors_0 );
      }
      v23 = KeCountSetBitsAffinityEx((unsigned __int16 *)(a4 + 33680));
      if ( v23 > v12 )
        KeBugCheckEx(0x3Eu, a4, v23, *(unsigned int *)(a4 + 152), *v10);
      *(_QWORD *)(a4 + 33880) = v63;
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
      v44 = __readcr4();
      if ( (v44 & 0x20080) != 0 )
      {
        __writecr4(v44 ^ 0x80);
        __writecr4(v44);
      }
      else
      {
        v45 = __readcr3();
        __writecr3(v45);
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
      v46 = __readcr4();
      if ( (v46 & 0x20080) != 0 )
      {
        __writecr4(v46 ^ 0x80);
        __writecr4(v46);
      }
      else
      {
        v47 = __readcr3();
        __writecr3(v47);
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
    v58 = a4;
    v24 = 65471;
    v38 = 65471;
    if ( v74[7] )
      v38 = v74[7];
    KiMxCsrMask = v38;
    KeCompactServiceTable(
      (ULONG_PTR)KiServiceTable,
      (unsigned __int8 *)&KiArgumentTable,
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
    if ( v74[7] )
      v24 = v74[7];
    v28 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    if ( (BugCheckParameter1 & 0x8000000) == 0 )
      v28 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *(_BYTE *)(a4 + 141) == 2 && *(_BYTE *)(a4 + 64) == 6 && *(_BYTE *)(a4 + 67) == 23 && *(_BYTE *)(a4 + 66) == 10 )
    {
      v27 = BugCheckParameter1 & 0xFFFFFFFFFFEFFFFFuLL;
      BugCheckParameter1 &= ~0x100000uLL;
      if ( (*(_DWORD *)(v58 + 34208) & 0x100000) != 0 )
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
      v50 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
      SchedulerAssist[5] &= 0xFFFF0007;
      if ( v50 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      v27 = BugCheckParameter1;
    }
    __writecr8(2uLL);
    HvlEnlightenProcessor(0);
    v29 = v64;
  }
  else
  {
    KeProcessorArchitecture = 9;
    KeProcessorLevel = *(char *)(a4 + 64);
    KeProcessorRevision = *(_WORD *)(a4 + 66);
    KeFeatureBits = BugCheckParameter1;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v48 = KeGetCurrentPrcb();
      v49 = v48->SchedulerAssist;
      v50 = (v49[5] & 0xFFFF0003) == 0;
      v49[5] &= 0xFFFF0003;
      if ( v50 )
        KiRemoveSystemWorkPriorityKick((__int64)v48);
      v27 = BugCheckParameter1;
    }
    __writecr8(1uLL);
    KiFreezeExecutionLock = 0LL;
    KiInitSystem();
    qword_140C31AF8 = (__int64)&KiProcessListHead;
    KiProcessListHead = (__int64)&KiProcessListHead;
    *((_QWORD *)&v66 + 1) = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    *(_QWORD *)&v66 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    v29 = v64;
    KeInitializeProcess(v64, 0, (__int64 *)&v66, 0LL, 0LL, 1);
    *(_BYTE *)(v29 + 641) = 127;
    v39 = __rdtsc();
    KiWaitNever = __ROR8__(v39 ^ __ROL8__(v39, 43), v39 & 0xF);
    v40 = __rdtsc();
    v41 = __ROR8__(v40, 47);
    KiWaitAlways = __ROL8__(v41 ^ v40, v40 & 0xF);
    HviGetHypervisorFeatures(&v73, v41, v42, v43);
    if ( (WORD6(v73) & 0x1000) != 0 )
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
  v30 = v69;
  KiInitializeIdleThread(v69, v68, v29, a4);
  if ( v7 )
  {
    if ( !HalpInitSystemPhase1() )
      KeBugCheck(0x5Cu);
    v31 = v65;
  }
  else
  {
    v31 = v65;
    InitBootProcessor(v65);
  }
  result = KiCompleteKernelInit(a4, v30, v7);
  *(_QWORD *)(v31 + 136) = 0LL;
  return result;
}
