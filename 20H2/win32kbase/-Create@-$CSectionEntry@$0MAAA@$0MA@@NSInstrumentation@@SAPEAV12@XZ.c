/*
 * XREFs of ?Create@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00AC158
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ @ 0x1C0073AE8 (-Initialize@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013DD44 (-Allocate@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00AC1B4 (-Initialize@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00B75E0 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<49152,192>::Create()
{
  _QWORD *PoolWithTag; // rax
  void *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x28uLL, 0x6F736955u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<49152,192>::Initialize(PoolWithTag) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
