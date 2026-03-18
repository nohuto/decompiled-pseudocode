/*
 * XREFs of ?WaitForVSync@CPartitionVerticalBlankScheduler@@AEAAJI_N@Z @ 0x18007A9D4
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18007A840 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800B2FA8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::WaitForVSync(
        CPartitionVerticalBlankScheduler *this,
        unsigned int a2)
{
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  struct IMonitorTarget *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  bool v8; // al
  HANDLE Handles[3]; // [rsp+20h] [rbp-18h] BYREF
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 8)
                                                                                                + 216LL));
  v5 = PrimaryMonitorTarget;
  if ( PrimaryMonitorTarget )
  {
    v6 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, _QWORD, void **))(*(_QWORD *)PrimaryMonitorTarget + 136LL))(
           PrimaryMonitorTarget,
           a2,
           &v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      return (*(unsigned int (__fastcall **)(struct IMonitorTarget *, _QWORD))(*(_QWORD *)v5 + 128LL))(
               v5,
               *((_QWORD *)this + 5));
    }
    else if ( v6 != 142213121 )
    {
      Handles[0] = v11;
      Handles[1] = *((HANDLE *)this + 5);
      v8 = WaitForMultipleObjects(2u, Handles, 0, 0x64u) == 0;
      *((_BYTE *)this + 4856) = v8;
      if ( v8 )
        byte_1803D3328 = 1;
    }
  }
  else
  {
    return (unsigned int)-2003304307;
  }
  return v7;
}
