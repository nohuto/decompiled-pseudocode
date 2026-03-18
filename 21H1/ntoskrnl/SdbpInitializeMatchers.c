/*
 * XREFs of SdbpInitializeMatchers @ 0x14073EC78
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x14073EBF0 (SdbInitDatabaseInMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpInitializeMatchers(__int64 a1)
{
  char *v1; // r8
  char *v2; // r9
  char *v3; // r10
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  v1 = (char *)&qword_140007970 - a1;
  v2 = (char *)&off_140007978 - a1;
  v3 = (char *)&qword_140007980 - a1;
  v4 = (_QWORD *)(a1 + 592);
  v5 = 11LL;
  do
  {
    *((_DWORD *)v4 - 2) = *(_DWORD *)((char *)v4 + (_QWORD)v1 - 592);
    *v4 = *(_QWORD *)((char *)v4 + (_QWORD)v2 - 592);
    result = *(_QWORD *)((char *)v4 + (_QWORD)v3 - 592);
    v4[1] = result;
    v4 += 3;
    --v5;
  }
  while ( v5 );
  return result;
}
