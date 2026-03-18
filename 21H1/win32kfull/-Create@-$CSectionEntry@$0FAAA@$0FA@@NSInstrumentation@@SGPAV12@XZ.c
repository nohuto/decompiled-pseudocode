/*
 * XREFs of ?Create@?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@SGPAV12@XZ @ 0xE99C6
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEPAXXZ @ 0x97DEE (-Allocate@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@IAEPAXXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE_NXZ @ 0xE9A02 (-Initialize@-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE_NXZ.c)
 *     ??1?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE@XZ @ 0x1543A2 (--1-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<20480,80>::Create()
{
  _DWORD *PoolWithTag; // eax
  void *v1; // esi

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x14u, 0x6F736955u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  PoolWithTag[2] = 0;
  PoolWithTag[3] = 0;
  PoolWithTag[4] = 0;
  if ( (unsigned __int8)NSInstrumentation::CSectionEntry<20480,80>::Initialize(PoolWithTag) )
    return v1;
  NSInstrumentation::CSectionEntry<20480,80>::~CSectionEntry<20480,80>(v1);
  ExFreePoolWithTag(v1, 0);
  return 0;
}
