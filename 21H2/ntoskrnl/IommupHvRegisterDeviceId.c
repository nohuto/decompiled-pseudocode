/*
 * XREFs of IommupHvRegisterDeviceId @ 0x1404DA528
 * Callers:
 *     HalpIommuCreateDevice @ 0x140864B24 (HalpIommuCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvRegisterDeviceId(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = _InterlockedIncrement(&HalpHvLogicalId);
  result = ((__int64 (__fastcall *)(__int64, __int64))qword_140C4A320)(a1, v3);
  if ( (int)result >= 0 )
    *a2 = v3;
  return result;
}
