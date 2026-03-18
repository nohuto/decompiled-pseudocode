/*
 * XREFs of BgpFwMarkHiberPhase @ 0x1409FA0F4
 * Callers:
 *     BgMarkHiberPhase @ 0x1409F964C (BgMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x140387900 (PoSetHiberRange.c)
 */

__int64 BgpFwMarkHiberPhase()
{
  __int64 i; // rbx

  for ( i = qword_140C13400; (__int64 *)i != &qword_140C13400; i = *(_QWORD *)i )
    PoSetHiberRange(0LL, 0x10000u, (PVOID)(i - 8), *(_QWORD *)(i + 24), 0x4B424742u);
  return 0LL;
}
