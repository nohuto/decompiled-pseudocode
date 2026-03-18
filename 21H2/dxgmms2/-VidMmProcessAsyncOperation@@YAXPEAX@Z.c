/*
 * XREFs of ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C00A5CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C002F09C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A9174 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00A93D0 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C00A963C (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z.c)
 */

void __fastcall VidMmProcessAsyncOperation(void *a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // r8
  VIDMM_GLOBAL *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  struct VIDMM_ALLOC *v13; // rdi
  VIDMM_GLOBAL *v14; // rcx
  unsigned int v15; // r8d
  int v16; // eax
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF
  struct VIDMM_ALLOC *v20; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_DWORD *)a1 + 8) - 1;
  if ( v2 )
  {
    v5 = (VIDMM_GLOBAL *)(unsigned int)(v2 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v12 = *((_QWORD *)a1 + 5);
        v13 = *(struct VIDMM_ALLOC **)(*((_QWORD *)a1 + 6) + 24LL);
        v20 = v13;
        while ( 1 )
        {
          v18 = 0;
          if ( !VIDMM_GLOBAL::IsAllocationInPresentQueue(v5, v13, &v18) )
            break;
          if ( v18 > 1 )
            break;
          v16 = VIDMM_GLOBAL::WaitOnAllocationPresentQueue(v14, v13, v15);
          if ( v16 >= 0 )
            break;
          WdLogSingleEntry1(3LL, v16);
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        VidMmCompleteAsyncUnpin((struct VIDMM_GLOBAL *)v12, &v20);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v12 + 44384, 0LL);
        *(_QWORD *)(v12 + 44392) = KeGetCurrentThread();
        if ( (*(_DWORD *)(v12 + 44432))-- == 1 )
          KeSetEvent((PRKEVENT)(v12 + 44408), 0, 0);
        *(_QWORD *)(v12 + 44392) = 0LL;
        ExReleasePushLockExclusiveEx(v12 + 44384, 0LL);
        KeLeaveCriticalRegion();
        DxgkUnreferenceDxgResource(*(struct DXGRESOURCE **)(*((_QWORD *)a1 + 6) + 40LL));
        DxgkUnreferenceDxgAllocation(*((struct DXGALLOCATION **)a1 + 6));
      }
    }
    else
    {
      v6 = *((_QWORD *)a1 + 5);
      v7 = *((_QWORD *)a1 + 7);
      if ( v6 )
      {
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(v6, v7);
      }
      else
      {
        MmUnmapViewInSystemSpace(*((PVOID *)a1 + 7));
      }
      v9 = *((_QWORD *)a1 + 8);
      if ( v9 )
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 444));
      ObfDereferenceObject(*((PVOID *)a1 + 6));
      if ( (byte_1C006E941 & 1) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(
          v10,
          &EndVidMmUnmapViewAsync,
          v11,
          *((_QWORD *)a1 + 5),
          *((_QWORD *)a1 + 6),
          *((_QWORD *)a1 + 7));
    }
  }
  else
  {
    ObfDereferenceObject(*((PVOID *)a1 + 5));
    if ( (byte_1C006E941 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(v3, &EndVidMmDereferenceObjectAsync, v4, *((_QWORD *)a1 + 5));
  }
  operator delete(a1);
  _InterlockedDecrement(&g_VidMmAsyncOpPendingCount);
}
