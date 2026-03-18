/*
 * XREFs of ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C000A1D4
 * Callers:
 *     ?DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z @ 0x1C016B940 (-DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z.c)
 * Callees:
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0008F10 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C000A3B0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0044900 (McTemplateK0_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::LatencyToleranceTimerNotification(KSPIN_LOCK *this, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // r12
  _QWORD *v6; // r15
  _QWORD *v7; // rbp
  _QWORD *v8; // r14
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  KSPIN_LOCK v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  char v22; // [rsp+48h] [rbp-30h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0_EtwWriteTransfer(this, &Dxgk_LatencyToleranceTimer);
  v22 = 0;
  KeAcquireInStackQueuedSpinLock(this + 420, &LockHandle);
  v5 = this + 418;
  this[421] = (KSPIN_LOCK)KeGetCurrentThread();
  v6 = (_QWORD *)this[418];
  v22 = 1;
  while ( v6 != v5 )
  {
    v7 = v6;
    v8 = v6;
    v6 = (_QWORD *)*v6;
    if ( *((_BYTE *)v7 - 44) || *((_DWORD *)v7 - 14) == *((_DWORD *)v7 - 98) - 1 )
    {
      if ( (_QWORD *)v6[1] != v8 || (v20 = (_QWORD *)v8[1], (_QWORD *)*v20 != v8) )
LABEL_34:
        __fastfail(3u);
      *v20 = v6;
      v6[1] = v20;
LABEL_14:
      *v8 = 0LL;
    }
    else if ( *(v7 - 1) <= a2 )
    {
      v9 = *((_DWORD *)v7 - 48);
      if ( v9 )
      {
        if ( v9 == 6 )
        {
          v16 = *((_DWORD *)this + 835);
          switch ( v16 )
          {
            case 0:
              *((_DWORD *)this + 835) = 1;
              v17 = this[402];
LABEL_28:
              *(v7 - 1) = a2 + v17;
              goto LABEL_30;
            case 1:
              *((_DWORD *)this + 835) = 2;
              v17 = this[404];
              goto LABEL_28;
            case 2:
              *((_DWORD *)this + 835) = 3;
              v18 = *v8;
              if ( *(_QWORD **)(*v8 + 8LL) != v8 )
                goto LABEL_34;
              v19 = (_QWORD *)v8[1];
              if ( (_QWORD *)*v19 != v8 )
                goto LABEL_34;
              *v19 = v18;
              *(_QWORD *)(v18 + 8) = v19;
              *v8 = 0LL;
LABEL_30:
              DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)this);
              break;
          }
        }
      }
      else
      {
        v10 = *((int *)v7 - 4);
        v11 = v10 + 1;
        v12 = v10 + 1;
        DXGADAPTER::SetPowerComponentLatencyCB(
          (DXGADAPTER *)this,
          *((_DWORD *)v7 - 99),
          *(_QWORD *)(this[398] + 16 * (v10 + 1)));
        *((_DWORD *)v7 - 4) = v12;
        *(v7 - 1) = a2 + *(_QWORD *)(this[398] + 16 * v11 + 8);
        if ( v12 == *((_DWORD *)v7 - 3) )
        {
          v13 = *v7;
          if ( *(_QWORD **)(*v7 + 8LL) != v7 )
            goto LABEL_34;
          v14 = (_QWORD *)v7[1];
          if ( (_QWORD *)*v14 != v7 )
            goto LABEL_34;
          *v14 = v13;
          *(_QWORD *)(v13 + 8) = v14;
          goto LABEL_14;
        }
      }
    }
  }
  if ( (_QWORD *)*v5 == v5 )
  {
    *((_BYTE *)this + 3332) = 0;
    LOBYTE(v4) = 0;
  }
  else
  {
    LOBYTE(v4) = *((_BYTE *)this + 3332);
  }
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(this[350] + 624) + 8LL) + 864LL))(
    *(_QWORD *)(this[350] + 632),
    v4);
  if ( v22 )
  {
    v22 = 0;
    this[421] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0_EtwWriteTransfer(v15, &Dxgk_LatencyToleranceTimerEnd);
}
