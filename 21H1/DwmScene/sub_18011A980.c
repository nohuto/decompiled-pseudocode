/*
 * XREFs of sub_18011A980 @ 0x18011A980
 * Callers:
 *     sub_180118D90 @ 0x180118D90 (sub_180118D90.c)
 *     sub_18011AB70 @ 0x18011AB70 (sub_18011AB70.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18011B754 @ 0x18011B754 (sub_18011B754.c)
 */

__int64 __fastcall sub_18011A980(__int64 a1, __int64 a2)
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
    sub_18011B754(a1 + 64, a2 + 64, 0LL);
  return a1;
}
