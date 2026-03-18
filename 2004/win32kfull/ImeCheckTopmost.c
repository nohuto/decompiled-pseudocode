/*
 * XREFs of ImeCheckTopmost @ 0x1C0033118
 * Callers:
 *     zzzImeCanDestroyDefIME @ 0x1C0031828 (zzzImeCanDestroyDefIME.c)
 *     NtUserSetImeOwnerWindow @ 0x1C0032FE0 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     ImeSetTopmost @ 0x1C0033178 (ImeSetTopmost.c)
 */

void __fastcall ImeCheckTopmost(_QWORD *a1)
{
  unsigned int v2; // r9d
  __int64 v3; // rcx
  __int64 v4; // r8

  v2 = 0;
  v3 = a1[15];
  if ( v3 )
  {
    v4 = v3;
    if ( a1[2] == gptiForeground )
      v4 = 0LL;
    if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 24LL) & 8) != 0 || *(_DWORD *)(a1[5] + 236LL) != 1 )
      v2 = 1;
    ImeSetTopmost(a1, v2, v4);
  }
}
