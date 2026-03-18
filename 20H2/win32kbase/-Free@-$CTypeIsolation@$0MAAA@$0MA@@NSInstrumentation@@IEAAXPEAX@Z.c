/*
 * XREFs of ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C013DE68
 * Callers:
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00A36F4 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 * Callees:
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C0082EE0 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C0083FF0 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     ?Free@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009BBB4 (-Free@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C009BC8C (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAA-AW4Allocat.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C014E840 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<49152,192>::Free(__int64 a1, struct _SLIST_ENTRY *a2)
{
  NSInstrumentation::CPlatformReaderWriterLock *v4; // rbx
  _QWORD *i; // r14
  __int64 *v6; // rbp
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx

  if ( a2 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      v4 = *(NSInstrumentation::CPlatformReaderWriterLock **)(a1 + 16);
      NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v4);
      for ( i = *(_QWORD **)a1; ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)a1 )
        {
          GreLeaveCriticalRegionAndReleasePushLockShared((__int64)v4);
          NSInstrumentation::PlatformAbort(3LL, a2);
          return;
        }
        v6 = (__int64 *)i[4];
        v7 = NSInstrumentation::CSectionBitmapAllocator<49152,192>::CheckAllocationStatus(v6, (unsigned __int64)a2);
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
          {
            NSInstrumentation::CSectionBitmapAllocator<49152,192>::Free(v6, a2);
            GreLeaveCriticalRegionAndReleasePushLockShared((__int64)v4);
            return;
          }
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
              continue;
            v10 = 2LL;
          }
          else
          {
            v10 = 1LL;
          }
          NSInstrumentation::PlatformAbort(v10, a2);
        }
      }
    }
    memset(a2, 0, 0xC0uLL);
    v11 = *(_QWORD *)(a1 + 24);
    ++*(_DWORD *)(v11 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v11) < *(_WORD *)(v11 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v11, a2);
    }
    else
    {
      ++*(_DWORD *)(v11 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v11 + 56))(a2);
    }
  }
}
