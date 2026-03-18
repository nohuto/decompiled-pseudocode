/*
 * XREFs of ?MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@_N2PEAPEAX@Z @ 0x1C00A4DEC
 * Callers:
 *     ?MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAX@Z @ 0x1C00A4D64 (-MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAX@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00E1EDC (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapCpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        char a4,
        bool a5,
        void **a6)
{
  void **v6; // r12
  char *v10; // rbp
  char *v11; // r14
  char *i; // rax
  __int64 v13; // rsi
  __int64 Pool2; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v20; // edi
  char **v21; // rcx
  char *v22; // rax
  void *v23; // rax
  __int64 v24; // rcx
  void *v25; // rbp
  __int64 v26; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v27; // rax
  int v28; // eax
  __int64 v29; // [rsp+60h] [rbp-48h] BYREF
  __int64 v30; // [rsp+68h] [rbp-40h]
  unsigned __int64 v31; // [rsp+B8h] [rbp+10h] BYREF
  struct VIDMM_MONITORED_FENCE_STORAGE *v32; // [rsp+C0h] [rbp+18h]

  v32 = a3;
  v6 = a6;
  *a6 = 0LL;
  if ( a2 && (*(_DWORD *)(*((_QWORD *)a2 + 4) + 424LL) & 0x100) != 0 )
  {
    v23 = (void *)*((_QWORD *)this + 18);
    if ( !v23 )
    {
      WdLogSingleEntry1(1LL, 457LL);
      DxgkLogInternalTriageEvent(v24, 262146LL);
      v23 = (void *)*((_QWORD *)this + 18);
    }
    *v6 = v23;
    return 0LL;
  }
  else
  {
    v10 = (char *)this + 72;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    v11 = (char *)this + 40;
    *((_QWORD *)v10 + 1) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 5); i != v11; i = *(char **)i )
    {
      v13 = (__int64)(i - 16);
      if ( a2 == *((struct VIDMM_PROCESS **)i - 1) )
      {
        ++*((_DWORD *)i + 4);
LABEL_7:
        *v6 = (void *)(*(_QWORD *)v13 + *((unsigned int *)v32 + 4));
        *((_QWORD *)v10 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v10, 0LL);
        KeLeaveCriticalRegion();
        return 0LL;
      }
    }
    Pool2 = ExAllocatePool2(64LL, 40LL, 1700882774LL);
    v13 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 32) = 1;
      *(_QWORD *)(Pool2 + 8) = a2;
      v16 = *(_QWORD *)a2;
      v29 = 0LL;
      v31 = 4096LL;
      v30 = v16;
      if ( PsGetProcessWow64Process(v16) || (LODWORD(a6) = 2, a4) )
        LODWORD(a6) = 4;
      v17 = v31;
      v18 = *((_QWORD *)this + 13);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v20 = (*((__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, unsigned __int64, __int64 *, unsigned __int64 *, int, _DWORD, _DWORD))VirtualMemoryInterface
             + 3))(
              v18,
              v30,
              v13,
              0LL,
              v17,
              &v29,
              &v31,
              2,
              0,
              (_DWORD)a6);
      if ( v20 >= 0 )
      {
        if ( !a4 || !a5 || (v28 = VidMmiEnsureVirtualAddressRangeValid(*(void **)v13, v31), v20 = v28, v28 >= 0) )
        {
          v21 = (char **)*((_QWORD *)v11 + 1);
          v22 = (char *)(v13 + 16);
          if ( *v21 != v11 )
            __fastfail(3u);
          *(_QWORD *)v22 = v11;
          *(_QWORD *)(v13 + 24) = v21;
          *v21 = v22;
          *((_QWORD *)v11 + 1) = v22;
          goto LABEL_7;
        }
        WdLogSingleEntry0(3LL);
      }
    }
    else
    {
      v20 = -1073741801;
    }
    *((_QWORD *)v10 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    if ( v13 )
    {
      v25 = *(void **)v13;
      if ( *(_QWORD *)v13 )
      {
        v26 = *(_QWORD *)a2;
        v27 = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, void *))v27 + 4))(v26, v25);
      }
      ExFreePoolWithTag((PVOID)v13, 0);
    }
    return (unsigned int)v20;
  }
}
