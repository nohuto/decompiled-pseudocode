/*
 * XREFs of PopIdleWakeConvertIntervalBucketsFrom @ 0x1407B453C
 * Callers:
 *     PopIdleWakeInitialize @ 0x1407B4448 (PopIdleWakeInitialize.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1403C5EB4 (PpmConvertTimeFrom.c)
 */

void __fastcall PopIdleWakeConvertIntervalBucketsFrom(unsigned int a1, __int64 a2, ULONGLONG *a3, __int64 a4)
{
  ULONGLONG *v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rdi

  if ( a1 )
  {
    v4 = a3;
    v5 = a1;
    v7 = a2 - (_QWORD)a3;
    do
    {
      *v4 = PpmConvertTimeFrom(*(ULONGLONG *)((char *)v4 + v7), a4);
      ++v4;
      --v5;
    }
    while ( v5 );
  }
}
