/*
 * XREFs of _ImportTablepHashCanonicalLists@8 @ 0x4B33E432
 * Callers:
 *     _RtlComputeImportTableHash@12 @ 0x4B33E550 (_RtlComputeImportTableHash@12.c)
 * Callees:
 *     _MD5Final@4 @ 0x4B2EF910 (_MD5Final@4.c)
 *     _MD5Update@12 @ 0x4B2EF9B0 (_MD5Update@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall ImportTablepHashCanonicalLists(int **a1, _DWORD *a2)
{
  int **v4; // edi
  int result; // eax
  int v6[27]; // [esp+10h] [ebp-70h] BYREF

  v6[0] = 0;
  v6[1] = 0;
  v6[2] = 1732584193;
  v6[3] = -271733879;
  v6[4] = -1732584194;
  v6[5] = 271733878;
  while ( a1 )
  {
    v4 = (int **)a1[2];
    MD5Update((unsigned int *)v6, (char *)a1[1], strlen((const char *)a1[1]));
    while ( v4 )
    {
      MD5Update((unsigned int *)v6, (char *)v4[1], strlen((const char *)v4[1]));
      v4 = (int **)*v4;
    }
    a1 = (int **)*a1;
  }
  MD5Final(v6);
  result = 0;
  *a2 = v6[22];
  a2[1] = v6[23];
  a2[2] = v6[24];
  a2[3] = v6[25];
  return result;
}
