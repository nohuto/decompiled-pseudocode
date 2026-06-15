/*
 * XREFs of sub_180104B44 @ 0x180104B44
 * Callers:
 *     DllMain @ 0x18006D2E0 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 sub_180104B44()
{
  __int64 result; // rax

  if ( dword_18014500C )
  {
    result = EtwUnregisterTraceGuids(qword_180145020);
    qword_180145020 = 0LL;
    qword_180145010 = 0LL;
  }
  return result;
}
