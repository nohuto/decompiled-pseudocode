/*
 * XREFs of KiExecuteAllDpcs @ 0x14028B270
 * Callers:
 *     KiRetireDpcList @ 0x14028A670 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x1403B4110 (KiExecuteDpc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     EtwpLogKernelEvent @ 0x140226150 (EtwpLogKernelEvent.c)
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x1402D6A90 (RtlGetSystemTimePrecise.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140340590 (KxWaitForSpinLockAndAcquire.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x140514D4C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140514E58 (KiReleaseSpinLockInstrumented.c)
 *     KiInsertNewDpcRuntime @ 0x140521138 (KiInsertNewDpcRuntime.c)
 */

__int64 __fastcall KiExecuteAllDpcs(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  int v4; // esi
  __int64 v5; // r13
  _DWORD *v6; // r11
  __int64 v7; // rdx
  __int64 **v8; // rbx
  __int64 result; // rax
  __int16 v11; // ax
  volatile signed __int32 *v12; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 *v15; // r14
  __int64 *v16; // rax
  ULONG_PTR v17; // rax
  unsigned __int64 v18; // r14
  _QWORD *v19; // r15
  __int64 v20; // r10
  ULONG_PTR v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  struct _KPRCB *v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  bool v27; // zf
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  _DWORD *v33; // rsi
  void *v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r14
  __int64 v39; // r10
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // r14
  ULONG_PTR v42; // rcx
  unsigned int v43; // r14d
  unsigned __int16 v44; // r15
  unsigned int v45; // esi
  unsigned int v46; // ecx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // r8d
  _DWORD *v51; // rcx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER SystemTimePrecise; // rax
  size_t v57; // r8
  int v58; // r12d
  ULONG_PTR v59; // r11
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v63; // [rsp+38h] [rbp-C8h]
  __int64 v64; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v66; // [rsp+50h] [rbp-B0h]
  int v67; // [rsp+58h] [rbp-A8h]
  unsigned int v68; // [rsp+5Ch] [rbp-A4h]
  __int64 v69; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-98h]
  __int64 *v71; // [rsp+70h] [rbp-90h]
  __int64 v72; // [rsp+78h] [rbp-88h] BYREF
  __int64 v73; // [rsp+80h] [rbp-80h]
  ULONG_PTR v74; // [rsp+88h] [rbp-78h]
  ULONG_PTR v75; // [rsp+90h] [rbp-70h]
  __int64 v76; // [rsp+98h] [rbp-68h]
  __int64 v77; // [rsp+A0h] [rbp-60h]
  __int128 v78; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR v79; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v80; // [rsp+C0h] [rbp-40h]
  __int128 v81; // [rsp+D0h] [rbp-30h]
  _QWORD v82[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v83[4]; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+168h] [rbp+68h]

  v4 = 0;
  v5 = a4;
  v73 = a2;
  v6 = a3;
  BugCheckParameter2 = 0LL;
  v69 = 0LL;
  v7 = a4;
  v8 = (__int64 **)(a1 + 40 * (a4 + 312LL));
  result = *((unsigned int *)v8 + 6);
  v78 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( (_DWORD)result )
  {
    if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
    {
      v71 = 0LL;
    }
    else
    {
      if ( a4 )
      {
        v11 = 3906;
        HIDWORD(v69) = 4200450;
      }
      else
      {
        v11 = 3908;
        HIDWORD(v69) = 4196866;
      }
      LOWORD(v69) = v11;
      v71 = &v69;
    }
    v77 = *(_QWORD *)(a1 + 11664);
    while ( 1 )
    {
      v12 = (volatile signed __int32 *)(v8 + 2);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v8 + 2);
        v6 = a3;
        v7 = v5;
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v52 = SchedulerAssist[6];
            SchedulerAssist[6] = v52 + 1;
            if ( v52 == -1 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v6 = a3;
              v7 = v5;
            }
          }
        }
        if ( _interlockedbittestandset64(v12, 0LL) )
        {
          v51 = CurrentPrcb->SchedulerAssist;
          if ( v51 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v53 = v51[6] - 1;
              v51[6] = v53;
              if ( !v53 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire(v8 + 2);
          v6 = a3;
          v7 = v5;
        }
        v4 = 0;
      }
      if ( *((int *)v8 + 6) <= 1 )
      {
        _InterlockedAnd16((volatile signed __int16 *)(a1 + 2 * v7 + 12588), 0xFFEDu);
        if ( !*((_DWORD *)v8 + 6) )
          break;
      }
      v15 = *v8;
      v16 = (__int64 *)**v8;
      *v8 = v16;
      if ( !v16 )
        v8[1] = (__int64 *)v8;
      v17 = v15[2];
      v18 = (unsigned __int64)(v15 - 1);
      BugCheckParameter2 = v17;
      v19 = *(_QWORD **)(v18 + 56);
      v20 = *(_QWORD *)(v18 + 32);
      v21 = *(_QWORD *)(v18 + 40);
      v22 = *(_QWORD *)(v18 + 48);
      *(_QWORD *)(v18 + 56) = 0LL;
      v63 = v20;
      --*((_DWORD *)v8 + 6);
      v8[4] = (__int64 *)v18;
      v23 = *(_QWORD *)(a1 + 33976);
      v66 = v21;
      v64 = v22;
      if ( v23 && !(_DWORD)v5 )
        --*(_DWORD *)(v23 + 28);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseSpinLockInstrumented(v8 + 2, retaddr);
        v6 = a3;
        v20 = v63;
        v21 = v66;
        v22 = v64;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
      }
      v24 = KeGetCurrentPrcb();
      v25 = (unsigned __int64)v24->SchedulerAssist;
      if ( v25 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v54 = *(_DWORD *)(v25 + 24) - 1;
          *(_DWORD *)(v25 + 24) = v54;
          if ( !v54 )
          {
            KiRemoveSystemWorkPriorityKick(v24);
            v6 = a3;
            v20 = v63;
            v21 = v66;
            v22 = v64;
          }
        }
      }
      _enable();
      if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
      {
        *(_QWORD *)&v78 = BugCheckParameter2;
        v82[1] = 16LL;
        *((_QWORD *)&v78 + 1) = 0x7E35C6C7F3DD7277LL
                              * (KiWaitNever ^ __ROR8__(
                                                 BugCheckParameter2 ^ _byteswap_uint64(v18 ^ KiWaitAlways),
                                                 KiWaitNever));
        v82[0] = &v78;
        EtwTraceKernelEvent((unsigned int)v82, 1, 537133056, 3941, 4196866);
        v6 = a3;
        v20 = v63;
        v21 = v66;
        v22 = v64;
      }
      if ( v71 )
      {
        v26 = qword_140D248A0;
        v67 = 0;
        if ( qword_140D248A0 )
        {
          v25 = *(unsigned int *)(qword_140D248A0 + 4224);
          v27 = !_BitScanForward((unsigned int *)&v28, v25);
          v67 = v28;
          if ( !v27 )
          {
            do
            {
              v25 = ((_DWORD)v25 - 1) & (unsigned int)v25;
              v29 = 32LL * (unsigned int)v28 + qword_140D248A0 + 4260;
              if ( v29 && (*(_DWORD *)(v29 + 4) & 0x80u) != 0 )
                v4 |= 1 << *(_BYTE *)(qword_140D248A0 + 2 * v28 + 4209);
              v27 = !_BitScanForward((unsigned int *)&v28, v25);
            }
            while ( !v27 );
            v20 = v63;
            v22 = v64;
            v67 = v28;
          }
        }
        else
        {
          LOBYTE(v4) = 30;
        }
        if ( (v4 & 2) != 0 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v6 = a3;
          v20 = v63;
          v22 = v64;
          *(LARGE_INTEGER *)&v80 = PerformanceCounter;
          v30 = 0LL;
        }
        else
        {
          v30 = 0LL;
          *(_QWORD *)&v80 = 0LL;
        }
        if ( (v4 & 4) != 0 )
        {
          SystemTimePrecise = RtlGetSystemTimePrecise();
          v6 = a3;
          v20 = v63;
          v22 = v64;
          *((LARGE_INTEGER *)&v80 + 1) = SystemTimePrecise;
          v30 = 0LL;
        }
        else
        {
          *((_QWORD *)&v80 + 1) = 0LL;
        }
        if ( (v4 & 8) != 0 )
        {
          v31 = __rdtsc();
          v25 = (unsigned __int64)HIDWORD(v31) << 32;
          *(_QWORD *)&v81 = v31;
          v30 = 0LL;
        }
        else
        {
          *(_QWORD *)&v81 = 0LL;
        }
        if ( (v4 & 0x10) != 0 )
        {
          v72 = 0LL;
          ((void (__fastcall *)(__int64 *, unsigned __int64, __int64, __int64))off_140C009E0[0])(&v72, v25, v26, v22);
          v30 = v72;
          v6 = a3;
          v20 = v63;
        }
        v21 = v66;
        *((_QWORD *)&v81 + 1) = v30;
      }
      v32 = ((*v6)++ & 0xF) + 1LL;
      v33 = &v6[4 * v32];
      *(_QWORD *)v33 = BugCheckParameter2;
      v33[2] = MEMORY[0xFFFFF78000000320];
      v34 = *(void **)(a1 + 33960);
      LODWORD(BugCheckParameter3) = *(_DWORD *)(v73 + 484);
      *(_DWORD *)(a1 + 32412) = 0;
      if ( v34 && *(void **)(a1 + 33968) != v34 && *(_DWORD *)(a1 + 31724) < *(_DWORD *)(a1 + 31732) )
      {
        v57 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
        *(_QWORD *)(a1 + 33968) = v34;
        memset(v34, 0, v57);
        v20 = v63;
        v21 = v66;
      }
      v35 = __rdtsc();
      *(_QWORD *)(a1 + 11664) = v19;
      v36 = v35;
      if ( v19 != (_QWORD *)1 )
        v19[4] = v35;
      if ( !(_DWORD)v5 )
        *(_BYTE *)(a1 + 12586) = 1;
      ((void (__fastcall *)(unsigned __int64, __int64, ULONG_PTR))BugCheckParameter2)(v18, v20, v21);
      v37 = __rdtsc();
      v38 = v37;
      if ( !(_DWORD)v5 )
      {
        *(_BYTE *)(a1 + 12586) = 0;
        v39 = *(_QWORD *)(a1 + 12432);
        v40 = v37 - v36;
        if ( v39 )
        {
          v58 = *(_DWORD *)(v39 + 4) >> 5;
          v76 = -1LL << (*(_BYTE *)(v39 + 4) & 0x1F);
          v59 = BugCheckParameter2 & v76;
          v75 = (BugCheckParameter2 & v76) >> 56;
          v74 = (BugCheckParameter2 & v76) >> 40;
          v66 = (BugCheckParameter2 & v76) >> 16;
          if ( v58 )
          {
            v79 = BugCheckParameter2 & v76;
            v60 = *(_QWORD *)(v39 + 8)
                + 8LL
                * (((unsigned int)v75
                  + 37
                  * ((unsigned __int8)((BugCheckParameter2 & v76) >> 48)
                   + 37
                   * ((unsigned __int8)v74
                    + 37
                    * ((unsigned __int8)((BugCheckParameter2 & v76) >> 32)
                     + 37
                     * ((((unsigned int)BugCheckParameter2 & (unsigned int)v76) >> 24)
                      + 37
                      * ((unsigned __int8)v66
                       + 37
                       * ((unsigned __int8)((unsigned __int16)(BugCheckParameter2 & v76) >> 8)
                        + 37 * ((unsigned __int8)v59 + 11623883)))))))) & (v58 - 1));
            while ( 1 )
            {
              v60 = *(_QWORD *)v60;
              if ( (v60 & 1) != 0 )
                break;
              if ( v59 == (v76 & *(_QWORD *)(v60 + 8)) )
              {
                v61 = *(_QWORD *)(v60 + 16) >> 2;
                *(_BYTE *)(v60 + 24) = 1;
                *(_QWORD *)(v60 + 16) = v61 + ((3 * v40) >> 2);
                goto LABEL_46;
              }
            }
          }
          KiInsertNewDpcRuntime(v39, BugCheckParameter2, v40);
        }
      }
LABEL_46:
      if ( v19 != (_QWORD *)1 )
      {
        v41 = v38 - v19[4];
        v19[3] += v41;
        v19[10] += v41;
        ++v19[5];
        ++v19[11];
      }
      v42 = (unsigned int)BugCheckParameter3;
      v33[3] = MEMORY[0xFFFFF78000000320];
      if ( (_DWORD)v42 != *(_DWORD *)(v73 + 484) )
        KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, v42, *(unsigned int *)(v73 + 484));
      if ( v71 )
      {
        v43 = *((_DWORD *)v71 + 1);
        v44 = *(_WORD *)v71;
        v83[2] = &BugCheckParameter2;
        v83[3] = 8LL;
        v45 = *(_DWORD *)(EtwpHostSiloState + 4224);
        v27 = !_BitScanForward(&v46, v45);
        v68 = v46;
        if ( !v27 )
        {
          do
          {
            v45 &= v45 - 1;
            v47 = v46;
            v48 = 32LL * v46 + EtwpHostSiloState + 4260;
            if ( v48 )
            {
              if ( (*(_DWORD *)(v48 + 4) & 0x80u) != 0 )
              {
                v49 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v47 + 4209);
                v50 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v47 + 4208);
                v83[1] = 8LL;
                v83[0] = &v79 + v49;
                EtwpLogKernelEvent((__int64)v83, EtwpHostSiloState, v50, 2u, v44, v43);
              }
            }
            v27 = !_BitScanForward(&v46, v45);
          }
          while ( !v27 );
          v68 = v46;
        }
      }
      _disable();
      if ( !*((_DWORD *)v8 + 6) )
        goto LABEL_57;
      v6 = a3;
      v7 = v5;
      v4 = 0;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v8 + 2);
LABEL_57:
    result = v77;
    *(_QWORD *)(a1 + 11664) = v77;
  }
  return result;
}
