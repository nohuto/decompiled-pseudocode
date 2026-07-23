/*
 * XREFs of LdrpMapDllFullPath @ 0x18005F8C0
 * Callers:
 *     LdrpProcessWork @ 0x18005EB1C (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800CD7B8 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     LdrpResolveDllName @ 0x18005F064 (LdrpResolveDllName.c)
 *     LdrpAppCompatRedirect @ 0x18005F808 (LdrpAppCompatRedirect.c)
 *     LdrpFindExistingModule @ 0x18005FA04 (LdrpFindExistingModule.c)
 *     LdrpHashUnicodeString @ 0x18005FAA0 (LdrpHashUnicodeString.c)
 *     LdrpMapDllNtFileName @ 0x18005FAD4 (LdrpMapDllNtFileName.c)
 *     LdrpLoadContextReplaceModule @ 0x1800601EC (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMapDllFullPath(__m128i *a1)
{
  __int64 v1; // r15
  __int32 v2; // eax
  int v4; // eax
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v8; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[128]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = a1[3].m128i_i64[1];
  v8.m128i_i64[1] = (__int64)v9;
  v2 = a1[2].m128i_i32[0];
  v7 = 0LL;
  v8.m128i_i32[0] = 0x1000000;
  v9[0] = 0;
  v4 = LdrpResolveDllName(a1, &v8, (_UNICODE_STRING *)(v1 + 88), (_OWORD *)(v1 + 72), v2);
  v5 = v4;
  if ( a1[10].m128i_i64[1] )
    goto LABEL_6;
  v5 = LdrpAppCompatRedirect((__int64)a1, (_OWORD *)(v1 + 72), (_UNICODE_STRING *)(v1 + 88), &v8, v4);
  if ( v5 < 0 )
    goto LABEL_7;
  *(_DWORD *)(v1 + 264) = LdrpHashUnicodeString(v1 + 88);
  LdrpFindExistingModule((PUNICODE_STRING)(v1 + 88), (PUNICODE_STRING)(v1 + 72), (__int64)&v7);
  if ( v7 )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else
  {
LABEL_6:
    if ( v5 >= 0 )
    {
      v5 = LdrpMapDllNtFileName(a1, &v8);
      if ( v5 == 1073741838 )
        v5 = -1073741701;
    }
  }
LABEL_7:
  if ( v9 != (_WORD *)v8.m128i_i64[1] )
    NtdllpFreeStringRoutine((void *)v8.m128i_i64[1]);
  return (unsigned int)v5;
}
