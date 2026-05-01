/*
 * XREFs of ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@MEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x1800687C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18008DA5C (--2@YAPEAX_K@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXXZ @ 0x1800EDAC4 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXXZ.c)
 *     memcpy_0 @ 0x1800EEEC7 (memcpy_0.c)
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
        __int64 a1,
        _QWORD *a2,
        HWND a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  size_t v11; // rdx
  void *v13; // rsi
  size_t v14; // rcx
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  WCHAR pString[264]; // [rsp+30h] [rbp-248h] BYREF

  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  if ( InternalGetWindowText(a3, pString, 261) )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( pString[v7] );
    v8 = a2[3];
    if ( v7 > v8 )
    {
      v9 = 0x7FFFFFFFFFFFFFFELL;
      if ( v7 > 0x7FFFFFFFFFFFFFFELL )
        std::wstring::_Xlen(v6, v5);
      if ( (v7 | 7) <= 0x7FFFFFFFFFFFFFFELL )
      {
        v10 = v8 >> 1;
        if ( v8 <= 0x7FFFFFFFFFFFFFFELL - (v8 >> 1) )
        {
          v9 = v10 + v8;
          if ( (v7 | 7) >= v10 + v8 )
            v9 = v7 | 7;
        }
      }
      v11 = 2 * (v9 + 1);
      if ( (unsigned __int64)(v9 + 1) > 0x7FFFFFFFFFFFFFFFLL )
        v11 = -1LL;
      if ( v11 >= 0x1000 )
      {
        v14 = v11 + 39;
        if ( v11 + 39 < v11 )
          v14 = -1LL;
        v15 = operator new(v14);
        if ( !v15 )
        {
          _o__invalid_parameter_noinfo_noreturn(v17, v16);
          __debugbreak();
          goto LABEL_28;
        }
        v3 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v3 - 1) = v15;
      }
      else if ( v11 )
      {
        v3 = operator new(v11);
      }
      else
      {
        v3 = 0LL;
      }
      a2[2] = v7;
      a2[3] = v9;
      memcpy_0(v3, pString, 2 * v7);
      *((_WORD *)v3 + v7) = 0;
      if ( v8 < 8 )
      {
LABEL_16:
        *a2 = v3;
        return a2;
      }
LABEL_28:
      std::_Deallocate<16,0>(*a2, 2 * v8 + 2);
      goto LABEL_16;
    }
    v13 = a2;
    if ( v8 >= 8 )
      v13 = (void *)*a2;
    a2[2] = v7;
    memmove_0(v13, pString, 2 * v7);
    *((_WORD *)v13 + v7) = 0;
  }
  return a2;
}
