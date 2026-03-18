/*
 * XREFs of RtlpWow64SanitizeContextFlags @ 0x140695B90
 * Callers:
 *     PspWow64GetContextThread @ 0x140691C20 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1406C79EC (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1402E6DF0 (RtlpValidateContextFlags.c)
 *     RtlpArchContextFlagFromMachine @ 0x1406957F0 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall RtlpWow64SanitizeContextFlags(int *a1, char a2)
{
  int v4; // edi
  __int64 result; // rax

  v4 = RtlpArchContextFlagFromMachine(0x14Cu);
  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result >= 0 && (v4 & *a1) == 0 )
    result = 3221225485LL;
  if ( (_DWORD)result == -1073741811 )
  {
    if ( a2 )
    {
      *a1 = (v4 | *a1) & 0xD801007F;
      return 0LL;
    }
  }
  return result;
}
