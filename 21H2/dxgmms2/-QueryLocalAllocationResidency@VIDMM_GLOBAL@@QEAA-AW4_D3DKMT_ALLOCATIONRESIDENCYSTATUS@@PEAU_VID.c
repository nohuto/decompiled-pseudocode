/*
 * XREFs of ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00D904C
 * Callers:
 *     ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D7AB0 (-IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00D9020 (-QueryAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_MU.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryLocalAllocationResidency(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  char *v5; // r14
  char *v6; // rsi
  __int64 v7; // rdi
  void *v8; // rdx
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  ULONG_PTR ReturnLength; // [rsp+88h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 112LL) )
  {
    return 1;
  }
  else if ( (**(_DWORD **)(v2 + 528) & 0x40000028) != 0 )
  {
    return 3;
  }
  else
  {
    v5 = (char *)this + 39928;
    v6 = (char *)*((_QWORD *)a2 + 2);
    v7 = *(_QWORD *)(v2 + 8) >> 12;
    v4 = 2;
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39928));
LABEL_17:
    if ( (_DWORD)v7 )
    {
      ReturnLength = 0LL;
      v8 = v6;
      if ( (unsigned int)v7 >= 0x7D0 )
      {
        v9 = 2000;
        LODWORD(v7) = v7 - 2000;
      }
      else
      {
        v9 = v7;
        LODWORD(v7) = 0;
      }
      v10 = (_QWORD *)((char *)this + 7936);
      v11 = v9;
      do
      {
        *v10 = 0LL;
        *(v10 - 1) = v6;
        v10 += 2;
        v6 += 4096;
        --v11;
      }
      while ( v11 );
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v8,
             MemoryWorkingSetExList,
             (char *)this + 7928,
             16LL * v9,
             &ReturnLength) >= 0
        && ReturnLength == 16LL * v9 )
      {
        v12 = 0;
        v13 = (_QWORD *)((char *)this + 7936);
        while ( (*v13 & 1) != 0 || (*v13 & 0xC00000LL) == 0x400000 )
        {
          ++v12;
          v13 += 2;
          v6 += 4096;
          if ( v12 >= v9 )
          {
            v4 = 2;
            goto LABEL_17;
          }
        }
      }
      else
      {
        WdLogSingleEntry1(1LL, 5783LL);
        DxgkLogInternalTriageEvent(v14, 0x40000LL);
      }
      v4 = 3;
    }
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
