/*
 * XREFs of HalpMmAllocCtxAlloc @ 0x14037C598
 * Callers:
 *     HalpIommuGetDeviceId @ 0x140379584 (HalpIommuGetDeviceId.c)
 *     HalpTimerInitSystem @ 0x1403A9340 (HalpTimerInitSystem.c)
 *     HalpIommuAllocateDmaDomain @ 0x1403AD418 (HalpIommuAllocateDmaDomain.c)
 *     HalpAcpiAllocateMemory @ 0x1403BB978 (HalpAcpiAllocateMemory.c)
 *     HalpPteReserveResources @ 0x1403BBD50 (HalpPteReserveResources.c)
 *     HalpLaAddReservation @ 0x1403BC278 (HalpLaAddReservation.c)
 *     HalpDmaInitializeControllers @ 0x1403BC314 (HalpDmaInitializeControllers.c)
 *     HalInitializeBios @ 0x1403C4EE0 (HalInitializeBios.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C5920 (HalpHvInitMcaPcrContext.c)
 *     HalpDmaAllocateDomain @ 0x1403C7388 (HalpDmaAllocateDomain.c)
 *     IommupGetSystemContext @ 0x1403CC184 (IommupGetSystemContext.c)
 *     HalpTscReserveResources @ 0x1403CD198 (HalpTscReserveResources.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x1403EFF34 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpIommuCloneDeviceId @ 0x1403F00C8 (HalpIommuCloneDeviceId.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1403F01F0 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpAllocatePmcCounterSet @ 0x1404BEAB0 (HalpAllocatePmcCounterSet.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1404C22D0 (HalpHvInitMcaStatusMsrCache.c)
 *     HalAllocateCommonBufferVector @ 0x1404C5940 (HalAllocateCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C7218 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C9834 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuTraceFault @ 0x1404C9F7C (HalpIommuTraceFault.c)
 *     HalpNumaAddRangeProximity @ 0x1404D1EA0 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x1404D3000 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x1404D33F8 (EmonAllocateResources.c)
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D5380 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpRegisterUsbController @ 0x1404D74D8 (HalpRegisterUsbController.c)
 *     IommuEnableDevicePasid @ 0x1404D84E0 (IommuEnableDevicePasid.c)
 *     IommuGetLibraryContext @ 0x1404D9010 (IommuGetLibraryContext.c)
 *     IommuMapDevice @ 0x1404D90D0 (IommuMapDevice.c)
 *     IommuDomainAttachDevice @ 0x1404DA620 (IommuDomainAttachDevice.c)
 *     HalpLaInitializeState @ 0x1404DB440 (HalpLaInitializeState.c)
 *     HalpLapSplitNode @ 0x1404DB8EC (HalpLapSplitNode.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x1404DB9D8 (HalpIommuAllocateAndZeroPageTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404DBBFC (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x1404DD700 (Amd64AddProfileSource.c)
 *     HalpIommuCreateDevice @ 0x140864B24 (HalpIommuCreateDevice.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864EF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1408651D8 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpBuildResumeStructures @ 0x14099935C (HalpBuildResumeStructures.c)
 *     HalpMapNvsArea @ 0x140999E28 (HalpMapNvsArea.c)
 *     HalpMapCR3Ex @ 0x14099B2A0 (HalpMapCR3Ex.c)
 *     HalpMcaInitializePcrContext @ 0x1409A116C (HalpMcaInitializePcrContext.c)
 *     HalpInitMemoryCachingRequirementsTable @ 0x1409A19DC (HalpInitMemoryCachingRequirementsTable.c)
 *     HalpMceInitializeErrorPacket @ 0x1409A2010 (HalpMceInitializeErrorPacket.c)
 *     HalpCmciInitializeErrorPacket @ 0x1409A229C (HalpCmciInitializeErrorPacket.c)
 *     HalpAcpiPopulateTableCache @ 0x140A6697C (HalpAcpiPopulateTableCache.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A66B2C (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140A66C64 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaAllocateMappingResources @ 0x140A66DA8 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A66ECC (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A66F28 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A8D8F4 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
 *     HalpMmAllocCtxAllocBuffer @ 0x1403A4DAC (HalpMmAllocCtxAllocBuffer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpMmAllocCtxAlloc(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r14
  KIRQL v6; // al
  __int64 *v7; // rdi
  unsigned __int64 v8; // r12
  unsigned int v9; // r8d
  unsigned int v10; // esi
  __int64 v11; // r11
  unsigned int v12; // r13d
  unsigned int v13; // ecx
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // r10d
  unsigned int v17; // edx
  __int64 v18; // r11
  unsigned __int64 *v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  int v23; // ecx
  unsigned __int64 v24; // rax
  unsigned int v25; // r8d
  bool v26; // cc
  unsigned int v27; // edx
  unsigned int v28; // r13d
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 **v31; // rax
  __int64 v32; // rax
  unsigned int v34; // ecx
  bool v35; // sf
  bool v36; // zf
  __int64 v37; // rax
  unsigned int v38; // r10d
  __int64 v39; // rax
  unsigned __int64 v40; // r10
  __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // esi
  unsigned __int64 *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  unsigned __int64 *v48; // r11
  __int64 v49; // rax
  unsigned int v50; // r10d
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rax
  int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rcx
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r10
  _DWORD *v58; // r9
  int v59; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v63; // eax
  __int64 v64; // [rsp+30h] [rbp-48h]
  int i; // [rsp+38h] [rbp-40h]
  __int64 v66; // [rsp+58h] [rbp-20h]
  unsigned int v67; // [rsp+D0h] [rbp+58h]

  v2 = 0LL;
  if ( !a2 )
    KeBugCheckEx(0xACu, 0LL, 0xA0A0uLL, (ULONG_PTR)"minkernel\\hals\\lib\\mm\\memory.c", 0xC04uLL);
  v3 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = v3 + 16;
  if ( v3 >= 0x1000 )
    v4 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = v4 >> 4;
  if ( v4 >= 0x1000 )
  {
    v4 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v7 = (__int64 *)HalpMmAllocCtxAllocBuffer(4096LL, v4);
    if ( !v7 )
      return v2;
LABEL_30:
    v29 = 0LL;
    LOBYTE(v8) = KeAcquireSpinLockRaiseToDpc(&qword_140C4B030);
    goto LABEL_22;
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C4B030);
  v7 = (__int64 *)HalpNPPoolAllocCtx;
  v8 = v6;
  while ( 2 )
  {
    if ( v7 != &HalpNPPoolAllocCtx )
    {
      v9 = *((_DWORD *)v7 + 8);
      v11 = v7[5];
      v10 = *((_DWORD *)v7 + 6);
      v12 = v10 < v9 ? v10 : 0;
      v13 = v9 - 1;
      if ( !(_DWORD)v5 )
      {
        v28 = v12 & 0xFFFFFFF8;
        goto LABEL_21;
      }
      v14 = v7[5] & 4;
      v64 = v14;
      v15 = v14 != 0 ? 0x20 : 0;
      for ( i = v15; ; v15 = i )
      {
        v16 = v15 + v13;
        v17 = v15 + v12;
        v18 = v11 - (v14 != 0 ? 4 : 0);
        v66 = v18;
        if ( v13 - v12 + 1 >= (unsigned int)v5 )
          break;
        v27 = -1;
LABEL_34:
        if ( !v12 )
          goto LABEL_20;
        v11 = v7[5];
        v34 = v5 + v10;
        v12 = 0;
        if ( (unsigned int)v5 + v10 > v9 )
          v34 = v9;
        v13 = v34 - 1;
      }
      v19 = (unsigned __int64 *)(v18 + 8 * ((unsigned __int64)v17 >> 6));
      v20 = ((1LL << (v17 & 0x3F)) - 1) | *v19;
      v67 = v16 - v5 + 1;
      v21 = (unsigned __int64)v67 >> 6;
      v22 = v18 + 8 * v21;
      if ( (unsigned int)v5 > 0x7F )
      {
        v40 = v22 + 8;
        if ( (v67 & 0x3F) == 0 )
          v40 = v18 + 8 * v21;
        if ( v20 )
        {
          if ( *++v19 )
          {
            v43 = v67;
            goto LABEL_66;
          }
          v36 = !_BitScanReverse64((unsigned __int64 *)&v41, v20);
          if ( v36 )
            v42 = 64;
          else
            v42 = 63 - v41;
        }
        else
        {
          v42 = 0;
        }
        v43 = v67;
LABEL_62:
        v27 = ((unsigned int)(((__int64)v19 - v18) >> 3) << 6) - v42;
        if ( v27 > v43 )
          goto LABEL_32;
        v44 = &v19[(unsigned int)(v5 - v42) >> 6];
        while ( ++v19 != v44 )
        {
          if ( *v19 )
            goto LABEL_66;
        }
        if ( (((_BYTE)v5 - (_BYTE)v42) & 0x3F) != 0 )
        {
          v36 = !_BitScanForward64((unsigned __int64 *)&v46, *v19);
          if ( v36 )
            LODWORD(v46) = 64;
          if ( (unsigned int)v46 < (((_BYTE)v5 - (_BYTE)v42) & 0x3Fu) )
          {
LABEL_66:
            while ( (unsigned __int64)v19 <= v40 )
            {
              if ( !*++v19 )
              {
                v36 = !_BitScanReverse64((unsigned __int64 *)&v45, *(v19 - 1));
                if ( v36 )
                  v42 = 64;
                else
                  v42 = 63 - v45;
                goto LABEL_62;
              }
            }
            goto LABEL_32;
          }
        }
      }
      else
      {
        v23 = 64;
        if ( (unsigned int)v5 < 0x40 )
        {
          if ( (unsigned int)v5 > 1 )
          {
            v47 = 0;
            v48 = (unsigned __int64 *)(v18 + 8 * ((unsigned __int64)v16 >> 6));
            while ( v20 != -1 )
            {
LABEL_80:
              v36 = !_BitScanForward64((unsigned __int64 *)&v49, v20);
              if ( v36 )
                LODWORD(v49) = 64;
              if ( v47 + (int)v49 >= (unsigned int)v5 )
              {
                v53 = -v47;
LABEL_87:
                v27 = ((unsigned int)(((__int64)v19 - v66) >> 3) << 6) + v53;
                v26 = v27 <= v67;
                goto LABEL_17;
              }
              v50 = v4 >> 4;
              v51 = ~v20;
              while ( 1 )
              {
                v51 &= v51 >> (v50 >> 1);
                if ( !v51 )
                  break;
                v50 -= v50 >> 1;
                if ( v50 <= 1 )
                {
                  _BitScanForward64(&v52, v51);
                  v53 = v52;
                  goto LABEL_87;
                }
              }
              if ( v19 == v48 )
                goto LABEL_32;
              v36 = !_BitScanReverse64((unsigned __int64 *)&v54, v20);
              if ( v36 )
                v47 = 64;
              else
                v47 = 63 - v54;
              v20 = *++v19;
            }
            while ( (unsigned __int64)++v19 <= v22 )
            {
              v20 = *v19;
              if ( *v19 != -1LL )
              {
                v47 = 0;
                goto LABEL_80;
              }
            }
          }
          else
          {
            while ( v20 == -1 )
            {
              if ( (unsigned __int64)++v19 > v22 )
                goto LABEL_32;
              v20 = *v19;
            }
            _BitScanForward64(&v24, ~v20);
            v25 = v24 + ((unsigned int)(((__int64)v19 - v18) >> 3) << 6);
            v26 = v25 <= v67;
            v27 = v25;
LABEL_17:
            if ( v26 )
              goto LABEL_18;
          }
LABEL_32:
          v27 = -1;
LABEL_33:
          v10 = *((_DWORD *)v7 + 6);
          v14 = v64;
          v9 = *((_DWORD *)v7 + 8);
          goto LABEL_34;
        }
        do
        {
LABEL_41:
          v35 = v20 < 0;
          do
          {
            if ( v35 )
            {
              if ( (unsigned __int64)++v19 > v22 )
                goto LABEL_32;
              v20 = *v19;
              goto LABEL_41;
            }
            v36 = !_BitScanReverse64((unsigned __int64 *)&v37, v20);
            if ( !v36 )
              v23 = 63 - v37;
            v27 = (((unsigned int)(((__int64)v19 - v18) >> 3) + 1) << 6) - v23;
            if ( v27 > v67 )
              goto LABEL_32;
            v38 = v5 - v23;
            if ( (_DWORD)v5 == v23 )
              goto LABEL_18;
            ++v19;
            v23 = 64;
            v20 = *v19;
            if ( v38 < 0x40 )
              goto LABEL_51;
            v35 = v20 < 0;
          }
          while ( v20 );
          v38 -= 64;
          if ( !v38 )
            break;
          v20 = *++v19;
LABEL_51:
          v36 = !_BitScanForward64((unsigned __int64 *)&v39, v20);
          if ( v36 )
            LODWORD(v39) = 64;
        }
        while ( (unsigned int)v39 < v38 );
      }
LABEL_18:
      if ( v27 != -1 )
      {
        v27 -= i;
LABEL_20:
        v28 = v27;
LABEL_21:
        v29 = v28;
        if ( v28 != 0xFFFFFFFFLL )
        {
LABEL_22:
          RtlSetBits((PRTL_BITMAP)v7 + 2, v29, v5);
          *((_DWORD *)v7 + 6) = v5 + v29;
          v30 = *v7;
          v31 = (__int64 **)v7[1];
          if ( *(__int64 **)(*v7 + 8) != v7
            || *v31 != v7
            || (*v31 = (__int64 *)v30,
                *(_QWORD *)(v30 + 8) = v31,
                v32 = HalpNPPoolAllocCtx,
                *(__int64 **)(HalpNPPoolAllocCtx + 8) != &HalpNPPoolAllocCtx) )
          {
            __fastfail(3u);
          }
          *v7 = HalpNPPoolAllocCtx;
          v7[1] = (__int64)&HalpNPPoolAllocCtx;
          *(_QWORD *)(v32 + 8) = v7;
          HalpNPPoolAllocCtx = (__int64)v7;
          KxReleaseSpinLock(&qword_140C4B030);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                v36 = (v63 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v63;
                if ( v36 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8((unsigned __int8)v8);
          v2 = v7[2] + 16 * v29;
          if ( v4 >= 0x1000 )
          {
            *((_DWORD *)v7 + 7) = v5;
          }
          else
          {
            *(_QWORD *)v2 = v7;
            *(_DWORD *)(v2 + 8) = v5;
            v2 += 16LL;
          }
          return v2;
        }
        v7 = (__int64 *)*v7;
        continue;
      }
      goto LABEL_33;
    }
    break;
  }
  KxReleaseSpinLock(&qword_140C4B030);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v56 = KeGetCurrentIrql();
      if ( v56 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v56 >= 2u )
      {
        v57 = KeGetCurrentPrcb();
        v55 = (unsigned int)(v8 + 1);
        v58 = v57->SchedulerAssist;
        v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v36 = (v59 & v58[5]) == 0;
        v58[5] &= v59;
        if ( v36 )
          KiRemoveSystemWorkPriorityKick(v57);
      }
    }
  }
  __writecr8(v8);
  v7 = (__int64 *)HalpMmAllocCtxAllocBuffer(v55, 0x4000LL);
  if ( v7 )
    goto LABEL_30;
  return v2;
}
