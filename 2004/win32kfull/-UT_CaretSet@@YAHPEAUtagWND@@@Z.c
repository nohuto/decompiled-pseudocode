/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0090E5C
 * Callers:
 *     zzzDestroyCaret @ 0x1C005DB20 (zzzDestroyCaret.c)
 *     NtUserShowCaret @ 0x1C0090D60 (NtUserShowCaret.c)
 *     NtUserHideCaret @ 0x1C0090DE0 (NtUserHideCaret.c)
 *     zzzSetCaretPos @ 0x1C0112850 (zzzSetCaretPos.c)
 *     zzzHideCaret @ 0x1C02426FC (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C0242724 (zzzShowCaret.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

_BOOL8 __fastcall UT_CaretSet(struct tagWND *a1)
{
  __int64 v2; // rbx
  unsigned int ThreadId; // eax
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( !*(_QWORD *)(v2 + 296)
    || (ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
        v5 = *(unsigned int *)(v2 + 352),
        (_DWORD)v5 != ThreadId)
    && ((v6 = PtiFromThreadId(v5)) == 0 || *(_QWORD *)(gptiCurrent + 416LL) != *(_QWORD *)(v6 + 416)) )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  return !a1 || a1 == *(struct tagWND **)(v2 + 296);
}
