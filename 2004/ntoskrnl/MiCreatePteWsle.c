/*
 * XREFs of MiCreatePteWsle @ 0x140A5E100
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteWsle @ 0x1402E0090 (MiWriteWsle.c)
 */

__int64 __fastcall MiCreatePteWsle(__int64 a1, _BYTE *a2, int a3)
{
  if ( a3 < 1 && (*a2 & 1) != 0 )
    MiWriteWsle(a1, (__int64)((_QWORD)a2 << 25) >> 16, 9u);
  return 0LL;
}
