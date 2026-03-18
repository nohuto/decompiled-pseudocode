/*
 * XREFs of ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006D800
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C006D560 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C006DBB0 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006FFC0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00816C0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089620 (-ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00C3A80 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C46D0 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtt_EtwWriteTransfer @ 0x1C0024988 (McTemplateK0pqtt_EtwWriteTransfer.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C006C7AC (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C006D7E8 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ResetBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  bool v8; // r14
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  ULONG_PTR v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 AllocationType; // [rsp+20h] [rbp-29h]
  __int64 Protect; // [rsp+28h] [rbp-21h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-9h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-1h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp+7h] BYREF

  v2 = *((_QWORD *)a2 + 12);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 32) & 1) != 0 )
    {
      *((_DWORD *)a2 + 19) |= 0x4000000u;
      return;
    }
    if ( (*((_DWORD *)a2 + 20) & 0x20000) != 0
      && ((v5 = *((_QWORD *)a2 + 16)) != 0
       && (*(_DWORD *)(v5 + 80) & 0x1001) == 0
       && (unsigned int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL)
                                                                          + 8LL
                                                                          * *(unsigned int *)(*((_QWORD *)this + 3)
                                                                                            + 232LL))
                                                              + 472LL))
       || *(_WORD *)(*((_QWORD *)a2 + 62) + 4LL) == 3) )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v2 + 8), &ApcState);
      v7 = *((_QWORD *)a2 + 62);
      v8 = *(_WORD *)(v7 + 4) == 3
        || *((_QWORD *)a2 + 16)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 16LL)
                                 + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 232LL))
                     + 484LL);
      if ( (*(_DWORD *)v7 & 0x20000000) != 0 )
      {
        if ( (*((_DWORD *)a2 + 20) & 0x80u) != 0 )
        {
          v13 = *((_QWORD *)a2 + 1);
          BaseAddress = *(PVOID *)(*((_QWORD *)a2 + 12) + 16LL);
          RegionSize = v13;
          v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x80000u, 4u);
          v9 = v14;
          if ( v14 >= 0 )
          {
            VidMmiSetPriorityForMemoryPages(a2, BaseAddress, RegionSize);
            if ( v8 )
              ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
          }
          else
          {
            v15 = WdLogNewEntry5_WdError();
            *(_QWORD *)(v15 + 24) = v9;
            WdLogEvent5_WdError(v15);
          }
          goto LABEL_17;
        }
        LODWORD(v9) = -1073741823;
      }
      else
      {
        LOBYTE(v6) = v8;
        v10 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL)
                                                                                               + 120LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL),
                a2,
                *(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL),
                v6);
        LODWORD(v9) = v10;
        if ( v10 >= 0 )
        {
LABEL_17:
          *((_QWORD *)this + 926) += *((_QWORD *)a2 + 1);
          ++*((_DWORD *)this + 1850);
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(Protect) = v8;
            LODWORD(AllocationType) = *((_QWORD *)a2 + 1) >> 12;
            McTemplateK0pqtt_EtwWriteTransfer(
              *((_QWORD *)a2 + 1) >> 12,
              (int)v9 >= 0,
              v7,
              a2,
              AllocationType,
              Protect,
              (int)v9 >= 0);
          }
          KeUnstackDetachProcess(&ApcState);
          if ( (int)v9 >= 0 )
            *((_DWORD *)a2 + 21) |= 8u;
          return;
        }
        if ( v10 != -1071775472 )
        {
          v16 = WdLogNewEntry5_WdAssertion(v12, v11, v7);
          *(_QWORD *)(v16 + 24) = 6820LL;
          WdLogEvent5_WdAssertion(v16);
        }
        _InterlockedIncrement(&dword_1C00516A8);
        v17 = WdLogNewEntry5_WdLowResource(v12);
        *(_QWORD *)(v17 + 24) = 6824LL;
        WdLogEvent5_WdLowResource(v17);
      }
      *((_DWORD *)a2 + 19) |= 0x4000000u;
      goto LABEL_17;
    }
  }
}
