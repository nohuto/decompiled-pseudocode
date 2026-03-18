/*
 * XREFs of ?UT_CaretSet@@YGHPAUtagWND@@@Z @ 0x810C2
 * Callers:
 *     _zzzDestroyCaret@0 @ 0x7DA96 (_zzzDestroyCaret@0.c)
 *     _zzzSetCaretPos@8 @ 0x820C0 (_zzzSetCaretPos@8.c)
 *     _NtUserShowCaret@4 @ 0xBA6EC (_NtUserShowCaret@4.c)
 *     _NtUserHideCaret@4 @ 0xBA8F6 (_NtUserHideCaret@4.c)
 *     _zzzHideCaret@4 @ 0x19FB1F (_zzzHideCaret@4.c)
 *     _zzzShowCaret@4 @ 0x19FB39 (_zzzShowCaret@4.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

BOOL __thiscall UT_CaretSet(void *this)
{
  int v2; // edi
  int v4; // eax
  HANDLE v5; // [esp+Ch] [ebp-4h]

  v2 = *(_DWORD *)(_gptiCurrent + 236);
  if ( !*(_DWORD *)(v2 + 216)
    || (v5 = *(HANDLE *)(v2 + 256), v5 != PsGetThreadId((PETHREAD)*_gptiCurrent))
    && ((v4 = PtiFromThreadId(v5), (*(_BYTE *)(_gptiCurrent + 264) & 2) != 0)
     || !v4
     || *(_DWORD *)(_gptiCurrent + 232) != *(_DWORD *)(v4 + 232)) )
  {
    UserSetLastError(5);
    return 0;
  }
  return !this || this == *(void **)(v2 + 216);
}
