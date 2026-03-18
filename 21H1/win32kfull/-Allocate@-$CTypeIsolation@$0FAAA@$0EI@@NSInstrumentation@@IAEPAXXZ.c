/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEPAXXZ @ 0x1A25E7
 * Callers:
 *     _xxxSBTrackInit@16 @ 0x1A3B45 (_xxxSBTrackInit@16.c)
 * Callees:
 *     ??1?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE@XZ @ 0x1543A2 (--1-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@QAEPAXXZ @ 0x1A253F (-Allocate@-$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@QAEPAXXZ.c)
 *     ?Create@?$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@SGPAV12@XZ @ 0x1A2860 (-Create@-$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@SGPAV12@XZ.c)
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YGPAXPAX@Z @ 0x2496CB (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YGPAXPAX@Z.c)
 */

void *__thiscall NSInstrumentation::CTypeIsolation<20480,72>::Allocate(_BYTE *this)
{
  int v2; // esi
  int *i; // ebx
  int v4; // eax
  _DWORD *v5; // ebx
  int v6; // esi
  void **v7; // eax
  NSInstrumentation *v9; // [esp+0h] [ebp-14h]
  void *v10; // [esp+4h] [ebp-10h]
  unsigned int v11; // [esp+Ch] [ebp-8h]
  unsigned int v12; // [esp+10h] [ebp-4h]

  if ( this[20] )
    return NSInstrumentation::PlatformAllocateFromPagedLookasideList(v9, v10);
  v12 = 0;
  v2 = *((_DWORD *)this + 2);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0);
  for ( i = *(int **)this; i != (int *)this; i = (int *)*i )
  {
    v11 = NSInstrumentation::CSectionBitmapAllocator<20480,72>::Allocate((int *)i[4]);
    if ( v11 )
    {
      ExReleasePushLockSharedEx(v2, 0);
      KeLeaveCriticalRegion();
      return (void *)v11;
    }
  }
  ExReleasePushLockSharedEx(v2, 0);
  KeLeaveCriticalRegion();
  v4 = NSInstrumentation::CSectionEntry<20480,72>::Create();
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v12 = NSInstrumentation::CSectionBitmapAllocator<20480,72>::Allocate(*(int **)(v4 + 16));
    if ( v12 )
    {
      v6 = *((_DWORD *)this + 2);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v6, 0);
      v7 = (void **)*((_DWORD *)this + 1);
      if ( *v7 != this )
        __fastfail(3u);
      *v5 = this;
      v5[1] = v7;
      *v7 = v5;
      *((_DWORD *)this + 4) += 280;
      *((_DWORD *)this + 1) = v5;
      ExReleasePushLockExclusiveEx(v6, 0);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<20480,80>::~CSectionEntry<20480,80>(v5);
      ExFreePoolWithTag(v5, 0);
    }
  }
  return (void *)v12;
}
