/*
 * XREFs of ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x1C001A95C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C012C4A8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 */

void __fastcall ADAPTER_DISPLAY::SetSyncLockGroup(__int64 a1, unsigned int a2, int a3, int a4, int a5, unsigned int a6)
{
  __int64 v7; // rdi
  char *v8; // rsi
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v7 = 10LL * a2;
  *(_DWORD *)(a1 + 8 * v7 + 768) = a5;
  *(_DWORD *)(a1 + 8 * v7 + 760) = a3;
  *(_DWORD *)(a1 + 8 * v7 + 764) = a4;
  *(_DWORD *)(a1 + 80 * (a2 + 10LL)) = a6 >> 1;
  if ( a3 )
  {
    v8 = 0LL;
    if ( !*(_QWORD *)(a1 + 80LL * a2 + 824) )
    {
      v9 = (char *)operator new[](0xF90uLL, 0x4B677844u, (POOL_TYPE)512);
      v8 = v9;
      if ( !v9 )
      {
        v14 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
        *(_QWORD *)(v14 + 24) = 6598LL;
        WdLogEvent5_WdLowResource(v14);
        return;
      }
      memset(v9, 0, 0xF90uLL);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 16) + 3936LL), &LockHandle);
    if ( v8 )
    {
      *(_DWORD *)(a1 + 8 * v7 + 780) = 0;
      *(_DWORD *)(a1 + 8 * v7 + 784) = 0;
      *(_DWORD *)(a1 + 8 * v7 + 788) = 0;
      *(_DWORD *)(a1 + 8 * v7 + 792) = 0;
      *(_DWORD *)(a1 + 8 * v7 + 796) = 0;
      *(_QWORD *)(a1 + 8 * v7 + 808) = 0LL;
      *(_QWORD *)(a1 + 8 * v7 + 816) = 0LL;
      *(_DWORD *)(a1 + 624) = 0;
      *(_DWORD *)(a1 + 628) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
      *(_QWORD *)(a1 + 8 * v7 + 824) = v8;
      *(_QWORD *)(a1 + 8 * v7 + 832) = v8 + 384;
      KeSetTimerEx((PKTIMER)(a1 + 632), (LARGE_INTEGER)-40000000LL, 4000, (PKDPC)(a1 + 696));
    }
    *(_BYTE *)(a1 + 8 * v7 + 776) = 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
