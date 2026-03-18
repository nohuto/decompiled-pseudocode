/*
 * XREFs of ?MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@_N2PEAPEAX@Z @ 0x1C00870D0
 * Callers:
 *     ?MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAX@Z @ 0x1C0087048 (-MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAX@Z.c)
 * Callees:
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00BD860 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapCpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        char a4,
        bool a5,
        unsigned __int64 a6)
{
  _QWORD *v6; // r15
  __int64 v10; // r12
  char *v11; // rbp
  char *v12; // rdi
  char *i; // rax
  __int64 *PoolWithTag; // rbx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // esi
  char **v19; // rcx
  char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // [rsp+98h] [rbp+10h] BYREF
  struct VIDMM_MONITORED_FENCE_STORAGE *v27; // [rsp+A0h] [rbp+18h]

  v27 = a3;
  v6 = (_QWORD *)a6;
  *(_QWORD *)a6 = 0LL;
  if ( a2 && (*(_BYTE *)(*((_QWORD *)a2 + 4) + 347LL) & 0x20) != 0 )
  {
    v21 = *((_QWORD *)this + 17);
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdAssertion(this, a2, a3);
      *(_QWORD *)(v22 + 24) = 456LL;
      WdLogEvent5_WdAssertion(v22);
      v21 = *((_QWORD *)this + 17);
    }
    *v6 = v21;
    return 0LL;
  }
  else
  {
    v10 = 0LL;
    v11 = (char *)this + 72;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    v12 = (char *)this + 40;
    *((_QWORD *)v11 + 1) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 5); i != v12; i = *(char **)i )
    {
      PoolWithTag = (__int64 *)(i - 16);
      if ( a2 == *((struct VIDMM_PROCESS **)i - 1) )
      {
        ++*((_DWORD *)i + 4);
LABEL_7:
        *v6 = *PoolWithTag + *((unsigned int *)v27 + 4);
        *((_QWORD *)v11 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v11, 0LL);
        KeLeaveCriticalRegion();
        return 0LL;
      }
    }
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x65616956u);
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[3] = 0LL;
      PoolWithTag[4] = 1LL;
      PoolWithTag[1] = (__int64)a2;
      v10 = *(_QWORD *)a2;
      v16 = *(_QWORD *)a2;
      v26 = 0LL;
      a6 = 4096LL;
      if ( PsGetProcessWow64Process(v16) || (v17 = 2, a4) )
        v17 = 4;
      v18 = MmMapViewOfSection(*((_QWORD *)this + 13), v10, PoolWithTag, 0LL, a6, &v26, &a6, 2, 0, v17);
      if ( v18 >= 0 )
      {
        if ( !a4 || !a5 || (v18 = VidMmiEnsureVirtualAddressRangeValid((void *)*PoolWithTag, a6), v18 >= 0) )
        {
          v19 = (char **)*((_QWORD *)this + 6);
          v20 = (char *)(PoolWithTag + 2);
          if ( *v19 != v12 )
            __fastfail(3u);
          *(_QWORD *)v20 = v12;
          PoolWithTag[3] = (__int64)v19;
          *v19 = v20;
          *((_QWORD *)this + 6) = v20;
          goto LABEL_7;
        }
        v25 = WdLogNewEntry5_WdWarning(v24, v23);
        WdLogEvent5_WdWarning(v25);
      }
    }
    else
    {
      v18 = -1073741801;
    }
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    if ( PoolWithTag )
    {
      if ( *PoolWithTag )
        MmUnmapViewOfSection(v10, *PoolWithTag);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    return (unsigned int)v18;
  }
}
