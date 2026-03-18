/*
 * XREFs of NtUserGetClipboardFormatName @ 0x1C0115D40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClipboardFormatName(unsigned __int16 a1, volatile void *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebx

  ProbeForWrite(a2, 2LL * a3, 2u);
  if ( a1 < 0xC000u )
  {
    v8 = 0;
    UserSetLastError(87LL, v6, v7);
  }
  else
  {
    return (unsigned int)UserGetAtomName(a1, a2, a3);
  }
  return v8;
}
