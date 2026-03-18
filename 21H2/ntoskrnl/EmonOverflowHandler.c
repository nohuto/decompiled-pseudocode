/*
 * XREFs of EmonOverflowHandler @ 0x140520920
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     EmonIsModifiedByBadActorInternal @ 0x140520580 (EmonIsModifiedByBadActorInternal.c)
 *     EmonPebsOverflowHandler @ 0x1405211B4 (EmonPebsOverflowHandler.c)
 *     KeProfileInterruptWithSource @ 0x140571540 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x1405C6DA0 (PoGetProcessorIdleAccounting.c)
 */

__int64 (__fastcall **__fastcall EmonOverflowHandler(__int64 a1, __int64 a2, __int64 a3))()
{
  __int64 (__fastcall **result)(); // rax
  unsigned int Number; // esi
  __int64 v5; // r9
  LARGE_INTEGER *v6; // r15
  __int64 v7; // r12
  __int64 i; // rsi
  unsigned int v9; // edi
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r13
  unsigned __int64 v14; // r15
  LARGE_INTEGER v15; // r11
  unsigned int v16; // ecx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rbx
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // r13d
  __int64 v27; // rax
  unsigned int v28; // r13d
  LARGE_INTEGER v29; // rax
  __int64 v30; // r8
  __int64 v31; // r10
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  unsigned __int64 QuadPart; // r13
  unsigned __int64 v37; // rdi
  __int64 *v38; // rbx
  __int64 v39; // r14
  unsigned __int64 v40; // rsi
  void (__fastcall *v41)(unsigned __int64, __int64 *, __int64, __int64); // rax
  bool v42; // zf
  __int64 v43; // rsi
  LARGE_INTEGER v44; // r15
  __int64 v45; // rbx
  unsigned __int64 v46; // r12
  unsigned int v47; // ecx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // r15
  __int64 v52; // rbx
  unsigned int v53; // ecx
  int v54; // eax
  unsigned int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // r15
  LARGE_INTEGER v60; // rax
  __int64 v61; // r8
  __int64 v62; // r11
  unsigned int v63; // r9d
  unsigned __int64 v64; // r10
  unsigned int v65; // ecx
  unsigned __int64 v66; // rdx
  __int64 v67; // r8
  LARGE_INTEGER v68; // [rsp+20h] [rbp-48h] BYREF
  __int64 v69; // [rsp+28h] [rbp-40h]
  __int64 v70; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v71; // [rsp+38h] [rbp-30h]
  LARGE_INTEGER *v72; // [rsp+40h] [rbp-28h]
  unsigned __int64 v73; // [rsp+48h] [rbp-20h]
  LARGE_INTEGER v74; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp-10h] BYREF
  int v77; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v78; // [rsp+C0h] [rbp+58h]
  unsigned int v79; // [rsp+C8h] [rbp+60h]

  v77 = 0;
  result = &DefaultProfileInterface;
  Number = KeGetPcr()->Prcb.Number;
  v5 = a1;
  if ( HalpProfileInterface == &DefaultProfileInterface )
  {
    v6 = (LARGE_INTEGER *)HalpCounterStatus;
  }
  else
  {
    result = (__int64 (__fastcall **)())HalpCounterStatus;
    v6 = (LARGE_INTEGER *)(HalpCounterStatus + 8LL * Number * HalpNumberOfCounters);
  }
  v72 = v6;
  if ( (unsigned int)EmonVersion >= 2 )
  {
    v35 = __readmsr(0x38Eu);
    QuadPart = EmonOverflowMask & v35;
    PerformanceFrequency.QuadPart = EmonOverflowMask & v35;
    v37 = EmonOverflowMask & v35;
    if ( (EmonOverflowMask & v35 & 0x4000000000000000LL) != 0 )
    {
      EmonPebsOverflowHandler(910LL, (unsigned __int64)HIDWORD(v35) << 32, a3, a1);
      v37 &= ~0x4000000000000000uLL;
    }
    v38 = (__int64 *)EmonReservedResourcesList;
    if ( (__int64 *)EmonReservedResourcesList != &EmonReservedResourcesList )
    {
      v39 = Number;
      do
      {
        v40 = v37 & v38[v39 + 4];
        if ( v40 )
        {
          v41 = (void (__fastcall *)(unsigned __int64, __int64 *, __int64, __int64))v38[2];
          if ( v41 )
            v41(v37 & v38[v39 + 4], v38, a3, v5);
        }
        v38 = (__int64 *)*v38;
        v37 &= ~v40;
      }
      while ( v38 != &EmonReservedResourcesList );
    }
    v42 = !_BitScanForward64((unsigned __int64 *)&v43, v37);
    if ( v42 )
    {
LABEL_101:
      result = (__int64 (__fastcall **)())QuadPart;
      __writemsr(0x390u, QuadPart);
      return result;
    }
    while ( 1 )
    {
      v37 &= ~(1LL << v43);
      if ( (unsigned int)v43 >= 0x20 )
        v43 = (unsigned int)(EmonNumberArchCounters - 32 + v43);
      if ( *(_DWORD *)(v6[v43].QuadPart + 24) )
        goto LABEL_99;
      v44 = *v6;
      v45 = 5 * v43;
      LODWORD(v46) = 0;
      v69 = 5 * v43;
      v68 = v44;
      v73 = 0LL;
      LOBYTE(v77) = 0;
      v79 = v43;
      if ( (unsigned int)v43 < EmonNumberArchCounters )
      {
        v47 = v43 + 390;
        v71 = __readmsr((int)v43 + 390);
        v49 = v71 & 0xFFFFFFFFFFAFFFFFuLL;
      }
      else
      {
        v79 = v43 - EmonNumberArchCounters + 32;
        v47 = 911;
        v71 = ~(15LL << (4 * ((unsigned __int8)v43 - (unsigned __int8)EmonNumberArchCounters))) & __readmsr(0x38Du);
        v48 = __readmsr(0x38Fu);
        _bittestandreset64((__int64 *)&v48, v79);
        v73 = v48;
        v49 = v48;
      }
      __writemsr(v47, v49);
      v50 = *(unsigned int *)(v44.QuadPart + 40 * v43 + 32);
      if ( (_DWORD)v50 )
      {
        KeProfileInterruptWithSource(a1, v50);
        LODWORD(v46) = *(_DWORD *)(v44.QuadPart + 40 * v43);
        goto LABEL_76;
      }
      v70 = 0LL;
      v74.QuadPart = 0LL;
      if ( HalpTimerProfilingCallback )
        HalpTimerProfilingCallback(a1);
      else
        KeProfileInterruptWithSource(a1, 0LL);
      v51 = HalpProfileData;
      v52 = 32LL * KeGetPcr()->Prcb.Number;
      v53 = *(_DWORD *)(v52 + HalpProfileData + 24);
      if ( v53 )
      {
        v54 = *(_DWORD *)(v52 + HalpProfileData + 20);
        LODWORD(v46) = *(_DWORD *)(v52 + HalpProfileData + 16);
        if ( v54 )
        {
          v58 = v54 - 1;
          *(_DWORD *)(v52 + HalpProfileData + 20) = v58;
          if ( v58 )
            goto LABEL_75;
          v78 = 0x2710 / v53;
          *(_DWORD *)(v52 + v51 + 20) = 0x2710 / v53;
          if ( !(0x2710 / v53) )
          {
            *(_DWORD *)(v52 + v51 + 20) = 1;
            v78 = 1;
          }
          PoGetProcessorIdleAccounting(&v70, 0x2710 % v53);
          v56 = v70;
          if ( v70 == *(_QWORD *)(v52 + v51 + 8) )
          {
            v59 = v78 * (unsigned int)v46;
            v60 = KeQueryPerformanceCounter(&v74);
            v61 = HalpProfileData;
            if ( v60.QuadPart != *(_QWORD *)(v52 + HalpProfileData) )
            {
              v46 = v74.QuadPart
                  * (v59
                   * (unsigned __int64)*(unsigned int *)(v52 + HalpProfileData + 24)
                   / (v60.QuadPart - *(_QWORD *)(v52 + HalpProfileData)))
                  / 0x989680;
              if ( v46 >= 0x1000 )
              {
                if ( v46 > 0x7FFFFFFF )
                  LODWORD(v46) = 0x7FFFFFFF;
              }
              else
              {
                LODWORD(v46) = 4096;
              }
              *(_DWORD *)(v52 + HalpProfileData + 16) = v46;
              *(LARGE_INTEGER *)(v52 + v61) = v60;
            }
            goto LABEL_75;
          }
        }
        else
        {
          v55 = 0x2710 / v53;
          if ( !(0x2710 / v53) )
            v55 = 1;
          *(_DWORD *)(v52 + HalpProfileData + 20) = v55;
          PoGetProcessorIdleAccounting(&v70, 0x2710 % v53);
          v56 = v70;
        }
        *(_QWORD *)(v52 + v51 + 8) = v56;
        *(LARGE_INTEGER *)(v52 + HalpProfileData) = KeQueryPerformanceCounter(0LL);
      }
LABEL_75:
      v44 = v68;
      v45 = v69;
LABEL_76:
      if ( (unsigned int)v43 >= EmonNumberArchCounters )
      {
        if ( (unsigned int)EmonFixedCounterResolution < 0x40 )
          v67 = (1LL << EmonFixedCounterResolution) - 1;
        else
          v67 = -1LL;
        v62 = v71;
        v64 = v73 | (1LL << v79);
        v65 = v43 - EmonNumberArchCounters + 777;
        v63 = 911;
        v66 = v67 & -(__int64)(unsigned int)v46;
      }
      else
      {
        if ( (unsigned int)EmonCounterResolution < 0x40 )
          v57 = (1LL << EmonCounterResolution) - 1;
        else
          v57 = -1LL;
        v62 = v71;
        v63 = v43 + 390;
        v64 = v71 | 0x500000;
        v65 = v43 + 193;
        v66 = v57 & -(__int64)(unsigned int)v46;
      }
      __writemsr(v65, v66);
      __writemsr(v63, v64);
      EmonIsModifiedByBadActorInternal(v43, v62, &v77);
      if ( (_BYTE)v77 )
        *(_BYTE *)(v44.QuadPart + 8 * v45 + 36) = 1;
      v6 = v72;
LABEL_99:
      v42 = !_BitScanForward64((unsigned __int64 *)&v43, v37);
      if ( v42 )
      {
        QuadPart = PerformanceFrequency.QuadPart;
        goto LABEL_101;
      }
    }
  }
  if ( (unsigned int)EmonCounterResolution < 0x40 )
    v7 = (1LL << EmonCounterResolution) - 1;
  else
    v7 = -1LL;
  for ( i = 0LL; (unsigned int)i < EmonNumberCounters; i = (unsigned int)(i + 1) )
  {
    result = (__int64 (__fastcall **)())v6[i].QuadPart;
    if ( !*((_DWORD *)result + 6) )
    {
      v9 = i + 390;
      v10 = i + 193;
      v79 = i + 390;
      v78 = i + 193;
      v11 = __readmsr((int)i + 193);
      v12 = (((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11) & v7;
      result = (__int64 (__fastcall **)())(v7 & 0xFFFFFFFF80000001uLL);
      if ( v12 < (v7 & 0xFFFFFFFF80000001uLL) )
      {
        v13 = 5 * i;
        v73 = 0LL;
        LODWORD(v14) = 0;
        LOBYTE(v77) = 0;
        v15 = *v72;
        v74 = *v72;
        v70 = 5 * i;
        LODWORD(v69) = i;
        if ( (unsigned int)i < EmonNumberArchCounters )
        {
          v16 = i + 390;
          v71 = __readmsr(v9);
          v18 = v71 & 0xFFFFFFFFFFAFFFFFuLL;
        }
        else
        {
          LODWORD(v69) = i - EmonNumberArchCounters + 32;
          v71 = ~(15LL << (4 * ((unsigned __int8)i - (unsigned __int8)EmonNumberArchCounters))) & __readmsr(0x38Du);
          v16 = 911;
          v17 = __readmsr(0x38Fu);
          _bittestandreset64((__int64 *)&v17, (unsigned int)v69);
          v73 = v17;
          v18 = v17;
          v5 = a1;
        }
        __writemsr(v16, v18);
        v19 = *(unsigned int *)(v15.QuadPart + 40 * i + 32);
        if ( (_DWORD)v19 )
        {
          KeProfileInterruptWithSource(v5, v19);
          LODWORD(v14) = *(_DWORD *)(v74.QuadPart + 40 * i);
        }
        else
        {
          v68.QuadPart = 0LL;
          PerformanceFrequency.QuadPart = 0LL;
          if ( HalpTimerProfilingCallback )
            HalpTimerProfilingCallback(v5);
          else
            KeProfileInterruptWithSource(v5, 0LL);
          v20 = HalpProfileData;
          v21 = 32LL * KeGetPcr()->Prcb.Number;
          v22 = *(_DWORD *)(v21 + HalpProfileData + 24);
          if ( v22 )
          {
            v23 = *(_DWORD *)(v21 + HalpProfileData + 20);
            LODWORD(v14) = *(_DWORD *)(v21 + HalpProfileData + 16);
            if ( v23 )
            {
              v25 = v23 - 1;
              *(_DWORD *)(v21 + HalpProfileData + 20) = v25;
              if ( !v25 )
              {
                *(_DWORD *)(v21 + v20 + 20) = 0x2710 / v22;
                v26 = 0x2710 / v22;
                if ( !(0x2710 / v22) )
                {
                  *(_DWORD *)(v21 + v20 + 20) = 1;
                  v26 = 1;
                }
                PoGetProcessorIdleAccounting(&v68, 0x2710 % v22);
                if ( v68.QuadPart == *(_QWORD *)(v21 + v20 + 8) )
                {
                  v28 = v14 * v26;
                  v29 = KeQueryPerformanceCounter(&PerformanceFrequency);
                  v30 = HalpProfileData;
                  if ( v29.QuadPart != *(_QWORD *)(v21 + HalpProfileData) )
                  {
                    v14 = PerformanceFrequency.QuadPart
                        * (v28
                         * (unsigned __int64)*(unsigned int *)(v21 + HalpProfileData + 24)
                         / (v29.QuadPart - *(_QWORD *)(v21 + HalpProfileData)))
                        / 0x989680;
                    if ( v14 >= 0x1000 )
                    {
                      if ( v14 > 0x7FFFFFFF )
                        LODWORD(v14) = 0x7FFFFFFF;
                    }
                    else
                    {
                      LODWORD(v14) = 4096;
                    }
                    *(_DWORD *)(v21 + HalpProfileData + 16) = v14;
                    *(LARGE_INTEGER *)(v21 + v30) = v29;
                  }
                }
                else
                {
                  *(LARGE_INTEGER *)(v21 + v20 + 8) = v68;
                  *(LARGE_INTEGER *)(v21 + HalpProfileData) = KeQueryPerformanceCounter(0LL);
                }
                v13 = v70;
              }
            }
            else
            {
              v24 = 0x2710 / v22;
              if ( !(0x2710 / v22) )
                v24 = 1;
              *(_DWORD *)(v21 + HalpProfileData + 20) = v24;
              PoGetProcessorIdleAccounting(&v68, 0x2710 % v22);
              *(LARGE_INTEGER *)(v21 + v20 + 8) = v68;
              *(LARGE_INTEGER *)(v21 + HalpProfileData) = KeQueryPerformanceCounter(0LL);
            }
          }
          v9 = v79;
          v10 = v78;
        }
        if ( (unsigned int)i >= EmonNumberArchCounters )
        {
          if ( (unsigned int)EmonFixedCounterResolution < 0x40 )
            v34 = (1LL << EmonFixedCounterResolution) - 1;
          else
            v34 = -1LL;
          v31 = v71;
          v32 = v73 | (1LL << v69);
          v10 = i - EmonNumberArchCounters + 777;
          v9 = 911;
          v33 = v34 & -(__int64)(unsigned int)v14;
        }
        else
        {
          if ( (unsigned int)EmonCounterResolution < 0x40 )
            v27 = (1LL << EmonCounterResolution) - 1;
          else
            v27 = -1LL;
          v31 = v71;
          v32 = v71 | 0x500000;
          v33 = v27 & -(__int64)(unsigned int)v14;
        }
        __writemsr(v10, v33);
        __writemsr(v9, v32);
        result = (__int64 (__fastcall **)())EmonIsModifiedByBadActorInternal(i, v31, &v77);
        v6 = v72;
        v5 = a1;
        if ( (_BYTE)v77 )
        {
          result = (__int64 (__fastcall **)())v74.QuadPart;
          *(_BYTE *)(v74.QuadPart + 8 * v13 + 36) = 1;
        }
      }
    }
  }
  return result;
}
