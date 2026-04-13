/*
 * XREFs of ??1exception@@UEAA@XZ_0 @ 0x1800CD74C
 * Callers:
 *     ??1bad_alloc@std@@UEAA@XZ @ 0x1800B00B8 (--1bad_alloc@std@@UEAA@XZ.c)
 *     ??1bad_function_call@std@@UEAA@XZ @ 0x1800B00D0 (--1bad_function_call@std@@UEAA@XZ.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x1800B00E0 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 *     ??_Glength_error@std@@UEAAPEAXI@Z @ 0x1800B0120 (--_Glength_error@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall exception::~exception(exception *this)
{
  __imp_??1exception@@UEAA@XZ(this);
}
