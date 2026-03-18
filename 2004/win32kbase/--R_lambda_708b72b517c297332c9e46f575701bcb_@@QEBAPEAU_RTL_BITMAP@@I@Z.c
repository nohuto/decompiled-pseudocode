/*
 * XREFs of ??R_lambda_708b72b517c297332c9e46f575701bcb_@@QEBAPEAU_RTL_BITMAP@@I@Z @ 0x1C004AAB0
 * Callers:
 *     ?Initialize@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C004A9F0 (-Initialize@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C004AC6C (-Initialize@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C004AE60 (-Initialize@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C004B110 (-Initialize@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0NPAAA@$0NPA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C004B304 (-Initialize@-$CSectionBitmapAllocator@$0NPAAA@$0NPA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C004B4F8 (-Initialize@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C004B920 (-Initialize@-$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_BITMAP *__fastcall _lambda_708b72b517c297332c9e46f575701bcb_::operator()(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  ULONG v3; // edi
  struct _RTL_BITMAP *result; // rax
  struct _RTL_BITMAP *v5; // rbx

  v2 = 8LL;
  if ( a2 >= 8 )
    v2 = a2;
  v3 = v2;
  result = (struct _RTL_BITMAP *)ExAllocatePoolWithTag(
                                   PagedPoolSession,
                                   (((unsigned __int64)(v2 + 31) >> 3) & 0xFFFFFFFC) + 16,
                                   0x6F736955u);
  v5 = result;
  if ( result )
  {
    RtlInitializeBitMap(result, &result[1].SizeOfBitMap, v3);
    RtlClearAllBits(v5);
    return v5;
  }
  return result;
}
