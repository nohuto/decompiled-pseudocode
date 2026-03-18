/*
 * XREFs of VidSchiSwitchContextWithCheck @ 0x1C000B930
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C000A620 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0006940 (VidSchiUpdateContextStatus.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C00073B0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000AC50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C000C550 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiDecrementDeviceReference @ 0x1C0010DE8 (VidSchiDecrementDeviceReference.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013ABC (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C0013E08 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiSwitchContextWithCheck(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // r15d
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // r12
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rbx
  bool v17; // r10
  _DWORD *v18; // r9
  unsigned int v19; // eax
  _VIDMM_GLOBAL_ALLOC_NONPAGED *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // r8
  __int64 v28; // r8
  _QWORD *v29; // rdx
  KSPIN_LOCK *v30; // rdi
  _QWORD *v31; // rax
  LARGE_INTEGER v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  LARGE_INTEGER v38; // rcx
  unsigned __int128 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int128 v41; // rtt
  unsigned __int64 v42; // rcx
  void *v43; // rcx
  __int64 *v44; // rdx
  __int64 v45; // rcx
  __int64 **v46; // rax
  __int64 v47; // rcx
  void (__fastcall *v48)(_QWORD); // rax
  __int64 v49; // rcx
  void (__fastcall *v50)(_QWORD); // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  union _LARGE_INTEGER v53; // [rsp+A0h] [rbp+8h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v55; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v56; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 96);
  v3 = 1;
  v4 = *(_QWORD *)(v1 + 24);
  if ( *(_DWORD *)(v4 + 2916) || (*(_BYTE *)(v4 + 2940) & 1) != 0 )
    goto LABEL_21;
  v5 = *(_QWORD *)(a1 + 648);
  v6 = *(_QWORD *)(v5 + 88);
  v7 = *(_QWORD *)(v6 + 104);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 96) + 24LL);
  if ( !*(_BYTE *)(v7 + 204)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0)
    && !*(_DWORD *)(v8 + 2916)
    && !*(_DWORD *)(v5 + 48)
    && (*(_DWORD *)(v5 + 64) & 8) == 0 )
  {
    v17 = !*(_DWORD *)(v7 + 1576) && !*(_BYTE *)(v8 + 51);
    v18 = (_DWORD *)(v5 + 464);
    v19 = *(_DWORD *)(v5 + 464);
    if ( v19 > 0x10 )
    {
      if ( *(_DWORD *)(v8 + 796) )
      {
LABEL_73:
        if ( *(_QWORD *)(a1 + 48) )
        {
LABEL_76:
          VidSchiUpdateContextStatus(a1, 3uLL, 15274LL);
          return 3LL;
        }
        v44 = (__int64 *)(a1 + 40);
        v45 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3416LL;
        v46 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3424LL);
        if ( *v46 == (__int64 *)v45 )
        {
          *v44 = v45;
          *(_QWORD *)(a1 + 48) = v46;
          *v46 = v44;
          *(_QWORD *)(v45 + 8) = v44;
          goto LABEL_76;
        }
LABEL_96:
        __fastfail(3u);
      }
    }
    else
    {
      v8 = 0LL;
      if ( v19 )
      {
        do
        {
          if ( (v20 = *(_VIDMM_GLOBAL_ALLOC_NONPAGED **)(*(_QWORD *)&v18[2 * (unsigned int)v8 + 2] + 96LL), !v17)
            || (v21 = *(_DWORD *)v20, (*(_DWORD *)v20 & 0x20000000) != 0) && v21 < 0
            || (v21 & 0x80000) != 0
            || (v21 & 0x100) != 0 )
          {
            if ( _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v20) )
              goto LABEL_73;
          }
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < *v18 );
      }
    }
  }
  v9 = *(_DWORD *)(v1 + 11224) != -1;
  v10 = *(_DWORD *)(a1 + 644);
  v55 = 0LL;
  if ( (v10 & 0xF) != 0 )
    goto LABEL_21;
  if ( (*(_DWORD *)(a1 + 112) & 0x10) == 0 )
    goto LABEL_21;
  v11 = *(_QWORD *)(a1 + 104);
  if ( *(_BYTE *)(v11 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 200), 0, 0) )
    goto LABEL_21;
  if ( (unsigned int)VidSchiCheckPreemptionPolicy(a1, &v55, v8) )
  {
    v3 = 4;
LABEL_20:
    if ( v9 )
    {
      v47 = *(_QWORD *)(a1 + 648);
      if ( (*(_DWORD *)(v47 + 80) & 0x10) == 0 )
      {
        if ( *(_DWORD *)(v1 + 11224) != -1 )
        {
          v48 = *(void (__fastcall **)(_QWORD))(v4 + 2984);
          if ( v48 )
          {
            v48(*(_QWORD *)(v4 + 3024));
            v47 = *(_QWORD *)(a1 + 648);
          }
        }
        *(_DWORD *)(v47 + 80) |= 0x10u;
      }
      if ( !*(_BYTE *)(v1 + 11228) )
      {
        VidSchiUpdateContextStatus(a1, 8uLL, 15441LL);
        return 3LL;
      }
    }
LABEL_21:
    v14 = *(_QWORD *)(a1 + 96);
    v15 = *(_QWORD *)(v14 + 216);
    if ( v15 != a1 )
    {
      VidSchiProfilePerformanceTick(3LL, *(_QWORD *)(v14 + 24), v14, 0LL, a1, 0LL, 0LL, *(_QWORD *)(v14 + 216));
      if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 72)) == 1 )
      {
        if ( !*(_BYTE *)(a1 + 900) )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
          v51[3] = 281LL;
          v51[4] = 3840LL;
          v51[5] = a1;
          v51[6] = 0LL;
          v51[7] = 0LL;
          WdLogEvent5_WdCriticalError(v51);
          __debugbreak();
        }
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 104) + 24LL));
      }
      *(_QWORD *)(v14 + 216) = a1;
      if ( v15 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(v15 + 96) + 24LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 72), 0xFFFFFFFF) == 1 )
        {
          v25 = *(_QWORD *)(v15 + 96);
          if ( *(_QWORD *)(v25 + 224) == v15 )
            *(_QWORD *)(v25 + 224) = 0LL;
          v26 = *(_QWORD *)(v15 + 8);
          if ( *(_QWORD *)(v26 + 8) != v15 + 8 )
            goto LABEL_96;
          v27 = *(_QWORD **)(v15 + 16);
          if ( *v27 != v15 + 8 )
            goto LABEL_96;
          *v27 = v26;
          *(_QWORD *)(v26 + 8) = v27;
          v28 = *(_QWORD *)(v15 + 24);
          if ( *(_QWORD *)(v28 + 8) != v15 + 24 )
            goto LABEL_96;
          v29 = *(_QWORD **)(v15 + 32);
          if ( *v29 != v15 + 24 )
            goto LABEL_96;
          *v29 = v28;
          v30 = (KSPIN_LOCK *)(v24 + 1720);
          *(_QWORD *)(v28 + 8) = v29;
          while ( 1 )
          {
            v31 = VidSchiInterlockedRemoveHeadListIfExist(v30, (_QWORD **)(v15 + 712), (_DWORD *)(v15 + 728));
            if ( !v31 )
              break;
            ExFreePoolWithTag(v31 - 1, 0);
          }
          if ( (*(_DWORD *)(v15 + 112) & 0x100) != 0 )
          {
            while ( 1 )
            {
              v52 = VidSchiInterlockedRemoveHeadListIfExist(v30, (_QWORD **)(v15 + 736), (_DWORD *)(v15 + 752));
              if ( !v52 )
                break;
              ExFreePoolWithTag(v52 - 1, 0);
            }
          }
          if ( bTracingEnabled )
            VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v15);
          v43 = *(void **)(v15 + 984);
          if ( v43 )
            ExFreePoolWithTag(v43, 0);
          VidSchiDecrementDeviceReference(*(PVOID *)(v15 + 104));
          ExFreePoolWithTag((PVOID)v15, 0);
        }
      }
    }
    return v3;
  }
  v12 = v55;
  if ( v55 != -1 )
  {
    v53.QuadPart = 0LL;
    v38 = KeQueryPerformanceCounter(&v53);
    v39 = (unsigned __int64)v38.QuadPart * (unsigned __int128)0x989680uLL;
    v56 = *((_QWORD *)&v39 + 1);
    if ( is_mul_ok(v38.QuadPart, 0x989680uLL) )
    {
      v41 = v39;
      v40 = v39 % (unsigned __int64)v53.QuadPart;
      v42 = v41 / (unsigned __int64)v53.QuadPart;
    }
    else
    {
      v40 = 10000000 * (v38.QuadPart % (unsigned __int64)v53.QuadPart) % v53.QuadPart;
      v42 = 10000000 * (v38.QuadPart / (unsigned __int64)v53.QuadPart)
          + 10000000 * (v38.QuadPart % (unsigned __int64)v53.QuadPart) / v53.QuadPart;
    }
    *(_QWORD *)(v1 + 128) = v42 + v12;
    *(_QWORD *)(v1 + 136) = *(_QWORD *)(v1 + 96);
    v36 = WdLogNewEntry5_WdEvent(v42, v40);
    *(_QWORD *)(v36 + 24) = *(unsigned __int16 *)(v1 + 4);
    v37 = *(_QWORD *)(v1 + 136);
    goto LABEL_54;
  }
  if ( !*(_DWORD *)(v1 + 2888)
    && (*(_DWORD *)(v1 + 2868) > 1u
     || (v13 = *(_QWORD *)(v1 + 8LL * *(unsigned int *)(v1 + 1552) + 1560)) != 0 && a1 != v13) )
  {
    PerformanceFrequency.QuadPart = 0LL;
    v32 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( is_mul_ok(v32.QuadPart, 0x989680uLL) )
    {
      if ( PerformanceFrequency.QuadPart == 10000000 )
        v33 = 10000000 * v32.QuadPart / 0x989680uLL;
      else
        v33 = (unsigned __int64)(10000000 * v32.QuadPart) / PerformanceFrequency.QuadPart;
    }
    else
    {
      v33 = 10000000 * (v32.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
          + 10000000 * (v32.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart);
    }
    v34 = *(_QWORD *)(v1 + 96);
    v35 = v33 + *(_QWORD *)(a1 + 480);
    *(_QWORD *)(v1 + 128) = v35;
    *(_QWORD *)(v1 + 144) = v34;
    v36 = WdLogNewEntry5_WdEvent(v35, v33);
    *(_QWORD *)(v36 + 24) = *(unsigned __int16 *)(v1 + 4);
    v37 = *(_QWORD *)(v1 + 144);
LABEL_54:
    *(_QWORD *)(v36 + 32) = v37;
    WdLogEvent5_WdEvent(v36);
  }
  if ( *(int *)(v1 + 2864) > 0 && *(_DWORD *)(v1 + 2880) < *(_DWORD *)(v4 + 220) && !*(_DWORD *)(v1 + 2888) )
    goto LABEL_20;
  RtlClearBitEx(v4 + 480, *(unsigned __int16 *)(v1 + 4));
  RtlCopyBitMapEx(v4 + 432, v4 + 528, 0LL);
  RtlIntersectBitMapsEx(v4 + 528, v4 + 480);
  if ( !(unsigned __int8)RtlAreBitsClearEx(v4 + 528, 0LL, *(_QWORD *)(v4 + 528)) )
    return 3LL;
  if ( v9 )
  {
    v49 = *(_QWORD *)(a1 + 648);
    if ( (*(_DWORD *)(v49 + 80) & 0x10) == 0 )
    {
      if ( *(_DWORD *)(v1 + 11224) != -1 )
      {
        v50 = *(void (__fastcall **)(_QWORD))(v4 + 2984);
        if ( v50 )
        {
          v50(*(_QWORD *)(v4 + 3024));
          v49 = *(_QWORD *)(a1 + 648);
        }
      }
      *(_DWORD *)(v49 + 80) |= 0x10u;
    }
  }
  return 2LL;
}
