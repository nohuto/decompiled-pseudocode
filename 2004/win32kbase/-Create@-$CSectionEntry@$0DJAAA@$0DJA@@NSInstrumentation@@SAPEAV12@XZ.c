/*
 * XREFs of ?Create@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C004AB38
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ @ 0x1C0008F14 (-Initialize@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NXZ @ 0x1C004AB94 (-Initialize@-$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0057B10 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void *NSInstrumentation::CSectionEntry<233472,912>::Create()
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
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<233472,912>::Initialize(PoolWithTag) )
      return v1;
    NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
