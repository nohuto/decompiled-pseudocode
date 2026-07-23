/*
 * XREFs of HalRequestSoftwareInterrupt @ 0x140211E00
 * Callers:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiSignalThreadForApc @ 0x140268660 (KiSignalThreadForApc.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x1402ABF00 (KiDetachProcess.c)
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     KiCheckForTimerExpiration @ 0x1402C90F0 (KiCheckForTimerExpiration.c)
 *     KiUpdateRunTime @ 0x1402CBED0 (KiUpdateRunTime.c)
 *     KiStartThreadCycleAccumulation @ 0x1402D5AB0 (KiStartThreadCycleAccumulation.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     KiDirectSwitchThread @ 0x1402F1090 (KiDirectSwitchThread.c)
 *     KiChainedDispatch @ 0x1403FF7A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140400120 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140400510 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140400900 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400CF0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404010E0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140401D20 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140404690 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140404A90 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140405140 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140405ED0 (KiIpiInterrupt.c)
 *     SwapContext @ 0x1404069A0 (SwapContext.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140269E20 (KeGetProcessorIndexFromNumber.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     KeAndGroupAffinityEx @ 0x1403741F0 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall HalRequestSoftwareInterrupt(char a1)
{
  unsigned int v1; // ebx
  __int64 (__fastcall *v2)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int16 i; // dx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int16 v8; // r13
  unsigned int *v9; // r14
  unsigned __int64 v10; // rbp
  int v11; // r12d
  unsigned __int8 v12; // r15
  __int64 (__fastcall *v13)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  unsigned __int64 v19; // r14
  __int64 v20; // rbp
  unsigned __int64 v21; // rdx
  __int64 (__fastcall *v22)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-228h] BYREF
  __int128 v24; // [rsp+38h] [rbp-220h] BYREF
  __int64 v25; // [rsp+48h] [rbp-210h]
  _DWORD v26[2]; // [rsp+50h] [rbp-208h] BYREF
  _DWORD v27[2]; // [rsp+58h] [rbp-200h] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-1F8h] BYREF
  _DWORD v29[2]; // [rsp+68h] [rbp-1F0h] BYREF
  _DWORD v30[2]; // [rsp+70h] [rbp-1E8h] BYREF
  _DWORD v31[2]; // [rsp+78h] [rbp-1E0h] BYREF
  _DWORD v32[2]; // [rsp+80h] [rbp-1D8h] BYREF
  _DWORD v33[4]; // [rsp+88h] [rbp-1D0h] BYREF
  __int128 v34; // [rsp+98h] [rbp-1C0h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-1B0h]
  __int128 v36; // [rsp+B0h] [rbp-1A8h] BYREF
  _QWORD v37[22]; // [rsp+C0h] [rbp-198h] BYREF
  unsigned __int16 v38; // [rsp+170h] [rbp-E8h]
  _WORD v39[87]; // [rsp+172h] [rbp-E6h] BYREF
  int v40; // [rsp+250h] [rbp-8h]

  v1 = 31;
  if ( a1 != 1 )
    v1 = 47;
  memset(&v37[1], 0, 0xA0uLL);
  v35 = 0LL;
  v34 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    LODWORD(v34) = 3;
    v26[0] = -1;
    v26[1] = 1;
    v27[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v27[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v2 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController + 120);
    _disable();
    result = v2(*(_QWORD *)(HalpInterruptController + 16), v27, &v34, v1, v26);
    if ( (v40 & 0x200) != 0 )
      _enable();
    return result;
  }
  LODWORD(v37[0]) = 1310721;
  memset((char *)v37 + 4, 0, 0xA4uLL);
  LODWORD(v4) = KeGetPcr()->Prcb.Number;
  KeAddProcessorAffinityEx(v37, v4);
  v36 = 0LL;
  memset(v39, 0, 0xA6uLL);
  v25 = 0LL;
  v24 = 0LL;
  if ( qword_140C4A268 )
    return qword_140C4A268(v37, v1);
  result = (unsigned __int16)HalpInterruptPhysicalTargets;
  if ( (unsigned __int16)HalpInterruptPhysicalTargets >= LOWORD(v37[0]) )
    result = LOWORD(v37[0]);
  v38 = result;
  for ( i = 0; i < v38; *(_QWORD *)&v39[v7 + 3] = result )
  {
    v6 = i++;
    v7 = 4 * v6;
    result = v37[v6 + 1] & qword_140C4BA88[v6];
  }
  v39[0] = 20;
  *(_DWORD *)&v39[1] = 0;
  if ( i < 0x14u )
  {
    do
    {
      result = i++;
      *(_QWORD *)&v39[4 * result + 3] = 0LL;
    }
    while ( i < v39[0] );
  }
  v8 = v40;
  if ( HalpInterruptClusterModeEnabled )
  {
    v9 = (unsigned int *)HalpInterruptClusterData;
    ProcNumber = 0;
    if ( HalpInterruptClusterData < (unsigned __int64)HalpInterruptClusterDataEnd )
    {
      do
      {
        result = KeAndGroupAffinityEx(v37, v9 + 2, &v36);
        if ( (_DWORD)result )
        {
          v10 = v36;
          v11 = 0;
          LODWORD(v24) = 6;
          v12 = 0;
          *((_QWORD *)&v24 + 1) = *v9;
          ProcNumber.Group = WORD4(v36);
          for ( ProcNumber.Number = 0; v10; ProcNumber.Number = v12 )
          {
            if ( (v10 & 1) != 0 )
            {
              v11 |= *(_DWORD *)(HalpInterruptTargets + 24LL * KeGetProcessorIndexFromNumber(&ProcNumber) + 12);
              HIDWORD(v24) = v11;
            }
            ++v12;
            v10 >>= 1;
          }
          v28[0] = -1;
          v28[1] = 1;
          v29[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v29[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v13 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController + 120);
          _disable();
          result = v13(*(_QWORD *)(HalpInterruptController + 16), v29, &v24, v1, v28);
          if ( (v8 & 0x200) != 0 )
            _enable();
          if ( (int)result < 0 )
            return result;
        }
        v9 += 6;
      }
      while ( (unsigned __int64)v9 < HalpInterruptClusterDataEnd );
    }
LABEL_39:
    v19 = *(_QWORD *)&v39[3];
    LOWORD(v20) = 0;
    while ( v19 )
    {
LABEL_43:
      _BitScanForward64(&v21, v19);
      LODWORD(v24) = 4;
      v19 &= ~(1LL << v21);
      DWORD2(v24) = *(_DWORD *)(HalpInterruptTargets
                              + 24LL
                              * (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v20
                                                                                 + (unsigned __int8)v21]
                              + 8);
      v33[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v33[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v22 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController + 120);
      v32[0] = -1;
      v32[1] = 1;
      _disable();
      result = v22(*(_QWORD *)(HalpInterruptController + 16), v33, &v24, v1, v32);
      if ( (v8 & 0x200) != 0 )
        _enable();
      if ( (int)result < 0 )
        return result;
    }
    while ( 1 )
    {
      v20 = (unsigned __int16)(v20 + 1);
      if ( (unsigned int)v20 >= v38 )
        return result;
      v19 = *(_QWORD *)&v39[4 * v20 + 3];
      if ( v19 )
        goto LABEL_43;
    }
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_39;
  v14 = v37[1];
  LOWORD(v15) = 0;
  LODWORD(v24) = 5;
  DWORD2(v24) = 0;
  while ( v14 )
  {
LABEL_33:
    _BitScanForward64(&v16, v14);
    v14 &= ~(1LL << v16);
    v17 = (unsigned __int8)v16 + ((unsigned __int16)v15 << 6);
    result = HalpInterruptTargets;
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * (unsigned int)KiProcessorNumberToIndexMappingTable[v17]) == 5 )
    {
      result = *(unsigned int *)(HalpInterruptTargets
                               + 24LL * (unsigned int)KiProcessorNumberToIndexMappingTable[v17]
                               + 8);
      DWORD2(v24) |= result;
    }
  }
  while ( 1 )
  {
    v15 = (unsigned __int16)(v15 + 1);
    if ( (unsigned int)v15 >= LOWORD(v37[0]) )
      break;
    v14 = v37[v15 + 1];
    if ( v14 )
      goto LABEL_33;
  }
  if ( !DWORD2(v24) )
    goto LABEL_39;
  v30[0] = -1;
  v30[1] = 1;
  v31[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v31[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v18 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController + 120);
  _disable();
  result = v18(*(_QWORD *)(HalpInterruptController + 16), v31, &v24, v1, v30);
  if ( (v8 & 0x200) != 0 )
    _enable();
  if ( (int)result >= 0 )
    goto LABEL_39;
  return result;
}
