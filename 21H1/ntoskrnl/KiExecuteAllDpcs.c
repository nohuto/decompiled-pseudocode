/*
 * XREFs of KiExecuteAllDpcs @ 0x140207510
 * Callers:
 *     KiRetireDpcList @ 0x140206910 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x1403ABB20 (KiExecuteDpc.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     RtlGetSystemTimePrecise @ 0x140355570 (RtlGetSystemTimePrecise.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140510ED8 (KiReleaseSpinLockInstrumented.c)
 *     KiInsertNewDpcRuntime @ 0x14051D118 (KiInsertNewDpcRuntime.c)
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
  __int64 v13; // r8
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 *v16; // r14
  __int64 *v17; // rax
  ULONG_PTR v18; // rax
  unsigned __int64 v19; // r14
  _QWORD *v20; // r15
  __int64 v21; // r10
  ULONG_PTR v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  struct _KPRCB *v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  _DWORD *v34; // rsi
  void *v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r14
  __int64 v40; // r10
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r14
  ULONG_PTR v43; // rcx
  int v44; // r14d
  __int16 v45; // r15
  unsigned int v46; // esi
  unsigned int v47; // ecx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // r8d
  _DWORD *v52; // rcx
  int v53; // eax
  int v54; // eax
  int v55; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER SystemTimePrecise; // rax
  size_t v58; // r8
  int v59; // r12d
  ULONG_PTR v60; // r11
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v64; // [rsp+38h] [rbp-C8h]
  __int64 v65; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v67; // [rsp+50h] [rbp-B0h]
  int v68; // [rsp+58h] [rbp-A8h]
  unsigned int v69; // [rsp+5Ch] [rbp-A4h]
  __int64 v70; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-98h]
  __int64 *v72; // [rsp+70h] [rbp-90h]
  __int64 v73; // [rsp+78h] [rbp-88h] BYREF
  __int64 v74; // [rsp+80h] [rbp-80h]
  ULONG_PTR v75; // [rsp+88h] [rbp-78h]
  ULONG_PTR v76; // [rsp+90h] [rbp-70h]
  __int64 v77; // [rsp+98h] [rbp-68h]
  __int64 v78; // [rsp+A0h] [rbp-60h]
  __int128 v79; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR v80; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v81; // [rsp+C0h] [rbp-40h]
  __int128 v82; // [rsp+D0h] [rbp-30h]
  _QWORD v83[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v84[4]; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+168h] [rbp+68h]

  v4 = 0;
  v5 = a4;
  v74 = a2;
  v6 = a3;
  BugCheckParameter2 = 0LL;
  v70 = 0LL;
  v7 = a4;
  v8 = (__int64 **)(a1 + 40 * (a4 + 312LL));
  result = *((unsigned int *)v8 + 6);
  v79 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  if ( (_DWORD)result )
  {
    if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
    {
      v72 = 0LL;
    }
    else
    {
      if ( a4 )
      {
        v11 = 3906;
        HIDWORD(v70) = 4200450;
      }
      else
      {
        v11 = 3908;
        HIDWORD(v70) = 4196866;
      }
      LOWORD(v70) = v11;
      v72 = &v70;
    }
    v78 = *(_QWORD *)(a1 + 11664);
    while ( 1 )
    {
      v12 = (volatile signed __int32 *)(v8 + 2);
      v13 = 4294967277LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v8 + 2, v7, 4294967277LL);
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
            v53 = SchedulerAssist[6];
            SchedulerAssist[6] = v53 + 1;
            if ( v53 == -1 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v6 = a3;
              v7 = v5;
              v13 = 4294967277LL;
            }
          }
        }
        if ( _interlockedbittestandset64(v12, 0LL) )
        {
          v52 = CurrentPrcb->SchedulerAssist;
          if ( v52 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v54 = v52[6] - 1;
              v52[6] = v54;
              if ( !v54 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire(v8 + 2, v7, v13);
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
      v16 = *v8;
      v17 = (__int64 *)**v8;
      *v8 = v17;
      if ( !v17 )
        v8[1] = (__int64 *)v8;
      v18 = v16[2];
      v19 = (unsigned __int64)(v16 - 1);
      BugCheckParameter2 = v18;
      v20 = *(_QWORD **)(v19 + 56);
      v21 = *(_QWORD *)(v19 + 32);
      v22 = *(_QWORD *)(v19 + 40);
      v23 = *(_QWORD *)(v19 + 48);
      *(_QWORD *)(v19 + 56) = 0LL;
      v64 = v21;
      --*((_DWORD *)v8 + 6);
      v8[4] = (__int64 *)v19;
      v24 = *(_QWORD *)(a1 + 33976);
      v67 = v22;
      v65 = v23;
      if ( v24 && !(_DWORD)v5 )
        --*(_DWORD *)(v24 + 28);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseSpinLockInstrumented(v8 + 2, retaddr);
        v6 = a3;
        v21 = v64;
        v22 = v67;
        v23 = v65;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
      }
      v25 = KeGetCurrentPrcb();
      v26 = (unsigned __int64)v25->SchedulerAssist;
      if ( v26 )
      {
        if ( v25->NestingLevel <= 1u )
        {
          v55 = *(_DWORD *)(v26 + 24) - 1;
          *(_DWORD *)(v26 + 24) = v55;
          if ( !v55 )
          {
            KiRemoveSystemWorkPriorityKick(v25);
            v6 = a3;
            v21 = v64;
            v22 = v67;
            v23 = v65;
          }
        }
      }
      _enable();
      if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
      {
        *(_QWORD *)&v79 = BugCheckParameter2;
        v83[1] = 16LL;
        *((_QWORD *)&v79 + 1) = 0x7E35C6C7F3DD7277LL
                              * (KiWaitNever ^ __ROR8__(
                                                 BugCheckParameter2 ^ _byteswap_uint64(v19 ^ KiWaitAlways),
                                                 KiWaitNever));
        v83[0] = &v79;
        EtwTraceKernelEvent((unsigned int)v83, 1, 537133056, 3941, 4196866);
        v6 = a3;
        v21 = v64;
        v22 = v67;
        v23 = v65;
      }
      if ( v72 )
      {
        v27 = qword_140D248A0;
        v68 = 0;
        if ( qword_140D248A0 )
        {
          v26 = *(unsigned int *)(qword_140D248A0 + 4224);
          v28 = !_BitScanForward((unsigned int *)&v29, v26);
          v68 = v29;
          if ( !v28 )
          {
            do
            {
              v26 = ((_DWORD)v26 - 1) & (unsigned int)v26;
              v30 = 32LL * (unsigned int)v29 + qword_140D248A0 + 4260;
              if ( v30 && (*(_DWORD *)(v30 + 4) & 0x80u) != 0 )
                v4 |= 1 << *(_BYTE *)(qword_140D248A0 + 2 * v29 + 4209);
              v28 = !_BitScanForward((unsigned int *)&v29, v26);
            }
            while ( !v28 );
            v21 = v64;
            v23 = v65;
            v68 = v29;
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
          v21 = v64;
          v23 = v65;
          *(LARGE_INTEGER *)&v81 = PerformanceCounter;
          v31 = 0LL;
        }
        else
        {
          v31 = 0LL;
          *(_QWORD *)&v81 = 0LL;
        }
        if ( (v4 & 4) != 0 )
        {
          SystemTimePrecise = RtlGetSystemTimePrecise();
          v6 = a3;
          v21 = v64;
          v23 = v65;
          *((LARGE_INTEGER *)&v81 + 1) = SystemTimePrecise;
          v31 = 0LL;
        }
        else
        {
          *((_QWORD *)&v81 + 1) = 0LL;
        }
        if ( (v4 & 8) != 0 )
        {
          v32 = __rdtsc();
          v26 = (unsigned __int64)HIDWORD(v32) << 32;
          *(_QWORD *)&v82 = v32;
          v31 = 0LL;
        }
        else
        {
          *(_QWORD *)&v82 = 0LL;
        }
        if ( (v4 & 0x10) != 0 )
        {
          v73 = 0LL;
          ((void (__fastcall *)(__int64 *, unsigned __int64, __int64, __int64))off_140C009E0[0])(&v73, v26, v27, v23);
          v31 = v73;
          v6 = a3;
          v21 = v64;
        }
        v22 = v67;
        *((_QWORD *)&v82 + 1) = v31;
      }
      v33 = ((*v6)++ & 0xF) + 1LL;
      v34 = &v6[4 * v33];
      *(_QWORD *)v34 = BugCheckParameter2;
      v34[2] = MEMORY[0xFFFFF78000000320];
      v35 = *(void **)(a1 + 33960);
      LODWORD(BugCheckParameter3) = *(_DWORD *)(v74 + 484);
      *(_DWORD *)(a1 + 32412) = 0;
      if ( v35 && *(void **)(a1 + 33968) != v35 && *(_DWORD *)(a1 + 31724) < *(_DWORD *)(a1 + 31732) )
      {
        v58 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
        *(_QWORD *)(a1 + 33968) = v35;
        memset(v35, 0, v58);
        v21 = v64;
        v22 = v67;
      }
      v36 = __rdtsc();
      *(_QWORD *)(a1 + 11664) = v20;
      v37 = v36;
      if ( v20 != (_QWORD *)1 )
        v20[4] = v36;
      if ( !(_DWORD)v5 )
        *(_BYTE *)(a1 + 12586) = 1;
      ((void (__fastcall *)(unsigned __int64, __int64, ULONG_PTR))BugCheckParameter2)(v19, v21, v22);
      v38 = __rdtsc();
      v39 = v38;
      if ( !(_DWORD)v5 )
      {
        *(_BYTE *)(a1 + 12586) = 0;
        v40 = *(_QWORD *)(a1 + 12432);
        v41 = v38 - v37;
        if ( v40 )
        {
          v59 = *(_DWORD *)(v40 + 4) >> 5;
          v77 = -1LL << (*(_BYTE *)(v40 + 4) & 0x1F);
          v60 = BugCheckParameter2 & v77;
          v76 = (BugCheckParameter2 & v77) >> 56;
          v75 = (BugCheckParameter2 & v77) >> 40;
          v67 = (BugCheckParameter2 & v77) >> 16;
          if ( v59 )
          {
            v80 = BugCheckParameter2 & v77;
            v61 = *(_QWORD *)(v40 + 8)
                + 8LL
                * (((unsigned int)v76
                  + 37
                  * ((unsigned __int8)((BugCheckParameter2 & v77) >> 48)
                   + 37
                   * ((unsigned __int8)v75
                    + 37
                    * ((unsigned __int8)((BugCheckParameter2 & v77) >> 32)
                     + 37
                     * ((((unsigned int)BugCheckParameter2 & (unsigned int)v77) >> 24)
                      + 37
                      * ((unsigned __int8)v67
                       + 37
                       * ((unsigned __int8)((unsigned __int16)(BugCheckParameter2 & v77) >> 8)
                        + 37 * ((unsigned __int8)v60 + 11623883)))))))) & (v59 - 1));
            while ( 1 )
            {
              v61 = *(_QWORD *)v61;
              if ( (v61 & 1) != 0 )
                break;
              if ( v60 == (v77 & *(_QWORD *)(v61 + 8)) )
              {
                v62 = *(_QWORD *)(v61 + 16) >> 2;
                *(_BYTE *)(v61 + 24) = 1;
                *(_QWORD *)(v61 + 16) = v62 + ((3 * v41) >> 2);
                goto LABEL_46;
              }
            }
          }
          KiInsertNewDpcRuntime(v40, BugCheckParameter2, v41);
        }
      }
LABEL_46:
      if ( v20 != (_QWORD *)1 )
      {
        v42 = v39 - v20[4];
        v20[3] += v42;
        v20[10] += v42;
        ++v20[5];
        ++v20[11];
      }
      v43 = (unsigned int)BugCheckParameter3;
      v34[3] = MEMORY[0xFFFFF78000000320];
      if ( (_DWORD)v43 != *(_DWORD *)(v74 + 484) )
        KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, v43, *(unsigned int *)(v74 + 484));
      if ( v72 )
      {
        v44 = *((_DWORD *)v72 + 1);
        v45 = *(_WORD *)v72;
        v84[2] = &BugCheckParameter2;
        v84[3] = 8LL;
        v46 = *(_DWORD *)(EtwpHostSiloState + 4224);
        v28 = !_BitScanForward(&v47, v46);
        v69 = v47;
        if ( !v28 )
        {
          do
          {
            v46 &= v46 - 1;
            v48 = v47;
            v49 = 32LL * v47 + EtwpHostSiloState + 4260;
            if ( v49 )
            {
              if ( (*(_DWORD *)(v49 + 4) & 0x80u) != 0 )
              {
                v50 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v48 + 4209);
                v51 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v48 + 4208);
                v84[1] = 8LL;
                v84[0] = &v80 + v50;
                EtwpLogKernelEvent((unsigned int)v84, EtwpHostSiloState, v51, 2, v45, v44);
              }
            }
            v28 = !_BitScanForward(&v47, v46);
          }
          while ( !v28 );
          v69 = v47;
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
    result = v78;
    *(_QWORD *)(a1 + 11664) = v78;
  }
  return result;
}
