/*
 * XREFs of KeAbInitializeThreadState @ 0x140266DA0
 * Callers:
 *     KeInitThread @ 0x140990D94 (KeInitThread.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall KeAbInitializeThreadState(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rdx
  __int16 result; // ax

  v1 = 0LL;
  *(_QWORD *)(a1 + 800) = a1 + 1616;
  v2 = 6LL;
  do
  {
    v3 = v1 + *(_QWORD *)(a1 + 800);
    v1 += 96LL;
    result = (unsigned __int16)(v3 - a1) >> 4;
    *(_BYTE *)(v3 + 24) = result;
    --v2;
  }
  while ( v2 );
  *(_DWORD *)(a1 + 116) |= 1u;
  *(_QWORD *)(a1 + 808) = 1LL;
  *(_QWORD *)(a1 + 816) = 1LL;
  *(_BYTE *)(a1 + 792) = 63;
  return result;
}
