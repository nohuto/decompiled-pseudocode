/*
 * XREFs of DpiRequestDevicePowerIrp @ 0x1C005F6B4
 * Callers:
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0023E3C (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiRequestDevicePowerState @ 0x1C0023FC0 (DpiRequestDevicePowerState.c)
 *     ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C004410C (-PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall DpiRequestDevicePowerIrp(__int64 a1, POWER_STATE a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdi
  NTSTATUS result; // eax
  __int64 v8; // rbp
  unsigned int i; // edi
  __int64 v10; // rbp
  struct _IO_REMOVE_LOCK *v11; // r14
  __int64 v12; // rbp
  POWER_STATE RemlockSize; // [rsp+20h] [rbp-18h]

  WdLogSingleEntry3(9LL, a1, a2.SystemState, 0LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
  {
    RemlockSize.SystemState = a2.SystemState;
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &Dxgk_DpiRequestDevicePowerIrp,
      v4,
      *(_QWORD *)(a1 + 3896),
      RemlockSize.SystemState);
  }
  v5 = *(unsigned int *)(a1 + 4296);
  if ( (unsigned int)v5 >= 3 )
  {
    *(_DWORD *)(a1 + 4296) = 0;
    v5 = 0LL;
  }
  v6 = a1 + 8 * (v5 + 2 * (v5 + 269));
  *(_DWORD *)(v6 + 20) = 0;
  *(_QWORD *)(v6 + 8) = 0LL;
  *(POWER_STATE *)(v6 + 16) = a2;
  *(_QWORD *)v6 = MEMORY[0xFFFFF78000000014];
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 64), 0LL, File, 1u, 0x20u);
  if ( result >= 0 )
  {
    result = PoRequestPowerIrp(
               *(PDEVICE_OBJECT *)(a1 + 24),
               2u,
               a2,
               (PREQUEST_POWER_COMPLETE)DpiRuntimePowerIrpCompletion,
               (PVOID)v6,
               0LL);
    v8 = result;
    if ( result != 259 )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 64), 0LL, 0x20u);
      *(_QWORD *)(v6 + 8) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v6 + 20) = v8;
      result = WdLogSingleEntry1(2LL, v8);
    }
    ++*(_DWORD *)(a1 + 4296);
    if ( *(_DWORD *)(a1 + 504) )
    {
      if ( *(_BYTE *)(a1 + 508) == 1 )
      {
        for ( i = 1; i < *(_DWORD *)(a1 + 2736); ++i )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2728) + 8LL * i) + 64LL);
          v11 = (struct _IO_REMOVE_LOCK *)(v10 + 64);
          result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v10 + 64), 0LL, File, 1u, 0x20u);
          if ( result >= 0 )
          {
            result = PoRequestPowerIrp(
                       *(PDEVICE_OBJECT *)(v10 + 24),
                       2u,
                       a2,
                       (PREQUEST_POWER_COMPLETE)DpiRuntimePowerIrpCompletion,
                       0LL,
                       0LL);
            v12 = result;
            if ( result != 259 )
            {
              IoReleaseRemoveLockEx(v11, 0LL, 0x20u);
              result = WdLogSingleEntry1(2LL, v12);
            }
          }
        }
      }
    }
  }
  return result;
}
