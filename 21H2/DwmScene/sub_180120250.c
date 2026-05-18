/*
 * XREFs of sub_180120250 @ 0x180120250
 * Callers:
 *     sub_18011E660 @ 0x18011E660 (sub_18011E660.c)
 *     sub_180120440 @ 0x180120440 (sub_180120440.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180121024 @ 0x180121024 (sub_180121024.c)
 */

__int64 __fastcall sub_180120250(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  char *v4; // rcx
  const void *v6; // rdx

  v2 = a2 + 8;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = (char *)(a1 + 8);
  if ( v4 != (char *)(a2 + 8) )
  {
    v6 = (const void *)(a2 + 8);
    if ( *(_QWORD *)(v2 + 24) >= 8uLL )
      v6 = *(const void **)v2;
    std::wstring::assign(v4, v6, *(_QWORD *)(v2 + 16));
  }
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  if ( a1 + 64 != a2 + 64 )
    sub_180121024(a1 + 64, a2 + 64, 0LL);
  return a1;
}
