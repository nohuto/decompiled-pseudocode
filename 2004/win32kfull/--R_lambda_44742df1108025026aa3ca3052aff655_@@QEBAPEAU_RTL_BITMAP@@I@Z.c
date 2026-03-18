/*
 * XREFs of ??R_lambda_44742df1108025026aa3ca3052aff655_@@QEBAPEAU_RTL_BITMAP@@I@Z @ 0x1C00F7298
 * Callers:
 *     ?Initialize@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C00F71D8 (-Initialize@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C0152474 (-Initialize@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_BITMAP *__fastcall _lambda_44742df1108025026aa3ca3052aff655_::operator()(__int64 a1, unsigned int a2)
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
