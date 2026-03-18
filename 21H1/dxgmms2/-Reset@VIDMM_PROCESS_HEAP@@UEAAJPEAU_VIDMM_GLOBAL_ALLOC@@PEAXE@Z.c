/*
 * XREFs of ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C00CEBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0077C3C (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1C00CE480 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Reset(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a3,
        char a4)
{
  __int64 *v4; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  ULONG_PTR v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  NTSTATUS v22; // eax
  __int64 v23; // r15
  _QWORD *v24; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR NumberOfBytesToUnlock[2]; // [rsp+40h] [rbp-10h] BYREF
  int v29; // [rsp+80h] [rbp+30h] BYREF
  PVOID Protect; // [rsp+90h] [rbp+40h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 1);
  BaseAddress = 0LL;
  RegionSize = 0LL;
  LODWORD(Protect) = 0;
  v9 = *v4;
  v29 = 0;
  if ( PsGetCurrentProcess(this) != v9 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
    v12[5] = 0LL;
    v12[6] = 0LL;
    v12[7] = 0LL;
    v12[3] = 270LL;
    v12[4] = 30LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = a3;
  LODWORD(v14) = VIDMM_PROCESS_HEAP::GetAllocationInfo(
                   this,
                   a3,
                   &RegionSize,
                   &BaseAddress,
                   (unsigned int *)&Protect,
                   &v29);
  if ( (int)v14 >= 0 )
  {
    v16 = ZwAllocateVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            &RegionSize,
            0x80000u,
            (ULONG)Protect);
    v14 = v16;
    if ( v16 >= 0 )
    {
      VidMmiSetPriorityForMemoryPages(a2, BaseAddress, RegionSize);
      if ( a4 )
      {
        if ( !v29 )
        {
          Protect = BaseAddress;
          NumberOfBytesToUnlock[0] = RegionSize;
          v22 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Protect, NumberOfBytesToUnlock, 1u);
          v13 = *(_QWORD *)&g_IsInternalReleaseOrDbg;
          v23 = v22;
          if ( g_IsInternalReleaseOrDbg )
          {
            v24 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
            v24[3] = Protect;
            v13 = NumberOfBytesToUnlock[0];
            v24[4] = NumberOfBytesToUnlock[0];
            v24[5] = v23;
          }
        }
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v18, v17, v19, v20);
      *(_QWORD *)(v21 + 24) = v14;
      WdLogEvent5_WdError(v21);
    }
  }
  if ( (_DWORD)v14 == -1071775472 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventPerformanceWarning, v15, 18);
  if ( v29 )
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(
      this,
      a3);
  return (unsigned int)v14;
}
