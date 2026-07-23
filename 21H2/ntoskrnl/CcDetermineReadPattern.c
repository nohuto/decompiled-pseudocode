/*
 * XREFs of CcDetermineReadPattern @ 0x140303FB8
 * Callers:
 *     CcScheduleReadAheadEx @ 0x140303B50 (CcScheduleReadAheadEx.c)
 * Callees:
 *     CcAreOffsetsRoughlyEqual @ 0x140304030 (CcAreOffsetsRoughlyEqual.c)
 */

__int64 __fastcall CcDetermineReadPattern(__int64 a1, __int64 a2)
{
  int v3; // ecx
  __int64 v4; // r9
  _QWORD *v5; // r10

  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
  if ( (v3 & 0x20) != 0 )
    return 1LL;
  if ( (v3 & 0x100000) != 0 )
    return 0LL;
  if ( (unsigned __int8)CcAreOffsetsRoughlyEqual(a2, a1 + 40)
    && (unsigned __int8)CcAreOffsetsRoughlyEqual(v4 + 24, v4 + 32) )
  {
    return 2LL;
  }
  if ( *v5 - *(_QWORD *)(v4 + 32) != *(_QWORD *)(v4 + 32) - *(_QWORD *)(v4 + 16) )
    return 0LL;
  return 3LL;
}
