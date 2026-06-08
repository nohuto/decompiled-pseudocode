/*
 * XREFs of C2Idle @ 0x1C000C0D0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0002D04 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0003064 (WriteGenAddr.c)
 */

unsigned __int64 __fastcall C2Idle(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  int GenAddr; // eax
  int v5; // eax
  unsigned __int64 result; // rax
  unsigned int v7; // r11d

  v2 = a2;
  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr((__int64)&dword_1C0013C2C);
    WriteGenAddr(&dword_1C0013C2C, GenAddr & 0xFFFFFFFD);
    if ( qword_1C0013C3C )
    {
      v5 = ReadGenAddr((__int64)&dword_1C0013C38);
      WriteGenAddr(&dword_1C0013C38, v5 & 0xFFFFFFFD);
    }
  }
  if ( (_DWORD)v2 )
    __writemsr(0x48u, 0LL);
  result = ReadGenAddr(a1);
  if ( (_DWORD)v2 )
  {
    result = v2;
    __writemsr(v7, v2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
