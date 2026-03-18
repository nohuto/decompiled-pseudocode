/*
 * XREFs of _InitLogQMsgEntry@8 @ 0x141E33
 * Callers:
 *     _LogQMsg@4 @ 0x141ED4 (_LogQMsg@4.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

ULONG __fastcall InitLogQMsgEntry(const void *a1, _DWORD *a2)
{
  ULONG result; // eax
  signed int v5; // ecx

  a2[30] = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  a2[31] = PsGetCurrentThreadId();
  qmemcpy(a2, a1, 0x78u);
  memset(a2 + 33, 0, 4 * Count);
  a2[32] = 0;
  if ( !dword_273AC8 || dword_273AC8 == 2 )
    a2[32] = RtlWalkFrameChain((PVOID *)a2 + 33, Count, 0);
  result = dword_273AC8;
  if ( dword_273AC8 == 1 || dword_273AC8 == 2 )
  {
    v5 = a2[32];
    result = Count;
    if ( v5 < (int)Count )
    {
      result = RtlWalkFrameChain((PVOID *)&a2[v5 + 33], Count - v5, 1u);
      a2[32] += result;
    }
  }
  return result;
}
