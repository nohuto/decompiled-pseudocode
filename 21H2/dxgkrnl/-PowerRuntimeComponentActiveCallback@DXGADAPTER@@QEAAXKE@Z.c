/*
 * XREFs of ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C00381B4
 * Callers:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0039274 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C00398E0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C003E990 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C003E9F0 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C0038F1C (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0039BE4 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0039D34 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, char a3, __int64 a4)
{
  unsigned int *v6; // rsi
  unsigned int v7; // eax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // edx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  void (__fastcall *v20)(_QWORD, __int64); // rax
  int v21; // eax
  __int64 *v22; // rcx
  __int64 *v23; // rax
  __int64 **v24; // rdx
  int v25; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-9h] BYREF
  char v27; // [rsp+60h] [rbp+Fh]
  char *v28; // [rsp+70h] [rbp+1Fh]
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+78h] [rbp+27h] BYREF
  char v30; // [rsp+90h] [rbp+3Fh]

  v6 = (unsigned int *)(*((_QWORD *)this + 350) + 520LL * a2);
  *((_BYTE *)v6 + 356) = a3;
  if ( *((_DWORD *)this + 50) != 1 )
    return;
  v7 = v6[52];
  if ( v7 )
  {
    if ( v7 == 3 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 338)
                                                                                           + 640LL)
                                                                               + 8LL)
                                                                   + 752LL))(
        *(_QWORD *)(*((_QWORD *)this + 338) + 648LL),
        *((unsigned __int16 *)v6 + 3),
        v6[53],
        *v6,
        a3);
  }
  else
  {
    LOBYTE(a4) = a3;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 338) + 616LL)
                                                                        + 8LL)
                                                            + 808LL))(
      *(_QWORD *)(*((_QWORD *)this + 338) + 624LL),
      *((unsigned __int16 *)v6 + 3),
      v6[53],
      a4);
  }
  if ( !*((_BYTE *)v6 + 357) || (int)v6[97] <= 0 )
    goto LABEL_25;
  v27 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 408, &LockHandle);
  *((_QWORD *)this + 409) = KeGetCurrentThread();
  v27 = 1;
  if ( !a3 )
  {
    v11 = v6[96];
    if ( v6[104] )
    {
      if ( v11 )
      {
        v13 = v6[1];
        v6[96] = 0;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v13, **((_QWORD **)this + 386));
      }
      v14 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v6 + 49) = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v6 + 49) = v14 + *(_QWORD *)(*((_QWORD *)this + 386) + 8LL);
      v15 = v6 + 100;
      if ( !*((_QWORD *)v6 + 50) )
      {
        v16 = (_QWORD *)((char *)this + 3248);
        v17 = *((_QWORD *)this + 406);
        if ( *(DXGADAPTER **)(v17 + 8) != (DXGADAPTER *)((char *)this + 3248) )
          goto LABEL_36;
        *v15 = v17;
        *((_QWORD *)v6 + 51) = v16;
        *(_QWORD *)(v17 + 8) = v15;
        *v16 = v15;
      }
      if ( !*((_BYTE *)this + 3236) )
      {
        v18 = *((_QWORD *)this + 338);
        *((_BYTE *)this + 3236) = 1;
        v19 = *(_QWORD *)(*(_QWORD *)(v18 + 616) + 8LL);
        v20 = *(void (__fastcall **)(_QWORD, __int64))(v19 + 864);
        LOBYTE(v19) = 1;
        v20(*(_QWORD *)(v18 + 624), v19);
      }
      goto LABEL_23;
    }
    if ( v11 != 2 )
    {
      v12 = v6[1];
      v6[96] = 2;
      DXGADAPTER::SetPowerComponentLatencyCB(this, v12, *(_QWORD *)(*((_QWORD *)this + 386) + 32LL));
      goto LABEL_23;
    }
LABEL_24:
    v27 = 0;
    *((_QWORD *)this + 409) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_25;
  }
  v8 = v6 + 100;
  v9 = *((_QWORD *)v6 + 50);
  if ( !v9 )
    goto LABEL_24;
  if ( *(_QWORD **)(v9 + 8) != v8 )
    goto LABEL_36;
  v10 = (_QWORD *)*((_QWORD *)v6 + 51);
  if ( (_QWORD *)*v10 != v8 )
    goto LABEL_36;
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
LABEL_23:
  if ( v27 )
    goto LABEL_24;
LABEL_25:
  if ( !v6[52] && *((_QWORD *)this + 395) )
  {
    v30 = 0;
    v28 = (char *)this + 3264;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 408, &v29);
    *((_QWORD *)this + 409) = KeGetCurrentThread();
    v21 = *((_DWORD *)this + 740);
    v30 = 1;
    if ( !a3 )
    {
      v25 = v21 - 1;
      *((_DWORD *)this + 740) = v25;
      if ( v25 )
      {
LABEL_40:
        v30 = 0;
        *((_QWORD *)v28 + 1) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v29);
        return;
      }
      DXGADAPTER::ScheduleAdapterActivityCheck(this);
LABEL_39:
      if ( !v30 )
        return;
      goto LABEL_40;
    }
    if ( v21 )
    {
LABEL_35:
      ++*((_DWORD *)this + 740);
      goto LABEL_39;
    }
    v22 = (__int64 *)(*((_QWORD *)this + 395) + 400LL);
    v23 = (__int64 *)*v22;
    if ( !*v22 )
    {
LABEL_33:
      if ( *((_DWORD *)this + 811) )
      {
        *((_DWORD *)this + 811) = 0;
        DXGADAPTER::UpdateLatencyTolerances(this);
      }
      goto LABEL_35;
    }
    if ( (__int64 *)v23[1] == v22 )
    {
      v24 = *(__int64 ***)(*((_QWORD *)this + 395) + 408LL);
      if ( *v24 == v22 )
      {
        *v24 = v23;
        v23[1] = (__int64)v24;
        *(_QWORD *)(*((_QWORD *)this + 395) + 400LL) = 0LL;
        goto LABEL_33;
      }
    }
LABEL_36:
    __fastfail(3u);
  }
}
