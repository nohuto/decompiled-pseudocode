/*
 * XREFs of sub_1800D2864 @ 0x1800D2864
 * Callers:
 *     sub_1800D311C @ 0x1800D311C (sub_1800D311C.c)
 * Callees:
 *     sub_180096E84 @ 0x180096E84 (sub_180096E84.c)
 *     sub_1800D2934 @ 0x1800D2934 (sub_1800D2934.c)
 *     _o__invalid_parameter_noinfo @ 0x1801238F9 (_o__invalid_parameter_noinfo.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     memcpy @ 0x180123964 (memcpy.c)
 *     memset @ 0x18012396A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D2864(__int64 a1, size_t a2, const void *a3, size_t a4)
{
  size_t v4; // rbx
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD pExceptionObject[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a4;
  if ( a4 == -1LL )
    v4 = a2;
  *(_OWORD *)a1 = 0LL;
  v8 = o__aligned_malloc(a2, 16LL);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_1800D2934(a1, v8, 0LL);
  v9 = *(void **)a1;
  if ( !*(_QWORD *)a1 )
  {
    sub_180096E84(pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  if ( a3 )
  {
    if ( v4 )
    {
      if ( a2 < v4 )
      {
        memset(v9, 0, a2);
        *(_DWORD *)o__errno(v11, v10) = 34;
        o__invalid_parameter_noinfo(v13, v12);
      }
      else
      {
        memcpy(v9, a3, v4);
      }
    }
  }
  else
  {
    memset(v9, 0, a2);
  }
  return a1;
}
