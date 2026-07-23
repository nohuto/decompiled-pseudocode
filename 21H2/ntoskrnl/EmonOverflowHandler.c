/*
 * XREFs of EmonOverflowHandler @ 0x1404D3AE0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     EmonPebsOverflowHandler @ 0x1404D426C (EmonPebsOverflowHandler.c)
 *     KeProfileInterruptWithSource @ 0x14051BDC0 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x140565720 (PoGetProcessorIdleAccounting.c)
 */

void __fastcall EmonOverflowHandler(__int64 a1)
{
  unsigned int Number; // esi
  __int64 v2; // r8
  __int64 v3; // r15
  __int64 v4; // r12
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  unsigned __int64 v7; // rax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rdi
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // eax
  LARGE_INTEGER v21; // rax
  __int64 v22; // r8
  LARGE_INTEGER v23; // r9
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // rdx^4
  int v29; // eax
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r13
  __int64 v34; // rbx
  unsigned __int64 v35; // rdi
  bool v36; // zf
  __int64 *v37; // rbx
  __int64 v38; // r14
  unsigned __int64 v39; // rsi
  void (__fastcall *v40)(unsigned __int64, __int64 *, __int64); // rax
  __int64 v41; // rbx
  unsigned __int64 v42; // r8
  __int64 v43; // r12
  unsigned int v44; // r14d
  unsigned int v45; // ecx
  unsigned __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // r14
  __int64 v49; // rbx
  unsigned int v50; // ecx
  int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  int v55; // eax
  LARGE_INTEGER v56; // rax
  __int64 v57; // r8
  LARGE_INTEGER v58; // r9
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  unsigned int v62; // ecx
  unsigned int v63; // rdx^4
  int v64; // eax
  __int64 v65; // r8
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rax
  int v68; // [rsp+20h] [rbp-48h]
  __int64 v69; // [rsp+28h] [rbp-40h] BYREF
  __int64 v70; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v72; // [rsp+40h] [rbp-28h]
  LARGE_INTEGER v73; // [rsp+48h] [rbp-20h] BYREF
  __int64 v74; // [rsp+50h] [rbp-18h]
  unsigned int v76; // [rsp+B8h] [rbp+50h]
  int v77; // [rsp+B8h] [rbp+50h]
  unsigned int v78; // [rsp+C0h] [rbp+58h]
  unsigned int v79; // [rsp+C0h] [rbp+58h]
  unsigned int v80; // [rsp+C8h] [rbp+60h]
  unsigned int v81; // [rsp+C8h] [rbp+60h]

  Number = KeGetPcr()->Prcb.Number;
  v2 = a1;
  v76 = 0;
  v3 = EmonCounterStatus + 16LL * Number * EmonNumberCounters;
  if ( (unsigned int)EmonVersion >= 2 )
  {
    v32 = __readmsr(0x38Eu);
    v33 = EmonOverflowMask & v32;
    v74 = EmonOverflowMask & v32;
    v34 = EmonOverflowMask & v32 & 0x4000000000000000LL;
    if ( v34 )
      EmonPebsOverflowHandler(910LL, (unsigned __int64)HIDWORD(v32) << 32, a1);
    v35 = v33 & 0xBFFFFFFFFFFFFFFFuLL;
    v36 = v34 == 0;
    v37 = (__int64 *)EmonReservedResourcesList;
    if ( v36 )
      v35 = v33;
    if ( (__int64 *)EmonReservedResourcesList != &EmonReservedResourcesList )
    {
      v38 = Number;
      do
      {
        v39 = v35 & v37[v38 + 4];
        if ( v39 )
        {
          v40 = (void (__fastcall *)(unsigned __int64, __int64 *, __int64))v37[2];
          if ( v40 )
            v40(v35 & v37[v38 + 4], v37, v2);
        }
        v37 = (__int64 *)*v37;
        v35 &= ~v39;
      }
      while ( v37 != &EmonReservedResourcesList );
    }
    v36 = !_BitScanForward64((unsigned __int64 *)&v41, v35);
    v77 = v41;
    if ( v36 )
    {
LABEL_102:
      __writemsr(0x390u, v33);
      return;
    }
    v42 = 4289724415LL;
    while ( 1 )
    {
      v35 &= ~(1LL << v41);
      if ( (unsigned int)v41 >= EmonNumberArchCounters )
      {
        LODWORD(v41) = EmonNumberArchCounters + v41 - 32;
        v77 = v41;
      }
      v43 = 2LL * (unsigned int)v41;
      if ( *(_DWORD *)(v3 + 16LL * (unsigned int)v41) )
        goto LABEL_100;
      v72 = 0LL;
      v44 = v41 - EmonNumberArchCounters + 32;
      v79 = v44;
      if ( (unsigned int)v41 >= EmonNumberArchCounters )
      {
        v42 = __readmsr(0x38Fu);
        _bittestandreset64((__int64 *)&v42, v44);
        v45 = 911;
        v72 = v42;
        v46 = v42;
      }
      else
      {
        v45 = v41 + 390;
        v46 = *(_DWORD *)(v3 + 16LL * (unsigned int)v41 + 12) & 0xFFAFFFFF;
      }
      __writemsr(v45, v46);
      v47 = *(unsigned int *)(v3 + 16LL * (unsigned int)v41 + 4);
      if ( (_DWORD)v47 )
      {
        KeProfileInterruptWithSource(a1, v47);
        LODWORD(v54) = *(_DWORD *)(v3 + 16LL * (unsigned int)v41 + 8);
        goto LABEL_90;
      }
      v70 = 0LL;
      v73.QuadPart = 0LL;
      if ( HalpTimerProfilingCallback )
        HalpTimerProfilingCallback(a1, v47, v42);
      else
        KeProfileInterruptWithSource(a1, 0LL);
      v48 = HalpProfileData;
      v49 = 32LL * KeGetPcr()->Prcb.Number;
      v50 = *(_DWORD *)(v49 + HalpProfileData + 24);
      if ( !v50 )
      {
        LODWORD(v54) = 0;
        goto LABEL_87;
      }
      v69 = *(unsigned int *)(v49 + HalpProfileData + 16);
      v51 = *(_DWORD *)(v49 + HalpProfileData + 20);
      if ( v51 )
      {
        v55 = v51 - 1;
        *(_DWORD *)(v49 + HalpProfileData + 20) = v55;
        if ( v55 )
          goto LABEL_76;
        v81 = 0x2710 / v50;
        *(_DWORD *)(v49 + v48 + 20) = 0x2710 / v50;
        if ( !(0x2710 / v50) )
        {
          *(_DWORD *)(v49 + v48 + 20) = 1;
          v81 = 1;
        }
        PoGetProcessorIdleAccounting(&v70, 0x2710 % v50);
        v53 = v70;
        if ( v70 == *(_QWORD *)(v49 + v48 + 8) )
        {
          v56 = KeQueryPerformanceCounter(&v73);
          v57 = HalpProfileData;
          v58 = v56;
          v59 = v56.QuadPart - *(_QWORD *)(v49 + HalpProfileData);
          if ( v56.QuadPart != *(_QWORD *)(v49 + HalpProfileData) )
          {
            v60 = (unsigned int)v69 * v81 * (unsigned __int64)*(unsigned int *)(v49 + HalpProfileData + 24);
            *(LARGE_INTEGER *)(v49 + HalpProfileData) = v58;
            v54 = v73.QuadPart * (v60 / v59) / 0x989680;
            if ( v54 < 0x1000 )
              v54 = 4096LL;
            if ( v54 > 0x7FFFFFFF )
              LODWORD(v54) = 0x7FFFFFFF;
            *(_DWORD *)(v49 + v57 + 16) = v54;
            goto LABEL_87;
          }
          goto LABEL_76;
        }
      }
      else
      {
        v52 = 0x2710 / v50;
        if ( !(0x2710 / v50) )
          v52 = 1;
        *(_DWORD *)(v49 + HalpProfileData + 20) = v52;
        PoGetProcessorIdleAccounting(&v70, 0x2710 % v50);
        v53 = v70;
      }
      *(_QWORD *)(v49 + v48 + 8) = v53;
      *(LARGE_INTEGER *)(v49 + HalpProfileData) = KeQueryPerformanceCounter(0LL);
LABEL_76:
      LODWORD(v54) = v69;
LABEL_87:
      LODWORD(v41) = v77;
      v44 = v79;
LABEL_90:
      if ( (unsigned int)v41 >= EmonNumberArchCounters )
      {
        if ( (unsigned int)EmonFixedCounterResolution < 0x40 )
          v65 = (1LL << EmonFixedCounterResolution) - 1;
        else
          v65 = -1LL;
        __writemsr(v41 - EmonNumberArchCounters + 777, v65 & -(__int64)(unsigned int)v54);
        v66 = v72;
        _bittestandset64((__int64 *)&v66, v44);
        v63 = HIDWORD(v66);
        v64 = v66;
        v62 = 911;
      }
      else
      {
        if ( (unsigned int)EmonCounterResolution < 0x40 )
          v61 = (1LL << EmonCounterResolution) - 1;
        else
          v61 = -1LL;
        __writemsr(v41 + 193, v61 & -(__int64)(unsigned int)v54);
        v62 = v41 + 390;
        v63 = 0;
        v64 = *(_DWORD *)(v3 + 8 * v43 + 12) | 0x500000;
      }
      v42 = 4289724415LL;
      __writemsr(v62, __PAIR64__(v63, v64));
LABEL_100:
      v36 = !_BitScanForward64(&v67, v35);
      LODWORD(v41) = v67;
      v77 = v67;
      if ( v36 )
      {
        v33 = v74;
        goto LABEL_102;
      }
    }
  }
  if ( (unsigned int)EmonCounterResolution < 0x40 )
    v4 = (1LL << EmonCounterResolution) - 1;
  else
    v4 = -1LL;
  if ( EmonNumberCounters )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( !*(_DWORD *)(v3 + 16LL * v5) )
      {
        v6 = v5 + 193;
        v7 = __readmsr(v5 + 193);
        if ( ((((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) & v4) < (v4 & 0xFFFFFFFF80000001uLL) )
          break;
      }
LABEL_46:
      v5 = ++v76;
      if ( v76 >= EmonNumberCounters )
        return;
    }
    v72 = 0LL;
    v8 = v5 - EmonNumberArchCounters + 32;
    v78 = v8;
    if ( v5 >= EmonNumberArchCounters )
    {
      v11 = __readmsr(0x38Fu);
      _bittestandreset64((__int64 *)&v11, v8);
      v9 = 911;
      v72 = v11;
      v10 = v11;
      v2 = a1;
    }
    else
    {
      v9 = v5 + 390;
      v10 = *(_DWORD *)(v3 + 16LL * v5 + 12) & 0xFFAFFFFF;
    }
    __writemsr(v9, v10);
    v12 = *(unsigned int *)(v3 + 16LL * v5 + 4);
    if ( (_DWORD)v12 )
    {
      KeProfileInterruptWithSource(v2, v12);
      LODWORD(v19) = *(_DWORD *)(v3 + 16LL * v5 + 8);
      goto LABEL_36;
    }
    v69 = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    if ( HalpTimerProfilingCallback )
      HalpTimerProfilingCallback(v2, v12, v2);
    else
      KeProfileInterruptWithSource(v2, 0LL);
    v13 = HalpProfileData;
    v14 = 32LL * KeGetPcr()->Prcb.Number;
    v15 = *(_DWORD *)(v14 + HalpProfileData + 24);
    if ( !v15 )
    {
      LODWORD(v19) = 0;
      goto LABEL_33;
    }
    v68 = *(_DWORD *)(v14 + HalpProfileData + 16);
    v16 = *(_DWORD *)(v14 + HalpProfileData + 20);
    if ( v16 )
    {
      v20 = v16 - 1;
      *(_DWORD *)(v14 + HalpProfileData + 20) = v20;
      if ( v20 )
        goto LABEL_22;
      v80 = 0x2710 / v15;
      *(_DWORD *)(v14 + v13 + 20) = 0x2710 / v15;
      if ( !(0x2710 / v15) )
      {
        *(_DWORD *)(v14 + v13 + 20) = 1;
        v80 = 1;
      }
      PoGetProcessorIdleAccounting(&v69, 0x2710 % v15);
      v18 = v69;
      if ( v69 == *(_QWORD *)(v14 + v13 + 8) )
      {
        v21 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v22 = HalpProfileData;
        v23 = v21;
        v24 = v21.QuadPart - *(_QWORD *)(v14 + HalpProfileData);
        if ( v21.QuadPart != *(_QWORD *)(v14 + HalpProfileData) )
        {
          v25 = v68 * v80 * (unsigned __int64)*(unsigned int *)(v14 + HalpProfileData + 24);
          *(LARGE_INTEGER *)(v14 + HalpProfileData) = v23;
          v19 = PerformanceFrequency.QuadPart * (v25 / v24) / 0x989680;
          if ( v19 < 0x1000 )
            v19 = 4096LL;
          if ( v19 > 0x7FFFFFFF )
            LODWORD(v19) = 0x7FFFFFFF;
          *(_DWORD *)(v14 + v22 + 16) = v19;
          goto LABEL_33;
        }
        goto LABEL_22;
      }
    }
    else
    {
      v17 = 0x2710 / v15;
      if ( !(0x2710 / v15) )
        v17 = 1;
      *(_DWORD *)(v14 + HalpProfileData + 20) = v17;
      PoGetProcessorIdleAccounting(&v69, 0x2710 % v15);
      v18 = v69;
    }
    *(_QWORD *)(v14 + v13 + 8) = v18;
    *(LARGE_INTEGER *)(v14 + HalpProfileData) = KeQueryPerformanceCounter(0LL);
LABEL_22:
    LODWORD(v19) = v68;
LABEL_33:
    v8 = v78;
    v6 = v5 + 193;
LABEL_36:
    if ( v5 >= EmonNumberArchCounters )
    {
      if ( (unsigned int)EmonFixedCounterResolution < 0x40 )
        v30 = (1LL << EmonFixedCounterResolution) - 1;
      else
        v30 = -1LL;
      __writemsr(v5 - EmonNumberArchCounters + 777, v30 & -(__int64)(unsigned int)v19);
      v31 = v72;
      _bittestandset64((__int64 *)&v31, v8);
      v28 = HIDWORD(v31);
      v29 = v31;
      v27 = 911;
    }
    else
    {
      if ( (unsigned int)EmonCounterResolution < 0x40 )
        v26 = (1LL << EmonCounterResolution) - 1;
      else
        v26 = -1LL;
      __writemsr(v6, v26 & -(__int64)(unsigned int)v19);
      v27 = v5 + 390;
      v28 = 0;
      v29 = *(_DWORD *)(v3 + 16LL * v5 + 12) | 0x500000;
    }
    v2 = a1;
    __writemsr(v27, __PAIR64__(v28, v29));
    goto LABEL_46;
  }
}
