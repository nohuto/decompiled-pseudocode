/*
 * XREFs of ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0038C34
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0002550 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C00367B4 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C0036C70 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C00370B4 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00E1068 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00E1B68 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C011E094 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C017B1A8 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0038AE4 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DXGADAPTER::UpdateLatencyTolerances(DXGADAPTER *this)
{
  char *v1; // rdi
  int v3; // eax
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rdi
  int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // rsi
  DXGADAPTER *v10; // rdi
  DXGADAPTER *v11; // rax
  KSPIN_LOCK *v12; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  char v14; // [rsp+48h] [rbp-10h]

  v1 = (char *)this + 3264;
  v12 = (KSPIN_LOCK *)((char *)this + 3264);
  v14 = 0;
  if ( *((struct _KTHREAD **)this + 409) != KeGetCurrentThread() )
  {
    KeAcquireInStackQueuedSpinLock(v12, &LockHandle);
    *((_QWORD *)v1 + 1) = KeGetCurrentThread();
    v14 = 1;
  }
  if ( *((_QWORD *)this + 395) && *((_DWORD *)this + 40) != 1 )
  {
    v3 = *((_DWORD *)this + 739);
    if ( *((_BYTE *)this + 3242) )
    {
      if ( !v3 )
      {
        v5 = *((_QWORD *)this + 396);
        v6 = *((_QWORD *)this + 402);
LABEL_21:
        if ( *((_BYTE *)this + 3240) )
          DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)this + 737), v5);
        v8 = *((_DWORD *)this + 738);
        if ( v8 != -1 )
          DXGADAPTER::SetPowerComponentLatencyCB(this, v8, v6);
        goto LABEL_25;
      }
      v4 = *((_DWORD *)this + 811);
      if ( v4 )
      {
        if ( v4 != 2 )
        {
          v6 = *((_QWORD *)this + 401);
          if ( v4 == 3 )
            v5 = *((_QWORD *)this + 393);
          else
            v5 = *((_QWORD *)this + 389);
          goto LABEL_21;
        }
        v5 = *((_QWORD *)this + 391);
        goto LABEL_19;
      }
    }
    else
    {
      if ( !v3 || (v7 = *((_DWORD *)this + 811), (unsigned int)(v7 - 2) <= 1) )
      {
        v5 = *((_QWORD *)this + 397);
        v6 = *((_QWORD *)this + 403);
        goto LABEL_21;
      }
      if ( v7 )
      {
        v5 = *((_QWORD *)this + 389);
LABEL_19:
        v6 = *((_QWORD *)this + 401);
        goto LABEL_21;
      }
    }
    v5 = *((_QWORD *)this + 387);
    v6 = *((_QWORD *)this + 400);
    goto LABEL_21;
  }
LABEL_25:
  if ( *((_DWORD *)this + 739) )
    v9 = *((_QWORD *)this + 398);
  else
    v9 = *((_QWORD *)this + 399);
  v10 = (DXGADAPTER *)*((_QWORD *)this + 413);
  while ( v10 != (DXGADAPTER *)((char *)this + 3304) )
  {
    v11 = v10;
    v10 = *(DXGADAPTER **)v10;
    if ( v9 == *((_QWORD *)v11 - 7) )
      break;
    DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)v11 - 105), v9);
  }
  if ( v14 )
  {
    v14 = 0;
    v12[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
