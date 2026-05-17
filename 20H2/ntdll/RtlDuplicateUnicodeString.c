/*
 * XREFs of RtlDuplicateUnicodeString @ 0x180078E40
 * Callers:
 *     RtlpTpIoDllProcessUnloads @ 0x1801136E8 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x18006DBB0 (NtdllpAllocateStringRoutine.c)
 *     RtlValidateUnicodeString @ 0x180078F80 (RtlValidateUnicodeString.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

__int64 __fastcall RtlDuplicateUnicodeString(int a1, __int16 *a2, __int64 a3)
{
  char v5; // r15
  unsigned __int16 v6; // di
  _WORD *v7; // rsi
  __int64 result; // rax
  unsigned __int16 v9; // bx
  _WORD *StringRoutine; // rax

  v5 = a1;
  v6 = 0;
  v7 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a3 || (a1 & 3) == 2 )
    return 3221225485LL;
  result = RtlValidateUnicodeString(0LL);
  if ( (int)result < 0 )
    return result;
  if ( a2 )
    v6 = *a2;
  if ( (v5 & 1) != 0 && v6 == 0xFFFE )
    return 3221225734LL;
  if ( (v5 & 1) != 0 )
    v9 = v6 + 2;
  else
    v9 = v6;
  if ( (v5 & 2) == 0 && !v6 )
    v9 = 0;
  if ( !v9 )
    goto LABEL_20;
  StringRoutine = (_WORD *)NtdllpAllocateStringRoutine(v9);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    if ( v6 )
      memmove(StringRoutine, *((const void **)a2 + 1), v6);
    if ( (v5 & 1) != 0 )
      v7[(unsigned __int64)v6 >> 1] = 0;
LABEL_20:
    *(_WORD *)(a3 + 2) = v9;
    *(_WORD *)a3 = v6;
    *(_QWORD *)(a3 + 8) = v7;
    return 0LL;
  }
  return 3221225495LL;
}
