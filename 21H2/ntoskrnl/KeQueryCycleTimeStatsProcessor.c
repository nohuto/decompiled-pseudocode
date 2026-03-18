/*
 * XREFs of KeQueryCycleTimeStatsProcessor @ 0x140242E98
 * Callers:
 *     PopEtIsrDpcQuery @ 0x1406BE584 (PopEtIsrDpcQuery.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryCycleTimeStatsProcessor(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 result; // rax

  v2 = a1 - (_QWORD)a2;
  v3 = 4LL;
  do
  {
    v4 = 2LL;
    do
    {
      result = *(_QWORD *)((char *)a2 + v2 + 33408);
      *a2++ = result;
      --v4;
    }
    while ( v4 );
    --v3;
  }
  while ( v3 );
  return result;
}
