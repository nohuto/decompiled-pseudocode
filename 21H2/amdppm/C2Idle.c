/*
 * XREFs of C2Idle @ 0x1C0003E80
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0002DA4 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0003104 (WriteGenAddr.c)
 *     IssueVerw @ 0x1C000EC30 (IssueVerw.c)
 */

unsigned __int64 __fastcall C2Idle(__int64 a1, int a2)
{
  int GenAddr; // eax
  int v5; // eax
  unsigned __int64 result; // rax

  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr((__int64)&dword_1C0014C3C);
    WriteGenAddr(&dword_1C0014C3C, GenAddr & 0xFFFFFFFD);
    if ( qword_1C0014C4C )
    {
      v5 = ReadGenAddr((__int64)&dword_1C0014C48);
      WriteGenAddr(&dword_1C0014C48, v5 & 0xFFFFFFFD);
    }
  }
  if ( (_WORD)a2 )
    __writemsr(0x48u, 0LL);
  if ( HIWORD(a2) )
    IssueVerw(HIWORD(a2));
  result = ReadGenAddr(a1);
  if ( (_WORD)a2 )
  {
    result = (unsigned __int16)a2;
    __writemsr(0x48u, (unsigned __int16)a2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
