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
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  _DWORD *v32; // rsi
  void *v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r14
  __int64 v38; // r10
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r14
  ULONG_PTR v41; // rcx
  unsigned int v42; // r14d
  unsigned __int16 v43; // r15
  unsigned int v44; // esi
  unsigned int v45; // ecx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // r8d
  _DWORD *v50; // rcx
  int v51; // eax
  int v52; // eax
  int v53; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 SystemTimePrecise; // rax
  size_t v56; // r8
  int v57; // r12d
  ULONG_PTR v58; // r11
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v62; // [rsp+38h] [rbp-C8h]
  __int64 v63; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v65; // [rsp+50h] [rbp-B0h]
  int v66; // [rsp+58h] [rbp-A8h]
  unsigned int v67; // [rsp+5Ch] [rbp-A4h]
  __int64 v68; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-98h]
  __int64 *v70; // [rsp+70h] [rbp-90h]
  __int64 v71; // [rsp+78h] [rbp-88h] BYREF
  __int64 v72; // [rsp+80h] [rbp-80h]
  ULONG_PTR v73; // [rsp+88h] [rbp-78h]
  ULONG_PTR v74; // [rsp+90h] [rbp-70h]
  __int64 v75; // [rsp+98h] [rbp-68h]
  __int64 v76; // [rsp+A0h] [rbp-60h]
  __int128 v77; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR v78; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v79; // [rsp+C0h] [rbp-40h]
  __int128 v80; // [rsp+D0h] [rbp-30h]
  _QWORD v81[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v82[4]; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+168h] [rbp+68h]

  v4 = 0;
  v5 = a4;
  v72 = a2;
  v6 = a3;
  BugCheckParameter2 = 0LL;
  v68 = 0LL;
  v7 = a4;
  v8 = (__int64 **)(a1 + 40 * (a4 + 312LL));
  result = *((unsigned int *)v8 + 6);
  v77 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  if ( (_DWORD)result )
  {
    if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
    {
      v70 = 0LL;
    }
    else
    {
      if ( a4 )
      {
        v11 = 3906;
        HIDWORD(v68) = 4200450;
      }
      else
      {
        v11 = 3908;
        HIDWORD(v68) = 4196866;
      }
      LOWORD(v68) = v11;
      v70 = &v68;
    }
    v76 = *(_QWORD *)(a1 + 11664);
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
            v51 = SchedulerAssist[6];
            SchedulerAssist[6] = v51 + 1;
            if ( v51 == -1 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v6 = a3;
              v7 = v5;
            }
          }
        }
        if ( _interlockedbittestandset64(v12, 0LL) )
        {
          v50 = CurrentPrcb->SchedulerAssist;
          if ( v50 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v52 = v50[6] - 1;
              v50[6] = v52;
              if ( !v52 )
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
      v62 = v20;
      --*((_DWORD *)v8 + 6);
      v8[4] = (__int64 *)v18;
      v23 = *(_QWORD *)(a1 + 33976);
      v65 = v21;
      v63 = v22;
      if ( v23 && !(_DWORD)v5 )
        --*(_DWORD *)(v23 + 28);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseSpinLockInstrumented(v8 + 2, retaddr);
        v6 = a3;
        v20 = v62;
        v21 = v65;
        v22 = v63;
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
          v53 = *(_DWORD *)(v25 + 24) - 1;
          *(_DWORD *)(v25 + 24) = v53;
          if ( !v53 )
          {
            KiRemoveSystemWorkPriorityKick(v24);
            v6 = a3;
            v20 = v62;
            v21 = v65;
            v22 = v63;
          }
        }
      }
      _enable();
      if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
      {
        *(_QWORD *)&v77 = BugCheckParameter2;
        v81[1] = 16LL;
        *((_QWORD *)&v77 + 1) = 0x7E35C6C7F3DD7277LL
                              * (KiWaitNever ^ __ROR8__(
                                                 BugCheckParameter2 ^ _byteswap_uint64(v18 ^ KiWaitAlways),
                                                 KiWaitNever));
        v81[0] = &v77;
        EtwTraceKernelEvent((unsigned int)v81, 1, 537133056, 3941, 4196866);
        v6 = a3;
        v20 = v62;
        v21 = v65;
        v22 = v63;
      }
      if ( v70 )
      {
        v26 = qword_140D248A0;
        v66 = 0;
        if ( qword_140D248A0 )
        {
          v25 = *(unsigned int *)(qword_140D248A0 + 4224);
          v27 = !_BitScanForward((unsigned int *)&v24, v25);
          v66 = (int)v24;
          if ( !v27 )
          {
            do
            {
              v25 = ((_DWORD)v25 - 1) & (unsigned int)v25;
              v28 = 32LL * (unsigned int)v24 + qword_140D248A0 + 4260;
              if ( v28 && (*(_DWORD *)(v28 + 4) & 0x80u) != 0 )
                v4 |= 1 << *(_BYTE *)(qword_140D248A0 + 2LL * (_QWORD)v24 + 4209);
              v27 = !_BitScanForward((unsigned int *)&v24, v25);
            }
            while ( !v27 );
            v20 = v62;
            v22 = v63;
            v66 = (int)v24;
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
          v20 = v62;
          v22 = v63;
          *(LARGE_INTEGER *)&v79 = PerformanceCounter;
          v29 = 0LL;
        }
        else
        {
          v29 = 0LL;
          *(_QWORD *)&v79 = 0LL;
        }
        if ( (v4 & 4) != 0 )
        {
          SystemTimePrecise = RtlGetSystemTimePrecise(v24, v25, v26, v22);
          v6 = a3;
          v20 = v62;
          v22 = v63;
          *((_QWORD *)&v79 + 1) = SystemTimePrecise;
          v29 = 0LL;
        }
        else
        {
          *((_QWORD *)&v79 + 1) = 0LL;
        }
        if ( (v4 & 8) != 0 )
        {
          v30 = __rdtsc();
          v25 = (unsigned __int64)HIDWORD(v30) << 32;
          *(_QWORD *)&v80 = v30;
          v29 = 0LL;
        }
        else
        {
          *(_QWORD *)&v80 = 0LL;
        }
        if ( (v4 & 0x10) != 0 )
        {
          v71 = 0LL;
          ((void (__fastcall *)(__int64 *, unsigned __int64, __int64, __int64))off_140C009E0[0])(&v71, v25, v26, v22);
          v29 = v71;
          v6 = a3;
          v20 = v62;
        }
        v21 = v65;
        *((_QWORD *)&v80 + 1) = v29;
      }
      v31 = ((*v6)++ & 0xF) + 1LL;
      v32 = &v6[4 * v31];
      *(_QWORD *)v32 = BugCheckParameter2;
      v32[2] = MEMORY[0xFFFFF78000000320];
      v33 = *(void **)(a1 + 33960);
      LODWORD(BugCheckParameter3) = *(_DWORD *)(v72 + 484);
      *(_DWORD *)(a1 + 32412) = 0;
      if ( v33 && *(void **)(a1 + 33968) != v33 && *(_DWORD *)(a1 + 31724) < *(_DWORD *)(a1 + 31732) )
      {
        v56 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
        *(_QWORD *)(a1 + 33968) = v33;
        memset(v33, 0, v56);
        v20 = v62;
        v21 = v65;
      }
      v34 = __rdtsc();
      *(_QWORD *)(a1 + 11664) = v19;
      v35 = v34;
      if ( v19 != (_QWORD *)1 )
        v19[4] = v34;
      if ( !(_DWORD)v5 )
        *(_BYTE *)(a1 + 12586) = 1;
      ((void (__fastcall *)(unsigned __int64, __int64, ULONG_PTR))BugCheckParameter2)(v18, v20, v21);
      v36 = __rdtsc();
      v37 = v36;
      if ( !(_DWORD)v5 )
      {
        *(_BYTE *)(a1 + 12586) = 0;
        v38 = *(_QWORD *)(a1 + 12432);
        v39 = v36 - v35;
        if ( v38 )
        {
          v57 = *(_DWORD *)(v38 + 4) >> 5;
          v75 = -1LL << (*(_BYTE *)(v38 + 4) & 0x1F);
          v58 = BugCheckParameter2 & v75;
          v74 = (BugCheckParameter2 & v75) >> 56;
          v73 = (BugCheckParameter2 & v75) >> 40;
          v65 = (BugCheckParameter2 & v75) >> 16;
          if ( v57 )
          {
            v78 = BugCheckParameter2 & v75;
            v59 = *(_QWORD *)(v38 + 8)
                + 8LL
                * (((unsigned int)v74
                  + 37
                  * ((unsigned __int8)((BugCheckParameter2 & v75) >> 48)
                   + 37
                   * ((unsigned __int8)v73
                    + 37
                    * ((unsigned __int8)((BugCheckParameter2 & v75) >> 32)
                     + 37
                     * ((((unsigned int)BugCheckParameter2 & (unsigned int)v75) >> 24)
                      + 37
                      * ((unsigned __int8)v65
                       + 37
                       * ((unsigned __int8)((unsigned __int16)(BugCheckParameter2 & v75) >> 8)
                        + 37 * ((unsigned __int8)v58 + 11623883)))))))) & (v57 - 1));
            while ( 1 )
            {
              v59 = *(_QWORD *)v59;
              if ( (v59 & 1) != 0 )
                break;
              if ( v58 == (v75 & *(_QWORD *)(v59 + 8)) )
              {
                v60 = *(_QWORD *)(v59 + 16) >> 2;
                *(_BYTE *)(v59 + 24) = 1;
                *(_QWORD *)(v59 + 16) = v60 + ((3 * v39) >> 2);
                goto LABEL_46;
              }
            }
          }
          KiInsertNewDpcRuntime(v38, BugCheckParameter2, v39);
        }
      }
LABEL_46:
      if ( v19 != (_QWORD *)1 )
      {
        v40 = v37 - v19[4];
        v19[3] += v40;
        v19[10] += v40;
        ++v19[5];
        ++v19[11];
      }
      v41 = (unsigned int)BugCheckParameter3;
      v32[3] = MEMORY[0xFFFFF78000000320];
      if ( (_DWORD)v41 != *(_DWORD *)(v72 + 484) )
        KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, v41, *(unsigned int *)(v72 + 484));
      if ( v70 )
      {
        v42 = *((_DWORD *)v70 + 1);
        v43 = *(_WORD *)v70;
        v82[2] = &BugCheckParameter2;
        v82[3] = 8LL;
        v44 = *(_DWORD *)(EtwpHostSiloState + 4224);
        v27 = !_BitScanForward(&v45, v44);
        v67 = v45;
        if ( !v27 )
        {
          do
          {
            v44 &= v44 - 1;
            v46 = v45;
            v47 = 32LL * v45 + EtwpHostSiloState + 4260;
            if ( v47 )
            {
              if ( (*(_DWORD *)(v47 + 4) & 0x80u) != 0 )
              {
                v48 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v46 + 4209);
                v49 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v46 + 4208);
                v82[1] = 8LL;
                v82[0] = &v78 + v48;
                EtwpLogKernelEvent((__int64)v82, EtwpHostSiloState, v49, 2u, v43, v42);
              }
            }
            v27 = !_BitScanForward(&v45, v44);
          }
          while ( !v27 );
          v67 = v45;
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
    result = v76;
    *(_QWORD *)(a1 + 11664) = v76;
  }
  return result;
}
