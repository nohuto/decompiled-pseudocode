/*
 * XREFs of HasInputTransform @ 0x1C01F5570
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall HasInputTransform(unsigned __int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx

  result = HMValidateHandleNoSecure(a1, 1);
  v2 = 0;
  if ( result )
  {
    LOBYTE(v2) = *(_QWORD *)(result + 272) != 0LL;
    return v2;
  }
  return result;
}
