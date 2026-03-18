/*
 * XREFs of EditionFreeIMEKeyboardLayouts @ 0x1C011FF70
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C011FFD8 (xxxImmUnloadThreadsLayout.c)
 */

unsigned int __fastcall EditionFreeIMEKeyboardLayouts(__int64 a1)
{
  unsigned int result; // eax
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]
  struct tagTHREADINFO **v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  result = *(_DWORD *)(a1 + 64);
  if ( (result & 4) == 0 )
  {
    result = GetThreadsWithPKL(&v4, (struct _TL *)&v2, 0LL);
    if ( result )
    {
      xxxImmUnloadThreadsLayout(v4, result, 0LL, 2LL, v2, *((_QWORD *)&v2 + 1), v3);
      return PopAndFreeAlwaysW32ThreadLock((__int64)&v2);
    }
  }
  return result;
}
