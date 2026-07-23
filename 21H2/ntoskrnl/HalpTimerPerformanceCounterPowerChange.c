/*
 * XREFs of HalpTimerPerformanceCounterPowerChange @ 0x1404BFEE0
 * Callers:
 *     HalpTimerPowerChange @ 0x1404C0514 (HalpTimerPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x140396440 (HalpTimerScaleCounter.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403A5DB4 (HalpTimerCalibratePerformanceCounter.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall HalpTimerPerformanceCounterPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v3; // r15
  __int64 InternalData; // rax
  int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  signed __int64 v11; // rax
  int v12; // r8d
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  signed __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  ULONG_PTR v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rbp
  ULONG_PTR v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // r10
  signed __int64 v32; // rax
  int v33; // r9d
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  signed __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // r15
  __int64 v43; // rbp
  __int64 v44; // r12
  __int64 v45; // rbx
  __int64 v46; // rax
  unsigned __int64 v47; // r10
  signed __int64 v48; // rax
  int v49; // r9d
  unsigned __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rcx
  unsigned __int64 v53; // r8
  signed __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rbp
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // r15
  __int64 v62; // rbx
  __int64 v63; // rax
  unsigned __int64 v64; // r9
  signed __int64 v65; // rax
  int v66; // r8d
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rsi
  signed __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rbx
  unsigned __int64 v74; // rax
  int v75; // eax
  signed __int32 v76[8]; // [rsp+0h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = HalpTimerSavedPerformanceCounter;
  if ( HalpTimerSavedPerformanceCounter )
  {
    if ( BugCheckParameter3 == HalpTimerSavedPerformanceCounter && a2 )
    {
      InternalData = HalpTimerGetInternalData(HalpTimerSavedPerformanceCounter);
      v5 = (*(__int64 (__fastcall **)(__int64))(v3 + 104))(InternalData);
      if ( v5 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v3, v5);
      if ( HalpTimerDelayedQueryHardwareCount )
      {
        *(_QWORD *)(HalpPerformanceCounter + 112) = HalpTimerDelayedQueryHardwareCount;
        HalpTimerDelayedQueryHardwareCount = 0LL;
      }
      v6 = HalpPerformanceCounter;
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v19 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v20 = (*(__int64 (__fastcall **)(__int64))(v6 + 112))(v19);
        v7 = *(_QWORD *)(v6 + 208);
        v17 = v20;
      }
      else
      {
        do
        {
          v7 = *(_QWORD *)(v6 + 208);
          do
          {
            v8 = *(_QWORD *)(v6 + 200);
            v9 = HalpTimerGetInternalData(v6);
            v10 = (*(__int64 (__fastcall **)(__int64))(v6 + 112))(v9);
            _InterlockedOr(v76, 0);
            v11 = *(_QWORD *)(v6 + 200);
          }
          while ( v8 != v11 );
        }
        while ( v7 != *(_QWORD *)(v6 + 208) );
        v12 = *(_DWORD *)(v6 + 220);
        v13 = v8 ^ v10;
        if ( _bittest64((const __int64 *)&v13, (unsigned __int8)(v12 - 1)) )
        {
          v14 = 1LL;
          if ( v12 == 64 )
            v15 = -1LL;
          else
            v15 = (1LL << v12) - 1;
          if ( v12 != 64 )
            v14 = 1LL << v12;
          v16 = v8 & v15;
          v17 = v10 | v8 ^ v16;
          if ( v10 < v16 )
            v17 += v14;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 200), v17, v11);
        }
        else
        {
          if ( v12 == 64 )
            v18 = -1LL;
          else
            v18 = (1LL << v12) - 1;
          v17 = v10 | v8 & ~v18;
        }
      }
      v21 = HalpTimerSavedPerformanceCounter;
      v22 = HalpTimerScaleCounter(
              v7 + v17,
              *(_QWORD *)(HalpPerformanceCounter + 192),
              *(_QWORD *)(HalpTimerSavedPerformanceCounter + 192));
      v23 = *(_QWORD *)(v21 + 16);
      if ( v22 >= v23 )
        v23 = v22;
      result = (_UNKNOWN **)HalpTimerCalibratePerformanceCounter(v3, v23);
      if ( (int)result < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, v3, (int)result);
      HalpTimerSavedPerformanceCounter = 0LL;
      HalpPerformanceCounter = v3;
    }
  }
  else
  {
    v24 = HalpPerformanceCounter;
    if ( BugCheckParameter3 == HalpPerformanceCounter && !a2 )
    {
      v25 = HalpAlwaysOnCounter;
      HalpTimerSavedPerformanceCounter = HalpPerformanceCounter;
      if ( !HalpAlwaysOnCounter )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x22uLL, BugCheckParameter3, 0LL);
      v26 = -1LL;
      v27 = 1LL;
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v40 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v41 = (*(__int64 (__fastcall **)(__int64))(v24 + 112))(v40);
        v28 = *(_QWORD *)(v24 + 208);
        v38 = v41;
      }
      else
      {
        do
        {
          v28 = *(_QWORD *)(v24 + 208);
          do
          {
            v29 = *(_QWORD *)(v24 + 200);
            v30 = HalpTimerGetInternalData(v24);
            v31 = (*(__int64 (__fastcall **)(__int64))(v24 + 112))(v30);
            _InterlockedOr(v76, 0);
            v32 = *(_QWORD *)(v24 + 200);
          }
          while ( v29 != v32 );
        }
        while ( v28 != *(_QWORD *)(v24 + 208) );
        v33 = *(_DWORD *)(v24 + 220);
        v34 = v29 ^ v31;
        if ( _bittest64((const __int64 *)&v34, (unsigned __int8)(v33 - 1)) )
        {
          if ( v33 == 64 )
            v35 = -1LL;
          else
            v35 = (1LL << v33) - 1;
          v36 = 1LL;
          if ( v33 != 64 )
            v36 = 1LL << v33;
          v37 = v29 & v35;
          v38 = v31 | v29 ^ v37;
          if ( v31 < v37 )
            v38 += v36;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 200), v38, v32);
        }
        else
        {
          if ( v33 == 64 )
            v39 = -1LL;
          else
            v39 = (1LL << v33) - 1;
          v38 = v31 | v29 & ~v39;
        }
      }
      v42 = v38 + v28;
      v43 = HalpAlwaysOnCounter;
      *(_QWORD *)(HalpPerformanceCounter + 16) = v42;
      if ( *(_DWORD *)(v43 + 220) == 64 )
      {
        v56 = HalpTimerGetInternalData(v43);
        v57 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v56);
        v44 = *(_QWORD *)(v43 + 208);
        v54 = v57;
      }
      else
      {
        do
        {
          v44 = *(_QWORD *)(v43 + 208);
          do
          {
            v45 = *(_QWORD *)(v43 + 200);
            v46 = HalpTimerGetInternalData(v43);
            v47 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v46);
            _InterlockedOr(v76, 0);
            v48 = *(_QWORD *)(v43 + 200);
          }
          while ( v45 != v48 );
        }
        while ( v44 != *(_QWORD *)(v43 + 208) );
        v49 = *(_DWORD *)(v43 + 220);
        v50 = v45 ^ v47;
        if ( _bittest64((const __int64 *)&v50, (unsigned __int8)(v49 - 1)) )
        {
          if ( v49 == 64 )
            v51 = -1LL;
          else
            v51 = (1LL << v49) - 1;
          v52 = 1LL;
          if ( v49 != 64 )
            v52 = 1LL << v49;
          v53 = v45 & v51;
          v54 = v47 | v45 ^ v53;
          if ( v47 < v53 )
            v54 += v52;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 200), v54, v48);
        }
        else
        {
          if ( v49 == 64 )
            v55 = -1LL;
          else
            v55 = (1LL << v49) - 1;
          v54 = v47 | v45 & ~v55;
        }
      }
      v58 = HalpPerformanceCounter;
      v59 = HalpTimerScaleCounter(
              v44 + v54,
              *(_QWORD *)(HalpAlwaysOnCounter + 192),
              *(_QWORD *)(HalpPerformanceCounter + 192));
      v60 = v42 - v59;
      if ( v42 <= v59 )
        v60 = v59 - v42;
      if ( v60 > HalpTimerMaximumAllowableDrift )
      {
        ++HalpTimerDriftReadjustmentCount;
        if ( *(_DWORD *)(v58 + 220) == 64 )
        {
          v71 = HalpTimerGetInternalData(v58);
          v72 = (*(__int64 (__fastcall **)(__int64))(v58 + 112))(v71);
          v61 = *(_QWORD *)(v58 + 208);
          v69 = v72;
        }
        else
        {
          do
          {
            v61 = *(_QWORD *)(v58 + 208);
            do
            {
              v62 = *(_QWORD *)(v58 + 200);
              v63 = HalpTimerGetInternalData(v58);
              v64 = (*(__int64 (__fastcall **)(__int64))(v58 + 112))(v63);
              _InterlockedOr(v76, 0);
              v65 = *(_QWORD *)(v58 + 200);
            }
            while ( v62 != v65 );
          }
          while ( v61 != *(_QWORD *)(v58 + 208) );
          v66 = *(_DWORD *)(v58 + 220);
          v67 = v62 ^ v64;
          if ( _bittest64((const __int64 *)&v67, (unsigned __int8)(v66 - 1)) )
          {
            if ( v66 != 64 )
            {
              v26 = (1LL << v66) - 1;
              v27 = 1LL << v66;
            }
            v68 = v62 & v26;
            v69 = v64 | v62 ^ v68;
            if ( v64 < v68 )
              v69 += v27;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v58 + 200), v69, v65);
          }
          else
          {
            if ( v66 == 64 )
              v70 = -1LL;
            else
              v70 = (1LL << v66) - 1;
            v69 = v64 | v62 & ~v70;
          }
        }
        v73 = HalpAlwaysOnCounter;
        v74 = HalpTimerScaleCounter(
                v61 + v69,
                *(_QWORD *)(HalpPerformanceCounter + 192),
                *(_QWORD *)(HalpAlwaysOnCounter + 192));
        v75 = HalpTimerCalibratePerformanceCounter(v73, v74);
        if ( v75 < 0 )
          KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, HalpAlwaysOnCounter, v75);
      }
      HalpTimerDelayedQueryHardwareCount = *(_QWORD *)(v25 + 112);
      *(_QWORD *)(v25 + 112) = HalpTimerDelayedQueryCounter;
      HalpTimerSavedPerformanceCounter = HalpPerformanceCounter;
      result = (_UNKNOWN **)HalpAlwaysOnCounter;
      HalpPerformanceCounter = HalpAlwaysOnCounter;
    }
  }
  return result;
}
