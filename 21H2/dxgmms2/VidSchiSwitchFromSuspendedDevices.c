/*
 * XREFs of VidSchiSwitchFromSuspendedDevices @ 0x1C00130E0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000AD70 (VidSchIsTDRPending.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C009A7E0 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C009A910 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00F3D78 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00F3E3C (VidSchiWaitForEmptyHwQueue.c)
 */

void __fastcall VidSchiSwitchFromSuspendedDevices(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // r14
  unsigned int i; // esi
  __int64 *v5; // rdi
  __int64 v6; // rdi
  char v7; // r15
  unsigned int j; // ebp
  unsigned int v9; // edi
  __int64 *v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  if ( !*(_DWORD *)(a1 + 3012) )
  {
    if ( (*(_DWORD *)(a1 + 2536) & 1) != 0 )
    {
      v2 = *(_DWORD *)(a1 + 80);
      v3 = 0LL;
      for ( i = 0; i < v2; ++i )
      {
        v5 = *(__int64 **)(a1 + 632);
        if ( i < *(_DWORD *)(a1 + 704) )
          v5 += i;
        v6 = *v5;
        v7 = 0;
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
        for ( j = *(_DWORD *)(v6 + 1560); j != *(_DWORD *)(v6 + 1552); j = ((_BYTE)j + 1) & 0xF )
        {
          v14 = *(_QWORD *)(v6 + 8LL * j + 1568);
          if ( v14 )
          {
            if ( (*(_DWORD *)(v14 + 184) & 0x200) != 0
              || (v15 = *(_QWORD *)(v14 + 104), *(_BYTE *)(v15 + 204))
              || _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 200), 0, 0) )
            {
              v7 = 1;
              WdLogSingleEntry2(4LL, v6, v14);
            }
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( v7 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
          if ( _InterlockedIncrement((volatile signed __int32 *)(v6 + 2904)) == 1 )
          {
            *(_QWORD *)(v6 + 232) = 0LL;
            VidSchiSubmitPreemptionCommand(v6);
            _bittestandset64(&v3, i);
          }
          else
          {
            _InterlockedDecrement((volatile signed __int32 *)(v6 + 2904));
            _bittestandset64(&v3, i);
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 732));
          }
        }
        v2 = *(_DWORD *)(a1 + 80);
      }
      v9 = 0;
      if ( v2 )
      {
        do
        {
          v10 = *(__int64 **)(a1 + 632);
          if ( v9 < *(_DWORD *)(a1 + 704) )
            v10 += v9;
          v11 = *v10;
          if ( _bittest64(&v3, v9) )
          {
            if ( *(_DWORD *)(v11 + 2908) )
              VidSchiWaitForCompletePreemption(v11);
            if ( VidSchIsTDRPending(a1) )
              break;
          }
          if ( *(_BYTE *)(a1 + 52) )
          {
            v12 = *(_QWORD *)(v11 + 224);
            if ( v12 )
            {
              if ( (*(_DWORD *)(v12 + 184) & 0x100) != 0
                || (v13 = *(_QWORD *)(v12 + 104), *(_BYTE *)(v13 + 204))
                || _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 200), 0, 0) )
              {
                WdLogSingleEntry2(4LL, v11, v12);
                VidSchiSwitchNodeFromContext(v12);
                if ( VidSchIsTDRPending(a1) )
                  break;
              }
            }
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)(a1 + 80) );
      }
    }
    else
    {
      VidSchiWaitForEmptyHwQueue((struct _VIDSCH_GLOBAL *)a1);
    }
  }
}
