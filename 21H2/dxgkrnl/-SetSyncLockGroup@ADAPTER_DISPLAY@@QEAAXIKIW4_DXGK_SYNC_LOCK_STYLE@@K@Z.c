/*
 * XREFs of ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x1C001B24C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013FB1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0028F00 (memset.c)
 */

void __fastcall ADAPTER_DISPLAY::SetSyncLockGroup(__int64 a1, unsigned int a2, int a3, int a4, int a5, unsigned int a6)
{
  __int64 v7; // r14
  __int64 v8; // rdi
  char *v9; // rsi
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v7 = a2;
  v8 = 10LL * a2;
  *(_DWORD *)(a1 + 8 * v8 + 776) = a5;
  *(_DWORD *)(a1 + 8 * v8 + 768) = a3;
  *(_DWORD *)(a1 + 8 * v8 + 772) = a4;
  *(_DWORD *)(a1 + 8 * v8 + 808) = a6 >> 1;
  if ( a3 )
  {
    v9 = 0LL;
    if ( !*(_QWORD *)(a1 + 80LL * a2 + 832) )
    {
      v10 = (char *)operator new[](0xF90uLL, 0x4B677844u, (POOL_TYPE)512);
      v9 = v10;
      if ( !v10 )
      {
        v15 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
        *(_QWORD *)(v15 + 24) = 6637LL;
        WdLogEvent5_WdLowResource(v15);
        return;
      }
      memset(v10, 0, 0xF90uLL);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 16) + 3968LL), &LockHandle);
    if ( v9 )
    {
      *(_DWORD *)(a1 + 8 * v8 + 788) = 0;
      *(_DWORD *)(a1 + 8 * v8 + 792) = 0;
      *(_DWORD *)(a1 + 8 * v8 + 796) = 0;
      *(_DWORD *)(a1 + 8 * v8 + 804) = 0;
      *(_QWORD *)(a1 + 8 * v8 + 816) = 0LL;
      *(_QWORD *)(a1 + 8 * v8 + 824) = 0LL;
      *(_DWORD *)(a1 + 80 * (v7 + 10)) = 0;
      *(_DWORD *)(a1 + 632) = 0;
      *(_DWORD *)(a1 + 636) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
      *(_QWORD *)(a1 + 8 * v8 + 832) = v9;
      *(_QWORD *)(a1 + 8 * v8 + 840) = v9 + 384;
      KeSetTimerEx((PKTIMER)(a1 + 640), (LARGE_INTEGER)-40000000LL, 4000, (PKDPC)(a1 + 704));
    }
    *(_BYTE *)(a1 + 8 * v8 + 784) = 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
