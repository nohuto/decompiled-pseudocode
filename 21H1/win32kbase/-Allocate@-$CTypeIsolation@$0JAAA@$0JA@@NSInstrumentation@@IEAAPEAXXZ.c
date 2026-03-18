/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0152F6C
 * Callers:
 *     ??$_lambda_invoker_cdecl_@W4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@_lambda_f819cb6c8dd8c05e62b85cfa98ab46a8_@@CAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C003C650 (--$_lambda_invoker_cdecl_@W4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@_lambda_f819cb6c8dd8c05e62b8.c)
 * Callees:
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C0009580 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C000A820 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0019A70 (-Allocate@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C003E230 (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0049DD4 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C00830F0 (GreLeaveCriticalRegionAndReleasePushLockExclusive.c)
 *     GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C0084200 (GreEnterCriticalRegionAndAcquirePushLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Allocate(__int64 **a1)
{
  NSInstrumentation::CPlatformReaderWriterLock *v2; // rbx
  __int64 v3; // rbp
  __int64 **i; // rsi
  __int64 v5; // r14
  void *v6; // rax
  __int64 *v7; // rsi
  __int64 v8; // rbx
  __int64 ***v9; // rcx
  PSLIST_ENTRY result; // rax
  __int64 *v11; // rbx

  if ( *((_BYTE *)a1 + 36) )
  {
    v11 = a1[3];
    ++*((_DWORD *)v11 + 5);
    result = ExpInterlockedPopEntrySList((PSLIST_HEADER)v11);
    if ( !result )
    {
      ++*((_DWORD *)v11 + 6);
      return (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v11[6])(
                             *((unsigned int *)v11 + 9),
                             *((unsigned int *)v11 + 11),
                             *((unsigned int *)v11 + 10));
    }
  }
  else
  {
    v2 = (NSInstrumentation::CPlatformReaderWriterLock *)a1[2];
    v3 = 0LL;
    NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v2);
    for ( i = (__int64 **)*a1; i != a1; i = (__int64 **)*i )
    {
      v5 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(i[4]);
      if ( v5 )
      {
        GreLeaveCriticalRegionAndReleasePushLockShared((__int64)v2);
        return (PSLIST_ENTRY)v5;
      }
    }
    GreLeaveCriticalRegionAndReleasePushLockShared((__int64)v2);
    v6 = NSInstrumentation::CSectionEntry<36864,144>::Create();
    v7 = (__int64 *)v6;
    if ( v6 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(*((__int64 **)v6 + 4));
      if ( v3 )
      {
        v8 = (__int64)a1[2];
        GreEnterCriticalRegionAndAcquirePushLockExclusive(v8);
        v9 = (__int64 ***)a1[1];
        if ( *v9 != a1 )
          __fastfail(3u);
        v7[1] = (__int64)v9;
        *v7 = (__int64)a1;
        *v9 = (__int64 **)v7;
        *((_DWORD *)a1 + 8) += 252;
        a1[1] = v7;
        GreLeaveCriticalRegionAndReleasePushLockExclusive(v8);
      }
      else
      {
        NSInstrumentation::CSectionEntry<49152,192>::Destroy(v7);
      }
    }
    return (PSLIST_ENTRY)v3;
  }
  return result;
}
