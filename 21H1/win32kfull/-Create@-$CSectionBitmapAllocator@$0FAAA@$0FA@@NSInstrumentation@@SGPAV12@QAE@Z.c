/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@SGPAV12@QAE@Z @ 0xE9A44
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE_NXZ @ 0xE9A02 (-Initialize@-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@AAE_NPAE@Z @ 0xE9A8E (-Initialize@-$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@AAE_NPAE@Z.c)
 *     ?Uninitialize@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAEXXZ @ 0x1543E9 (-Uninitialize@-$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAEXXZ.c)
 */

void *__thiscall NSInstrumentation::CSectionBitmapAllocator<20480,80>::Create(void *this)
{
  _DWORD *PoolWithTag; // eax
  void *v3; // esi

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x18u, 0x6F736955u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  *PoolWithTag = 0;
  PoolWithTag[1] = 0;
  PoolWithTag[2] = 0;
  PoolWithTag[3] = 0;
  PoolWithTag[4] = 0;
  PoolWithTag[5] = 0;
  if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<20480,80>::Initialize(this) )
    return v3;
  NSInstrumentation::CSectionBitmapAllocator<217088,840>::Uninitialize(v3);
  ExFreePoolWithTag(v3, 0);
  return 0;
}
