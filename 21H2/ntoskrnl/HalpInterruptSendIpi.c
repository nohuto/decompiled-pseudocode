/*
 * XREFs of HalpInterruptSendIpi @ 0x1402ADD00
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140207F60 (KeSetSchedulingGroupRankBias.c)
 *     KeCpuSetReportParkedProcessors @ 0x14020E1DC (KeCpuSetReportParkedProcessors.c)
 *     KiSetLegacyAffinityThread @ 0x14020E6EC (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x14020E9E8 (KeSetUserAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402112F8 (KiReadyOutSwappedThreads.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14022B5D8 (KiAbThreadUnboostCpuPriority.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     KeBoostPriorityThread @ 0x140255110 (KeBoostPriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x140294824 (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     HalRequestIpiSpecifyVector @ 0x140300100 (HalRequestIpiSpecifyVector.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     HalSendSoftwareInterrupt @ 0x140342650 (HalSendSoftwareInterrupt.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     KiAbForceProcessLockEntry @ 0x14039C4BC (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1403D2D98 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403D2F9C (KeUpdateThreadCpuSets.c)
 *     HalRequestDeferredRecoveryServiceInterrupt @ 0x14050A7A0 (HalRequestDeferredRecoveryServiceInterrupt.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14056B410 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14056B9FC (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572774 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1405777C0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeTransitionProcessorParkState @ 0x14057C888 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KeAndGroupAffinityEx @ 0x140263350 (KeAndGroupAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall HalpInterruptSendIpi(int *a1, unsigned int a2)
{
  int v4; // eax
  _WORD *v5; // r14
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(_QWORD, int *, _BYTE *, _QWORD, int *); // rax
  __int64 result; // rax
  int v9; // r13d
  unsigned int v10; // r12d
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  unsigned __int16 v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  int v21; // eax
  __int16 v22; // r15
  unsigned __int64 v23; // r14
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int *v28; // r15
  unsigned __int64 v29; // rbp
  unsigned __int8 v30; // r12
  __int64 (__fastcall *v31)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  int v32; // eax
  unsigned __int64 v33; // rdx
  __int64 (__fastcall *v34)(_QWORD, int *, __int128 *, _QWORD, int *); // rax
  int v35; // eax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-2E8h] BYREF
  int v37; // [rsp+38h] [rbp-2E0h] BYREF
  int v38; // [rsp+3Ch] [rbp-2DCh]
  int v39; // [rsp+40h] [rbp-2D8h] BYREF
  int v40; // [rsp+44h] [rbp-2D4h]
  __int128 v41; // [rsp+48h] [rbp-2D0h] BYREF
  int v42; // [rsp+58h] [rbp-2C0h]
  _DWORD v43[2]; // [rsp+60h] [rbp-2B8h] BYREF
  _DWORD v44[2]; // [rsp+68h] [rbp-2B0h] BYREF
  _DWORD v45[2]; // [rsp+70h] [rbp-2A8h] BYREF
  _DWORD v46[2]; // [rsp+78h] [rbp-2A0h] BYREF
  _BYTE v47[24]; // [rsp+80h] [rbp-298h] BYREF
  __int128 v48; // [rsp+98h] [rbp-280h] BYREF
  _QWORD v49[34]; // [rsp+B0h] [rbp-268h] BYREF
  unsigned __int16 v50; // [rsp+1C0h] [rbp-158h]
  unsigned __int16 v51; // [rsp+1C2h] [rbp-156h]
  _DWORD v52[67]; // [rsp+1C4h] [rbp-154h] BYREF
  int v53; // [rsp+310h] [rbp-8h]

  memset(v49, 0, 0x108uLL);
  v4 = *a1;
  v5 = v49;
  *(_OWORD *)&v47[4] = 0LL;
  if ( v4 == 6 )
  {
    v6 = 3LL * (unsigned int)a1[2];
    *(_OWORD *)v47 = *(_OWORD *)(HalpInterruptTargets + 24LL * (unsigned int)a1[2]);
    *(_QWORD *)&v47[16] = *(_QWORD *)(HalpInterruptTargets + 8 * v6 + 16);
    goto LABEL_3;
  }
  if ( v4 <= 0 )
    return 3221225485LL;
  if ( v4 <= 2 )
  {
    v5 = (_WORD *)*((_QWORD *)a1 + 1);
    if ( v4 != 1 )
      goto LABEL_15;
    LODWORD(v49[0]) = 2097153;
    memset((char *)v49 + 4, 0, 0x104uLL);
    v26 = (unsigned __int16)v5[4];
    v27 = *(_QWORD *)v5;
    if ( (_WORD)v26 )
    {
      if ( WORD1(v49[0]) <= (unsigned __int16)v26 )
      {
LABEL_56:
        v5 = v49;
        goto LABEL_15;
      }
      LOWORD(v49[0]) = v26 + 1;
    }
    v49[v26 + 1] |= v27;
    goto LABEL_56;
  }
  switch ( v4 )
  {
    case 4:
      if ( (*(_DWORD *)(HalpInterruptController + 228) & 0x20) == 0 || HalpInterruptNoShorthand )
      {
        LODWORD(v49[0]) = 2097153;
        memset((char *)v49 + 4, 0, 0x104uLL);
        KiCopyAffinityEx(v49, 32LL, &KeActiveProcessors);
        LODWORD(v25) = KeGetPcr()->Prcb.Number;
        KeRemoveProcessorAffinityEx(v49, v25);
        goto LABEL_15;
      }
      *(_DWORD *)v47 = 2;
      break;
    case 3:
      if ( (*(_DWORD *)(HalpInterruptController + 228) & 0x10) == 0 || HalpInterruptNoShorthand )
      {
        LODWORD(v49[0]) = 2097153;
        memset((char *)v49 + 4, 0, 0x104uLL);
        KiCopyAffinityEx(v49, 32LL, &KeActiveProcessors);
        goto LABEL_15;
      }
      *(_DWORD *)v47 = 1;
      break;
    case 5:
      if ( (*(_DWORD *)(HalpInterruptController + 228) & 0x40) != 0 && !HalpInterruptNoShorthand )
      {
        *(_DWORD *)v47 = 3;
        break;
      }
      LODWORD(v49[0]) = 2097153;
      memset((char *)v49 + 4, 0, 0x104uLL);
      KeAddProcessorAffinityEx((unsigned __int16 *)v49, KeGetPcr()->Prcb.Number);
LABEL_15:
      v48 = 0LL;
      memset(v52, 0, 0x104uLL);
      v9 = 0;
      v42 = 0;
      v10 = 0;
      v41 = 0LL;
      if ( !qword_140C4C528 )
      {
        v51 = 32;
        memset(&v52[1], 0, 0x100uLL);
        v11 = HalpInterruptPhysicalTargets;
        if ( (unsigned __int16)HalpInterruptPhysicalTargets >= *v5 )
          v11 = *v5;
        v12 = v51;
        v50 = v11;
        if ( v11 > v51 )
        {
          v50 = v51;
          v11 = v51;
        }
        v13 = 0;
        if ( v11 )
        {
          do
          {
            v14 = v13++;
            *(_QWORD *)&v52[2 * v14 + 1] = qword_140C4DD68[v14] & *(_QWORD *)&v5[4 * v14 + 4];
          }
          while ( v13 < v50 );
          v12 = v51;
        }
        v52[0] = 0;
        if ( v13 < v12 )
        {
          do
          {
            v15 = v13++;
            *(_QWORD *)&v52[2 * v15 + 1] = 0LL;
          }
          while ( v13 < v51 );
        }
        if ( HalpInterruptClusterModeEnabled )
        {
          v28 = (unsigned int *)HalpInterruptClusterData;
          ProcNumber = 0;
          if ( HalpInterruptClusterData < (unsigned __int64)HalpInterruptClusterDataEnd )
          {
            do
            {
              if ( (unsigned int)KeAndGroupAffinityEx(v5, (__int64)(v28 + 2), (char *)&v48) )
              {
                v29 = v48;
                v30 = 0;
                LODWORD(v41) = 6;
                *((_QWORD *)&v41 + 1) = *v28;
                ProcNumber.Group = WORD4(v48);
                for ( ProcNumber.Number = 0; v29; ProcNumber.Number = v30 )
                {
                  if ( (v29 & 1) != 0 )
                  {
                    v9 |= *(_DWORD *)(HalpInterruptTargets + 24LL * KeGetProcessorIndexFromNumber(&ProcNumber) + 12);
                    HIDWORD(v41) = v9;
                  }
                  ++v30;
                  v29 >>= 1;
                }
                v43[0] = -1;
                v43[1] = 1;
                v44[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                v44[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                v31 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController
                                                                                               + 120);
                _disable();
                v32 = v31(*(_QWORD *)(HalpInterruptController + 16), v44, &v41, a2, v43);
                v10 = v32;
                if ( (v53 & 0x200) != 0 )
                  _enable();
                if ( v32 < 0 )
                  return v10;
                v9 = 0;
              }
              v28 += 6;
            }
            while ( (unsigned __int64)v28 < HalpInterruptClusterDataEnd );
            v22 = v53;
            goto LABEL_38;
          }
        }
        else if ( !HalpInterruptPhysicalModeOnly )
        {
          v16 = *((_QWORD *)v5 + 1);
          v17 = 0;
          LODWORD(v41) = 5;
          DWORD2(v41) = 0;
          while ( v16 )
          {
LABEL_29:
            _BitScanForward64(&v18, v16);
            v16 &= ~(1LL << v18);
            v19 = (unsigned __int8)v18 + (v17 << 6);
            if ( *(_DWORD *)(HalpInterruptTargets + 24LL * (unsigned int)KiProcessorNumberToIndexMappingTable[v19]) == 5 )
              DWORD2(v41) |= *(_DWORD *)(HalpInterruptTargets
                                       + 24LL * (unsigned int)KiProcessorNumberToIndexMappingTable[v19]
                                       + 8);
          }
          while ( ++v17 < *v5 )
          {
            v16 = *(_QWORD *)&v5[4 * v17 + 4];
            if ( v16 )
              goto LABEL_29;
          }
          if ( DWORD2(v41) )
          {
            v45[0] = -1;
            v45[1] = 1;
            v46[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v46[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v20 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController
                                                                                           + 120);
            _disable();
            v21 = v20(*(_QWORD *)(HalpInterruptController + 16), v46, &v41, a2, v45);
            v22 = v53;
            v10 = v21;
            if ( (v53 & 0x200) != 0 )
              _enable();
            if ( v21 >= 0 )
            {
LABEL_38:
              v23 = *(_QWORD *)&v52[1];
              LOWORD(v24) = 0;
              while ( v23 )
              {
LABEL_71:
                _BitScanForward64(&v33, v23);
                LODWORD(v41) = 4;
                v23 &= ~(1LL << v33);
                DWORD2(v41) = *(_DWORD *)(HalpInterruptTargets
                                        + 24LL
                                        * (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v24
                                                                                           + (unsigned __int8)v33]
                                        + 8);
                v40 = *(_DWORD *)(HalpInterruptIpiLines + 20);
                v39 = *(_DWORD *)(HalpInterruptIpiLines + 16);
                v34 = *(__int64 (__fastcall **)(_QWORD, int *, __int128 *, _QWORD, int *))(HalpInterruptController + 120);
                v37 = -1;
                v38 = 1;
                _disable();
                v35 = v34(*(_QWORD *)(HalpInterruptController + 16), &v39, &v41, a2, &v37);
                v10 = v35;
                if ( (v22 & 0x200) != 0 )
                  _enable();
                if ( v35 < 0 )
                  return v10;
              }
              while ( 1 )
              {
                v24 = (unsigned __int16)(v24 + 1);
                if ( (unsigned int)v24 >= v50 )
                  break;
                v23 = *(_QWORD *)&v52[2 * v24 + 1];
                if ( v23 )
                  goto LABEL_71;
              }
            }
            return v10;
          }
        }
        v22 = v53;
        goto LABEL_38;
      }
      return (unsigned int)qword_140C4C528(v5, a2);
    default:
      return 3221225485LL;
  }
LABEL_3:
  v39 = -1;
  v40 = 1;
  v38 = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v37 = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v7 = *(__int64 (__fastcall **)(_QWORD, int *, _BYTE *, _QWORD, int *))(HalpInterruptController + 120);
  _disable();
  result = v7(*(_QWORD *)(HalpInterruptController + 16), &v37, v47, a2, &v39);
  if ( (v53 & 0x200) != 0 )
    _enable();
  return result;
}
