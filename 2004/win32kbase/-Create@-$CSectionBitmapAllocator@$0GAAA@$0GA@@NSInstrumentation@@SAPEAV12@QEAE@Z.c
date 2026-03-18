/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C004A978
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ @ 0x1C004A918 (-Initialize@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NXZ @ 0x1C004AF7C (-Initialize@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0BFAAA@$0BFA@@NSInstrumentation@@AEAA_NXZ @ 0x1C004B614 (-Initialize@-$CSectionEntry@$0BFAAA@$0BFA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ @ 0x1C004B6D0 (-Initialize@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NXZ.c)
 *     ?Initialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ @ 0x1C004B78C (-Initialize@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C004A9F0 (-Initialize@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

PVOID *__fastcall NSInstrumentation::CSectionBitmapAllocator<24576,96>::Create(__int64 a1)
{
  PVOID *PoolWithTag; // rax
  PVOID *v3; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx

  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPoolSession, 0x28uLL, 0x6F736955u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    *((_DWORD *)PoolWithTag + 8) = 0;
    *((_DWORD *)PoolWithTag + 9) = 0;
    if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<28672,112>::Initialize(PoolWithTag, a1) )
      return v3;
    v5 = (unsigned __int64)v3[3];
    v6 = (unsigned __int64)v3[2];
    if ( v5 != v6 )
      RtlFindSetBits((PRTL_BITMAP)(v5 ^ v6), 1u, 0);
    if ( *v3 )
      ExFreePoolWithTag(*v3, 0);
    if ( v3[2] != v3[3] )
      ExFreePoolWithTag((PVOID)((unsigned __int64)v3[2] ^ (unsigned __int64)v3[3]), 0);
    ExFreePoolWithTag(v3, 0);
  }
  return 0LL;
}
