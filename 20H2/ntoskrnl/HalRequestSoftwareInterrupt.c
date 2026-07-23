/*
 * XREFs of HalRequestSoftwareInterrupt @ 0x1402F7F30
 * Callers:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140268920 (KiDetachProcess.c)
 *     KiInsertQueueDpc @ 0x14027F690 (KiInsertQueueDpc.c)
 *     KeClockInterruptNotify @ 0x140280F70 (KeClockInterruptNotify.c)
 *     KiCheckForTimerExpiration @ 0x140284000 (KiCheckForTimerExpiration.c)
 *     KiUpdateRunTime @ 0x140286DE0 (KiUpdateRunTime.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     KiStartThreadCycleAccumulation @ 0x1402BECC0 (KiStartThreadCycleAccumulation.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiDirectSwitchThread @ 0x1402DE570 (KiDirectSwitchThread.c)
 *     KiSignalThreadForApc @ 0x1402EC4EC (KiSignalThreadForApc.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiChainedDispatch @ 0x1403FD300 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FDC50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403FE010 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FE3D0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403FE790 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403FEB50 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403FF760 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140401FC0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140402390 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140402A10 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140403720 (KiIpiInterrupt.c)
 *     SwapContext @ 0x1404041B0 (SwapContext.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287E00 (KeAddProcessorAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x14033E1A0 (KeGetProcessorIndexFromNumber.c)
 *     KeAndGroupAffinityEx @ 0x140374510 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall HalRequestSoftwareInterrupt(char a1)
{
  unsigned int v1; // ebx
  __int64 (__fastcall *v2)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  __int64 result; // rax
  unsigned __int16 i; // dx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int16 v7; // r13
  unsigned int *v8; // r14
  unsigned __int64 v9; // rbp
  int v10; // r12d
  unsigned __int8 v11; // r15
  __int64 (__fastcall *v12)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  unsigned __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rbp
  unsigned __int64 v20; // rdx
  __int64 (__fastcall *v21)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-228h] BYREF
  __int128 v23; // [rsp+38h] [rbp-220h] BYREF
  __int64 v24; // [rsp+48h] [rbp-210h]
  _DWORD v25[2]; // [rsp+50h] [rbp-208h] BYREF
  _DWORD v26[2]; // [rsp+58h] [rbp-200h] BYREF
  _DWORD v27[2]; // [rsp+60h] [rbp-1F8h] BYREF
  _DWORD v28[2]; // [rsp+68h] [rbp-1F0h] BYREF
  _DWORD v29[2]; // [rsp+70h] [rbp-1E8h] BYREF
  _DWORD v30[2]; // [rsp+78h] [rbp-1E0h] BYREF
  _DWORD v31[2]; // [rsp+80h] [rbp-1D8h] BYREF
  _DWORD v32[4]; // [rsp+88h] [rbp-1D0h] BYREF
  __int128 v33; // [rsp+98h] [rbp-1C0h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-1B0h]
  __int128 v35; // [rsp+B0h] [rbp-1A8h] BYREF
  _QWORD v36[22]; // [rsp+C0h] [rbp-198h] BYREF
  unsigned __int16 v37; // [rsp+170h] [rbp-E8h]
  _WORD v38[87]; // [rsp+172h] [rbp-E6h] BYREF
  int v39; // [rsp+250h] [rbp-8h]

  v1 = 31;
  if ( a1 != 1 )
    v1 = 47;
  memset(&v36[1], 0, 0xA0uLL);
  v34 = 0LL;
  v33 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    LODWORD(v33) = 3;
    v25[0] = -1;
    v25[1] = 1;
    v26[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v26[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v2 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController + 120);
    _disable();
    result = v2(*(_QWORD *)(HalpInterruptController + 16), v26, &v33, v1, v25);
    if ( (v39 & 0x200) != 0 )
      _enable();
    return result;
  }
  LODWORD(v36[0]) = 1310721;
  memset((char *)v36 + 4, 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v36, KeGetPcr()->Prcb.Number);
  v35 = 0LL;
  memset(v38, 0, 0xA6uLL);
  v24 = 0LL;
  v23 = 0LL;
  if ( qword_140C4A308 )
    return qword_140C4A308(v36, v1);
  result = (unsigned __int16)HalpInterruptPhysicalTargets;
  if ( (unsigned __int16)HalpInterruptPhysicalTargets >= LOWORD(v36[0]) )
    result = LOWORD(v36[0]);
  v37 = result;
  for ( i = 0; i < v37; *(_QWORD *)&v38[v6 + 3] = result )
  {
    v5 = i++;
    v6 = 4 * v5;
    result = v36[v5 + 1] & qword_140C4B8C8[v5];
  }
  v38[0] = 20;
  *(_DWORD *)&v38[1] = 0;
  if ( i < 0x14u )
  {
    do
    {
      result = i++;
      *(_QWORD *)&v38[4 * result + 3] = 0LL;
    }
    while ( i < v38[0] );
  }
  v7 = v39;
  if ( HalpInterruptClusterModeEnabled )
  {
    v8 = (unsigned int *)HalpInterruptClusterData;
    ProcNumber = 0;
    if ( HalpInterruptClusterData < (unsigned __int64)HalpInterruptClusterDataEnd )
    {
      do
      {
        result = KeAndGroupAffinityEx(v36, v8 + 2, &v35);
        if ( (_DWORD)result )
        {
          v9 = v35;
          v10 = 0;
          LODWORD(v23) = 6;
          v11 = 0;
          *((_QWORD *)&v23 + 1) = *v8;
          ProcNumber.Group = WORD4(v35);
          for ( ProcNumber.Number = 0; v9; ProcNumber.Number = v11 )
          {
            if ( (v9 & 1) != 0 )
            {
              v10 |= *(_DWORD *)(HalpInterruptTargets + 24LL * KeGetProcessorIndexFromNumber(&ProcNumber) + 12);
              HIDWORD(v23) = v10;
            }
            ++v11;
            v9 >>= 1;
          }
          v27[0] = -1;
          v27[1] = 1;
          v28[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v28[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v12 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController + 120);
          _disable();
          result = v12(*(_QWORD *)(HalpInterruptController + 16), v28, &v23, v1, v27);
          if ( (v7 & 0x200) != 0 )
            _enable();
          if ( (int)result < 0 )
            return result;
        }
        v8 += 6;
      }
      while ( (unsigned __int64)v8 < HalpInterruptClusterDataEnd );
    }
LABEL_39:
    v18 = *(_QWORD *)&v38[3];
    LOWORD(v19) = 0;
    while ( v18 )
    {
LABEL_43:
      _BitScanForward64(&v20, v18);
      LODWORD(v23) = 4;
      v18 &= ~(1LL << v20);
      DWORD2(v23) = *(_DWORD *)(HalpInterruptTargets
                              + 24LL
                              * (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v19
                                                                                 + (unsigned __int8)v20]
                              + 8);
      v32[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v32[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v21 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController + 120);
      v31[0] = -1;
      v31[1] = 1;
      _disable();
      result = v21(*(_QWORD *)(HalpInterruptController + 16), v32, &v23, v1, v31);
      if ( (v7 & 0x200) != 0 )
        _enable();
      if ( (int)result < 0 )
        return result;
    }
    while ( 1 )
    {
      v19 = (unsigned __int16)(v19 + 1);
      if ( (unsigned int)v19 >= v37 )
        return result;
      v18 = *(_QWORD *)&v38[4 * v19 + 3];
      if ( v18 )
        goto LABEL_43;
    }
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_39;
  v13 = v36[1];
  LOWORD(v14) = 0;
  LODWORD(v23) = 5;
  DWORD2(v23) = 0;
  while ( v13 )
  {
LABEL_33:
    _BitScanForward64(&v15, v13);
    v13 &= ~(1LL << v15);
    v16 = (unsigned __int8)v15 + ((unsigned __int16)v14 << 6);
    result = HalpInterruptTargets;
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * (unsigned int)KiProcessorNumberToIndexMappingTable[v16]) == 5 )
    {
      result = *(unsigned int *)(HalpInterruptTargets
                               + 24LL * (unsigned int)KiProcessorNumberToIndexMappingTable[v16]
                               + 8);
      DWORD2(v23) |= result;
    }
  }
  while ( 1 )
  {
    v14 = (unsigned __int16)(v14 + 1);
    if ( (unsigned int)v14 >= LOWORD(v36[0]) )
      break;
    v13 = v36[v14 + 1];
    if ( v13 )
      goto LABEL_33;
  }
  if ( !DWORD2(v23) )
    goto LABEL_39;
  v29[0] = -1;
  v29[1] = 1;
  v30[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v30[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v17 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController + 120);
  _disable();
  result = v17(*(_QWORD *)(HalpInterruptController + 16), v30, &v23, v1, v29);
  if ( (v7 & 0x200) != 0 )
    _enable();
  if ( (int)result >= 0 )
    goto LABEL_39;
  return result;
}
