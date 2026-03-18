/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEPAXXZ @ 0xA8E6E
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@QAEPAXXZ @ 0xA8F58 (-Allocate@-$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@QAEPAXXZ.c)
 *     ??1?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE@XZ @ 0x1543A2 (--1-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE@XZ.c)
 *     ?Create@?$CSectionEntry@$0DFAAA@$0DEI@@NSInstrumentation@@SGPAV12@XZ @ 0x208CCB (-Create@-$CSectionEntry@$0DFAAA@$0DEI@@NSInstrumentation@@SGPAV12@XZ.c)
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YGPAXPAX@Z @ 0x2496CB (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YGPAXPAX@Z.c)
 */

void *__thiscall NSInstrumentation::CTypeIsolation<217088,840>::Allocate(_BYTE *this)
{
  int v2; // esi
  _DWORD *i; // ebx
  int v4; // eax
  _DWORD *v5; // ebx
  int v6; // esi
  void **v7; // eax
  NSInstrumentation *v9; // [esp+0h] [ebp-14h]
  void *v10; // [esp+4h] [ebp-10h]
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  if ( this[20] )
    return NSInstrumentation::PlatformAllocateFromPagedLookasideList(v9, v10);
  v12 = 0;
  v2 = *((_DWORD *)this + 2);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0);
  for ( i = *(_DWORD **)this; i != (_DWORD *)this; i = (_DWORD *)*i )
  {
    v11 = NSInstrumentation::CSectionBitmapAllocator<217088,840>::Allocate(i[4]);
    if ( v11 )
    {
      ExReleasePushLockSharedEx(v2, 0);
      KeLeaveCriticalRegion();
      return (void *)v11;
    }
  }
  ExReleasePushLockSharedEx(v2, 0);
  KeLeaveCriticalRegion();
  v4 = NSInstrumentation::CSectionEntry<217088,840>::Create();
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v12 = NSInstrumentation::CSectionBitmapAllocator<217088,840>::Allocate(*(_DWORD *)(v4 + 16));
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
      *((_DWORD *)this + 4) += 212;
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
