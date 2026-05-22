/*
 * XREFs of ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101U?$integral_constant@_N$00@0@@Z @ 0x180091A14
 * Callers:
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x18009599C (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x180096808 (-find@-$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 */

__int64 __fastcall std::_Traits_find_last_of<std::char_traits<unsigned short>>(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbx
  const WCHAR *v8; // r10
  const WCHAR *v9; // rdx
  const WCHAR *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  _WORD *j; // rdx
  __int64 v14; // rcx
  _WORD *i; // r9
  _WORD *v16; // r9
  _BYTE v18[256]; // [rsp+20h] [rbp-118h] BYREF

  v5 = -1LL;
  if ( !a5 || !a2 )
    return v5;
  memset_0(v18, 0, sizeof(v18));
  v8 = L"\\";
  v9 = &StringValue[a5];
  v10 = L"\\";
  if ( L"\\" != v9 )
  {
    while ( *v10 < 0x100u )
    {
      v11 = *(unsigned __int8 *)v10++;
      v18[v11] = 1;
      if ( v10 == v9 )
        goto LABEL_6;
    }
    v5 = -1LL;
    v14 = -1LL;
    if ( a2 )
      v14 = a2 - 1;
    for ( i = &a1[v14]; !std::_WChar_traits<unsigned short>::find(v8, a5, i); i = v16 - 1 )
    {
      if ( v16 == a1 )
        return v5;
    }
    return v16 - a1;
  }
LABEL_6:
  v12 = -1LL;
  if ( a2 )
    v12 = a2 - 1;
  for ( j = &a1[v12]; *j >= 0x100u || !v18[(unsigned __int16)*j]; --j )
  {
    if ( j == a1 )
      return v5;
  }
  return j - a1;
}
