/*
 * XREFs of RtlpStdGetRecordedStackTraceIndex @ 0x180101830
 * Callers:
 *     RtlLogStackBackTraceEx @ 0x180011AA0 (RtlLogStackBackTraceEx.c)
 * Callees:
 *     RtlpStdExtendUpperWatermark @ 0x180101754 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdLockAcquire @ 0x1801019A8 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x1801019C8 (RtlpStdLockRelease.c)
 */

__int64 __fastcall RtlpStdGetRecordedStackTraceIndex(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  _DWORD *v6; // rdx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rbx

  v4 = 0;
  if ( a2[7] )
  {
    v5 = a2[7];
    v6 = a2 + 8;
    do
    {
      v4 += *v6;
      v6 += 2;
      --v5;
    }
    while ( v5 );
  }
  v7 = a1 + 16 * (v4 % *(_DWORD *)(a1 + 720) + 46LL);
  RtlpStdLockAcquire(v7);
  if ( a2[6] || a2[5] )
  {
    LODWORD(v9) = a2[6] + (a2[5] << 16);
  }
  else
  {
    v8 = (_QWORD *)RtlpStdExtendUpperWatermark(a1);
    if ( v8 )
    {
      *v8 = a2;
      v9 = (__int64)(*(_QWORD *)(a1 + 184) - (_QWORD)v8) >> 3;
      a2[6] = v9;
      a2[5] = WORD1(v9);
    }
    else
    {
      LODWORD(v9) = 0;
    }
  }
  RtlpStdLockRelease(v7);
  return (unsigned int)v9;
}
