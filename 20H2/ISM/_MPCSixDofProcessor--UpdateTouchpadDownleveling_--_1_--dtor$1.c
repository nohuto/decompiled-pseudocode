/*
 * XREFs of _MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor$1 @ 0x180190F23
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VSystemCursor@@@std@@QEAA@XZ @ 0x18007D0E0 (--1-$shared_ptr@VSystemCursor@@@std@@QEAA@XZ.c)
 */

void __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 600) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 600) &= ~1u;
    std::shared_ptr<SystemCursor>::~shared_ptr<SystemCursor>(a2 + 296);
  }
}
