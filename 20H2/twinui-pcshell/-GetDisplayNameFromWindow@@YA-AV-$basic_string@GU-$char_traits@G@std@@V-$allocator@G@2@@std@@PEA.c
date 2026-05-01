/*
 * XREFs of ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x18045EE90
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18045C7A0 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1801DA20C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x180359DA0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDisplayNameFromWindow(__int64 a1, HWND a2)
{
  unsigned __int64 v4; // rsi
  WCHAR *v5; // rdx
  unsigned __int64 v6; // rdx
  WCHAR *v7; // rax

  v4 = GetWindowTextLengthW(a2) + 1;
  std::wstring::wstring(a1, v4);
  v5 = (WCHAR *)a1;
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    v5 = *(WCHAR **)a1;
  GetWindowTextW(a2, v5, *(_DWORD *)(a1 + 24));
  v6 = v4 - 1;
  if ( v4 - 1 > *(_QWORD *)(a1 + 16) )
  {
    std::wstring::append((_QWORD *)a1, v6 - *(_QWORD *)(a1 + 16), 0);
  }
  else
  {
    v7 = (WCHAR *)a1;
    if ( *(_QWORD *)(a1 + 24) >= 8uLL )
      v7 = *(WCHAR **)a1;
    *(_QWORD *)(a1 + 16) = v6;
    v7[v6] = 0;
  }
  return a1;
}
