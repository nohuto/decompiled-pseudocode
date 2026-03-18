/*
 * XREFs of KiInitializeKernel @ 0x1409999E0
 * Callers:
 *     KiSystemStartup @ 0x14098C010 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14021E120 (KeAddProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FD690 (KeCountSetBitsAffinityEx.c)
 *     KeCompactServiceTable @ 0x14039C3A4 (KeCompactServiceTable.c)
 *     HvlEnlightenProcessor @ 0x1403A4CD8 (HvlEnlightenProcessor.c)
 *     KiSetHardwareSpeculationControlFeatures @ 0x1403A5C60 (KiSetHardwareSpeculationControlFeatures.c)
 *     HviGetHypervisorFeatures @ 0x1403A5FA0 (HviGetHypervisorFeatures.c)
 *     KeGetXSaveFeatureFlags @ 0x1403A60C0 (KeGetXSaveFeatureFlags.c)
 *     KiConfigureInitialNodes @ 0x1403B1A4C (KiConfigureInitialNodes.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403F70B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1403F82A0 (KiSetUserTbFlushPending.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiFatalFilter @ 0x14050F6C0 (KiFatalFilter.c)
 *     KeInitializeProcess @ 0x140613C3C (KeInitializeProcess.c)
 *     HvlPhase0Initialize @ 0x14077F23C (HvlPhase0Initialize.c)
 *     KiDetectFpuLeakage @ 0x14098C2A0 (KiDetectFpuLeakage.c)
 *     KiSetPageAttributesTable @ 0x1409960B8 (KiSetPageAttributesTable.c)
 *     KiCheckMicrocode @ 0x140997B40 (KiCheckMicrocode.c)
 *     KiEnableXSave @ 0x140997C44 (KiEnableXSave.c)
 *     HalpInitSystemPhase1 @ 0x14099872C (HalpInitSystemPhase1.c)
 *     KiCompleteKernelInit @ 0x14099A314 (KiCompleteKernelInit.c)
 *     KiInitializeIdleThread @ 0x14099A658 (KiInitializeIdleThread.c)
 *     KiSetControlEnforcement @ 0x14099A804 (KiSetControlEnforcement.c)
 *     PoInitializePrcb @ 0x14099A8B4 (PoInitializePrcb.c)
 *     KiSetCacheInformation @ 0x14099A970 (KiSetCacheInformation.c)
 *     KiConfigureProcessorBlock @ 0x14099BC50 (KiConfigureProcessorBlock.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     KiInitSystem @ 0x140A63190 (KiInitSystem.c)
 */

__int64 __fastcall KiInitializeKernel(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, int a5, __int64 a6)
{
  unsigned int v7; // r13d
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // r11
  int v10; // ecx
  _BYTE *v11; // r12
  int v12; // eax
  int v13; // r9d
  int v14; // ecx
  int v15; // r10d
  __int64 v16; // rbx
  char v17; // r15
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r8d
  ULONG_PTR v21; // r15
  char v22; // al
  ULONG_PTR v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // r15d
  ULONG_PTR v27; // rbx
  char XSaveFeatureFlags; // al
  ULONG_PTR v29; // rbx
  ULONG_PTR v30; // r8
  __int64 v31; // r15
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 result; // rax
  int v35; // eax
  unsigned __int64 v36; // rax
  ULONG_PTR v37; // rbx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  int v40; // eax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rax
  struct _KPRCB *v50; // rcx
  _DWORD *v51; // rdx
  bool v52; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v55; // [rsp+30h] [rbp-2D8h]
  char v56; // [rsp+31h] [rbp-2D7h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-2D0h] BYREF
  int v58; // [rsp+40h] [rbp-2C8h]
  int v59; // [rsp+44h] [rbp-2C4h]
  int v60; // [rsp+48h] [rbp-2C0h]
  unsigned int v61; // [rsp+4Ch] [rbp-2BCh]
  ULONG_PTR v62; // [rsp+50h] [rbp-2B8h]
  int v63; // [rsp+58h] [rbp-2B0h]
  int v64; // [rsp+5Ch] [rbp-2ACh]
  __int64 v65; // [rsp+60h] [rbp-2A8h]
  __int64 v66; // [rsp+68h] [rbp-2A0h]
  __int64 v67; // [rsp+70h] [rbp-298h]
  __int128 v68; // [rsp+78h] [rbp-290h] BYREF
  ULONG_PTR v69; // [rsp+88h] [rbp-280h]
  __int64 v70; // [rsp+90h] [rbp-278h]
  __int64 v71; // [rsp+98h] [rbp-270h]
  __int64 v72; // [rsp+A0h] [rbp-268h]
  ULONG_PTR v73; // [rsp+A8h] [rbp-260h]
  __int64 v74; // [rsp+B0h] [rbp-258h]
  __int128 v75; // [rsp+B8h] [rbp-250h] BYREF
  _DWORD v76[128]; // [rsp+D0h] [rbp-238h] BYREF

  v70 = a3;
  v71 = a2;
  v66 = a1;
  v72 = a2;
  v73 = a4;
  v67 = a6;
  v74 = a6;
  v68 = 0LL;
  v75 = 0LL;
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
  memset(v76, 0, sizeof(v76));
  _fxsave(v76);
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
    v62 = a4;
    v10 = *(unsigned __int8 *)(a4 + 142);
    v11 = (_BYTE *)(a4 + 143);
    if ( *(_WORD *)(a4 + 142) == 257 )
    {
      *(_QWORD *)(a4 + 33880) = *(_QWORD *)(a4 + 200);
      *(_DWORD *)(a4 + 33848) = *(_DWORD *)(a4 + 212);
    }
    else
    {
      v12 = (unsigned __int8)*v11;
      v61 = v12 * v10;
      v13 = ~(v12 * v10 - 1);
      v63 = v13;
      v14 = *(_DWORD *)(a4 + 212);
      v15 = v13 & v14;
      v64 = v13 & v14;
      *(_DWORD *)(a4 + 33848) = v13 & v14;
      v58 = ~(v12 - 1);
      v59 = v58 & v14;
      v16 = *(_QWORD *)(a4 + 200);
      v65 = v16;
      v17 = 0;
      v55 = 0;
      v18 = 0LL;
      v60 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v19 = v58;
        v20 = v59;
        while ( 1 )
        {
          v69 = v9;
          v56 = v17;
          v21 = KiProcessorBlock[v18];
          if ( (v13 & *(_DWORD *)(v21 + 212)) == v15 )
          {
            KeAddProcessorAffinityEx((_WORD *)(a4 + 33680), v18);
            KeAddProcessorAffinityEx((_WORD *)(v21 + 33680), a5);
            v22 = v55;
            if ( !v55 )
              v22 = 1;
            v55 = v22;
            v23 = v21;
            if ( v56 )
              v23 = v69;
            v62 = v23;
            v24 = KeCountSetBitsAffinityEx((unsigned __int16 *)(v21 + 33680));
            if ( v24 > v61 )
              KeBugCheckEx(0x3Eu, v21, v24, *(unsigned __int8 *)(v21 + 142), *(unsigned __int8 *)(v21 + 143));
            LODWORD(v18) = v60;
            v16 = v65;
            v19 = v58;
            v20 = v59;
            v13 = v63;
            v15 = v64;
            v9 = v62;
          }
          if ( (v19 & *(_DWORD *)(v21 + 212)) == v20 && *(_QWORD *)(v21 + 192) == *(_QWORD *)(a4 + 192) )
          {
            v16 |= *(_QWORD *)(v21 + 200);
            v65 = v16;
            *(_QWORD *)(v21 + 33880) |= v16;
          }
          v18 = (unsigned int)(v18 + 1);
          v60 = v18;
          if ( (unsigned int)v18 >= (unsigned int)KeNumberProcessors_0 )
            break;
          v17 = v55;
        }
      }
      v25 = KeCountSetBitsAffinityEx((unsigned __int16 *)(a4 + 33680));
      if ( v25 > v61 )
        KeBugCheckEx(0x3Eu, a4, v25, *(unsigned __int8 *)(a4 + 142), (unsigned __int8)*v11);
      *(_QWORD *)(a4 + 33880) = v16;
    }
    v7 = a5;
    v26 = 65471;
  }
  else
  {
    KiDetectFpuLeakage();
    KiFpuLeakage = v35;
    if ( v35 )
      v8 |= 0x20000000000uLL;
    if ( KiFlushPcid )
    {
      v36 = __readcr3();
      __writecr3(v36);
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
    KiSetPageAttributesTable();
    if ( MEMORY[0xFFFFF78000000280] )
      v37 = v8 | 0x80000000;
    else
      v37 = v8 & 0xFFFFFFFF3FFFFFFFuLL | 0x40000000;
    BugCheckParameter1 = v37;
    v38 = __readcr4();
    __writecr4(v38 | 0x18);
    if ( KiFlushPcid )
    {
      v39 = __readcr3();
      __writecr3(v39);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v48 = __readcr4();
      if ( (v48 & 0x20080) != 0 )
      {
        __writecr4(v48 ^ 0x80);
        __writecr4(v48);
      }
      else
      {
        v49 = __readcr3();
        __writecr3(v49);
      }
    }
    KiConfigureInitialNodes(a4);
    KiConfigureProcessorBlock(a4);
    v11 = (_BYTE *)(a4 + 143);
    *(_DWORD *)(a4 + 33848) = -(*(unsigned __int8 *)(a4 + 142) * *(unsigned __int8 *)(a4 + 143)) & *(_DWORD *)(a4 + 212);
    *(_DWORD *)(a4 + 33680) = 1310721;
    *(_DWORD *)(a4 + 33684) = 0;
    memset((void *)(a4 + 33688), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 33680), 0);
    *(_QWORD *)(a4 + 33880) = *(_QWORD *)(a4 + 200);
    v62 = a4;
    v26 = 65471;
    v40 = 65471;
    if ( v76[7] )
      v40 = v76[7];
    KiMxCsrMask = v40;
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
    v27 = BugCheckParameter1 | 0x800000;
    BugCheckParameter1 |= 0x800000uLL;
    XSaveFeatureFlags = KeGetXSaveFeatureFlags();
    if ( (XSaveFeatureFlags & 8) != 0 )
    {
      v27 |= 0x8000uLL;
      BugCheckParameter1 = v27;
    }
    if ( (XSaveFeatureFlags & 0x10) != 0 )
      BugCheckParameter1 = v27 | 0x4000000000LL;
  }
  KiSetControlEnforcement(a4, &BugCheckParameter1);
  v29 = BugCheckParameter1;
  if ( v7 )
  {
    if ( v76[7] )
      v26 = v76[7];
    v30 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    if ( (BugCheckParameter1 & 0x8000000) == 0 )
      v30 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *(_BYTE *)(a4 + 141) == 2 && *(_BYTE *)(a4 + 64) == 6 && *(_BYTE *)(a4 + 67) == 23 && *(_BYTE *)(a4 + 66) == 10 )
    {
      v29 = BugCheckParameter1 & 0xFFFFFFFFFFEFFFFFuLL;
      BugCheckParameter1 &= ~0x100000uLL;
      if ( (*(_DWORD *)(v62 + 34208) & 0x100000) != 0 )
      {
        v29 |= 0x100000uLL;
        BugCheckParameter1 = v29;
      }
    }
    if ( v29 != v30
      || v26 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 232) != *(_DWORD *)(a4 + 232)
      || *(_BYTE *)(KiProcessorBlock[0] + 142) != *(_BYTE *)(a4 + 142)
      || *(_BYTE *)(KiProcessorBlock[0] + 143) != *v11 )
    {
      KeBugCheckEx(0x3Eu, v29, v30, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v52 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
      SchedulerAssist[5] &= 0xFFFF0007;
      if ( v52 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      v29 = BugCheckParameter1;
    }
    __writecr8(2uLL);
    HvlEnlightenProcessor(0);
    v31 = v66;
  }
  else
  {
    KeProcessorArchitecture = 9;
    KeProcessorLevel = *(char *)(a4 + 64);
    KeProcessorRevision = *(_WORD *)(a4 + 66);
    KeFeatureBits = BugCheckParameter1;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v50 = KeGetCurrentPrcb();
      v51 = v50->SchedulerAssist;
      v52 = (v51[5] & 0xFFFF0003) == 0;
      v51[5] &= 0xFFFF0003;
      if ( v52 )
        KiRemoveSystemWorkPriorityKick((__int64)v50);
      v29 = BugCheckParameter1;
    }
    __writecr8(1uLL);
    KiFreezeExecutionLock = 0LL;
    KiInitSystem();
    qword_140C31A28 = (__int64)&KiProcessListHead;
    KiProcessListHead = (__int64)&KiProcessListHead;
    *((_QWORD *)&v68 + 1) = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    *(_QWORD *)&v68 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    v31 = v66;
    KeInitializeProcess(v66, 0, (__int64 *)&v68, 0LL, 0LL, 1);
    *(_BYTE *)(v31 + 641) = 127;
    v41 = __rdtsc();
    KiWaitNever = __ROR8__(v41 ^ __ROL8__(v41, 43), v41 & 0xF);
    v42 = __rdtsc();
    v43 = __ROR8__(v42, 47);
    KiWaitAlways = __ROL8__(v43 ^ v42, v42 & 0xF);
    HviGetHypervisorFeatures(&v75, v43, v44, v45);
    if ( (WORD6(v75) & 0x1000) != 0 )
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
  if ( (v29 & 0x80000) != 0 )
    MEMORY[0xFFFFF78000000281] = 1;
  if ( (v29 & 0x4000) != 0 )
    MEMORY[0xFFFFF7800000027B] = 1;
  if ( (v29 & 0x800000) != 0 )
    MEMORY[0xFFFFF78000000285] = 1;
  if ( (v29 & 0x10000000) != 0 )
    MEMORY[0xFFFFF7800000028A] = 1;
  if ( (v29 & 0x4000000) != 0 )
    MEMORY[0xFFFFF78000000288] = 1;
  if ( (v29 & 0x8000000) != 0 )
    MEMORY[0xFFFFF78000000289] = 1;
  if ( (v29 & 0x100000000LL) != 0 )
    MEMORY[0xFFFFF78000000290] = 1;
  if ( (v29 & 0x400000000LL) != 0 )
    MEMORY[0xFFFFF78000000294] = 1;
  if ( (v29 & 0x800000000000LL) != 0 )
    MEMORY[0xFFFFF78000000298] = 1;
  if ( (v29 & 0x1000000000000LL) != 0 )
    MEMORY[0xFFFFF78000000299] = 1;
  if ( (v29 & 0x2000000000000LL) != 0 )
    MEMORY[0xFFFFF7800000029A] = 1;
  if ( (MEMORY[0xFFFFF780000003D8] & 4) != 0 && (v29 & 0x4000000000000LL) != 0 )
    MEMORY[0xFFFFF7800000029B] = 1;
  if ( (MEMORY[0xFFFFF780000003D8] & 4) != 0 && (v29 & 0x8000000000000LL) != 0 )
    MEMORY[0xFFFFF7800000029C] = 1;
  if ( (v29 & 0x10000000000000LL) != 0 && (MEMORY[0xFFFFF780000003D8] & 0xE0) != 0 )
    MEMORY[0xFFFFF7800000029D] = 1;
  MEMORY[0xFFFFF780000002ED] = KiVirtFlags;
  v32 = v71;
  KiInitializeIdleThread(v71, v70, v31, a4);
  if ( v7 )
  {
    if ( !HalpInitSystemPhase1() )
      KeBugCheck(0x5Cu);
    v33 = v67;
  }
  else
  {
    v33 = v67;
    InitBootProcessor(v67);
  }
  result = KiCompleteKernelInit(a4, v32, v7);
  *(_QWORD *)(v33 + 136) = 0LL;
  return result;
}
