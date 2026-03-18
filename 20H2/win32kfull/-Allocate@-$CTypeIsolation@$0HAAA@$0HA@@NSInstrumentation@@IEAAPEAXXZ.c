/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0243AFC
 * Callers:
 *     xxxSBTrackInit @ 0x1C0245720 (xxxSBTrackInit.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C01E84C8 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C02439E4 (-Allocate@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0243E40 (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x1C02DBE18 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 */

void *__fastcall NSInstrumentation::CTypeIsolation<28672,112>::Allocate(__int64 **a1, void *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rbp
  __int64 **i; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 *v8; // rsi
  __int64 *v9; // rbx
  __int64 ***v10; // rcx

  if ( *((_BYTE *)a1 + 36) )
    return NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)a1[3], a2);
  v3 = a1[2];
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  for ( i = (__int64 **)*a1; i != a1; i = (__int64 **)*i )
  {
    v6 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(i[4]);
    if ( v6 )
    {
      ExReleasePushLockSharedEx(v3, 0LL);
      KeLeaveCriticalRegion();
      return (void *)v6;
    }
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  v7 = NSInstrumentation::CSectionEntry<28672,112>::Create();
  v8 = (__int64 *)v7;
  if ( v7 )
  {
    v4 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::Allocate(*(__int64 **)(v7 + 32));
    if ( v4 )
    {
      v9 = a1[2];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9, 0LL);
      v10 = (__int64 ***)a1[1];
      if ( *v10 != a1 )
        __fastfail(3u);
      v8[1] = (__int64)v10;
      *v8 = (__int64)a1;
      *v10 = (__int64 **)v8;
      *((_DWORD *)a1 + 8) += 252;
      a1[1] = v8;
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v8);
      ExFreePoolWithTag(v8, 0);
    }
  }
  return (void *)v4;
}
