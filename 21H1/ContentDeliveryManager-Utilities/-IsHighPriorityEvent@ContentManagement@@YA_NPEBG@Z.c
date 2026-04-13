/*
 * XREFs of ?IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z @ 0x18002CED4
 * Callers:
 *     _lambda_c7a3d71a2342ccc4636948ba7f796bf6_::operator() @ 0x18002D740 (_lambda_c7a3d71a2342ccc4636948ba7f796bf6_--operator().c)
 * Callees:
 *     _anonymous_namespace_::SplitString @ 0x18002BBD0 (_anonymous_namespace_--SplitString.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180030A04 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180034A68 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800362C8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall ContentManagement::IsHighPriorityEvent(ContentManagement *this, const unsigned __int16 *a2)
{
  char v2; // bl
  __int64 v3; // r8
  LPCWCH *v4; // rdi
  char v5; // si
  const WCHAR *v6; // rcx
  _QWORD v8[3]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v9[4]; // [rsp+50h] [rbp-21h] BYREF
  LPCWCH lpString1[2]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v11; // [rsp+80h] [rbp+Fh]
  unsigned __int64 v12; // [rsp+88h] [rbp+17h]
  void *v13[2]; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+A0h] [rbp+2Fh]
  unsigned __int64 v15; // [rsp+A8h] [rbp+37h]

  v9[3] = -2LL;
  v15 = 7LL;
  v2 = 0;
  v14 = 0LL;
  LOWORD(v13[0]) = 0;
  if ( *(_WORD *)this )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *((_WORD *)this + v3) );
  }
  std::wstring::assign(v13, this);
  if ( v14 )
  {
    anonymous_namespace_::SplitString(v9, (__int64)v13, (__int64)L"?");
    if ( ((v9[1] - v9[0]) & 0xFFFFFFFFFFFFFFE0uLL) == 0x40 )
    {
      anonymous_namespace_::SplitString(v8, v9[0] + 32LL, (__int64)L"=");
      if ( ((v8[1] - v8[0]) & 0xFFFFFFFFFFFFFFE0uLL) == 0x40 )
      {
        v12 = 7LL;
        v11 = 0LL;
        LOWORD(lpString1[0]) = 0;
        std::wstring::assign(lpString1);
        std::vector<std::wstring>::~vector<std::wstring>(v8);
        std::vector<std::wstring>::~vector<std::wstring>(v9);
        if ( v15 < 8 )
          goto LABEL_13;
        goto LABEL_12;
      }
      std::vector<std::wstring>::~vector<std::wstring>(v8);
    }
    std::vector<std::wstring>::~vector<std::wstring>(v9);
  }
  v12 = 7LL;
  v11 = 0LL;
  LOWORD(lpString1[0]) = 0;
  if ( v15 < 8 )
  {
LABEL_20:
    v5 = 0;
    goto LABEL_21;
  }
LABEL_12:
  operator delete(v13[0]);
LABEL_13:
  if ( !v11 )
    goto LABEL_20;
  v4 = (LPCWCH *)&off_1800E77B0;
  v5 = 1;
  while ( 1 )
  {
    v6 = (const WCHAR *)lpString1;
    if ( v12 >= 8 )
      v6 = lpString1[0];
    if ( CompareStringOrdinal(v6, -1, *v4, -1, 1) == 2 )
      break;
    if ( ++v4 == (LPCWCH *)&aProxyFileList )
      goto LABEL_22;
  }
LABEL_21:
  v2 = v5;
LABEL_22:
  if ( v12 >= 8 )
    operator delete((void *)lpString1[0]);
  return v2;
}
