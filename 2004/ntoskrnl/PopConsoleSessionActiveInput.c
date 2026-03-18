/*
 * XREFs of PopConsoleSessionActiveInput @ 0x140760684
 * Callers:
 *     PopSessionInputChange @ 0x140711DE0 (PopSessionInputChange.c)
 *     PopSessionConnected @ 0x14077B5F0 (PopSessionConnected.c)
 *     PopLazySensorActiveInput @ 0x1408F1DC4 (PopLazySensorActiveInput.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x14071217C (PopUpdateTimeouts.c)
 *     PopRemoteSessionActiveInput @ 0x1407606F8 (PopRemoteSessionActiveInput.c)
 */

__int64 __fastcall PopConsoleSessionActiveInput(__int64 a1, __int64 a2, int *a3)
{
  int v4; // edi
  int v5; // esi
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v4 = a2;
  v5 = a1;
  PopRemoteSessionActiveInput(a1, a2, a3);
  v6 = *a3;
  LODWORD(v8) = a3[1];
  LODWORD(v9) = v6;
  BYTE4(qword_140C20360) = v6 != 0;
  DWORD2(xmmword_140C20350) = v4;
  PopUpdateTimeouts(v5, (unsigned int *)&v8, (unsigned int *)&v9);
  result = (unsigned int)v8;
  *a3 = v6;
  a3[1] = result;
  return result;
}
