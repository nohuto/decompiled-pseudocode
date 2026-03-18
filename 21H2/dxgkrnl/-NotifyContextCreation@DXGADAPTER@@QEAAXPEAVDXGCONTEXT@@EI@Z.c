/*
 * XREFs of ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0009C68
 * Callers:
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C015BF90 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C01646AC (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C016AE0C (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016CC98 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0008F10 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C000A3B0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGADAPTER::NotifyContextCreation(DXGADAPTER *this, struct DXGCONTEXT *a2, char a3, int a4)
{
  unsigned int i; // ebp
  signed __int32 v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rdx
  _QWORD *v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  void (__fastcall *v21)(_QWORD, __int64); // rax
  unsigned int v22; // edx
  __int64 *v23; // rsi
  __int64 v24; // rax
  __int64 **v25; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  char v27; // [rsp+48h] [rbp-30h]

  if ( *((_DWORD *)a2 + 36) == 2 || (*((_DWORD *)a2 + 101) & 8) != 0 )
    return;
  for ( i = 0; i < *((_DWORD *)this + 760); ++i )
  {
    v10 = *((_QWORD *)this + 362) + 520LL * i;
    if ( *(_DWORD *)(v10 + 208)
      || (a4 != *(_DWORD *)(v10 + 212) || *((_DWORD *)a2 + 100) != *(unsigned __int16 *)(v10 + 6))
      && !*(_BYTE *)(v10 + 358) )
    {
      continue;
    }
    v27 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 420, &LockHandle);
    *((_QWORD *)this + 421) = KeGetCurrentThread();
    v11 = *(_DWORD *)(v10 + 416);
    v27 = 1;
    if ( a3 )
    {
      v12 = v11 + 1;
      *(_DWORD *)(v10 + 416) = v12;
      if ( v12 == 1 )
      {
        v14 = *(_DWORD *)(v10 + 4);
        *(_DWORD *)(v10 + 384) = 0;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v14, **((_QWORD **)this + 398));
        if ( *(int *)(v10 + 388) > 0 )
        {
          v15 = MEMORY[0xFFFFF78000000320];
          *(_QWORD *)(v10 + 392) = MEMORY[0xFFFFF78000000320];
          *(_QWORD *)(v10 + 392) = v15 + *(_QWORD *)(*((_QWORD *)this + 398) + 8LL);
          v16 = (_QWORD *)(v10 + 400);
          if ( !*v16 )
          {
            v17 = (_QWORD *)((char *)this + 3344);
            v18 = *((_QWORD *)this + 418);
            if ( *(DXGADAPTER **)(v18 + 8) != (DXGADAPTER *)((char *)this + 3344) )
              goto LABEL_35;
            *v16 = v18;
            v16[1] = v17;
            *(_QWORD *)(v18 + 8) = v16;
            *v17 = v16;
          }
          if ( !*((_BYTE *)this + 3332) )
          {
            v19 = *((_QWORD *)this + 350);
            *((_BYTE *)this + 3332) = 1;
            v20 = *(_QWORD *)(*(_QWORD *)(v19 + 624) + 8LL);
            v21 = *(void (__fastcall **)(_QWORD, __int64))(v20 + 864);
            LOBYTE(v20) = 1;
            v21(*(_QWORD *)(v19 + 632), v20);
          }
        }
        goto LABEL_29;
      }
    }
    else
    {
      v13 = v11 - 1;
      *(_DWORD *)(v10 + 416) = v13;
      if ( !v13 )
      {
        v22 = *(_DWORD *)(v10 + 4);
        *(_DWORD *)(v10 + 384) = 2;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v22, *(_QWORD *)(*((_QWORD *)this + 398) + 32LL));
        v23 = (__int64 *)(v10 + 400);
        v24 = *v23;
        if ( *v23 )
        {
          if ( *(__int64 **)(v24 + 8) != v23 || (v25 = (__int64 **)v23[1], *v25 != v23) )
LABEL_35:
            __fastfail(3u);
          *v25 = (__int64 *)v24;
          *(_QWORD *)(v24 + 8) = v25;
          *v23 = 0LL;
        }
LABEL_29:
        if ( !v27 )
          continue;
      }
    }
    v27 = 0;
    *((_QWORD *)this + 421) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( a3 )
    v9 = _InterlockedIncrement((volatile signed __int32 *)this + 763);
  else
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 763, 0xFFFFFFFF);
  if ( v9 == 1 )
  {
    if ( *((_QWORD *)this + 363) )
      DXGADAPTER::UpdateLatencyTolerances(this);
  }
}
