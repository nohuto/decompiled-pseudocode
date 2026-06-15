/*
 * XREFs of _gsl::span_CAudioSignalProcessingModeMap__1_::operator[]_::_1_::dtor$0 @ 0x18007BF56
 * Callers:
 *     <none>
 * Callees:
 *     ??1fail_fast@gsl@@UEAA@XZ @ 0x180118F64 (--1fail_fast@gsl@@UEAA@XZ.c)
 */

void __fastcall gsl::span_CAudioSignalProcessingModeMap__1_::operator[]_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    gsl::fail_fast::~fail_fast((gsl::fail_fast *)(a2 + 32));
  }
}
