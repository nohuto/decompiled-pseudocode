/*
 * XREFs of RtlRunDecodeUnicodeString @ 0x1800E7170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall RtlRunDecodeUnicodeString(char a1, unsigned __int16 *a2)
{
  _BYTE *result; // rax
  __int64 v3; // r9

  result = (_BYTE *)*a2;
  if ( (unsigned int)result > 1 )
  {
    do
    {
      v3 = (unsigned int)((_DWORD)result - 1);
      *(_BYTE *)(v3 + *((_QWORD *)a2 + 1)) ^= a1 ^ *(_BYTE *)((unsigned int)((_DWORD)result - 2) + *((_QWORD *)a2 + 1));
      LODWORD(result) = (_DWORD)result - 1;
    }
    while ( (unsigned int)v3 > 1 );
    result = (_BYTE *)*a2;
  }
  if ( (_WORD)result )
  {
    result = (_BYTE *)*((_QWORD *)a2 + 1);
    *result ^= a1 | 0x43;
  }
  return result;
}
