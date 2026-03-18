/*
 * XREFs of ?UnlockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C0092620
 * Callers:
 *     ?Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00925FC (-Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00A3CDC (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00A3CFC (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00A6BA8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DA5FC (-UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UnlockInternal(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // r14
  __int64 v5; // rbx
  __int64 v6; // rcx
  VIDMM_PROCESS *v7; // rcx
  bool v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  VIDMM_PROCESS *v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 CurrentProcess; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  _QWORD v20[12]; // [rsp+50h] [rbp-D8h] BYREF
  struct _KAPC_STATE v21; // [rsp+B0h] [rbp-78h] BYREF
  VIDMM_PROCESS *v22; // [rsp+E0h] [rbp-48h]

  v2 = *a2;
  v5 = **a2;
  if ( DXGPROCESS::GetCurrent() && (v6 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
    v7 = *(VIDMM_PROCESS **)(v6 + 8);
  else
    v7 = 0LL;
  v22 = v7;
  VIDMM_PROCESS::SafeAttach(v7, &v21);
  v8 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 496, 0LL);
  if ( !*((_DWORD *)v2 + 19) )
  {
    WdLogSingleEntry1(1LL, a2);
LABEL_20:
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    ExReleasePushLockExclusiveEx(v5 + 496, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_16;
  }
  if ( !*(_BYTE *)(v5 + 80) )
  {
    WdLogSingleEntry1(1LL, 23923LL);
    goto LABEL_20;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 360));
  if ( (*((_DWORD *)v2 + 19))-- == 1 )
  {
    if ( (*(_DWORD *)(v5 + 72) & 0x2000) != 0 )
    {
      UnlockParavirtualizedAllocationOnHost((struct _VIDMM_GLOBAL_ALLOC *)v5);
    }
    else
    {
      v10 = **(unsigned int **)(v5 + 528);
      if ( (v10 & 0x40000) != 0 )
      {
        if ( (v10 & 0x20000000) != 0 )
        {
          v17 = v2[2];
          CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
          VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
          (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(CurrentProcess, v17);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v2[1] + 24) + 80LL))(
            *(_QWORD *)(v2[1] + 24),
            v2[3],
            v2[2]);
        }
        v2[2] = 0LL;
      }
      else
      {
        v8 = *(_QWORD *)(v5 + 464) != 0LL;
      }
    }
  }
  if ( !*(_DWORD *)(v5 + 360) )
    *(_BYTE *)(v5 + 80) = 0;
  if ( (byte_1C006E941 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(v10, &EventUnlock2, v11, a2);
  ExReleasePushLockExclusiveEx(v5 + 496, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    memset(v20, 0, 0x58uLL);
    LODWORD(v20[0]) = 129;
    v20[5] = v5;
    VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v20, 1);
  }
LABEL_16:
  VIDMM_PROCESS::SafeDetach(v14, &v21);
  return 0LL;
}
