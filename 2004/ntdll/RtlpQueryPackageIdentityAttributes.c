/*
 * XREFs of RtlpQueryPackageIdentityAttributes @ 0x180069660
 * Callers:
 *     RtlQueryPackageClaims @ 0x1800694E0 (RtlQueryPackageClaims.c)
 * Callees:
 *     ZwQuerySecurityAttributesToken @ 0x18009F940 (ZwQuerySecurityAttributesToken.c)
 */

__int64 __fastcall RtlpQueryPackageIdentityAttributes(__int64 a1, int a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  unsigned __int8 v9; // si
  unsigned int v10; // ebp
  __int64 result; // rax
  __int64 v12; // rax
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v5 = a5;
  if ( a5 )
    *a5 = 0LL;
  v9 = 1;
  v10 = 1;
  if ( a4 || v5 )
    v10 = 2;
  result = ZwQuerySecurityAttributesToken(a1, &unk_18011C450, v10, a3, 816, &v13);
  if ( (int)result < 0 )
  {
    if ( v10 == 1 )
      return result;
    if ( (_DWORD)result != -1073741275 )
      return result;
    result = ZwQuerySecurityAttributesToken(a1, &unk_18011C450, 1LL, a3, 816, &v13);
    if ( (int)result < 0 )
      return result;
    v9 = 0;
  }
  if ( !*(_DWORD *)(a3 + 4) )
    return 3221226021LL;
  if ( a4 )
  {
    if ( v9 )
      v12 = **(_QWORD **)(*(_QWORD *)(a3 + 8) + 72LL);
    else
      v12 = 0LL;
    *a4 = v12;
  }
  if ( v5 )
  {
    *v5 |= (2LL * v9) | 1;
    if ( (unsigned int)ZwQuerySecurityAttributesToken(a1, &unk_18011C480, 1LL, 0LL, 0, &v13) == -1073741789 )
      *v5 |= 4uLL;
    if ( (unsigned int)ZwQuerySecurityAttributesToken(a1, &unk_18011C470, 1LL, 0LL, 0, &v13) == -1073741789 )
      *v5 |= 8uLL;
  }
  return 0LL;
}
