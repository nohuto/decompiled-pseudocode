/*
 * XREFs of PspSetJobTimeLimitCallback @ 0x1409064B0
 * Callers:
 *     <none>
 * Callees:
 *     PsQueryRuntimeProcess @ 0x140661D50 (PsQueryRuntimeProcess.c)
 */

__int64 __fastcall PspSetJobTimeLimitCallback(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( (*(_DWORD *)(a1 + 1120) & 2) == 0 )
  {
    PsQueryRuntimeProcess(a1, &v4);
    *a2 += v4 * (unsigned __int64)KeMaximumIncrement;
  }
  return 0LL;
}
