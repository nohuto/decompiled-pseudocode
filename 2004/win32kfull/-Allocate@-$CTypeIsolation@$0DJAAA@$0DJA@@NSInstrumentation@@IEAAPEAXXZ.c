/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00FD734
 * Callers:
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C00DCC38 (--$AllocateIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00FD8B0 (-Allocate@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0152340 (-Create@-$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C01E9158 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x1C02DD2B8 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 */

void *__fastcall NSInstrumentation::CTypeIsolation<233472,912>::Allocate(__int64 a1, void *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  _QWORD *i; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  _QWORD *v10; // rcx

  if ( *(_BYTE *)(a1 + 36) )
    return NSInstrumentation::PlatformAllocateFromPagedLookasideList(*(NSInstrumentation **)(a1 + 24), a2);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v6 = NSInstrumentation::CSectionBitmapAllocator<233472,912>::Allocate(i[4]);
    if ( v6 )
    {
      ExReleasePushLockSharedEx(v3, 0LL);
      KeLeaveCriticalRegion();
      return (void *)v6;
    }
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  v7 = NSInstrumentation::CSectionEntry<233472,912>::Create();
  v8 = (_QWORD *)v7;
  if ( v7 )
  {
    v4 = NSInstrumentation::CSectionBitmapAllocator<233472,912>::Allocate(*(_QWORD *)(v7 + 32));
    if ( v4 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9, 0LL);
      v10 = *(_QWORD **)(a1 + 8);
      if ( *v10 != a1 )
        __fastfail(3u);
      v8[1] = v10;
      *v8 = a1;
      *v10 = v8;
      *(_DWORD *)(a1 + 32) += 228;
      *(_QWORD *)(a1 + 8) = v8;
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
