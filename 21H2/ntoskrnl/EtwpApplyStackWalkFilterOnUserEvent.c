/*
 * XREFs of EtwpApplyStackWalkFilterOnUserEvent @ 0x140940C2C
 * Callers:
 *     EtwpWriteUserEvent @ 0x140690950 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpApplyStackWalkIdFilter @ 0x1405AC2D4 (EtwpApplyStackWalkIdFilter.c)
 */

bool __fastcall EtwpApplyStackWalkFilterOnUserEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  return EtwpApplyStackWalkIdFilter(*(_WORD *)(a1 + 40), a2, a3, 1);
}
