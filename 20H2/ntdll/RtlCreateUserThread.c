/*
 * XREFs of RtlCreateUserThread @ 0x180056090
 * Callers:
 *     EtwpCreateEtwThread @ 0x180056020 (EtwpCreateEtwThread.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180056100 (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall RtlCreateUserThread(int a1, int a2, char a3, int a4, __int64 a5, __int64 a6)
{
  return RtlpCreateUserThreadEx(a1, a2, a3 == 1, a4, a5, a6);
}
