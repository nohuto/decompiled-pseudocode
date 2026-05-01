/*
 * XREFs of _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$1 @ 0x1800B681B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAA@XZ @ 0x1800B605C (--1-$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 36) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 36) &= ~1u;
    return std::optional<KioskPositioner::KioskPositionerConfiguration>::~optional<KioskPositioner::KioskPositionerConfiguration>(*(_QWORD *)(a2 + 128));
  }
  return result;
}
